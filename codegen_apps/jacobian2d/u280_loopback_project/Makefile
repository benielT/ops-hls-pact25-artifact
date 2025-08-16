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


HEADERS=jac2D9pt_kernel.h

OPS_FILES=jac2D9pt.cpp

OPS_GENERATED_SUFFIX=_ops

OTHER_FILES=


APP=jac2D9pt
MAIN_SRC=jac2D9pt

# OPS_GENERATOR_VERBOSE=1
# OPS_FPGA_ONLY=1 #Enable if building FPGA only mode
OPS_TARGET_CONFIG_FILE= ./config_u280.json

TARGETS=hls
########  PRFOFILE OPTIONS (ONLY ENABLE ONE OPTION) ######

#Enable if wanted to profile
# CXXFLAGS += -DPROFILE
#Enable if wanted to power_profile
CXXFLAGS += -DPOWER_PROFILE

########  VERIIFICATION OPTIONS  ######
#Enable if wanted to verify
#CXXFLAGS += -DVERIFICATION

######## ASYN_DISPATCH OPTION ########
#Enable if wanted to use asynchronous dispatch
# CXXFLAGS += -DASYNC_DISPATCH

######## BATCHING OPTION ########
# Enable if wanted to use batching
CXXFLAGS += -DBATCHING

########  DEBUG OPTIONS  ######
#Enable if wanted to debug
# CXXFLAGS += -DDEBUG_LOG
# VPP_FLAGS += -DDEBUG_LOG

#include $(OPS_INSTALL_PATH)/../makefiles/Makefile.c_app_legacy
include $(OPS_INSTALL_PATH)/../makefiles/Makefile.c_app

