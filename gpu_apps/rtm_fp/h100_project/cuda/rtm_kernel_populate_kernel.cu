// Auto-generated at 2025-08-06 23:23:48.183093 by ops-translator

__constant__ int dims_rtm_kernel_populate[7][2];
static int dims_rtm_kernel_populate_h[7][2] = {{0}};

//  =============
//  User function
//  =============
__device__ void rtm_kernel_populate_gpu(const int *dispx, const int *dispy, const int *dispz, const int *idx, ACC<float> &rho, ACC<float> &mu, ACC<float> &yy_0) {

    float x = 1.0*((float)(idx[0]-nx/2)/nx);
    float y = 1.0*((float)(idx[1]-ny/2)/ny);
    float z = 1.0*((float)(idx[2]-nz/2)/nz);

    const float C = 1.0f;
    const float r0 = 0.001f;
    rho(0,0,0) = 1000.0f; 
    mu(0,0,0) = 0.001f; 

    yy_0(0,0,0) = (1./3.)*C*exp(-(x*x+y*y+z*z)/r0); 

}

//  ============================
//  Cuda kernel wrapper function
//  ============================
__global__ void ops_rtm_kernel_populate(const int arg0, 
const int arg1, 
const int arg2, 
int arg_idx0, int arg_idx1, int arg_idx2, 
float* __restrict arg4, int xstride_4, int ystride_4, int zstride_4, 
float* __restrict arg5, int xstride_5, int ystride_5, int zstride_5, 
float* __restrict arg6, int xstride_6, int ystride_6, int zstride_6, 
int size0, int size1, int size2) {

    int idx_z = blockDim.z * blockIdx.z + threadIdx.z;
    int idx_y = blockDim.y * blockIdx.y + threadIdx.y;
    int idx_x = blockDim.x * blockIdx.x + threadIdx.x;

    int arg_idx[3];
    arg_idx[0] = arg_idx0+idx_x;
    arg_idx[1] = arg_idx1+idx_y;
    arg_idx[2] = arg_idx2+idx_z;

    arg4 += idx_x * xstride_4*1 + idx_y * ystride_4*1 * dims_rtm_kernel_populate[4][0] + idx_z * zstride_4*1 * dims_rtm_kernel_populate[4][0] * dims_rtm_kernel_populate[4][1];
    arg5 += idx_x * xstride_5*1 + idx_y * ystride_5*1 * dims_rtm_kernel_populate[5][0] + idx_z * zstride_5*1 * dims_rtm_kernel_populate[5][0] * dims_rtm_kernel_populate[5][1];
    arg6 += idx_x * xstride_6*1 + idx_y * ystride_6*1 * dims_rtm_kernel_populate[6][0] + idx_z * zstride_6*1 * dims_rtm_kernel_populate[6][0] * dims_rtm_kernel_populate[6][1];

    if(idx_x < size0 && idx_y < size1 && idx_z < size2) {

        ACC<float> argp4(dims_rtm_kernel_populate[4][0], dims_rtm_kernel_populate[4][1], arg4);
        ACC<float> argp5(dims_rtm_kernel_populate[5][0], dims_rtm_kernel_populate[5][1], arg5);
        ACC<float> argp6(dims_rtm_kernel_populate[6][0], dims_rtm_kernel_populate[6][1], arg6);

        rtm_kernel_populate_gpu(&arg0, &arg1, &arg2, arg_idx, argp4, argp5, argp6);

    }// End of cuda index in_range check

}// End of cuda kernel wrapper function

