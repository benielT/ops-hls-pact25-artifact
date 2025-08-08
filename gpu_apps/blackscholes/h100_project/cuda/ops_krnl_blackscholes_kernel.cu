// Auto-generated at 2025-08-08 15:43:35.763485 by ops-translator

__constant__ int dims_ops_krnl_blackscholes[5][1];
static int dims_ops_krnl_blackscholes_h[5][1] = {{0}};

//  =============
//  User function
//  =============
__device__ void ops_krnl_blackscholes_gpu(ACC<float> &current, const ACC<float> &next, const ACC<float> &a, const ACC<float> &b, const ACC<float> &c) {

    current(0,0) = a(0,0) * next(-1,0) + b(0,0) * next(0,0) + c(0,0) * next(1,0);

}

//  ============================
//  Cuda kernel wrapper function
//  ============================
__global__ void ops_ops_krnl_blackscholes(float* __restrict arg0, int xstride_0, int ystride_0, 
float* __restrict arg1, int xstride_1, int ystride_1, 
float* __restrict arg2, int xstride_2, int ystride_2, 
float* __restrict arg3, int xstride_3, int ystride_3, 
float* __restrict arg4, int xstride_4, int ystride_4, 
int size0, int size1) {

    int idx_y = blockDim.y * blockIdx.y + threadIdx.y;
    int idx_x = blockDim.x * blockIdx.x + threadIdx.x;

    arg0 += idx_x * xstride_0*1 + idx_y * ystride_0*1 * dims_ops_krnl_blackscholes[0][0];
    arg1 += idx_x * xstride_1*1 + idx_y * ystride_1*1 * dims_ops_krnl_blackscholes[1][0];
    arg2 += idx_x * xstride_2*1 + idx_y * ystride_2*1 * dims_ops_krnl_blackscholes[2][0];
    arg3 += idx_x * xstride_3*1 + idx_y * ystride_3*1 * dims_ops_krnl_blackscholes[3][0];
    arg4 += idx_x * xstride_4*1 + idx_y * ystride_4*1 * dims_ops_krnl_blackscholes[4][0];

    if(idx_x < size0 && idx_y < size1) {

        ACC<float> argp0(dims_ops_krnl_blackscholes[0][0], arg0);
        const ACC<float> argp1(dims_ops_krnl_blackscholes[1][0], arg1);
        const ACC<float> argp2(dims_ops_krnl_blackscholes[2][0], arg2);
        const ACC<float> argp3(dims_ops_krnl_blackscholes[3][0], arg3);
        const ACC<float> argp4(dims_ops_krnl_blackscholes[4][0], arg4);

        ops_krnl_blackscholes_gpu(argp0, argp1, argp2, argp3, argp4);

    }// End of cuda index in_range check

}// End of cuda kernel wrapper function

