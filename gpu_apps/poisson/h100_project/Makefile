#
# The following environment variables should be predefined:
#
# OPS_INSTALL_PATH
# OPS_COMPILER (gnu,intel,etc)
#

include $(OPS_INSTALL_PATH)/../makefiles/Makefile.common
include $(OPS_INSTALL_PATH)/../makefiles/Makefile.mpi
include $(OPS_INSTALL_PATH)/../makefiles/Makefile.cuda
include $(OPS_INSTALL_PATH)/../makefiles/Makefile.hdf5


BATCHED=2

HEADERS=poisson_kernel.h

OPS_FILES=poisson.cpp

OPS_GENERATED=poisson_ops.cpp

OTHER_FILES=


APP=poisson
MAIN_SRC=poisson

TARGETS=cuda

include $(OPS_INSTALL_PATH)/../makefiles/Makefile.c_app

PROFILE=1
ifdef PROFILE
	CXXFLAGS+=-DPROFILE
endif

.PHONY: run_hls_app
run_hls_app: run_script_hls.sh
	bash ./run_script_hls.sh $(APP) $(TARGETS) $(CXXFLAGS)