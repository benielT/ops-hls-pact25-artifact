// Auto-generated at 2025-08-21 21:06:10.314907 by ops-translator
#pragma once 
#include <ops_hls_rt_support.h>

void inline kernel_kernel_copy_d2_core(
        const float* arg0_0,
        float* arg1_0
)
{

  arg1_0[0] = arg0_0[0];
  arg1_0[1] = arg0_0[1];

}

void ops_par_loop_kernel_copy_d2(ops::hls::Block dummyBlock, int dim, int* ops_range,
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

    for (unsigned short k = range.start[2]; k < range.end[2]; k++)
    {
        for (unsigned short j = range.start[1]; j < range.end[1]; j++)
        {
            for (unsigned short i = range.start[0]; i < range.end[0]; i++)
            {
                kernel_kernel_copy_d2_core(
                    &arg0.hostBuffer[getOffset(arg0_0_stencil_offset, arg0.originalProperty, i , j, k)],
                    &arg1.hostBuffer[getOffset(arg1_0_stencil_offset, arg1.originalProperty, i , j, k)]
                );
            }
        }
    }

    arg1.isHostBufDirty = true;

}
