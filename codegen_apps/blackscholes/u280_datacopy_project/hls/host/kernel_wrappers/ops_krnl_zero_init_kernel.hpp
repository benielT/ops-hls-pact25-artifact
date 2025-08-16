// Auto-generated at 2025-08-15 14:52:28.966645 by ops-translator
#pragma once 
#include <ops_hls_rt_support.h>

void inline kernel_ops_krnl_zero_init_core(
        float& arg0_0
)
{

	arg0_0 = 0.0;

}

void ops_par_loop_ops_krnl_zero_init(ops::hls::Block dummyBlock, int dim, int* ops_range,
            ops::hls::Grid<float>& arg0
)

{
    ops::hls::AccessRange range;
    opsRange2hlsRange(dim, ops_range, range, arg0.originalProperty);
    constexpr int arg0_0_stencil_offset[] = { 0, 0, 0 };
    getGrid(arg0);

    for (unsigned short bat = 0; bat < dummyBlock.batch_size; bat++)
    {
                for (unsigned short i = range.start[0]; i < range.end[0]; i++)
                {
                    kernel_ops_krnl_zero_init_core(
                        arg0.hostBuffer[getOffset(arg0_0_stencil_offset, arg0.originalProperty, i )]
                    );
                }

        range.start[0] += arg0.originalProperty.grid_size[0];
        range.end[0] += arg0.originalProperty.grid_size[0];
    }

    arg0.isHostBufDirty = true;

}
