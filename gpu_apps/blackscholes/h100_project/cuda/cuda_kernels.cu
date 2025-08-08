// Auto-generated at 2025-08-08 15:43:35.824760 by ops-translator

// headers
#define OPS_2D
#define OPS_API 2
#include "ops_lib_core.h"

#ifdef OPS_MPI
#include "ops_mpi_core.h"
#include <limits>
#endif

#include "ops_cuda_rt_support.h"
#include "ops_cuda_reduction.h"

#include <cuComplex.h>

//  global constants

void ops_init_backend(){}

void ops_decl_const_char(OPS_instance *instance, int dim, char const *type, int size, char *dat, char const *name) {
    ops_execute(instance);

}

// user kernel files
#include "ops_krnl_zero_init_kernel.cu"
#include "ops_krnl_const_init_kernel.cu"
#include "ops_krnl_interior_init_kernel.cu"
#include "ops_krnl_copy_kernel.cu"
#include "ops_krnl_calc_coefficient_kernel.cu"
#include "ops_krnl_blackscholes_kernel.cu"

