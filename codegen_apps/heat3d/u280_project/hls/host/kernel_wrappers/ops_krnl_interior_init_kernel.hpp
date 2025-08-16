// Auto-generated at 2025-08-16 01:02:52.067821 by ops-translator
#pragma once 
#include <ops_hls_rt_support.h>

void inline kernel_ops_krnl_interior_init_core(
        float& arg0_0,
        const int * idx,
        const float* angle_res_x,
        const float* angle_res_y,
        const float* angle_res_z
)
{

	arg0_0 = sin((*angle_res_x) * idx[0]) * sin((*angle_res_y) * idx[1]) * sin((*angle_res_z) * idx[2]);

}

void ops_par_loop_ops_krnl_interior_init(ops::hls::Block dummyBlock, int dim, int* ops_range,
            ops::hls::Grid<float>& arg0,
            const float* angle_res_x,
            const float* angle_res_y,
            const float* angle_res_z
)

{
    ops::hls::AccessRange range;
    opsRange2hlsRange(dim, ops_range, range, arg0.originalProperty);
    constexpr int arg0_0_stencil_offset[] = { 0, 0, 0 };
    getGrid(arg0);

    for (unsigned short bat = 0; bat < dummyBlock.batch_size; bat++)
    {
        for (unsigned short k = range.start[2]; k < range.end[2]; k++)
        {
            for (unsigned short j = range.start[1]; j < range.end[1]; j++)
            {
                for (unsigned short i = range.start[0]; i < range.end[0]; i++)
                {
                    ops::hls::IdxType idx({i - arg0.originalProperty.d_m[0], j - arg0.originalProperty.d_m[1], k - arg0.originalProperty.d_m[2]- (bat * arg0.originalProperty.grid_size[2])});
                    kernel_ops_krnl_interior_init_core(
                        arg0.hostBuffer[getOffset(arg0_0_stencil_offset, arg0.originalProperty, i , j, k)],
                        idx,
                        angle_res_x,
                        angle_res_y,
                        angle_res_z
                    );
                }
            }
        }

        range.start[2] += arg0.originalProperty.grid_size[2];
        range.end[2] += arg0.originalProperty.grid_size[2];
    }

    arg0.isHostBufDirty = true;

}
