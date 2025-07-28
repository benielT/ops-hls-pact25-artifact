// Auto-generated at 2025-07-28 21:56:24.034903 by ops-translator
#pragma once 
#include <ops_hls_rt_support.h>

void inline kernel_ops_krnl_const_init_core(
        float& arg0_0,
        const float* constant
)
{

	arg0_0 = *constant;

}

void ops_par_loop_ops_krnl_const_init(ops::hls::Block dummyBlock, int dim, int* ops_range,
            ops::hls::Grid<float>& arg0,
            const float* sMax
)

{
    ops::hls::AccessRange range;
    opsRange2hlsRange(dim, ops_range, range, arg0.originalProperty);
    constexpr int arg0_0_stencil_offset[] = { 0, 0, 0 };
    getGrid(arg0);

            for (unsigned short i = range.start[0]; i < range.end[0]; i++)
            {
                kernel_ops_krnl_const_init_core(
                    arg0.hostBuffer[getOffset(arg0_0_stencil_offset, arg0.originalProperty, i )],
                    sMax
                );
            }

    arg0.isHostBufDirty = true;

}
