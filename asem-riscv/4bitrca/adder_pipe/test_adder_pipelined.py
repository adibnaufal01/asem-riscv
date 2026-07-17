import random

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge


MASK128 = (1 << 128) - 1


@cocotb.test()
async def test_pipeline(dut):

    # -------------------------------------------------------
    # Generate Clock
    # -------------------------------------------------------
    cocotb.start_soon(Clock(dut.clk, 10, "ns").start())

    # -------------------------------------------------------
    # Reset  (synchronous, active high)
    # -------------------------------------------------------
    dut.rst.value = 1
    dut.in_valid.value = 0          # design has an input-valid strobe
    dut.Cin.value = 0               # overall carry-in, tied to 0 per spec
    dut.A.value = 0
    dut.B.value = 0

    for _ in range(5):
        await RisingEdge(dut.clk)

    dut.rst.value = 0

    # Queue stores expected outputs because latency = 4 cycles
    expected = []

    NUM_TESTS = 2

    for cycle in range(NUM_TESTS + 4):

        if cycle < NUM_TESTS:

            A = random.getrandbits(128)
            B = random.getrandbits(128)

            dut.A.value = A
            dut.B.value = B
            dut.in_valid.value = 1

            total = A + B

            expected.append((
                total & MASK128,
                (total >> 128) & 1
            ))

            dut._log.info(
                f"[cycle {cycle:3d}] IN  test #{cycle:3d} : "
                f"A={A:032X} B={B:032X}"
            )

        else:
            # drain phase: stop feeding new operations
            dut.A.value = 0
            dut.B.value = 0
            dut.in_valid.value = 0
            dut._log.info(f"[cycle {cycle:3d}] IN  (drain, no new input)")

        await RisingEdge(dut.clk)

        # Sample on the falling edge: registered outputs are stable and
        # this avoids any rising-edge read race in the simulator.
        await FallingEdge(dut.clk)

        # Output becomes valid after 4 pipeline stages:
        # input driven in iteration N is registered by the 1st edge of
        # iteration N, and reaches the output register on the 4th edge,
        # i.e. the edge awaited in iteration N + 3.  Valid results
        # therefore span cycles 3 .. NUM_TESTS + 2 exactly.
        if 3 <= cycle < NUM_TESTS + 3:

            assert int(dut.out_valid.value) == 1, \
                f"out_valid not asserted at cycle {cycle}"

            exp_sum, exp_carry = expected.pop(0)

            got_sum = int(dut.SUM.value)
            got_carry = int(dut.Cout.value)   # port is 'Cout' (final Cout3)

            assert got_sum == exp_sum, (
                f"SUM mismatch\n"
                f"Expected = {exp_sum:032X}\n"
                f"Got      = {got_sum:032X}"
            )

            assert got_carry == exp_carry, (
                f"CARRY mismatch "
                f"Expected {exp_carry}, Got {got_carry}"
            )

            dut._log.info(
                f"[cycle {cycle:3d}] OUT test #{cycle - 3:3d} : "
                f"SUM={got_sum:032X} Cout={got_carry}  OK"
            )
        else:
            # pipeline filling (cycle < 3) or drained (cycle >= NUM_TESTS+3)
            assert int(dut.out_valid.value) == 0, \
                f"out_valid asserted unexpectedly at cycle {cycle}"
            phase = "filling" if cycle < 3 else "drained"
            dut._log.info(
                f"[cycle {cycle:3d}] OUT (pipeline {phase}, out_valid=0)"
            )

    # pipeline fully drained: out_valid must drop again
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    assert int(dut.out_valid.value) == 0, "out_valid stuck high after drain"

    dut._log.info("=========================================")
    dut._log.info(f"All {NUM_TESTS} random tests PASSED")
    dut._log.info("=========================================")
