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

PLATFORM=xilinx_vck5000_gen4x8_xdma_2_202210_1
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
OPS_TARGET_CONFIG_FILE= ./config_vck5000.json

TARGETS=hls

########  PRFOFILE OPTIONS (ONLY ENABLE ONE OPTION) ######

#Enable if wanted to profile
CXXFLAGS += -DPROFILE
#Enable if wanted to power_profile
# CXXFLAGS += -DPOWER_PROFILE

########  VERIIFICATION OPTIONS  ######
#Enable if wanted to verify
# CXXFLAGS += -DVERIFICATION

#include $(OPS_INSTALL_PATH)/../makefiles/Makefile.c_app_legacy
include $(OPS_INSTALL_PATH)/../makefiles/Makefile.c_app

