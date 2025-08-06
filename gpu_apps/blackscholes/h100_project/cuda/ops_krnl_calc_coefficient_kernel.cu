// Auto-generated at 2025-08-06 12:35:43.468666 by ops-translator

__constant__ int dims_ops_krnl_calc_coefficient[6][1];
static int dims_ops_krnl_calc_coefficient_h[6][1] = {{0}};

//  =============
//  User function
//  =============
__device__ void ops_krnl_calc_coefficient_gpu(ACC<float> &a, ACC<float> &b, ACC<float> &c, const float *alpha, const float *beta, const int *idx) {

    a(0,0) = 0.5 * ((*alpha) * (idx[0] + 1) * (idx[0] + 1) - (*beta) * (idx[0] + 1));
	b(0,0) = 1 - (*alpha) * (idx[0] + 1) * (idx[0] + 1) - (*beta);
	c(0,0) = 0.5 * ((*alpha) * (idx[0] + 1) * (idx[0] + 1) + (*beta) * (idx[0] + 1));

}

//  ============================
//  Cuda kernel wrapper function
//  ============================
__global__ void ops_ops_krnl_calc_coefficient(float* __restrict arg0, int xstride_0, int ystride_0, 
float* __restrict arg1, int xstride_1, int ystride_1, 
float* __restrict arg2, int xstride_2, int ystride_2, 
const float arg3, 
const float arg4, 
int arg_idx0, int arg_idx1, 
int size0, int size1) {

    int idx_y = blockDim.y * blockIdx.y + threadIdx.y;
    int idx_x = blockDim.x * blockIdx.x + threadIdx.x;

    int arg_idx[2];
    arg_idx[0] = arg_idx0+idx_x;
    arg_idx[1] = arg_idx1+idx_y;

    arg0 += idx_x * xstride_0*1 + idx_y * ystride_0*1 * dims_ops_krnl_calc_coefficient[0][0];
    arg1 += idx_x * xstride_1*1 + idx_y * ystride_1*1 * dims_ops_krnl_calc_coefficient[1][0];
    arg2 += idx_x * xstride_2*1 + idx_y * ystride_2*1 * dims_ops_krnl_calc_coefficient[2][0];

    if(idx_x < size0 && idx_y < size1) {

        ACC<float> argp0(dims_ops_krnl_calc_coefficient[0][0], arg0);
        ACC<float> argp1(dims_ops_krnl_calc_coefficient[1][0], arg1);
        ACC<float> argp2(dims_ops_krnl_calc_coefficient[2][0], arg2);

        ops_krnl_calc_coefficient_gpu(argp0, argp1, argp2, &arg3, &arg4, arg_idx);

    }// End of cuda index in_range check

}// End of cuda kernel wrapper function

