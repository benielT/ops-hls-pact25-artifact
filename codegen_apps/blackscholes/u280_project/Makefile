#
# The following environment variables should be predefined:
#
# OPS_INSTALL_PATH
# OPS_COMPILER (gnu,intel,etc)
#

include $(OPS_INSTALL_PATH)/../makefiles/Makefile.common
include $(OPS_INSTALL_PATH)/../makefiles/Makefile.mpi
include $(OPS_INSTALL_PATH)/../makefiles/Makefile.cuda
include $(OPS_INSTALL_PATH)/../makefiles/Makefile.hip
include $(OPS_INSTALL_PATH)/../makefiles/Makefile.hdf5

PLATFORM=xilinx_u280_gen3x16_xdma_1_202211_1
HLS_TARGET_MODE=hw
HLS_JOBS=64
include $(OPS_INSTALL_PATH)/../makefiles/Makefile_hls.mk

HEADERS=blackscholes_utils.h blackscholes_cpu.h blackscholes_kernels.h

OPS_FILES=blackscholes.cpp
OPS_GENERATED_SUFFIX=_ops

OTHER_FILES=blackscholes_cpu.cpp 


APP=blackscholes
MAIN_SRC=blackscholes

# OPS_GENERATOR_VERBOSE=1
# OPS_GENERATOR_DEBUG=1
# OPS_FPGA_ONLY=1
# OPS_DUMP_AST=1
OPS_TARGET_CONFIG_FILE= ./config_u280.json

TARGETS=hls

########  PRFOFILE OPTIONS (ONLY ENABLE ONE OPTION) ######

#Enable if wanted to profile
CXXFLAGS += -DPROFILE
#Enable if wanted to power_profile
# CXXFLAGS += -DPOWER_PROFILE

########  VERIIFICATION OPTIONS  ######
#Enable if wanted to verify
# CXXFLAGS += -DVERIFICATION

######## ASYN_DISPATCH OPTION ########
#Enable if wanted to use asynchronous dispatch
# CXXFLAGS += -DASYNC_DISPATCH

######## BATCHING OPTION ########
# Enable if wanted to use batching
CXXFLAGS += -DBATCHING

########  DEBUG OPTIONS  ######
#Enable if wanted to debug
# CXXFLAGS += -DDEBUG_LOG
# CXXFLAGS += -DDEBUG_VERBOSE
# VPP_FLAGS += -DDEBUG_LOG

#include $(OPS_INSTALL_PATH)/../makefiles/Makefile.c_app_legacy
include $(OPS_INSTALL_PATH)/../makefiles/Makefile.c_app

