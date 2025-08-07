
PLATFORM=xilinx_vck5000_gen4x8_xdma_2_202210_1
HLS_TARGET_MODE=hw
HLS_JOBS=32
HLS_IP_CACHE_DIR = $(shell pwd)/../../IP_CACHE
include ../../Makefile_hls.mk

$(info Building BlackScholes application)

DEVICE_DIR =./device
HOST_DIR =./host
COMMON_DIR =./common

DEVICE_INC = -I$(DEVICE_DIR)/include -I$(COMMON_DIR)/include
DEVICE_SRC_DIR = $(DEVICE_DIR)/src
HOST_INC = -I$(HOST_DIR)/include -I$(COMMON_DIR)/include
HOST_SRC_DIR = $(HOST_DIR)/src
COMMON_SRC_DIR = $(COMMON_DIR)/src

PROFILE=1 #enable if profiling needed

ifdef PROFILE
	HOST_INC+=-DPROFILE
endif

HOST_SRC_FILES = $(wildcard $(HOST_SRC_DIR)/*.cpp) 
HOST_SRC_FILES += $(wildcard $(COMMON_SRC_DIR)/*.cpp)
DEVICE_SRC_FILES = $(wildcard $(DEVICE_SRC_DIR)/*.cpp) 
CONFIG_FILE=rtm.ini

$(info HOST_SRC_FILES: $(HOST_SRC_FILES))
$(info DEVICE_SRC_FILES: $(DEVICE_SRC_FILES))

HLS_CXXFLAGS += $(HOST_INC)

all: bin/$(HLS_TARGET_MODE)/app_host bin/$(HLS_TARGET_MODE)/app_device.xclbin

bin/$(HLS_TARGET_MODE)/app_device.xclbin: $(DEVICE_SRC_FILES) $(CONFIG_FILE)
	@echo ""
	@echo ""
	@echo "Building app_device: ($(HLS_TARGET_MODE))"
	@echo ""
	@echo ""
	test -d ./bin/$(HLS_TARGET_MODE)/temp_dir/link/ || mkdir -p ./bin/$(HLS_TARGET_MODE)/temp_dir/link/
	
	@for xo_file in ${basename ${notdir ${shell ls ./device/src/*.cpp}}}; do \
	    if [ -f $${xo_file} ]; then \
			echo "Skip building $${xo_file}. It is already existing"; \
		else \
			echo "Compiling $${xo_file}"; \
			$(VPP) -s -O3 $(VPP_FLAGS) --temp_dir bin/$(HLS_TARGET_MODE)/temp_dir/ --log_dir bin/$(HLS_TARGET_MODE)/temp_dir/ --compile $(DEVICE_INC) -k kernel_$${xo_file} -o bin/$(HLS_TARGET_MODE)/$${xo_file}.xo  ./device/src/$${xo_file}.cpp; \
		fi \
	done

	@if [ -n "$(OPS_HLS_XSA_PLATFORM)" ]; then \
		echo "Building XSA platform"; \
		$(VPP) -s -O3 $(VPP_FLAGS) --temp_dir bin/$(HLS_TARGET_MODE)/temp_dir/link/  --log_dir bin/$(HLS_TARGET_MODE)/temp_dir/link/logs/ --link --config $(CONFIG_FILE) -o ./bin/$(HLS_TARGET_MODE)/app_device.xsa  ${patsubst %.cpp, %.xo, ${patsubst ./device/src/%, ./bin/$(HLS_TARGET_MODE)/%, $(shell ls ./device/src/*.cpp)}}; \
		$(VPP) -s -O3 --target $(HLS_TARGET_MODE) --platform $(PLATFORM) --temp_dir  bin/$(HLS_TARGET_MODE)/temp_dir/link/ --log_dir bin/$(HLS_TARGET_MODE)/temp_dir/link/logs/ --package  ./bin/$(HLS_TARGET_MODE)/app_device.xsa -o "$@"; \
	else \
		echo "Building non-XSA platform"; \
		$(VPP) -s -O3 $(VPP_FLAGS) --temp_dir bin/$(HLS_TARGET_MODE)/temp_dir/link/  --log_dir bin/$(HLS_TARGET_MODE)/temp_dir/link/logs/ --link --config $(CONFIG_FILE) -o "$@"  ${patsubst %.cpp, %.xo, ${patsubst ./device/src/%, ./bin/$(HLS_TARGET_MODE)/%, $(shell ls ./device/src/*.cpp)}}; \
	fi

bin/$(HLS_TARGET_MODE)/app_host: $(HOST_SRC_FILES)
	@echo ""
	@echo ""
	@echo "Building app_host"
	@echo ""
	@echo ""
	test -d ./bin/$(HLS_TARGET_MODE) || mkdir -p ./bin/$(HLS_TARGET_MODE)
	$(CXX) -o ./bin/$(HLS_TARGET_MODE)/app_host $(HOST_SRC_FILES) $(HOST_INC) $(HLS_CXXFLAGS) $(HLS_LDFLAGS)

.PHONY: build_host
build_host:
	make bin/$(HLS_TARGET_MODE)/app_host

.PHONY: run_hls_host
run_hls_host:
	@if [ ! -f run_script_hls.sh ]; then \
		echo "Run script, run_script_hls.sh doesn't exist"; \
	else \
		bash ./run_script_hls.sh $(HLS_TARGET_MODE) $(PLATFORM) $(HLS_CXXFLAGS); \
	fi
clean:
	rm -rf ./bin
	rm -rf ./profile_data
	rm -rf .Xil
	@if [ -f xcd.log ]; then rm xcd.log; fi
	@if [ -f xrc.log ]; then rm xrc.log; fi
