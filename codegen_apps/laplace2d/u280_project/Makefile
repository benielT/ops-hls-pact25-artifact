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

HEADERS=laplace_kernels.h laplace2d_cpu_verification.hpp

OPS_FILES=laplace2d.cpp

OPS_GENERATED_SUFFIX=_ops


APP=laplace2d
MAIN_SRC=laplace2d

# OPS_GENERATOR_VERBOSE=1
# OPS_GENERATOR_LOG_DEBUG=1

# OPS_FPGA_ONLY=1 #Enable if building FPGA only mode
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

#include $(OPS_INSTALL_PATH)/../makefiles/Makefile.c_app_legacy
include $(OPS_INSTALL_PATH)/../makefiles/Makefile.c_app





