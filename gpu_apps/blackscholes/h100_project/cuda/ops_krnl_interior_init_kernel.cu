// Auto-generated at 2025-08-06 12:35:43.351281 by ops-translator

__constant__ int dims_ops_krnl_interior_init[4][1];
static int dims_ops_krnl_interior_init_h[4][1] = {{0}};

//  =============
//  User function
//  =============
__device__ void ops_krnl_interior_init_gpu(ACC<float> &data, const int *idx, const float *deltaS, const float *strikePrice) {

    float tmpVal = (idx[0] + 1)*(*deltaS) - (*strikePrice);
    data(0,0) = tmpVal > 0.0 ? tmpVal : 0.0;

}

//  ============================
//  Cuda kernel wrapper function
//  ============================
__global__ void ops_ops_krnl_interior_init(float* __restrict arg0, int xstride_0, int ystride_0, 
int arg_idx0, int arg_idx1, 
const float arg2, 
const float arg3, 
int size0, int size1) {

    int idx_y = blockDim.y * blockIdx.y + threadIdx.y;
    int idx_x = blockDim.x * blockIdx.x + threadIdx.x;

    int arg_idx[2];
    arg_idx[0] = arg_idx0+idx_x;
    arg_idx[1] = arg_idx1+idx_y;

    arg0 += idx_x * xstride_0*1 + idx_y * ystride_0*1 * dims_ops_krnl_interior_init[0][0];

    if(idx_x < size0 && idx_y < size1) {

        ACC<float> argp0(dims_ops_krnl_interior_init[0][0], arg0);

        ops_krnl_interior_init_gpu(argp0, arg_idx, &arg2, &arg3);

    }// End of cuda index in_range check

}// End of cuda kernel wrapper function

//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_ops_krnl_interior_init(
    const char * name,
    ops_block block,
    int dim,
    int *range,
    ops_arg arg0,
    ops_arg arg1,
    ops_arg arg2,
    ops_arg arg3
)
{ 
#else
void ops_par_loop_ops_krnl_interior_init_execute(ops_kernel_descriptor *desc)
{
    ops_block block = desc->block;
    int dim = desc->dim;
    int *range = desc->range;
    ops_arg arg0 = desc->args[0];
    ops_arg arg1 = desc->args[1];
    ops_arg arg2 = desc->args[2];
    ops_arg arg3 = desc->args[3];
#endif

//  ======
//  Timing
//  ======
    double __t1, __t2, __c1, __c2;

    ops_arg args[4];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;

#if defined(CHECKPOINTING) && !defined(OPS_LAZY)
    if (!ops_checkpointing_before(args, 4, range, 3)) return;
#endif

    if (block->instance->OPS_diags > 1)
    {
        ops_timing_realloc(block->instance, 3, "ops_krnl_interior_init");
        block->instance->OPS_kernels[3].count++;
        ops_timers_core(&__c1, &__t1);
    }

//  =================================================
//  compute locally allocated range for the sub-block
//  =================================================
    int start_indx[2];
    int end_indx[2];
    int arg_idx[2];

#if defined(OPS_LAZY) || !defined(OPS_MPI)
    for (int n = 0; n < 2; n++) {
        start_indx[n] = range[2*n];
        end_indx[n]   = range[2*n+1];
    }
#else
    if (compute_ranges(args, 4, block, range, start_indx, end_indx, arg_idx) < 0) return;
#endif

#if defined(OPS_MPI)
#if defined(OPS_LAZY)
    sub_block_list sb = OPS_sub_block_list[block->index];
    arg_idx[0] = sb->decomp_disp[0]+start_indx[0];
    arg_idx[1] = sb->decomp_disp[1]+start_indx[1];
#endif  // OPS_LAZY
#else   // OPS_MPI
    arg_idx[0] = start_indx[0];
    arg_idx[1] = start_indx[1];
#endif  // OPS_MPI

    int xdim0 = args[0].dat->size[0];

    if (xdim0 != dims_ops_krnl_interior_init_h[0][0]) {
        dims_ops_krnl_interior_init_h[0][0] = xdim0;

        cutilSafeCall(block->instance->ostream(), cudaMemcpyToSymbol( dims_ops_krnl_interior_init, dims_ops_krnl_interior_init_h, sizeof(dims_ops_krnl_interior_init)));
    }

    int x_size = MAX(0,end_indx[0]-start_indx[0]);
    int y_size = MAX(0,end_indx[1]-start_indx[1]);

    dim3 grid( (x_size-1)/block->instance->OPS_block_size_x + 1, (y_size-1)/block->instance->OPS_block_size_y + 1, 1);

    dim3 tblock(block->instance->OPS_block_size_x,block->instance->OPS_block_size_y,block->instance->OPS_block_size_z);

    long long int dat0 = (block->instance->OPS_soa ? args[0].dat->type_size : args[0].dat->elem_size);

    char *p_a[4];

//  =======================
//  set up initial pointers
//  =======================
    long long int base0 = args[0].dat->base_offset + dat0 * 1 * (start_indx[0] * args[0].stencil->stride[0]);
    base0 = base0 + dat0 * 
                     args[0].dat->size[0] * 
                     (start_indx[1] * args[0].stencil->stride[1]);
    p_a[0] = (char *)args[0].data_d + base0;

//  =============
//  Halo exchange
//  =============
#ifndef OPS_LAZY
    ops_H_D_exchanges_device(args, 4);
    ops_halo_exchanges(args, 4, range);
#endif

    if (block->instance->OPS_diags > 1) { 
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[3].mpi_time += __t2 - __t1;
    }

//  ==========================================================
//  ops_dat strides for offset calculation in wrapper function
//  ==========================================================
    int xstride_0, ystride_0;
    xstride_0 = args[0].stencil->stride[0];    ystride_0 = args[0].stencil->stride[1];

//  call kernel wrapper function, passing in pointers to data
    if (x_size > 0 && y_size > 0) {

        ops_ops_krnl_interior_init<<<grid, tblock >>> (
                   (float *)p_a[0], xstride_0, ystride_0, 
                   arg_idx[0], arg_idx[1], 
                   *(float *)arg2.data, 
                   *(float *)arg3.data, 
                   x_size, y_size);

    }

    cutilSafeCall(block->instance->ostream(), cudaGetLastError());

    if(block->instance->OPS_diags > 1) {
        cutilSafeCall(block->instance->ostream(), cudaDeviceSynchronize());
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[3].time += __t1 - __t2;
    }

#ifndef OPS_LAZY
    ops_set_dirtybit_device(args, 4);
    ops_set_halo_dirtybit3(&args[0], range);
#endif

    if (block->instance->OPS_diags > 1) {
//      ====================
//      Update kernel record
//      ====================
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[3].mpi_time += __t2 - __t1;
        block->instance->OPS_kernels[3].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg0);
    }
}

#ifdef OPS_LAZY
void ops_par_loop_ops_krnl_interior_init(
    const char * name,
    ops_block block,
    int dim,
    int * range,
    ops_arg arg0,
    ops_arg arg1,
    ops_arg arg2,
    ops_arg arg3
    )
{
    ops_arg args[4];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;

    create_kerneldesc_and_enque(name, "ops_krnl_interior_init", args, 4, 3, dim, 1, range, block, ops_par_loop_ops_krnl_interior_init_execute);
}
#endif
