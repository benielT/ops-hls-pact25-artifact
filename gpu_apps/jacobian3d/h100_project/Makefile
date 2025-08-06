#
# The following environment variables should be predefined:
#
# OPS_INSTALL_PATH
# OPS_COMPILER (gnu,intel,etc)
#

include $(OPS_INSTALL_PATH)/../makefiles/Makefile.common
include $(OPS_INSTALL_PATH)/../makefiles/Makefile.mpi
include $(OPS_INSTALL_PATH)/../makefiles/Makefile.cuda
# include $(OPS_INSTALL_PATH)/../makefiles/Makefile.hip
include $(OPS_INSTALL_PATH)/../makefiles/Makefile.hdf5

BATCHED=3

HEADERS=jac3D7pt_kernel.h

OPS_FILES=jac3D7pt.cpp

OPS_GENERATED=jac3D7pt_ops.cpp

OTHER_FILES=


APP=jac3D7pt
MAIN_SRC=jac3D7pt

# OPS_GENERATOR_VERBOSE=1
# OPS_FPGA_ONLY=1
# OPS_TARGET_CONFIG_FILE= ./config.json

TARGETS=seq cuda #tiled openmp mpi mpi_tiled mpi_openmp cuda mpi_cuda mpi_cuda_tiled hip mpi_hip mpi_hip_tiled ompoffload mpi_ompoffload mpi_ompoffload_tiled sycl mpi_sycl mpi_sycl_tiled openacc mpi_openacc mpi_openacc_tiled

#include $(OPS_INSTALL_PATH)/../makefiles/Makefile.c_app_legacy
include $(OPS_INSTALL_PATH)/../makefiles/Makefile.c_app

########  PRFOFILE OPTIONS (ONLY ENABLE ONE OPTION) ######

#Enable if wanted to profile
CXXFLAGS += -DPROFILE
#Enable if wanted to power_profile
# CXXFLAGS += -DPOWER_PROFILE

.PHONY: run_hls_app
run_hls_app: run_script.sh
	bash ./run_script.sh $(APP) $(TARGETS) $(CXXFLAGS)

.PHONY: clean 
clean: 
	rm -f $(APP)_dev_seq $(APP)_dev_mpi $(APP)_mpi $(APP)_seq $(APP)_tiled $(APP)_mpi_inline $(APP)_openmp $(APP)_mpi_openmp $(APP)_cuda $(APP)_mpi_cuda $(APP)_mpi_cuda_tiled $(APP)_openacc $(APP)_mpi_openacc ./CUDA/*.o ./OpenACC/*.o *.o $(APP)_opencl $(APP)_mpi_opencl $(APP)_mpi_tiled $(APP)_mpi_inline ./OpenCL/*.o ./MPI_inline/*.o *.o *.lst
	rm -rf CUDA MPI_inline MPI_OpenMP OpenACC OpenCL profile_data temp_prof
	rm -f .generated