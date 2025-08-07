// Auto-generated at 2025-07-28 21:56:24.450820 by ops-translator

#pragma once
#include <ops_hls_kernel_support.h>
#include "common_config.hpp"


extern "C" void datamover_outerloop_0(
        const bool is_loopback,
        const unsigned short range_start_0,
        const unsigned short range_end_0,
        const unsigned short gridSize_0,
        const unsigned int outer_itr,
    //dat_current
        ap_uint<mem_data_width>* arg0,
    //dat_a
        ap_uint<mem_data_width>* arg1,
    //dat_b
        ap_uint<mem_data_width>* arg2,
    //dat_c
        ap_uint<mem_data_width>* arg3,
    //dat_next
        ap_uint<mem_data_width>* arg4,
    //dat_current

        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg0_axis_out,
    //dat_a
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg1_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg1_axis_in,
    //dat_b
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg2_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg2_axis_in,
    //dat_c
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg3_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg3_axis_in,
    //dat_next

        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg4_axis_in
    )
;
