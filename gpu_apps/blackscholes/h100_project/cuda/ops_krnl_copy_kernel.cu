// Auto-generated at 2025-08-06 12:35:43.409852 by ops-translator

__constant__ int dims_ops_krnl_copy[2][1];
static int dims_ops_krnl_copy_h[2][1] = {{0}};

//  =============
//  User function
//  =============
__device__ void ops_krnl_copy_gpu(const ACC<float> &data, ACC<float> &data_new) {

    data_new(0,0) = data(0,0);

}

//  ============================
//  Cuda kernel wrapper function
//  ============================
__global__ void ops_ops_krnl_copy(float* __restrict arg0, int xstride_0, int ystride_0, 
float* __restrict arg1, int xstride_1, int ystride_1, 
int size0, int size1) {

    int idx_y = blockDim.y * blockIdx.y + threadIdx.y;
    int idx_x = blockDim.x * blockIdx.x + threadIdx.x;

    arg0 += idx_x * xstride_0*1 + idx_y * ystride_0*1 * dims_ops_krnl_copy[0][0];
    arg1 += idx_x * xstride_1*1 + idx_y * ystride_1*1 * dims_ops_krnl_copy[1][0];

    if(idx_x < size0 && idx_y < size1) {

        const ACC<float> argp0(dims_ops_krnl_copy[0][0], arg0);
        ACC<float> argp1(dims_ops_krnl_copy[1][0], arg1);

        ops_krnl_copy_gpu(argp0, argp1);

    }// End of cuda index in_range check

}// End of cuda kernel wrapper function

//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_ops_krnl_copy(
    const char * name,
    ops_block block,
    int dim,
    int *range,
    ops_arg arg0,
    ops_arg arg1
)
{ 
#else
void ops_par_loop_ops_krnl_copy_execute(ops_kernel_descriptor *desc)
{
    ops_block block = desc->block;
    int dim = desc->dim;
    int *range = desc->range;
    ops_arg arg0 = desc->args[0];
    ops_arg arg1 = desc->args[1];
#endif

//  ======
//  Timing
//  ======
    double __t1, __t2, __c1, __c2;

    ops_arg args[2];

    args[0] = arg0;
    args[1] = arg1;

#if defined(CHECKPOINTING) && !defined(OPS_LAZY)
    if (!ops_checkpointing_before(args, 2, range, 4)) return;
#endif

    if (block->instance->OPS_diags > 1)
    {
        ops_timing_realloc(block->instance, 4, "ops_krnl_copy");
        block->instance->OPS_kernels[4].count++;
        ops_timers_core(&__c1, &__t1);
    }

//  =================================================
//  compute locally allocated range for the sub-block
//  =================================================
    int start_indx[2];
    int end_indx[2];
#ifdef OPS_MPI
    int arg_idx[2];
#endif

#if defined(OPS_LAZY) || !defined(OPS_MPI)
    for (int n = 0; n < 2; n++) {
        start_indx[n] = range[2*n];
        end_indx[n]   = range[2*n+1];
    }
#else
    if (compute_ranges(args, 2, block, range, start_indx, end_indx, arg_idx) < 0) return;
#endif

    int xdim0 = args[0].dat->size[0];
    int xdim1 = args[1].dat->size[0];

    if (xdim0 != dims_ops_krnl_copy_h[0][0] || xdim1 != dims_ops_krnl_copy_h[1][0]) {
        dims_ops_krnl_copy_h[0][0] = xdim0;
        dims_ops_krnl_copy_h[1][0] = xdim1;

        cutilSafeCall(block->instance->ostream(), cudaMemcpyToSymbol( dims_ops_krnl_copy, dims_ops_krnl_copy_h, sizeof(dims_ops_krnl_copy)));
    }

    int x_size = MAX(0,end_indx[0]-start_indx[0]);
    int y_size = MAX(0,end_indx[1]-start_indx[1]);

    dim3 grid( (x_size-1)/block->instance->OPS_block_size_x + 1, (y_size-1)/block->instance->OPS_block_size_y + 1, 1);

    dim3 tblock(block->instance->OPS_block_size_x,block->instance->OPS_block_size_y,block->instance->OPS_block_size_z);

    long long int dat0 = (block->instance->OPS_soa ? args[0].dat->type_size : args[0].dat->elem_size);
    long long int dat1 = (block->instance->OPS_soa ? args[1].dat->type_size : args[1].dat->elem_size);

    char *p_a[2];

//  =======================
//  set up initial pointers
//  =======================
    long long int base0 = args[0].dat->base_offset + dat0 * 1 * (start_indx[0] * args[0].stencil->stride[0]);
    base0 = base0 + dat0 * 
                     args[0].dat->size[0] * 
                     (start_indx[1] * args[0].stencil->stride[1]);
    p_a[0] = (char *)args[0].data_d + base0;

    long long int base1 = args[1].dat->base_offset + dat1 * 1 * (start_indx[0] * args[1].stencil->stride[0]);
    base1 = base1 + dat1 * 
                     args[1].dat->size[0] * 
                     (start_indx[1] * args[1].stencil->stride[1]);
    p_a[1] = (char *)args[1].data_d + base1;

//  =============
//  Halo exchange
//  =============
#ifndef OPS_LAZY
    ops_H_D_exchanges_device(args, 2);
    ops_halo_exchanges(args, 2, range);
#endif

    if (block->instance->OPS_diags > 1) { 
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[4].mpi_time += __t2 - __t1;
    }

//  ==========================================================
//  ops_dat strides for offset calculation in wrapper function
//  ==========================================================
    int xstride_0, ystride_0;
    xstride_0 = args[0].stencil->stride[0];    ystride_0 = args[0].stencil->stride[1];
    int xstride_1, ystride_1;
    xstride_1 = args[1].stencil->stride[0];    ystride_1 = args[1].stencil->stride[1];

//  call kernel wrapper function, passing in pointers to data
    if (x_size > 0 && y_size > 0) {

        ops_ops_krnl_copy<<<grid, tblock >>> (
                   (float *)p_a[0], xstride_0, ystride_0, 
                   (float *)p_a[1], xstride_1, ystride_1, 
                   x_size, y_size);

    }

    cutilSafeCall(block->instance->ostream(), cudaGetLastError());

    if(block->instance->OPS_diags > 1) {
        cutilSafeCall(block->instance->ostream(), cudaDeviceSynchronize());
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[4].time += __t1 - __t2;
    }

#ifndef OPS_LAZY
    ops_set_dirtybit_device(args, 2);
    ops_set_halo_dirtybit3(&args[1], range);
#endif

    if (block->instance->OPS_diags > 1) {
//      ====================
//      Update kernel record
//      ====================
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[4].mpi_time += __t2 - __t1;
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg0);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg1);
    }
}

#ifdef OPS_LAZY
void ops_par_loop_ops_krnl_copy(
    const char * name,
    ops_block block,
    int dim,
    int * range,
    ops_arg arg0,
    ops_arg arg1
    )
{
    ops_arg args[2];

    args[0] = arg0;
    args[1] = arg1;

    create_kerneldesc_and_enque(name, "ops_krnl_copy", args, 2, 4, dim, 1, range, block, ops_par_loop_ops_krnl_copy_execute);
}
#endif