//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_ops_krnl_calc_coefficient(
    const char * name,
    ops_block block,
    int dim,
    int *range,
    ops_arg arg0,
    ops_arg arg1,
    ops_arg arg2,
    ops_arg arg3,
    ops_arg arg4,
    ops_arg arg5
)
{ 
#else
void ops_par_loop_ops_krnl_calc_coefficient_execute(ops_kernel_descriptor *desc)
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
#endif

//  ======
//  Timing
//  ======
    double __t1, __t2, __c1, __c2;

    ops_arg args[6];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;
    args[5] = arg5;

#if defined(CHECKPOINTING) && !defined(OPS_LAZY)
    if (!ops_checkpointing_before(args, 6, range, 5)) return;
#endif

    if (block->instance->OPS_diags > 1)
    {
        ops_timing_realloc(block->instance, 5, "ops_krnl_calc_coefficient");
        block->instance->OPS_kernels[5].count++;
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
    if (compute_ranges(args, 6, block, range, start_indx, end_indx, arg_idx) < 0) return;
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
    int xdim1 = args[1].dat->size[0];
    int xdim2 = args[2].dat->size[0];

    if (xdim0 != dims_ops_krnl_calc_coefficient_h[0][0] || xdim1 != dims_ops_krnl_calc_coefficient_h[1][0] || xdim2 != dims_ops_krnl_calc_coefficient_h[2][0]) {
        dims_ops_krnl_calc_coefficient_h[0][0] = xdim0;
        dims_ops_krnl_calc_coefficient_h[1][0] = xdim1;
        dims_ops_krnl_calc_coefficient_h[2][0] = xdim2;

        cutilSafeCall(block->instance->ostream(), cudaMemcpyToSymbol( dims_ops_krnl_calc_coefficient, dims_ops_krnl_calc_coefficient_h, sizeof(dims_ops_krnl_calc_coefficient)));
    }

    int x_size = MAX(0,end_indx[0]-start_indx[0]);
    int y_size = MAX(0,end_indx[1]-start_indx[1]);

    dim3 grid( (x_size-1)/block->instance->OPS_block_size_x + 1, (y_size-1)/block->instance->OPS_block_size_y + 1, 1);

    dim3 tblock(block->instance->OPS_block_size_x,block->instance->OPS_block_size_y,block->instance->OPS_block_size_z);

    long long int dat0 = (block->instance->OPS_soa ? args[0].dat->type_size : args[0].dat->elem_size);
    long long int dat1 = (block->instance->OPS_soa ? args[1].dat->type_size : args[1].dat->elem_size);
    long long int dat2 = (block->instance->OPS_soa ? args[2].dat->type_size : args[2].dat->elem_size);

    char *p_a[6];

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

    long long int base2 = args[2].dat->base_offset + dat2 * 1 * (start_indx[0] * args[2].stencil->stride[0]);
    base2 = base2 + dat2 * 
                     args[2].dat->size[0] * 
                     (start_indx[1] * args[2].stencil->stride[1]);
    p_a[2] = (char *)args[2].data_d + base2;

//  =============
//  Halo exchange
//  =============
#ifndef OPS_LAZY
    ops_H_D_exchanges_device(args, 6);
    ops_halo_exchanges(args, 6, range);
#endif

    if (block->instance->OPS_diags > 1) { 
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[5].mpi_time += __t2 - __t1;
    }

//  ==========================================================
//  ops_dat strides for offset calculation in wrapper function
//  ==========================================================
    int xstride_0, ystride_0;
    xstride_0 = args[0].stencil->stride[0];    ystride_0 = args[0].stencil->stride[1];
    int xstride_1, ystride_1;
    xstride_1 = args[1].stencil->stride[0];    ystride_1 = args[1].stencil->stride[1];
    int xstride_2, ystride_2;
    xstride_2 = args[2].stencil->stride[0];    ystride_2 = args[2].stencil->stride[1];

//  call kernel wrapper function, passing in pointers to data
    if (x_size > 0 && y_size > 0) {

        ops_ops_krnl_calc_coefficient<<<grid, tblock >>> (
                   (float *)p_a[0], xstride_0, ystride_0, 
                   (float *)p_a[1], xstride_1, ystride_1, 
                   (float *)p_a[2], xstride_2, ystride_2, 
                   *(float *)arg3.data, 
                   *(float *)arg4.data, 
                   arg_idx[0], arg_idx[1], 
                   x_size, y_size);

    }

    cutilSafeCall(block->instance->ostream(), cudaGetLastError());

    if(block->instance->OPS_diags > 1) {
        cutilSafeCall(block->instance->ostream(), cudaDeviceSynchronize());
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[5].time += __t1 - __t2;
    }

#ifndef OPS_LAZY
    ops_set_dirtybit_device(args, 6);
    ops_set_halo_dirtybit3(&args[0], range);
    ops_set_halo_dirtybit3(&args[1], range);
    ops_set_halo_dirtybit3(&args[2], range);
#endif

    if (block->instance->OPS_diags > 1) {
//      ====================
//      Update kernel record
//      ====================
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[5].mpi_time += __t2 - __t1;
        block->instance->OPS_kernels[5].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg0);
        block->instance->OPS_kernels[5].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg1);
        block->instance->OPS_kernels[5].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg2);
    }
}

#ifdef OPS_LAZY
void ops_par_loop_ops_krnl_calc_coefficient(
    const char * name,
    ops_block block,
    int dim,
    int * range,
    ops_arg arg0,
    ops_arg arg1,
    ops_arg arg2,
    ops_arg arg3,
    ops_arg arg4,
    ops_arg arg5
    )
{
    ops_arg args[6];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;
    args[5] = arg5;

    create_kerneldesc_and_enque(name, "ops_krnl_calc_coefficient", args, 6, 5, dim, 1, range, block, ops_par_loop_ops_krnl_calc_coefficient_execute);
}
#endif
