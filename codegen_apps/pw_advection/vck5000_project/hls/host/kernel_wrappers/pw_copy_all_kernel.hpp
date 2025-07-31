// Auto-generated at 2025-06-09 09:27:00.861111 by ops-translator
#pragma once 
#include <ops_hls_rt_support.h>

void inline kernel_pw_copy_all_core(
        const float& arg0_0,
        const float& arg1_0,
        const float& arg2_0,
        float& arg3_0,
        float& arg4_0,
        float& arg5_0
)
{

    arg3_0 = arg0_0;
    arg4_0 = arg1_0;
    arg5_0 = arg2_0;

}

void ops_par_loop_pw_copy_all(ops::hls::Block dummyBlock, int dim, int* ops_range,
            ops::hls::Grid<float>& arg0,
            ops::hls::Grid<float>& arg1,
            ops::hls::Grid<float>& arg2,
            ops::hls::Grid<float>& arg3,
            ops::hls::Grid<float>& arg4,
            ops::hls::Grid<float>& arg5
)

{
    ops::hls::AccessRange range;
    opsRange2hlsRange(dim, ops_range, range, arg0.originalProperty);
    constexpr int arg0_0_stencil_offset[] = { 0, 0, 0 };
    constexpr int arg1_0_stencil_offset[] = { 0, 0, 0 };
    constexpr int arg2_0_stencil_offset[] = { 0, 0, 0 };
    constexpr int arg3_0_stencil_offset[] = { 0, 0, 0 };
    constexpr int arg4_0_stencil_offset[] = { 0, 0, 0 };
    constexpr int arg5_0_stencil_offset[] = { 0, 0, 0 };
    getGrid(arg0);
    getGrid(arg1);
    getGrid(arg2);
    getGrid(arg3);
    getGrid(arg4);
    getGrid(arg5);

    for (unsigned short k = range.start[2]; k < range.end[2]; k++)
    {
        for (unsigned short j = range.start[1]; j < range.end[1]; j++)
        {
            for (unsigned short i = range.start[0]; i < range.end[0]; i++)
            {
                kernel_pw_copy_all_core(
                    arg0.hostBuffer[getOffset(arg0_0_stencil_offset, arg0.originalProperty, i , j, k)],
                    arg1.hostBuffer[getOffset(arg1_0_stencil_offset, arg1.originalProperty, i , j, k)],
                    arg2.hostBuffer[getOffset(arg2_0_stencil_offset, arg2.originalProperty, i , j, k)],
                    arg3.hostBuffer[getOffset(arg3_0_stencil_offset, arg3.originalProperty, i , j, k)],
                    arg4.hostBuffer[getOffset(arg4_0_stencil_offset, arg4.originalProperty, i , j, k)],
                    arg5.hostBuffer[getOffset(arg5_0_stencil_offset, arg5.originalProperty, i , j, k)]
                );
            }
        }
    }

    arg3.isHostBufDirty = true;
    arg4.isHostBufDirty = true;
    arg5.isHostBufDirty = true;

}