//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_ops_krnl_blackscholes(
    const char * name,
    ops_block block,
    int dim,
    int *range,
    ops_arg arg0,
    ops_arg arg1,
    ops_arg arg2,
    ops_arg arg3,
    ops_arg arg4
)
{ 
#else
void ops_par_loop_ops_krnl_blackscholes_execute(ops_kernel_descriptor *desc)
{
    ops_block block = desc->block;
    int dim = desc->dim;
    int *range = desc->range;
    ops_arg arg0 = desc->args[0];
    ops_arg arg1 = desc->args[1];
    ops_arg arg2 = desc->args[2];
    ops_arg arg3 = desc->args[3];
    ops_arg arg4 = desc->args[4];
#endif

//  ======
//  Timing
//  ======
    double __t1, __t2, __c1, __c2;

    ops_arg args[5];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;

#if defined(CHECKPOINTING) && !defined(OPS_LAZY)
    if (!ops_checkpointing_before(args, 5, range, 6)) return;
#endif

    if (block->instance->OPS_diags > 1)
    {
        ops_timing_realloc(block->instance, 6, "ops_krnl_blackscholes");
        block->instance->OPS_kernels[6].count++;
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
    if (compute_ranges(args, 5, block, range, start_indx, end_indx, arg_idx) < 0) return;
#endif

    int xdim0 = args[0].dat->size[0];
    int xdim1 = args[1].dat->size[0];
    int xdim2 = args[2].dat->size[0];
    int xdim3 = args[3].dat->size[0];
    int xdim4 = args[4].dat->size[0];

    if (xdim0 != dims_ops_krnl_blackscholes_h[0][0] || xdim1 != dims_ops_krnl_blackscholes_h[1][0] || xdim2 != dims_ops_krnl_blackscholes_h[2][0] || xdim3 != dims_ops_krnl_blackscholes_h[3][0] || xdim4 != dims_ops_krnl_blackscholes_h[4][0]) {
        dims_ops_krnl_blackscholes_h[0][0] = xdim0;
        dims_ops_krnl_blackscholes_h[1][0] = xdim1;
        dims_ops_krnl_blackscholes_h[2][0] = xdim2;
        dims_ops_krnl_blackscholes_h[3][0] = xdim3;
        dims_ops_krnl_blackscholes_h[4][0] = xdim4;

        cutilSafeCall(block->instance->ostream(), cudaMemcpyToSymbol( dims_ops_krnl_blackscholes, dims_ops_krnl_blackscholes_h, sizeof(dims_ops_krnl_blackscholes)));
    }

    int x_size = MAX(0,end_indx[0]-start_indx[0]);
    int y_size = MAX(0,end_indx[1]-start_indx[1]);

    dim3 grid( (x_size-1)/block->instance->OPS_block_size_x + 1, (y_size-1)/block->instance->OPS_block_size_y + 1, 1);

    dim3 tblock(block->instance->OPS_block_size_x,block->instance->OPS_block_size_y,block->instance->OPS_block_size_z);

    long long int dat0 = (block->instance->OPS_soa ? args[0].dat->type_size : args[0].dat->elem_size);
    long long int dat1 = (block->instance->OPS_soa ? args[1].dat->type_size : args[1].dat->elem_size);
    long long int dat2 = (block->instance->OPS_soa ? args[2].dat->type_size : args[2].dat->elem_size);
    long long int dat3 = (block->instance->OPS_soa ? args[3].dat->type_size : args[3].dat->elem_size);
    long long int dat4 = (block->instance->OPS_soa ? args[4].dat->type_size : args[4].dat->elem_size);

    char *p_a[5];

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

    long long int base3 = args[3].dat->base_offset + dat3 * 1 * (start_indx[0] * args[3].stencil->stride[0]);
    base3 = base3 + dat3 * 
                     args[3].dat->size[0] * 
                     (start_indx[1] * args[3].stencil->stride[1]);
    p_a[3] = (char *)args[3].data_d + base3;

    long long int base4 = args[4].dat->base_offset + dat4 * 1 * (start_indx[0] * args[4].stencil->stride[0]);
    base4 = base4 + dat4 * 
                     args[4].dat->size[0] * 
                     (start_indx[1] * args[4].stencil->stride[1]);
    p_a[4] = (char *)args[4].data_d + base4;

//  =============
//  Halo exchange
//  =============
#ifndef OPS_LAZY
    ops_H_D_exchanges_device(args, 5);
    ops_halo_exchanges(args, 5, range);
#endif

    if (block->instance->OPS_diags > 1) { 
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[6].mpi_time += __t2 - __t1;
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
    int xstride_3, ystride_3;
    xstride_3 = args[3].stencil->stride[0];    ystride_3 = args[3].stencil->stride[1];
    int xstride_4, ystride_4;
    xstride_4 = args[4].stencil->stride[0];    ystride_4 = args[4].stencil->stride[1];

//  call kernel wrapper function, passing in pointers to data
    if (x_size > 0 && y_size > 0) {

        ops_ops_krnl_blackscholes<<<grid, tblock >>> (
                   (float *)p_a[0], xstride_0, ystride_0, 
                   (float *)p_a[1], xstride_1, ystride_1, 
                   (float *)p_a[2], xstride_2, ystride_2, 
                   (float *)p_a[3], xstride_3, ystride_3, 
                   (float *)p_a[4], xstride_4, ystride_4, 
                   x_size, y_size);

    }

    cutilSafeCall(block->instance->ostream(), cudaGetLastError());

    if(block->instance->OPS_diags > 1) {
        cutilSafeCall(block->instance->ostream(), cudaDeviceSynchronize());
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[6].time += __t1 - __t2;
    }

#ifndef OPS_LAZY
    ops_set_dirtybit_device(args, 5);
    ops_set_halo_dirtybit3(&args[0], range);
#endif

    if (block->instance->OPS_diags > 1) {
//      ====================
//      Update kernel record
//      ====================
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[6].mpi_time += __t2 - __t1;
        block->instance->OPS_kernels[6].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg0);
        block->instance->OPS_kernels[6].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg1);
        block->instance->OPS_kernels[6].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg2);
        block->instance->OPS_kernels[6].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg3);
        block->instance->OPS_kernels[6].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg4);
    }
}

#ifdef OPS_LAZY
void ops_par_loop_ops_krnl_blackscholes(
    const char * name,
    ops_block block,
    int dim,
    int * range,
    ops_arg arg0,
    ops_arg arg1,
    ops_arg arg2,
    ops_arg arg3,
    ops_arg arg4
    )
{
    ops_arg args[5];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;

    create_kerneldesc_and_enque(name, "ops_krnl_blackscholes", args, 5, 6, dim, 1, range, block, ops_par_loop_ops_krnl_blackscholes_execute);
}
#endif
