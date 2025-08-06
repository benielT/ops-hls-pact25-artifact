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