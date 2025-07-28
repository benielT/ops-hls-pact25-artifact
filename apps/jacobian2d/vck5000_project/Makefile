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


HEADERS=jac2D9pt_kernel.h

OPS_FILES=jac2D9pt.cpp

OPS_GENERATED_SUFFIX=_ops

OTHER_FILES=


APP=jac2D9pt
MAIN_SRC=jac2D9pt

# OPS_GENERATOR_VERBOSE=1
# OPS_FPGA_ONLY=1 #Enable if building FPGA only mode
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

