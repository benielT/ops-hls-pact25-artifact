#!/bin/bash

##############
# A rough example of environmental variables for compiling with Intel compilers
# unset and set defaults
##############

export PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:
unset LD_LIBRARY_PATH
module purge
. ~/.bashrc
#. /opt/modules/current/Modules/3.2.6/init/bash
#export PATH=/rr-home/gihan/numawrap:$PATH
# module load cmake/3.20.1

############## OPS specifics ##############
SOURCE_SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
export OPS_COMPILER=pgi
export OPS_INSTALL_PATH=${SOURCE_SCRIPT_DIR}/../OPS_batched/ops
export LD_LIBRARY_PATH=$OPS_INSTALL_PATH/c/lib/pgi/:$LD_LIBRARY_PATH

####################################################
####### setup these dependacies accordingly ########
####################################################

############## CUDA and NVIDIA OpenCL ##############
export NV_ARCH=Hopper

echo "GPU architecture" $NV_ARCH

#PGI MPI and Compilers
module load nvhpc/23.7

export CUDA_INSTALL_PATH=/opt/nvidia/hpc_sdk/Linux_x86_64/23.7/cuda
export CUDA_MATH_LIBS=/opt/nvidia/hpc_sdk/Linux_x86_64/23.7/math_libs/lib64
export LD_LIBRARY_PATH=$CUDA_MATH_LIBS:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=$CUDA_INSTALL_PATH/lib64:$LD_LIBRARY_PATH

export MPI_INSTALL_PATH=/opt/nvidia/hpc_sdk/Linux_x86_64/23.7/comm_libs/mpi
export PATH=$MPI_INSTALL_PATH/bin:$PATH
export LD_LIBRARY_PATH=$MPI_INSTALL_PATH/lib:$LD_LIBRARY_PATH

export OP_AUTO_SOA=1

export MPICPP=mpic++
export MPICH_CXX=pgc++
export MPICH_CC=pgcc
export MPICH_F90=pgfortran
export MPIF90_F90=pgfortran
export MPICH_FC=pgfortran

############## HDF5 ##############
unset HDF5_INSTALL_PATH
export HDF5_INSTALL_PATH=/ext-home/asl/install/build_hdf5/gnu
export PATH=$HDF5_INSTALL_PATH/bin:$PATH
export LD_LIBRARY_PATH=$HDF5_INSTALL_PATH/lib:$LD_LIBRARY_PATH

############## Tridiagonal LIB ##############
export TDMA_INSTALL_PATH=~/libs/usr/local/libtrid
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$TDMA_INSTALL_PATH/lib/
export LIBTRID_PATH=$TDMA_INSTALL_PATH

export VIRTUALENVWRAPPER_PYTHON=/opt/python/3.9.7/bin/python3
