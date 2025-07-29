// Auto-generated at 2025-06-09 09:27:01.316396 by ops-translator
#pragma once
#include "PE_pw_advection_opt_kernel.hpp"





extern "C" void kernel_outerloop_0(
        const unsigned short slr_region,
        const unsigned int outer_itr,
        const unsigned short stencilConfig_grid_size_0,
        const unsigned short stencilConfig_grid_size_1,
        const unsigned short stencilConfig_grid_size_2,
        const unsigned short stencilConfig_dim,
        const unsigned int stencilConfig_total_itr,
        const unsigned short stencilConfig_lower_limit_0,
        const unsigned short stencilConfig_lower_limit_1,
        const unsigned short stencilConfig_lower_limit_2,
        const unsigned short stencilConfig_upper_limit_0,
        const unsigned short stencilConfig_upper_limit_1,
        const unsigned short stencilConfig_upper_limit_2,
        const unsigned short stencilConfig_outer_loop_limit,
    //u
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg0_axis_in,
    //tzc1
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg1_axis_in,
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg1_axis_out,
    //tzc2
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg2_axis_in,
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg2_axis_out,
    //tzd1
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg3_axis_in,
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg3_axis_out,
    //tzd2
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg4_axis_in,
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg4_axis_out,
    //w
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg5_axis_in,
    //v
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg6_axis_in,
    //u2
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg7_axis_out,
    //v2
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg8_axis_out,
    //w2
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg9_axis_out
)
;
