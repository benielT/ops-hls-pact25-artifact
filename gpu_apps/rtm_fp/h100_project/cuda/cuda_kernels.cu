// Auto-generated at 2025-08-06 23:23:48.476355 by ops-translator

// headers
#define OPS_3D
#define OPS_API 2
#include "ops_lib_core.h"

#ifdef OPS_MPI
#include "ops_mpi_core.h"
#include <limits>
#endif

#include "ops_cuda_rt_support.h"
#include "ops_cuda_reduction.h"

#include <cuComplex.h>

#define OPS_FUN_PREFIX __device__ __host__
#include "user_types.h"

//  global constants
__constant__ float dx;
__constant__ float dy;
__constant__ float dz;
__constant__ float invdx;
__constant__ float invdy;
__constant__ float invdz;
__constant__ int nx;
__constant__ int ny;
__constant__ int nz;
__constant__ int pml_width;
__constant__ int half_order;
__constant__ int order;

void ops_init_backend(){}

void ops_decl_const_char(OPS_instance *instance, int dim, char const *type, int size, char *dat, char const *name) {
    ops_execute(instance);

    if(!strcmp(name, "dx")) {
        cutilSafeCall(instance->ostream(), cudaMemcpyToSymbol(dx, dat, dim*size));
    } 
    else
    if(!strcmp(name, "dy")) {
        cutilSafeCall(instance->ostream(), cudaMemcpyToSymbol(dy, dat, dim*size));
    } 
    else
    if(!strcmp(name, "dz")) {
        cutilSafeCall(instance->ostream(), cudaMemcpyToSymbol(dz, dat, dim*size));
    } 
    else
    if(!strcmp(name, "invdx")) {
        cutilSafeCall(instance->ostream(), cudaMemcpyToSymbol(invdx, dat, dim*size));
    } 
    else
    if(!strcmp(name, "invdy")) {
        cutilSafeCall(instance->ostream(), cudaMemcpyToSymbol(invdy, dat, dim*size));
    } 
    else
    if(!strcmp(name, "invdz")) {
        cutilSafeCall(instance->ostream(), cudaMemcpyToSymbol(invdz, dat, dim*size));
    } 
    else
    if(!strcmp(name, "nx")) {
        cutilSafeCall(instance->ostream(), cudaMemcpyToSymbol(nx, dat, dim*size));
    } 
    else
    if(!strcmp(name, "ny")) {
        cutilSafeCall(instance->ostream(), cudaMemcpyToSymbol(ny, dat, dim*size));
    } 
    else
    if(!strcmp(name, "nz")) {
        cutilSafeCall(instance->ostream(), cudaMemcpyToSymbol(nz, dat, dim*size));
    } 
    else
    if(!strcmp(name, "pml_width")) {
        cutilSafeCall(instance->ostream(), cudaMemcpyToSymbol(pml_width, dat, dim*size));
    } 
    else
    if(!strcmp(name, "half_order")) {
        cutilSafeCall(instance->ostream(), cudaMemcpyToSymbol(half_order, dat, dim*size));
    } 
    else
    if(!strcmp(name, "order")) {
        cutilSafeCall(instance->ostream(), cudaMemcpyToSymbol(order, dat, dim*size));
    } 
    else
    {
        throw OPSException(OPS_RUNTIME_ERROR, "error: unknown const name");
    }
}

// user kernel files
#include "rtm_kernel_populate_kernel.cu"
#include "kernel_copy_kernel.cu"
#include "fd3d_pml_kernel1_kernel.cu"
#include "fd3d_pml_kernel2_kernel.cu"
#include "fd3d_pml_kernel3_kernel.cu"

