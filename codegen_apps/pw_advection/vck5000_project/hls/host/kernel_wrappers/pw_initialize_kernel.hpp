// Auto-generated at 2025-06-09 09:27:00.856889 by ops-translator
#pragma once 
#include <ops_hls_rt_support.h>

void inline kernel_pw_initialize_core(
        float& arg0_0,
        float& arg1_0,
        float& arg2_0,
        float& arg3_0,
        float& arg4_0,
        float& arg5_0,
        float& arg6_0
)
{

    arg0_0 = 10.0f;
    arg1_0 = 20.0f;
    arg2_0 = 30.0f;
    arg3_0 = 50.0f;
    arg4_0 = 15.0f;
    arg5_0 = 100.0f;
    arg6_0 = 5.0f;

}

void ops_par_loop_pw_initialize(ops::hls::Block dummyBlock, int dim, int* ops_range,
            ops::hls::Grid<float>& arg0,
            ops::hls::Grid<float>& arg1,
            ops::hls::Grid<float>& arg2,
            ops::hls::Grid<float>& arg3,
            ops::hls::Grid<float>& arg4,
            ops::hls::Grid<float>& arg5,
            ops::hls::Grid<float>& arg6
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
    constexpr int arg6_0_stencil_offset[] = { 0, 0, 0 };
    getGrid(arg0);
    getGrid(arg1);
    getGrid(arg2);
    getGrid(arg3);
    getGrid(arg4);
    getGrid(arg5);
    getGrid(arg6);

    for (unsigned short k = range.start[2]; k < range.end[2]; k++)
    {
        for (unsigned short j = range.start[1]; j < range.end[1]; j++)
        {
            for (unsigned short i = range.start[0]; i < range.end[0]; i++)
            {
                kernel_pw_initialize_core(
                    arg0.hostBuffer[getOffset(arg0_0_stencil_offset, arg0.originalProperty, i , j, k)],
                    arg1.hostBuffer[getOffset(arg1_0_stencil_offset, arg1.originalProperty, i , j, k)],
                    arg2.hostBuffer[getOffset(arg2_0_stencil_offset, arg2.originalProperty, i , j, k)],
                    arg3.hostBuffer[getOffset(arg3_0_stencil_offset, arg3.originalProperty, i , j, k)],
                    arg4.hostBuffer[getOffset(arg4_0_stencil_offset, arg4.originalProperty, i , j, k)],
                    arg5.hostBuffer[getOffset(arg5_0_stencil_offset, arg5.originalProperty, i , j, k)],
                    arg6.hostBuffer[getOffset(arg6_0_stencil_offset, arg6.originalProperty, i , j, k)]
                );
            }
        }
    }

    arg0.isHostBufDirty = true;
    arg1.isHostBufDirty = true;
    arg2.isHostBufDirty = true;
    arg3.isHostBufDirty = true;
    arg4.isHostBufDirty = true;
    arg5.isHostBufDirty = true;
    arg6.isHostBufDirty = true;

}
