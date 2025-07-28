// Auto-generated at 2025-07-28 21:56:24.045158 by ops-translator
#pragma once 
#include <ops_hls_rt_support.h>

void inline kernel_ops_krnl_copy_core(
        const float& arg0_0,
        float& arg1_0
)
{

	arg1_0 = arg0_0;

}

void ops_par_loop_ops_krnl_copy(ops::hls::Block dummyBlock, int dim, int* ops_range,
            ops::hls::Grid<float>& arg0,
            ops::hls::Grid<float>& arg1
)

{
    ops::hls::AccessRange range;
    opsRange2hlsRange(dim, ops_range, range, arg0.originalProperty);
    constexpr int arg0_0_stencil_offset[] = { 0, 0, 0 };
    constexpr int arg1_0_stencil_offset[] = { 0, 0, 0 };
    getGrid(arg0);
    getGrid(arg1);

            for (unsigned short i = range.start[0]; i < range.end[0]; i++)
            {
                kernel_ops_krnl_copy_core(
                    arg0.hostBuffer[getOffset(arg0_0_stencil_offset, arg0.originalProperty, i )],
                    arg1.hostBuffer[getOffset(arg1_0_stencil_offset, arg1.originalProperty, i )]
                );
            }

    arg1.isHostBufDirty = true;

}
