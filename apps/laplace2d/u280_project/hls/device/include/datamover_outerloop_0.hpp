// Auto-generated at 2025-07-28 20:05:39.020173 by ops-translator

#pragma once
#include <ops_hls_kernel_support.h>
#include "common_config.hpp"


extern "C" void datamover_outerloop_0(
        const bool is_loopback,
        const unsigned short range_start_0,
        const unsigned short range_end_0,
        const unsigned short range_start_1,
        const unsigned short range_end_1,
        const unsigned short gridSize_0,
        const unsigned short gridSize_1,
        const unsigned int outer_itr,
    //d_A
        ap_uint<mem_data_width>* arg0,
    //d_Anew
        ap_uint<mem_data_width>* arg1,
    //d_A

        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg0_axis_out,
    //d_Anew

        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg1_axis_in
    )
;
