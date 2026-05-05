VERILATOR ?= verilator
TOP ?= tb_kyber_top
OBJ_DIR ?= obj_dir
SIM_EXE ?= V$(TOP)
SIM_BIN := $(OBJ_DIR)/$(SIM_EXE)
SIM_SRCS := $(wildcard src/*.v) $(wildcard sim/*.v)

VERILATOR_VERSION := $(shell $(VERILATOR) --version 2>/dev/null | awk '{print $$2}')
VER_MAJOR := $(shell echo "$(VERILATOR_VERSION)" | cut -d. -f1)

//.PHONY: sim run run512 run-report compare clean bootstrap check-vectors help gen-local-vectors compare-local
.PHONY: sim run run512 run-report compare clean bootstrap check-vectors help gen-local-vectors gen-c-ref-vectors compare-local

help:
	@echo "Verilator version: $(VERILATOR_VERSION)"
	@echo "Targets: sim run run512 run-report run-report512 compare compare-report gen-local-vectors gen-c-ref-vectors compare-local bootstrap clean"

sim:
ifeq ($(VER_MAJOR),4)
	$(VERILATOR) --cc --exe --trace -Wno-fatal -Mdir $(OBJ_DIR) \
		$(SIM_SRCS) --top-module $(TOP) --build -o $(SIM_EXE)
else
	$(VERILATOR) --binary --trace -Wno-fatal -Mdir $(OBJ_DIR) \
		$(SIM_SRCS) --top $(TOP)
endif

run: run512


run512: sim
	$(SIM_BIN) +MODE=512

check-vectors:
	@test -f vectors/c_ref_512_pk.mem

compare: sim check-vectors
	$(SIM_BIN) +CHECK_REF=1

bootstrap:
	@bash tools/bootstrap_c_ref.sh

clean:
	rm -rf $(OBJ_DIR) *.vcd rtl_ct_*.hex

run-report: sim
	@bash tools/run_and_report.sh all

run-report512: sim
	@bash tools/run_and_report.sh 512

compare-report: sim check-vectors
	@CHECK_REF=1 bash tools/run_and_report.sh all

gen-local-vectors: sim
	@bash tools/gen_local_vectors.sh
	
gen-c-ref-vectors:
	@bash tools/gen_c_reference_vectors.sh

compare-local: gen-local-vectors
	$(SIM_BIN) +CHECK_REF=1