//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_rtm_kernel_populate(
    const char * name,
    ops_block block,
    int dim,
    int *range,
    ops_arg arg0,
    ops_arg arg1,
    ops_arg arg2,
    ops_arg arg3,
    ops_arg arg4,
    ops_arg arg5,
    ops_arg arg6
)
{ 
#else
void ops_par_loop_rtm_kernel_populate_execute(ops_kernel_descriptor *desc)
{
    ops_block block = desc->block;
    int dim = desc->dim;
    int *range = desc->range;
    ops_arg arg0 = desc->args[0];
    ops_arg arg1 = desc->args[1];
    ops_arg arg2 = desc->args[2];
    ops_arg arg3 = desc->args[3];
    ops_arg arg4 = desc->args[4];
    ops_arg arg5 = desc->args[5];
    ops_arg arg6 = desc->args[6];
#endif

//  ======
//  Timing
//  ======
    double __t1, __t2, __c1, __c2;

    ops_arg args[7];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;
    args[5] = arg5;
    args[6] = arg6;

#if defined(CHECKPOINTING) && !defined(OPS_LAZY)
    if (!ops_checkpointing_before(args, 7, range, 1)) return;
#endif

    if (block->instance->OPS_diags > 1)
    {
        ops_timing_realloc(block->instance, 1, "rtm_kernel_populate");
        block->instance->OPS_kernels[1].count++;
        ops_timers_core(&__c1, &__t1);
    }

//  =================================================
//  compute locally allocated range for the sub-block
//  =================================================
    int start_indx[3];
    int end_indx[3];
    int arg_idx[3];

#if defined(OPS_LAZY) || !defined(OPS_MPI)
    for (int n = 0; n < 3; n++) {
        start_indx[n] = range[2*n];
        end_indx[n]   = range[2*n+1];
    }
#else
    if (compute_ranges(args, 7, block, range, start_indx, end_indx, arg_idx) < 0) return;
#endif

#if defined(OPS_MPI)
#if defined(OPS_LAZY)
    sub_block_list sb = OPS_sub_block_list[block->index];
    arg_idx[0] = sb->decomp_disp[0]+start_indx[0];
    arg_idx[1] = sb->decomp_disp[1]+start_indx[1];
    arg_idx[2] = sb->decomp_disp[2]+start_indx[2];
#endif  // OPS_LAZY
#else   // OPS_MPI
    arg_idx[0] = start_indx[0];
    arg_idx[1] = start_indx[1];
    arg_idx[2] = start_indx[2];
#endif  // OPS_MPI

    int xdim4 = args[4].dat->size[0];
    int ydim4 = args[4].dat->size[1];
    int xdim5 = args[5].dat->size[0];
    int ydim5 = args[5].dat->size[1];
    int xdim6 = args[6].dat->size[0];
    int ydim6 = args[6].dat->size[1];

    if (xdim4 != dims_rtm_kernel_populate_h[4][0] || ydim4 != dims_rtm_kernel_populate_h[4][1] || xdim5 != dims_rtm_kernel_populate_h[5][0] || ydim5 != dims_rtm_kernel_populate_h[5][1] || xdim6 != dims_rtm_kernel_populate_h[6][0] || ydim6 != dims_rtm_kernel_populate_h[6][1]) {
        dims_rtm_kernel_populate_h[4][0] = xdim4;
        dims_rtm_kernel_populate_h[4][1] = ydim4;
        dims_rtm_kernel_populate_h[5][0] = xdim5;
        dims_rtm_kernel_populate_h[5][1] = ydim5;
        dims_rtm_kernel_populate_h[6][0] = xdim6;
        dims_rtm_kernel_populate_h[6][1] = ydim6;

        cutilSafeCall(block->instance->ostream(), cudaMemcpyToSymbol( dims_rtm_kernel_populate, dims_rtm_kernel_populate_h, sizeof(dims_rtm_kernel_populate)));
    }

    int x_size = MAX(0,end_indx[0]-start_indx[0]);
    int y_size = MAX(0,end_indx[1]-start_indx[1]);
    int z_size = MAX(0,end_indx[2]-start_indx[2]);

    dim3 grid( (x_size-1)/block->instance->OPS_block_size_x + 1, (y_size-1)/block->instance->OPS_block_size_y + 1, (z_size-1)/block->instance->OPS_block_size_z + 1);

    dim3 tblock(block->instance->OPS_block_size_x,block->instance->OPS_block_size_y,block->instance->OPS_block_size_z);

    long long int dat4 = (block->instance->OPS_soa ? args[4].dat->type_size : args[4].dat->elem_size);
    long long int dat5 = (block->instance->OPS_soa ? args[5].dat->type_size : args[5].dat->elem_size);
    long long int dat6 = (block->instance->OPS_soa ? args[6].dat->type_size : args[6].dat->elem_size);

    char *p_a[7];

//  =======================
//  set up initial pointers
//  =======================
    long long int base4 = args[4].dat->base_offset + dat4 * 1 * (start_indx[0] * args[4].stencil->stride[0]);
    base4 = base4 + dat4 * 
                     args[4].dat->size[0] * 
                     (start_indx[1] * args[4].stencil->stride[1]);
    base4 = base4 + dat4 * 
                     args[4].dat->size[0] * 
                     args[4].dat->size[1] * 
                     (start_indx[2] * args[4].stencil->stride[2]);
    p_a[4] = (char *)args[4].data_d + base4;

    long long int base5 = args[5].dat->base_offset + dat5 * 1 * (start_indx[0] * args[5].stencil->stride[0]);
    base5 = base5 + dat5 * 
                     args[5].dat->size[0] * 
                     (start_indx[1] * args[5].stencil->stride[1]);
    base5 = base5 + dat5 * 
                     args[5].dat->size[0] * 
                     args[5].dat->size[1] * 
                     (start_indx[2] * args[5].stencil->stride[2]);
    p_a[5] = (char *)args[5].data_d + base5;

    long long int base6 = args[6].dat->base_offset + dat6 * 1 * (start_indx[0] * args[6].stencil->stride[0]);
    base6 = base6 + dat6 * 
                     args[6].dat->size[0] * 
                     (start_indx[1] * args[6].stencil->stride[1]);
    base6 = base6 + dat6 * 
                     args[6].dat->size[0] * 
                     args[6].dat->size[1] * 
                     (start_indx[2] * args[6].stencil->stride[2]);
    p_a[6] = (char *)args[6].data_d + base6;

//  =============
//  Halo exchange
//  =============
#ifndef OPS_LAZY
    ops_H_D_exchanges_device(args, 7);
    ops_halo_exchanges(args, 7, range);
#endif

    if (block->instance->OPS_diags > 1) { 
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[1].mpi_time += __t2 - __t1;
    }

//  ==========================================================
//  ops_dat strides for offset calculation in wrapper function
//  ==========================================================
    int xstride_4, ystride_4, zstride_4;
    xstride_4 = args[4].stencil->stride[0];    ystride_4 = args[4].stencil->stride[1];
    zstride_4 = args[4].stencil->stride[2];
    int xstride_5, ystride_5, zstride_5;
    xstride_5 = args[5].stencil->stride[0];    ystride_5 = args[5].stencil->stride[1];
    zstride_5 = args[5].stencil->stride[2];
    int xstride_6, ystride_6, zstride_6;
    xstride_6 = args[6].stencil->stride[0];    ystride_6 = args[6].stencil->stride[1];
    zstride_6 = args[6].stencil->stride[2];

//  call kernel wrapper function, passing in pointers to data
    if (x_size > 0 && y_size > 0 && z_size > 0) {

        ops_rtm_kernel_populate<<<grid, tblock >>> (
                   *(int *)arg0.data, 
                   *(int *)arg1.data, 
                   *(int *)arg2.data, 
                   arg_idx[0], arg_idx[1], arg_idx[2], 
                   (float *)p_a[4], xstride_4, ystride_4, zstride_4, 
                   (float *)p_a[5], xstride_5, ystride_5, zstride_5, 
                   (float *)p_a[6], xstride_6, ystride_6, zstride_6, 
                   x_size, y_size, z_size);

    }

    cutilSafeCall(block->instance->ostream(), cudaGetLastError());

    if(block->instance->OPS_diags > 1) {
        cutilSafeCall(block->instance->ostream(), cudaDeviceSynchronize());
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[1].time += __t1 - __t2;
    }

#ifndef OPS_LAZY
    ops_set_dirtybit_device(args, 7);
    ops_set_halo_dirtybit3(&args[4], range);
    ops_set_halo_dirtybit3(&args[5], range);
    ops_set_halo_dirtybit3(&args[6], range);
#endif

    if (block->instance->OPS_diags > 1) {
//      ====================
//      Update kernel record
//      ====================
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[1].mpi_time += __t2 - __t1;
        block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg4);
        block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg5);
        block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg6);
    }
}

#ifdef OPS_LAZY
void ops_par_loop_rtm_kernel_populate(
    const char * name,
    ops_block block,
    int dim,
    int * range,
    ops_arg arg0,
    ops_arg arg1,
    ops_arg arg2,
    ops_arg arg3,
    ops_arg arg4,
    ops_arg arg5,
    ops_arg arg6
    )
{
    ops_arg args[7];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;
    args[5] = arg5;
    args[6] = arg6;

    create_kerneldesc_and_enque(name, "rtm_kernel_populate", args, 7, 1, dim, 1, range, block, ops_par_loop_rtm_kernel_populate_execute);
}
#endif
