TOPLEVEL_LANG ?= verilog

PWD=$(shell pwd)

export PYTHONPATH := $(PWD)/../model:$(PYTHONPATH)

ifeq ($(TOPLEVEL_LANG),verilog)
    VERILOG_SOURCES = $(PWD)/hdl/rca.v       #IMPORTANT
else ifeq ($(TOPLEVEL_LANG),vhdl)
    VHDL_SOURCES = $(PWD)/../hdl/rca.vhdl
    ifneq ($(filter $(SIM),ius xcelium),)
        COMPILE_ARGS += -v93
    endif
else
    $(error A valid value (verilog or vhdl) was not provided for TOPLEVEL_LANG=$(TOPLEVEL_LANG))
endif

COCOTB_TOPLEVEL     := adder                #IMPORTANT
COCOTB_TEST_MODULES := test_adder        #IMPORTANT

include $(shell cocotb-config --makefiles)/Makefile.sim
