// Auto-generated at 2025-08-21 21:06:12.762656 by ops-translator
#pragma once
#include "PE_fd3d_pml_kernel1.hpp"
#include "PE_fd3d_pml_kernel2.hpp"
#include "PE_fd3d_pml_kernel2.hpp"
#include "PE_fd3d_pml_kernel3.hpp"

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
        const int disps0,
        const int disps1,
        const int disps2,
        const float dt,
        const float scale1_der1,
        const float scale2_der1,
        const float scale1_der2_1,
        const float scale2_der2_1,
        const float scale1_der2_2,
        const float scale2_der2_2,
        const float scale1_der3,
        const float scale2_der3,
        const float dx,
        const float dy,
        const float dz,
        const float invdx,
        const float invdy,
        const float invdz,
        const int nx,
        const int ny,
        const int nz,
        const int pml_width,
        const int half_order,
        const int order,
    //yy_0_1
        hls::stream <ap_axiu<multidim_axis_data_width_0_yy_0_1, 0, 0, 0>>& arg0_axis_in,
    //rho_mu
        hls::stream <ap_axiu<multidim_axis_data_width_0_rho_mu, 0, 0, 0>>& arg1_axis_in,
        hls::stream <ap_axiu<multidim_axis_data_width_0_rho_mu, 0, 0, 0>>& arg1_axis_out,
    //yy_4_5
        hls::stream <ap_axiu<multidim_axis_data_width_0_yy_4_5, 0, 0, 0>>& arg2_axis_in,
    //yy_2_3
        hls::stream <ap_axiu<multidim_axis_data_width_0_yy_2_3, 0, 0, 0>>& arg3_axis_in,
    //ytemp2_0_1
        hls::stream <ap_axiu<multidim_axis_data_width_0_ytemp2_0_1, 0, 0, 0>>& arg4_axis_out,
    //ytemp2_2_3
        hls::stream <ap_axiu<multidim_axis_data_width_0_ytemp2_2_3, 0, 0, 0>>& arg5_axis_out,
    //ytemp2_4_5
        hls::stream <ap_axiu<multidim_axis_data_width_0_ytemp2_4_5, 0, 0, 0>>& arg6_axis_out
)
;
