// Auto-generated at 2025-07-28 21:56:24.050629 by ops-translator
#pragma once 
#include <ops_hls_rt_support.h>

void inline kernel_ops_krnl_calc_coefficient_core(
        float& arg0_0,
        float& arg1_0,
        float& arg2_0,
        const float* alpha,
        const float* beta,
        const int * idx
)
{

	arg0_0 = 0.5 * ((*alpha) * (idx[0] + 1) * (idx[0] + 1) - (*beta) * (idx[0] + 1));
	arg1_0 = 1 - (*alpha) * (idx[0] + 1) * (idx[0] + 1) - (*beta);
	arg2_0 = 0.5 * ((*alpha) * (idx[0] + 1) * (idx[0] + 1) + (*beta) * (idx[0] + 1));

}

void ops_par_loop_ops_krnl_calc_coefficient(ops::hls::Block dummyBlock, int dim, int* ops_range,
            ops::hls::Grid<float>& arg0,
            ops::hls::Grid<float>& arg1,
            ops::hls::Grid<float>& arg2,
            const float* alpha,
            const float* beta
)

{
    ops::hls::AccessRange range;
    opsRange2hlsRange(dim, ops_range, range, arg0.originalProperty);
    constexpr int arg0_0_stencil_offset[] = { 0, 0, 0 };
    constexpr int arg1_0_stencil_offset[] = { 0, 0, 0 };
    constexpr int arg2_0_stencil_offset[] = { 0, 0, 0 };
    getGrid(arg0);
    getGrid(arg1);
    getGrid(arg2);

            for (unsigned short i = range.start[0]; i < range.end[0]; i++)
            {
                ops::hls::IdxType idx({i - arg0.originalProperty.d_m[0], 0, 0});
                kernel_ops_krnl_calc_coefficient_core(
                    arg0.hostBuffer[getOffset(arg0_0_stencil_offset, arg0.originalProperty, i )],
                    arg1.hostBuffer[getOffset(arg1_0_stencil_offset, arg1.originalProperty, i )],
                    arg2.hostBuffer[getOffset(arg2_0_stencil_offset, arg2.originalProperty, i )],
                    alpha,
                    beta,
                    idx
                );
            }

    arg0.isHostBufDirty = true;
    arg1.isHostBufDirty = true;
    arg2.isHostBufDirty = true;

}
