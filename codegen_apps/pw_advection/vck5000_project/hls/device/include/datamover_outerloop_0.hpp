// Auto-generated at 2025-06-09 09:27:01.312834 by ops-translator

#pragma once
#include <ops_hls_kernel_support.h>
#include "common_config.hpp"


extern "C" void datamover_outerloop_0(
        const bool is_loopback,
        const unsigned short range_start_0,
        const unsigned short range_end_0,
        const unsigned short range_start_1,
        const unsigned short range_end_1,
        const unsigned short range_start_2,
        const unsigned short range_end_2,
        const unsigned short gridSize_0,
        const unsigned short gridSize_1,
        const unsigned short gridSize_2,
        const unsigned int outer_itr,
    //u
        ap_uint<mem_data_width>* arg0,
    //tzc1
        ap_uint<mem_data_width>* arg1,
    //tzc2
        ap_uint<mem_data_width>* arg2,
    //tzd1
        ap_uint<mem_data_width>* arg3,
    //tzd2
        ap_uint<mem_data_width>* arg4,
    //w
        ap_uint<mem_data_width>* arg5,
    //v
        ap_uint<mem_data_width>* arg6,
    //u2
        ap_uint<mem_data_width>* arg7,
    //v2
        ap_uint<mem_data_width>* arg8,
    //w2
        ap_uint<mem_data_width>* arg9,
    //u

        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg0_axis_out,
    //tzc1
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg1_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg1_axis_in,
    //tzc2
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg2_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg2_axis_in,
    //tzd1
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg3_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg3_axis_in,
    //tzd2
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg4_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg4_axis_in,
    //w

        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg5_axis_out,
    //v

        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg6_axis_out,
    //u2

        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg7_axis_in,
    //v2

        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg8_axis_in,
    //w2

        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg9_axis_in
    )
;
