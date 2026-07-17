import random

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ReadOnly

MASK128 = (1 << 128) - 1


def adder_model(A, B, Cin):
    """Golden reference for the 128-bit pipelined adder.
    Returns the 129-bit result {Cout, SUM[127:0]} as one integer,
    so it can be compared directly against the DUT output."""
    total = A + B + Cin
    return total & ((1 << 129) - 1)


class InputTransaction(object):
    """Transactions to be sent by InputDriver"""

    def __init__(self, tb, A=0, B=0, Cin=0, in_valid=0):
        self.A = A & ((1 << tb.A_bits) - 1)
        self.B = B & ((1 << tb.B_bits) - 1)
        self.Cin = Cin & ((1 << tb.Cin_bits) - 1)
        self.in_valid = in_valid & ((1 << tb.in_valid_bits) - 1)


class InputDriver(object):
    """Drives inputs to DUT (native cocotb 2.0 replacement for BusDriver)."""

    _signals = ["A", "B", "Cin", "in_valid"]

    def __init__(self, dut):
        self.dut = dut
        self.clock = dut.clk
        self.log = dut._log

    async def send(self, transaction):
        """Blocking send: waits one rising edge, then drives the bus."""
        await RisingEdge(self.clock)
        for name in self._signals:
            getattr(self.dut, name).value = getattr(transaction, name)


class InputMonitor(object):
    """Passive monitor of DUT inputs (native replacement for BusMonitor)."""

    _signals = ["A", "B", "Cin", "in_valid"]

    def __init__(self, dut, callback=None):
        self.dut = dut
        self.clock = dut.clk
        self.callback = callback
        self.name = "in"
        self.stats_received = 0
        cocotb.start_soon(self._monitor_recv())

    async def _monitor_recv(self):
        clkedge = RisingEdge(self.clock)

        while True:
            await clkedge
            await ReadOnly()
            v = self.dut.in_valid.value
            if v.is_resolvable and int(v) == 1:
                vec = (int(self.dut.A.value),
                       int(self.dut.B.value),
                       int(self.dut.Cin.value),
                       int(self.dut.in_valid.value))
                self.stats_received += 1
                if self.callback is not None:
                    self.callback(vec)


class OutputTransaction(object):
    """Transaction to be expected / received by OutputMonitor."""

    def __init__(self, tb=None, result=0):
        """result is the 129-bit value {Cout, SUM[127:0]}.
        tb must be an instance of the Testbench class."""
        self.value = result


class OutputMonitor(object):
    """Observes outputs of DUT (native replacement for BusMonitor)."""

    _signals = ["SUM", "Cout", "out_valid"]

    def __init__(self, dut, tb, callback=None):
        self.dut = dut
        self.clock = dut.clk
        self.tb = tb
        self.callback = callback
        self.name = "out"
        self.stats_received = 0
        cocotb.start_soon(self._monitor_recv())

    async def _monitor_recv(self):
        clkedge = RisingEdge(self.clock)
        while True:
            await clkedge
            await ReadOnly()
            v = self.dut.out_valid.value
            if v.is_resolvable and int(v) == 1:

                received_result = ((int(self.dut.Cout.value) << 128)
                                   | int(self.dut.SUM.value))
                self.stats_received += 1
                if self.callback is not None:
                    self.callback(OutputTransaction(self.tb, received_result))


class Testbench(object):
    class MyScoreboard(object):
        """In-order scoreboard (native replacement for cocotb Scoreboard)."""

        def __init__(self, dut, expected_output):
            self.dut = dut
            self.log = dut._log
            self.expected_output = expected_output
            self.errors = 0
            self.compared = 0

        def receive(self, got):
            if len(self.expected_output) == 0:
                self.errors += 1
                self.log.error("Received unexpected transaction: %s"
                               % hex(got.value))
                return
            exp = self.expected_output.pop(0)
            self.compare(got, exp, self.log)

        def compare(self, got, exp, log, **_):
            got_output = got.value
            exp_output = exp.value
            self.compared += 1
            if got_output == exp_output:
                log.warning('test passed  got: {0!s}'.format(hex(got_output)))

            else:
                self.errors += 1
                log.warning("ERROR value: {0!s}. exp value: {1!s}.".format(
                            hex(got_output), hex(exp_output)))
                print(" value: {0!s}. exp value: {1!s}.".format(
                      hex(got_output), hex(exp_output)))

        @property
        def result(self):
            """True when all comparisons matched and nothing is left over."""
            return self.errors == 0

    def __init__(self, dut):
        self.dut = dut
        self.stopped = False
        self.A_bits = 128
        self.B_bits = 128
        self.Cin_bits = 1
        self.in_valid_bits = 1
        self.SUM_bits = 128
        self.Cout_bits = 1

        self.input_mon = InputMonitor(dut, callback=self.model)

        self.input_drv = InputDriver(dut)

        # scoreboard on the outputs
        self.expected_output = []
        self.scoreboard = Testbench.MyScoreboard(dut, self.expected_output)
        self.output_mon = OutputMonitor(dut, self,
                                        callback=self.scoreboard.receive)

    def model(self, transaction):
        """Model: 128-bit addition, 4-cycle pipeline latency is absorbed
        by the in-order expected_output queue."""
        A, B, Cin, in_valid = transaction

        result = adder_model(A, B, Cin)

        self.expected_output.append(OutputTransaction(self, result))

    def stop(self):
        """
        Stop generation of expected output transactions.
        One more clock cycle must be executed afterwards, so that, output of
        D-FF can be checked.
        """
        self.stopped = True


@cocotb.test()
async def run_test(dut):
    cocotb.start_soon(Clock(dut.clk, 10, "ns").start())
    clkedge = RisingEdge(dut.clk)

    # initial values so monitors never sample X
    dut.in_valid.value = 0
    dut.Cin.value = 0
    dut.A.value = 0
    dut.B.value = 0

    # synchronous, active-high reset
    dut.rst.value = 1
    for i in range(2):
        await clkedge
    dut.rst.value = 0

    tb = Testbench(dut)

    NUM_TESTS = 10

    # back-to-back: one new 128-bit addition every clock cycle
    for i in range(NUM_TESTS):
        A = random.getrandbits(128)
        B = random.getrandbits(128)
        Cin = 0
        in_valid = 1
        await tb.input_drv.send(InputTransaction(tb, A, B, Cin, in_valid))

    # stop feeding: drive one idle transaction so in_valid drops
    await tb.input_drv.send(InputTransaction(tb, 0, 0, 0, 0))

    # drain the 4-stage pipeline (plus margin)
    for j in range(10):
        await clkedge
    tb.stop()

    assert tb.input_mon.stats_received == NUM_TESTS, (
        "input monitor saw %d transactions, expected %d"
        % (tb.input_mon.stats_received, NUM_TESTS))

    assert len(tb.expected_output) == 0, (
        "%d expected results never left the pipeline"
        % len(tb.expected_output))

    assert tb.output_mon.stats_received == NUM_TESTS, (
        "output monitor saw %d results, expected %d"
        % (tb.output_mon.stats_received, NUM_TESTS))

    assert tb.scoreboard.result, (
        "%d scoreboard mismatches" % tb.scoreboard.errors)

    dut._log.info("=========================================")
    dut._log.info("Scoreboard: %d compared, %d errors -- all PASSED"
                  % (tb.scoreboard.compared, tb.scoreboard.errors))
    dut._log.info("=========================================")
