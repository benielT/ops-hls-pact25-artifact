// Auto-generated at 2025-07-28 21:56:24.455933 by ops-translator
#pragma once
#include "PE_ops_krnl_blackscholes.hpp"





extern "C" void kernel_outerloop_0(
        const unsigned short slr_region,
        const unsigned int outer_itr,
        const unsigned short stencilConfig_grid_size_0,
        const unsigned short stencilConfig_dim,
        const unsigned int stencilConfig_total_itr,
        const unsigned short stencilConfig_lower_limit_0,
        const unsigned short stencilConfig_upper_limit_0,
        const unsigned short stencilConfig_outer_loop_limit,
    //dat_current
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg0_axis_in,
    //dat_a
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg1_axis_in,
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg1_axis_out,
    //dat_b
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg2_axis_in,
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg2_axis_out,
    //dat_c
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg3_axis_in,
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg3_axis_out,
    //dat_next
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg4_axis_out
)
;
