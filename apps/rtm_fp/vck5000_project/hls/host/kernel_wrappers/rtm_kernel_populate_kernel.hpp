// Auto-generated at 2025-07-29 03:19:39.199482 by ops-translator
#pragma once 
#include <ops_hls_rt_support.h>

void inline kernel_rtm_kernel_populate_core(
        const int* dispx,
        const int* dispy,
        const int* dispz,
        const int * idx,
        float* arg0_0,
        float* arg1_0
)
{

    float x = 1.0*((float)(idx[0]-nx/2)/nx);
    float y = 1.0*((float)(idx[1]-ny/2)/ny);
    float z = 1.0*((float)(idx[2]-nz/2)/nz);

    const float C = 1.0f;
    const float r0 = 0.001f;
    arg0_0[0] = 1000.0f; 
    arg0_0[1] = 0.001f; 
    unsigned short index = idx[0] + grid_size_x * idx[1] + grid_size_x * grid_size_y * idx[2];
    index =  2 * index;
    float val_0 = index;
    float val_1 = index + 1;
    arg1_0[0] = val_0; 
    arg1_0[1] = val_1; 

}

void ops_par_loop_rtm_kernel_populate(ops::hls::Block dummyBlock, int dim, int* ops_range,
            const int* disps0,
            const int* disps1,
            const int* disps2,
            ops::hls::Grid<float>& arg4,
            ops::hls::Grid<float>& arg5
)

{
    ops::hls::AccessRange range;
    opsRange2hlsRange(dim, ops_range, range, arg4.originalProperty);
    constexpr int arg4_0_stencil_offset[] = { 0, 0, 0 };
    constexpr int arg5_0_stencil_offset[] = { 0, 0, 0 };
    getGrid(arg4);
    getGrid(arg5);

    for (unsigned short k = range.start[2]; k < range.end[2]; k++)
    {
        for (unsigned short j = range.start[1]; j < range.end[1]; j++)
        {
            for (unsigned short i = range.start[0]; i < range.end[0]; i++)
            {
                ops::hls::IdxType idx({i - arg4.originalProperty.d_m[0], j - arg4.originalProperty.d_m[1], k - arg4.originalProperty.d_m[2]});
                kernel_rtm_kernel_populate_core(
                    disps0,
                    disps1,
                    disps2,
                    idx,
                    &arg4.hostBuffer[getOffset(arg4_0_stencil_offset, arg4.originalProperty, i , j, k)],
                    &arg5.hostBuffer[getOffset(arg5_0_stencil_offset, arg5.originalProperty, i , j, k)]
                );
            }
        }
    }

    arg4.isHostBufDirty = true;
    arg5.isHostBufDirty = true;

}
