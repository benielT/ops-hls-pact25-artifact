// Auto-generated at 2025-07-29 03:19:41.438601 by ops-translator

#pragma once
#include <ops_hls_kernel_support.h>
#include "common_config.hpp"

constexpr unsigned short multidim_vector_factor_0_rho_mu = vector_factor * 2;
constexpr unsigned short multidim_axis_data_width_0_rho_mu = data_width * multidim_vector_factor_0_rho_mu;
constexpr unsigned short multidim_vector_factor_0_yy_0_1 = vector_factor * 2;
constexpr unsigned short multidim_axis_data_width_0_yy_0_1 = data_width * multidim_vector_factor_0_yy_0_1;
constexpr unsigned short multidim_vector_factor_0_yy_2_3 = vector_factor * 2;
constexpr unsigned short multidim_axis_data_width_0_yy_2_3 = data_width * multidim_vector_factor_0_yy_2_3;
constexpr unsigned short multidim_vector_factor_0_yy_4_5 = vector_factor * 2;
constexpr unsigned short multidim_axis_data_width_0_yy_4_5 = data_width * multidim_vector_factor_0_yy_4_5;
constexpr unsigned short multidim_vector_factor_0_ytemp1_0_1 = vector_factor * 2;
constexpr unsigned short multidim_axis_data_width_0_ytemp1_0_1 = data_width * multidim_vector_factor_0_ytemp1_0_1;
constexpr unsigned short multidim_vector_factor_0_ytemp1_2_3 = vector_factor * 2;
constexpr unsigned short multidim_axis_data_width_0_ytemp1_2_3 = data_width * multidim_vector_factor_0_ytemp1_2_3;
constexpr unsigned short multidim_vector_factor_0_ytemp1_4_5 = vector_factor * 2;
constexpr unsigned short multidim_axis_data_width_0_ytemp1_4_5 = data_width * multidim_vector_factor_0_ytemp1_4_5;
constexpr unsigned short multidim_vector_factor_0_yy_sum_0_1 = vector_factor * 2;
constexpr unsigned short multidim_axis_data_width_0_yy_sum_0_1 = data_width * multidim_vector_factor_0_yy_sum_0_1;
constexpr unsigned short multidim_vector_factor_0_yy_sum_2_3 = vector_factor * 2;
constexpr unsigned short multidim_axis_data_width_0_yy_sum_2_3 = data_width * multidim_vector_factor_0_yy_sum_2_3;
constexpr unsigned short multidim_vector_factor_0_yy_sum_4_5 = vector_factor * 2;
constexpr unsigned short multidim_axis_data_width_0_yy_sum_4_5 = data_width * multidim_vector_factor_0_yy_sum_4_5;
constexpr unsigned short multidim_vector_factor_0_ytemp2_0_1 = vector_factor * 2;
constexpr unsigned short multidim_axis_data_width_0_ytemp2_0_1 = data_width * multidim_vector_factor_0_ytemp2_0_1;
constexpr unsigned short multidim_vector_factor_0_ytemp2_2_3 = vector_factor * 2;
constexpr unsigned short multidim_axis_data_width_0_ytemp2_2_3 = data_width * multidim_vector_factor_0_ytemp2_2_3;
constexpr unsigned short multidim_vector_factor_0_ytemp2_4_5 = vector_factor * 2;
constexpr unsigned short multidim_axis_data_width_0_ytemp2_4_5 = data_width * multidim_vector_factor_0_ytemp2_4_5;

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
    //yy_0_1
        ap_uint<mem_data_width>* arg0,
    //rho_mu
        ap_uint<mem_data_width>* arg1,
    //yy_4_5
        ap_uint<mem_data_width>* arg2,
    //yy_2_3
        ap_uint<mem_data_width>* arg3,
    //ytemp2_0_1
        ap_uint<mem_data_width>* arg4,
    //ytemp2_2_3
        ap_uint<mem_data_width>* arg5,
    //ytemp2_4_5
        ap_uint<mem_data_width>* arg6,
    //yy_0_1

        hls::stream <ap_axiu<multidim_axis_data_width_0_yy_0_1,0,0,0>>& arg0_axis_out,
    //rho_mu
        hls::stream <ap_axiu<multidim_axis_data_width_0_rho_mu,0,0,0>>& arg1_axis_out,
        hls::stream <ap_axiu<multidim_axis_data_width_0_rho_mu,0,0,0>>& arg1_axis_in,
    //yy_4_5

        hls::stream <ap_axiu<multidim_axis_data_width_0_yy_4_5,0,0,0>>& arg2_axis_out,
    //yy_2_3

        hls::stream <ap_axiu<multidim_axis_data_width_0_yy_2_3,0,0,0>>& arg3_axis_out,
    //ytemp2_0_1

        hls::stream <ap_axiu<multidim_axis_data_width_0_ytemp2_0_1,0,0,0>>& arg4_axis_in,
    //ytemp2_2_3

        hls::stream <ap_axiu<multidim_axis_data_width_0_ytemp2_2_3,0,0,0>>& arg5_axis_in,
    //ytemp2_4_5

        hls::stream <ap_axiu<multidim_axis_data_width_0_ytemp2_4_5,0,0,0>>& arg6_axis_in
    )
;
