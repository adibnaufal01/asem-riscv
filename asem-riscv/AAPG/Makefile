# Makefile for compiling and verifying RISC-V tests on Spike and DUT
XLEN ?= 64
TARGET ?= unknown-elf
RISCVPREFIX=riscv${XLEN}-${TARGET}
ASM_SRC_DIR := ./work/asm
COMMON_DIR := ./work/common
BIN_DIR := ./work/bin
OBJ_DIR := ./work/objdump
LOG_DIR := ./work/log
ISA ?= rv64imafdczicsr_zifencei
ABI ?= lp64
SPIKE_ISA ?= rv64imafdczicsr_zifencei
INCLUDE_DIRS := ./work/common
CRT_FILE := ./work/common/crt.S
TEMPLATE_FILE := common/templates.S
GCC_OPTS := -march=$(ISA) -mabi=$(ABI) -DPREALLOCATE=1 -mcmodel=medany -static -std=gnu99 -O2 -fno-common -fno-builtin-printf
LINKER_OPTIONS := -static -nostdlib -nostartfiles -lm -lgcc -T

BASE_SRC_FILES := $(wildcard $(ASM_SRC_DIR)/*.S)
SRC_FILES := $(filter-out $(wildcard $(ASM_SRC_DIR)/*template.S),$(BASE_SRC_FILES))
BIN_FILES := $(patsubst $(ASM_SRC_DIR)/%.S, $(BIN_DIR)/%.riscv, $(SRC_FILES))
OBJ_FILES := $(patsubst $(ASM_SRC_DIR)/%.S, $(OBJ_DIR)/%.objdump, $(SRC_FILES))
LOG_FILES := $(patsubst $(ASM_SRC_DIR)/%.S, $(LOG_DIR)/%.log, $(SRC_FILES))
DUMP_FILES := $(patsubst $(ASM_SRC_DIR)/%.S, $(LOG_DIR)/%.dump, $(SRC_FILES))

# -----------------------------------------------------------------------------
# Variables
# -----------------------------------------------------------------------------
MODE ?= p
FILENAME  := $(basename $(notdir $(TEST)))
TEST_HOME := $(CURDIR)
OUT_DIR   := $(TEST_HOME)/work/bin

# -----------------------------------------------------------------------------
# Tools
# -----------------------------------------------------------------------------
GCC       := riscv64-unknown-elf-gcc
OBJDUMP   := riscv64-unknown-elf-objdump
SPIKE     := spike
TIMEOUT   := timeout --foreground 3s
RTL_SKIP_LINES := 4

all: build objdump run dump
	$(info ==================== Complete Build Finished =============)

build: $(BIN_FILES)
	$(info ==================== Build completed ====================)
	$(info )

$(BIN_DIR)/%.riscv: $(ASM_SRC_DIR)/%.S
	$(info ==================== Compiling asm to binary ============)
	${RISCVPREFIX}-gcc $(GCC_OPTS) -I $(INCLUDE_DIRS) -o $@ $< $(CRT_FILE) $(LINKER_OPTIONS) $(<D)/$*.ld


objdump: $(OBJ_FILES)
	$(info ==================== Objdump Completed ==================)
	$(info )

$(OBJ_DIR)/%.objdump: $(BIN_DIR)/%.riscv
	$(info ==================== Disassembling binary ===============)
	${RISCVPREFIX}-objdump -D $< > $@

run: $(LOG_FILES)
	$(info ==================== Spike Run Completed ================)
	$(info )

$(LOG_DIR)/%.log: $(BIN_DIR)/%.riscv
	$(info ==================== Simulating binary on Spike =========)
	spike -l --isa=$(SPIKE_ISA) $< 2> $@

dump: $(DUMP_FILES)
	$(info ==================== Spike dump Completed ===============)
	$(info )

$(LOG_DIR)/%.dump: $(BIN_DIR)/%.riscv
	$(info ==================== Generating spike dump ==============)
	spike --log-commits --log  $@ --isa=$(SPIKE_ISA) +signature=$@.sign $<



.PHONY: clean
clean:
	rm -rf ./work/bin/* ./work/log/* ./work/objdump/*



.PHONY:run_dut compare run_verif clean



.PHONY: run_dut

run_dut: $(BIN_FILES)
	@if [ -z "$(DESIGN_HOME)" ]; then \
		echo "ERROR: DESIGN_HOME is not set."; \
		exit 1; \
	fi

	@echo "-------------------------------------------------------------------------"
	@echo "Running Tests on C-CLASS"
	@echo "-------------------------------------------------------------------------"

	@for elf in $(BIN_FILES); do \
		name=$$(basename $$elf .riscv); \
		echo "Running $$name"; \
		cp -r "$(DESIGN_HOME)"/. $(BIN_DIR)/; \
		elf2hex 8 4194304 $$elf 2147483648 > $(BIN_DIR)/code.mem; \
		cd $(BIN_DIR) && timeout --foreground 30s ./out +rtldump; \
		if [ ! -f "$(BIN_DIR)/rtl.dump" ]; then \
			echo "ERROR: RTL dump not generated for $$name"; \
			exit 1; \
		fi; \
		mv $(BIN_DIR)/rtl.dump $(LOG_DIR)/$$name.rtl.dump; \
	done

	@echo "-------------------------------------------------------------------------"
	@echo "RTL RUN COMPLETED"
	@echo "-------------------------------------------------------------------------"


# ----------------------------------------------------------------------------
# Compare Spike and RTL dumps
# ----------------------------------------------------------------------------

.PHONY: compare

compare:
	@echo "-------------------------------------------------------------------------"
	@echo "Comparing Spike and RTL Dumps"
	@echo "-------------------------------------------------------------------------"

	@status=0; \
	for spike in $(LOG_DIR)/*.dump; do \
		name=$$(basename $$spike .dump); \
		rtl="$(LOG_DIR)/$$name.rtl.dump"; \
		diffout="$(LOG_DIR)/$$name.diff"; \
		if [ ! -f "$$rtl" ]; then \
			echo "$$name : RTL dump missing"; \
			status=1; \
			continue; \
		fi; \
		head -n -$(RTL_SKIP_LINES) "$$rtl" > "$$rtl.tmp"; \
		mv "$$rtl.tmp" "$$rtl"; \
		diff -iwu "$$spike" "$$rtl" > "$$diffout" || true; \
		if [ -s "$$diffout" ]; then \
			echo "$$name : FAIL"; \
			status=1; \
		else \
			echo "$$name : PASS"; \
			rm -f "$$diffout"; \
		fi; \
	done; \
	exit $$status
# ----------------------------------------------------------------------------
# Full Verification Flow
# ----------------------------------------------------------------------------


run_verif:
	@$(MAKE) --no-print-directory build
	@$(MAKE) --no-print-directory objdump
	@$(MAKE) --no-print-directory dump
	@$(MAKE) --no-print-directory run_dut
	@$(MAKE) --no-print-directory compare
	@echo "-------------------------------------------------------------------------"
	@echo "VERIFICATION COMPLETED SUCCESSFULLY"
	@echo "-------------------------------------------------------------------------"


