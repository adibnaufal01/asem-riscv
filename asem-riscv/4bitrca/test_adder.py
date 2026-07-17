import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def test_adder(dut):
    """Test that a & b behaves as an ADDER """

    dut._log.info("Starting ADDER gate simple test...")

    # 1. Drive inputs to 0
    dut.a.value = 0
    dut.b.value = 0
    # Wait for 1 nanosecond for the simulator to propagate values
    await Timer(1, unit="ns")
    dut._log.info(f"Inputs driven: a={dut.a.value}, b={dut.b.value} -> Output: sum={dut.sum.value}")
    # Assert output sum is 0
    assert dut.sum.value == 0, f"Expected 0 & 0 = 0, got {dut.sum.value}"

    # 2. Drive inputs: a=10, b=10
    dut.a.value = 10
    dut.b.value = 10
    await Timer(1, unit="ns")
    dut._log.info(f"Inputs driven: a={dut.a.value}, b={dut.b.value} -> Output: sum={dut.sum.value}")
    assert dut.sum.value == 20, f"Expected 1 & 0 = 0, got {dut.sum.value}"

    # 3. Drive inputs: a=20, b=21
    dut.a.value = 20
    dut.b.value = 21
    await Timer(1, unit="ns")
    dut._log.info(f"Inputs driven: a={dut.a.value}, b={dut.b.value} -> Output: sum={dut.sum.value}")
    assert dut.sum.value == 41, f"Expected 0 & 1 = 0, got {dut.sum.value}"

    # 4. Drive inputs: a=1, b=1
    dut.a.value = 31
    dut.b.value = 31
    await Timer(1, unit="ns")
    dut._log.info(f"Inputs driven: a={dut.a.value}, b={dut.b.value} -> Output: sum={dut.sum.value}")
    assert dut.sum.value == 62, f"Expected 1 & 1 = 1, got {dut.sum.value}"

    dut._log.info("ADDER test completed successfully!")
