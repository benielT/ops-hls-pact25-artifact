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

# BATCHED=1

HEADERS=blackscholes_utils.h blackscholes_cpu.h blackscholes_kernels.h

OPS_FILES=blackscholes.cpp
OPS_GENERATED=blackscholes_ops.cpp

OTHER_FILES=blackscholes_cpu.cpp 

APP=blackscholes
MAIN_SRC=blackscholes

# OPS_GENERATOR_VERBOSE=1
# OPS_GENERATOR_DEBUG=1
# OPS_FPGA_ONLY=1
# OPS_TARGET_CONFIG_FILE= ./config.json

TARGETS=seq cuda#hls #tiled openmp mpi mpi_tiled mpi_openmp cuda mpi_cuda mpi_cuda_tiled hip mpi_hip mpi_hip_tiled ompoffload mpi_ompoffload mpi_ompoffload_tiled sycl mpi_sycl mpi_sycl_tiled openacc mpi_openacc mpi_openacc_tiled

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
	rm -rf cuda hip mpi_openmp openacc openmp_offload sycl
	rm -f .generated
	@if [ -f constants_list.txt ]; then rm -f constants_list.txt; fi
	@if [ -f ops_translator_run.log ]; then rm -f  ops_translator_run.log; fi
	@if [ -f source_pp.txt ]; then rm -f  source_pp.txt; fi