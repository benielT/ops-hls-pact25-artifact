// Auto-generated at 2025-08-21 21:06:11.786575 by ops-translator

#pragma once
#include <ops_hls_kernel_support.h>
#include "common_config.hpp"

static constexpr unsigned short read_num_points_fd3d_pml_kernel2 = 25;
static constexpr unsigned short read_stencil_size_fd3d_pml_kernel2 = 9;
static constexpr unsigned short read_stencil_dim_fd3d_pml_kernel2 = 3;

static constexpr unsigned short write_num_points_fd3d_pml_kernel2 = 1;
static constexpr unsigned short write_stencil_size_fd3d_pml_kernel2 = 1;
static constexpr unsigned short write_stencil_dim_fd3d_pml_kernel2 = 3;

static constexpr unsigned short vector_factor_fd3d_pml_kernel2_0 = vector_factor * 2;
static constexpr unsigned short axis_data_width_l_fd3d_pml_kernel2_0 = vector_factor_fd3d_pml_kernel2_0 * data_width;
typedef ap_uint<axis_data_width_l_fd3d_pml_kernel2_0> widen_fd3d_pml_kernel2_0_dt;
static constexpr unsigned short vector_factor_fd3d_pml_kernel2_1 = vector_factor * 2;
static constexpr unsigned short axis_data_width_l_fd3d_pml_kernel2_1 = vector_factor_fd3d_pml_kernel2_1 * data_width;
typedef ap_uint<axis_data_width_l_fd3d_pml_kernel2_1> widen_fd3d_pml_kernel2_1_dt;
static constexpr unsigned short vector_factor_fd3d_pml_kernel2_2 = vector_factor * 2;
static constexpr unsigned short axis_data_width_l_fd3d_pml_kernel2_2 = vector_factor_fd3d_pml_kernel2_2 * data_width;
typedef ap_uint<axis_data_width_l_fd3d_pml_kernel2_2> widen_fd3d_pml_kernel2_2_dt;
static constexpr unsigned short vector_factor_fd3d_pml_kernel2_3 = vector_factor * 2;
static constexpr unsigned short axis_data_width_l_fd3d_pml_kernel2_3 = vector_factor_fd3d_pml_kernel2_3 * data_width;
typedef ap_uint<axis_data_width_l_fd3d_pml_kernel2_3> widen_fd3d_pml_kernel2_3_dt;
static constexpr unsigned short vector_factor_fd3d_pml_kernel2_4 = vector_factor * 2;
static constexpr unsigned short axis_data_width_l_fd3d_pml_kernel2_4 = vector_factor_fd3d_pml_kernel2_4 * data_width;
typedef ap_uint<axis_data_width_l_fd3d_pml_kernel2_4> widen_fd3d_pml_kernel2_4_dt;
static constexpr unsigned short vector_factor_fd3d_pml_kernel2_5 = vector_factor * 2;
static constexpr unsigned short axis_data_width_l_fd3d_pml_kernel2_5 = vector_factor_fd3d_pml_kernel2_5 * data_width;
typedef ap_uint<axis_data_width_l_fd3d_pml_kernel2_5> widen_fd3d_pml_kernel2_5_dt;
static constexpr unsigned short vector_factor_fd3d_pml_kernel2_6 = vector_factor * 2;
static constexpr unsigned short axis_data_width_l_fd3d_pml_kernel2_6 = vector_factor_fd3d_pml_kernel2_6 * data_width;
typedef ap_uint<axis_data_width_l_fd3d_pml_kernel2_6> widen_fd3d_pml_kernel2_6_dt;
static constexpr unsigned short vector_factor_fd3d_pml_kernel2_7 = vector_factor * 2;
static constexpr unsigned short axis_data_width_l_fd3d_pml_kernel2_7 = vector_factor_fd3d_pml_kernel2_7 * data_width;
typedef ap_uint<axis_data_width_l_fd3d_pml_kernel2_7> widen_fd3d_pml_kernel2_7_dt;
static constexpr unsigned short vector_factor_fd3d_pml_kernel2_8 = vector_factor * 2;
static constexpr unsigned short axis_data_width_l_fd3d_pml_kernel2_8 = vector_factor_fd3d_pml_kernel2_8 * data_width;
typedef ap_uint<axis_data_width_l_fd3d_pml_kernel2_8> widen_fd3d_pml_kernel2_8_dt;
static constexpr unsigned short vector_factor_fd3d_pml_kernel2_9 = vector_factor * 2;
static constexpr unsigned short axis_data_width_l_fd3d_pml_kernel2_9 = vector_factor_fd3d_pml_kernel2_9 * data_width;
typedef ap_uint<axis_data_width_l_fd3d_pml_kernel2_9> widen_fd3d_pml_kernel2_9_dt;
static constexpr unsigned short vector_factor_fd3d_pml_kernel2_10 = vector_factor * 2;
static constexpr unsigned short axis_data_width_l_fd3d_pml_kernel2_10 = vector_factor_fd3d_pml_kernel2_10 * data_width;
typedef ap_uint<axis_data_width_l_fd3d_pml_kernel2_10> widen_fd3d_pml_kernel2_10_dt;
static constexpr unsigned short vector_factor_fd3d_pml_kernel2_11 = vector_factor * 2;
static constexpr unsigned short axis_data_width_l_fd3d_pml_kernel2_11 = vector_factor_fd3d_pml_kernel2_11 * data_width;
typedef ap_uint<axis_data_width_l_fd3d_pml_kernel2_11> widen_fd3d_pml_kernel2_11_dt;
static constexpr unsigned short vector_factor_fd3d_pml_kernel2_12 = vector_factor * 2;
static constexpr unsigned short axis_data_width_l_fd3d_pml_kernel2_12 = vector_factor_fd3d_pml_kernel2_12 * data_width;
typedef ap_uint<axis_data_width_l_fd3d_pml_kernel2_12> widen_fd3d_pml_kernel2_12_dt;

typedef ::hls::stream<widen_fd3d_pml_kernel2_0_dt> widen_stream_fd3d_pml_kernel2_0_dt;
typedef ::hls::stream<widen_fd3d_pml_kernel2_1_dt> widen_stream_fd3d_pml_kernel2_1_dt;
typedef ::hls::stream<widen_fd3d_pml_kernel2_2_dt> widen_stream_fd3d_pml_kernel2_2_dt;
typedef ::hls::stream<widen_fd3d_pml_kernel2_3_dt> widen_stream_fd3d_pml_kernel2_3_dt;
typedef ::hls::stream<widen_fd3d_pml_kernel2_4_dt> widen_stream_fd3d_pml_kernel2_4_dt;
typedef ::hls::stream<widen_fd3d_pml_kernel2_5_dt> widen_stream_fd3d_pml_kernel2_5_dt;
typedef ::hls::stream<widen_fd3d_pml_kernel2_6_dt> widen_stream_fd3d_pml_kernel2_6_dt;
typedef ::hls::stream<widen_fd3d_pml_kernel2_7_dt> widen_stream_fd3d_pml_kernel2_7_dt;
typedef ::hls::stream<widen_fd3d_pml_kernel2_8_dt> widen_stream_fd3d_pml_kernel2_8_dt;
typedef ::hls::stream<widen_fd3d_pml_kernel2_9_dt> widen_stream_fd3d_pml_kernel2_9_dt;
typedef ::hls::stream<widen_fd3d_pml_kernel2_10_dt> widen_stream_fd3d_pml_kernel2_10_dt;
typedef ::hls::stream<widen_fd3d_pml_kernel2_11_dt> widen_stream_fd3d_pml_kernel2_11_dt;
typedef ::hls::stream<widen_fd3d_pml_kernel2_12_dt> widen_stream_fd3d_pml_kernel2_12_dt;

/*
    ArgGbl(id=0, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/429:17, access_type=AccessType.OPS_READ,ptr=&disps[0], dim=1, type=int)
    ArgGbl(id=1, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/430:17, access_type=AccessType.OPS_READ,ptr=&disps[1], dim=1, type=int)
    ArgGbl(id=2, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/431:17, access_type=AccessType.OPS_READ,ptr=&disps[2], dim=1, type=int)
    ArgIdx(id=3, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/432:17)
    ArgGbl(id=4, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/433:17, access_type=AccessType.OPS_READ,ptr=&dt, dim=1, type=float)
    ArgGbl(id=5, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/434:17, access_type=AccessType.OPS_READ,ptr=&scale1_der2_2, dim=1, type=float)
    ArgGbl(id=6, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/435:17, access_type=AccessType.OPS_READ,ptr=&scale2_der2_2, dim=1, type=float)
    ArgDat(id=0, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/438:17, access_type=AccessType.OPS_RW, opt=True, dat_id=0, global_dat_id=0, stencil_id=S3D_big_sten)
    ArgDat(id=1, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/439:17, access_type=AccessType.OPS_RW, opt=True, dat_id=1, global_dat_id=1, stencil_id=S3D_big_sten)
    ArgDat(id=2, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/440:17, access_type=AccessType.OPS_RW, opt=True, dat_id=2, global_dat_id=2, stencil_id=S3D_big_sten)
    ArgDat(id=3, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/441:17, access_type=AccessType.OPS_RW, opt=True, dat_id=3, global_dat_id=3, stencil_id=S3D_big_sten)
    ArgDat(id=4, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/442:17, access_type=AccessType.OPS_READ, opt=True, dat_id=4, global_dat_id=10, stencil_id=S3D_big_sten)
    ArgDat(id=5, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/443:17, access_type=AccessType.OPS_READ, opt=True, dat_id=5, global_dat_id=11, stencil_id=S3D_big_sten)
    ArgDat(id=6, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/444:17, access_type=AccessType.OPS_READ, opt=True, dat_id=6, global_dat_id=12, stencil_id=S3D_big_sten)
    ArgDat(id=7, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/445:17, access_type=AccessType.OPS_WRITE, opt=True, dat_id=7, global_dat_id=4, stencil_id=S3D_000)
    ArgDat(id=8, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/446:17, access_type=AccessType.OPS_WRITE, opt=True, dat_id=8, global_dat_id=5, stencil_id=S3D_000)
    ArgDat(id=9, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/447:17, access_type=AccessType.OPS_WRITE, opt=True, dat_id=9, global_dat_id=6, stencil_id=S3D_000)
    ArgDat(id=10, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/448:17, access_type=AccessType.OPS_RW, opt=True, dat_id=10, global_dat_id=7, stencil_id=S3D_big_sten)
    ArgDat(id=11, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/449:17, access_type=AccessType.OPS_RW, opt=True, dat_id=11, global_dat_id=8, stencil_id=S3D_big_sten)
    ArgDat(id=12, loc=/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project/rtm.cpp/450:17, access_type=AccessType.OPS_RW, opt=True, dat_id=12, global_dat_id=9, stencil_id=S3D_big_sten)
*/
inline void kernel_fd3d_pml_kernel2_core(
        const int* dispx,
        const int* dispy,
        const int* dispz,
        const short idx[3],
        const float* dt,
        const float* scale1,
        const float* scale2,
        stencil_type& reg_0_0_0,
        stencil_type& reg_0_0_1,
        stencil_type& reg_0_1_0,
        stencil_type& reg_0_1_1,
        stencil_type& reg_0_2_0,
        stencil_type& reg_0_2_1,
        stencil_type& reg_0_3_0,
        stencil_type& reg_0_3_1,
        stencil_type& reg_0_4_0,
        stencil_type& reg_0_4_1,
        stencil_type& reg_0_5_0,
        stencil_type& reg_0_5_1,
        stencil_type& reg_0_6_0,
        stencil_type& reg_0_6_1,
        stencil_type& reg_0_7_0,
        stencil_type& reg_0_7_1,
        stencil_type& reg_0_8_0,
        stencil_type& reg_0_8_1,
        stencil_type& reg_0_9_0,
        stencil_type& reg_0_9_1,
        stencil_type& reg_0_10_0,
        stencil_type& reg_0_10_1,
        stencil_type& reg_0_11_0,
        stencil_type& reg_0_11_1,
        stencil_type& reg_0_12_0,
        stencil_type& reg_0_12_1,
        stencil_type& reg_0_13_0,
        stencil_type& reg_0_13_1,
        stencil_type& reg_0_14_0,
        stencil_type& reg_0_14_1,
        stencil_type& reg_0_15_0,
        stencil_type& reg_0_15_1,
        stencil_type& reg_0_16_0,
        stencil_type& reg_0_16_1,
        stencil_type& reg_0_17_0,
        stencil_type& reg_0_17_1,
        stencil_type& reg_0_18_0,
        stencil_type& reg_0_18_1,
        stencil_type& reg_0_19_0,
        stencil_type& reg_0_19_1,
        stencil_type& reg_0_20_0,
        stencil_type& reg_0_20_1,
        stencil_type& reg_0_21_0,
        stencil_type& reg_0_21_1,
        stencil_type& reg_0_22_0,
        stencil_type& reg_0_22_1,
        stencil_type& reg_0_23_0,
        stencil_type& reg_0_23_1,
        stencil_type& reg_0_24_0,
        stencil_type& reg_0_24_1,
        stencil_type& reg_1_0_0,
        stencil_type& reg_1_0_1,
        stencil_type& reg_1_1_0,
        stencil_type& reg_1_1_1,
        stencil_type& reg_1_2_0,
        stencil_type& reg_1_2_1,
        stencil_type& reg_1_3_0,
        stencil_type& reg_1_3_1,
        stencil_type& reg_1_4_0,
        stencil_type& reg_1_4_1,
        stencil_type& reg_1_5_0,
        stencil_type& reg_1_5_1,
        stencil_type& reg_1_6_0,
        stencil_type& reg_1_6_1,
        stencil_type& reg_1_7_0,
        stencil_type& reg_1_7_1,
        stencil_type& reg_1_8_0,
        stencil_type& reg_1_8_1,
        stencil_type& reg_1_9_0,
        stencil_type& reg_1_9_1,
        stencil_type& reg_1_10_0,
        stencil_type& reg_1_10_1,
        stencil_type& reg_1_11_0,
        stencil_type& reg_1_11_1,
        stencil_type& reg_1_12_0,
        stencil_type& reg_1_12_1,
        stencil_type& reg_1_13_0,
        stencil_type& reg_1_13_1,
        stencil_type& reg_1_14_0,
        stencil_type& reg_1_14_1,
        stencil_type& reg_1_15_0,
        stencil_type& reg_1_15_1,
        stencil_type& reg_1_16_0,
        stencil_type& reg_1_16_1,
        stencil_type& reg_1_17_0,
        stencil_type& reg_1_17_1,
        stencil_type& reg_1_18_0,
        stencil_type& reg_1_18_1,
        stencil_type& reg_1_19_0,
        stencil_type& reg_1_19_1,
        stencil_type& reg_1_20_0,
        stencil_type& reg_1_20_1,
        stencil_type& reg_1_21_0,
        stencil_type& reg_1_21_1,
        stencil_type& reg_1_22_0,
        stencil_type& reg_1_22_1,
        stencil_type& reg_1_23_0,
        stencil_type& reg_1_23_1,
        stencil_type& reg_1_24_0,
        stencil_type& reg_1_24_1,
        stencil_type& reg_2_0_0,
        stencil_type& reg_2_0_1,
        stencil_type& reg_2_1_0,
        stencil_type& reg_2_1_1,
        stencil_type& reg_2_2_0,
        stencil_type& reg_2_2_1,
        stencil_type& reg_2_3_0,
        stencil_type& reg_2_3_1,
        stencil_type& reg_2_4_0,
        stencil_type& reg_2_4_1,
        stencil_type& reg_2_5_0,
        stencil_type& reg_2_5_1,
        stencil_type& reg_2_6_0,
        stencil_type& reg_2_6_1,
        stencil_type& reg_2_7_0,
        stencil_type& reg_2_7_1,
        stencil_type& reg_2_8_0,
        stencil_type& reg_2_8_1,
        stencil_type& reg_2_9_0,
        stencil_type& reg_2_9_1,
        stencil_type& reg_2_10_0,
        stencil_type& reg_2_10_1,
        stencil_type& reg_2_11_0,
        stencil_type& reg_2_11_1,
        stencil_type& reg_2_12_0,
        stencil_type& reg_2_12_1,
        stencil_type& reg_2_13_0,
        stencil_type& reg_2_13_1,
        stencil_type& reg_2_14_0,
        stencil_type& reg_2_14_1,
        stencil_type& reg_2_15_0,
        stencil_type& reg_2_15_1,
        stencil_type& reg_2_16_0,
        stencil_type& reg_2_16_1,
        stencil_type& reg_2_17_0,
        stencil_type& reg_2_17_1,
        stencil_type& reg_2_18_0,
        stencil_type& reg_2_18_1,
        stencil_type& reg_2_19_0,
        stencil_type& reg_2_19_1,
        stencil_type& reg_2_20_0,
        stencil_type& reg_2_20_1,
        stencil_type& reg_2_21_0,
        stencil_type& reg_2_21_1,
        stencil_type& reg_2_22_0,
        stencil_type& reg_2_22_1,
        stencil_type& reg_2_23_0,
        stencil_type& reg_2_23_1,
        stencil_type& reg_2_24_0,
        stencil_type& reg_2_24_1,
        stencil_type& reg_3_0_0,
        stencil_type& reg_3_0_1,
        stencil_type& reg_3_1_0,
        stencil_type& reg_3_1_1,
        stencil_type& reg_3_2_0,
        stencil_type& reg_3_2_1,
        stencil_type& reg_3_3_0,
        stencil_type& reg_3_3_1,
        stencil_type& reg_3_4_0,
        stencil_type& reg_3_4_1,
        stencil_type& reg_3_5_0,
        stencil_type& reg_3_5_1,
        stencil_type& reg_3_6_0,
        stencil_type& reg_3_6_1,
        stencil_type& reg_3_7_0,
        stencil_type& reg_3_7_1,
        stencil_type& reg_3_8_0,
        stencil_type& reg_3_8_1,
        stencil_type& reg_3_9_0,
        stencil_type& reg_3_9_1,
        stencil_type& reg_3_10_0,
        stencil_type& reg_3_10_1,
        stencil_type& reg_3_11_0,
        stencil_type& reg_3_11_1,
        stencil_type& reg_3_12_0,
        stencil_type& reg_3_12_1,
        stencil_type& reg_3_13_0,
        stencil_type& reg_3_13_1,
        stencil_type& reg_3_14_0,
        stencil_type& reg_3_14_1,
        stencil_type& reg_3_15_0,
        stencil_type& reg_3_15_1,
        stencil_type& reg_3_16_0,
        stencil_type& reg_3_16_1,
        stencil_type& reg_3_17_0,
        stencil_type& reg_3_17_1,
        stencil_type& reg_3_18_0,
        stencil_type& reg_3_18_1,
        stencil_type& reg_3_19_0,
        stencil_type& reg_3_19_1,
        stencil_type& reg_3_20_0,
        stencil_type& reg_3_20_1,
        stencil_type& reg_3_21_0,
        stencil_type& reg_3_21_1,
        stencil_type& reg_3_22_0,
        stencil_type& reg_3_22_1,
        stencil_type& reg_3_23_0,
        stencil_type& reg_3_23_1,
        stencil_type& reg_3_24_0,
        stencil_type& reg_3_24_1,
        const stencil_type& reg_4_0_0,
        const stencil_type& reg_4_0_1,
        const stencil_type& reg_4_1_0,
        const stencil_type& reg_4_1_1,
        const stencil_type& reg_4_2_0,
        const stencil_type& reg_4_2_1,
        const stencil_type& reg_4_3_0,
        const stencil_type& reg_4_3_1,
        const stencil_type& reg_4_4_0,
        const stencil_type& reg_4_4_1,
        const stencil_type& reg_4_5_0,
        const stencil_type& reg_4_5_1,
        const stencil_type& reg_4_6_0,
        const stencil_type& reg_4_6_1,
        const stencil_type& reg_4_7_0,
        const stencil_type& reg_4_7_1,
        const stencil_type& reg_4_8_0,
        const stencil_type& reg_4_8_1,
        const stencil_type& reg_4_9_0,
        const stencil_type& reg_4_9_1,
        const stencil_type& reg_4_10_0,
        const stencil_type& reg_4_10_1,
        const stencil_type& reg_4_11_0,
        const stencil_type& reg_4_11_1,
        const stencil_type& reg_4_12_0,
        const stencil_type& reg_4_12_1,
        const stencil_type& reg_4_13_0,
        const stencil_type& reg_4_13_1,
        const stencil_type& reg_4_14_0,
        const stencil_type& reg_4_14_1,
        const stencil_type& reg_4_15_0,
        const stencil_type& reg_4_15_1,
        const stencil_type& reg_4_16_0,
        const stencil_type& reg_4_16_1,
        const stencil_type& reg_4_17_0,
        const stencil_type& reg_4_17_1,
        const stencil_type& reg_4_18_0,
        const stencil_type& reg_4_18_1,
        const stencil_type& reg_4_19_0,
        const stencil_type& reg_4_19_1,
        const stencil_type& reg_4_20_0,
        const stencil_type& reg_4_20_1,
        const stencil_type& reg_4_21_0,
        const stencil_type& reg_4_21_1,
        const stencil_type& reg_4_22_0,
        const stencil_type& reg_4_22_1,
        const stencil_type& reg_4_23_0,
        const stencil_type& reg_4_23_1,
        const stencil_type& reg_4_24_0,
        const stencil_type& reg_4_24_1,
        const stencil_type& reg_5_0_0,
        const stencil_type& reg_5_0_1,
        const stencil_type& reg_5_1_0,
        const stencil_type& reg_5_1_1,
        const stencil_type& reg_5_2_0,
        const stencil_type& reg_5_2_1,
        const stencil_type& reg_5_3_0,
        const stencil_type& reg_5_3_1,
        const stencil_type& reg_5_4_0,
        const stencil_type& reg_5_4_1,
        const stencil_type& reg_5_5_0,
        const stencil_type& reg_5_5_1,
        const stencil_type& reg_5_6_0,
        const stencil_type& reg_5_6_1,
        const stencil_type& reg_5_7_0,
        const stencil_type& reg_5_7_1,
        const stencil_type& reg_5_8_0,
        const stencil_type& reg_5_8_1,
        const stencil_type& reg_5_9_0,
        const stencil_type& reg_5_9_1,
        const stencil_type& reg_5_10_0,
        const stencil_type& reg_5_10_1,
        const stencil_type& reg_5_11_0,
        const stencil_type& reg_5_11_1,
        const stencil_type& reg_5_12_0,
        const stencil_type& reg_5_12_1,
        const stencil_type& reg_5_13_0,
        const stencil_type& reg_5_13_1,
        const stencil_type& reg_5_14_0,
        const stencil_type& reg_5_14_1,
        const stencil_type& reg_5_15_0,
        const stencil_type& reg_5_15_1,
        const stencil_type& reg_5_16_0,
        const stencil_type& reg_5_16_1,
        const stencil_type& reg_5_17_0,
        const stencil_type& reg_5_17_1,
        const stencil_type& reg_5_18_0,
        const stencil_type& reg_5_18_1,
        const stencil_type& reg_5_19_0,
        const stencil_type& reg_5_19_1,
        const stencil_type& reg_5_20_0,
        const stencil_type& reg_5_20_1,
        const stencil_type& reg_5_21_0,
        const stencil_type& reg_5_21_1,
        const stencil_type& reg_5_22_0,
        const stencil_type& reg_5_22_1,
        const stencil_type& reg_5_23_0,
        const stencil_type& reg_5_23_1,
        const stencil_type& reg_5_24_0,
        const stencil_type& reg_5_24_1,
        const stencil_type& reg_6_0_0,
        const stencil_type& reg_6_0_1,
        const stencil_type& reg_6_1_0,
        const stencil_type& reg_6_1_1,
        const stencil_type& reg_6_2_0,
        const stencil_type& reg_6_2_1,
        const stencil_type& reg_6_3_0,
        const stencil_type& reg_6_3_1,
        const stencil_type& reg_6_4_0,
        const stencil_type& reg_6_4_1,
        const stencil_type& reg_6_5_0,
        const stencil_type& reg_6_5_1,
        const stencil_type& reg_6_6_0,
        const stencil_type& reg_6_6_1,
        const stencil_type& reg_6_7_0,
        const stencil_type& reg_6_7_1,
        const stencil_type& reg_6_8_0,
        const stencil_type& reg_6_8_1,
        const stencil_type& reg_6_9_0,
        const stencil_type& reg_6_9_1,
        const stencil_type& reg_6_10_0,
        const stencil_type& reg_6_10_1,
        const stencil_type& reg_6_11_0,
        const stencil_type& reg_6_11_1,
        const stencil_type& reg_6_12_0,
        const stencil_type& reg_6_12_1,
        const stencil_type& reg_6_13_0,
        const stencil_type& reg_6_13_1,
        const stencil_type& reg_6_14_0,
        const stencil_type& reg_6_14_1,
        const stencil_type& reg_6_15_0,
        const stencil_type& reg_6_15_1,
        const stencil_type& reg_6_16_0,
        const stencil_type& reg_6_16_1,
        const stencil_type& reg_6_17_0,
        const stencil_type& reg_6_17_1,
        const stencil_type& reg_6_18_0,
        const stencil_type& reg_6_18_1,
        const stencil_type& reg_6_19_0,
        const stencil_type& reg_6_19_1,
        const stencil_type& reg_6_20_0,
        const stencil_type& reg_6_20_1,
        const stencil_type& reg_6_21_0,
        const stencil_type& reg_6_21_1,
        const stencil_type& reg_6_22_0,
        const stencil_type& reg_6_22_1,
        const stencil_type& reg_6_23_0,
        const stencil_type& reg_6_23_1,
        const stencil_type& reg_6_24_0,
        const stencil_type& reg_6_24_1,
        stencil_type& reg_7_0_0,
        stencil_type& reg_7_0_1,
        stencil_type& reg_8_0_0,
        stencil_type& reg_8_0_1,
        stencil_type& reg_9_0_0,
        stencil_type& reg_9_0_1,
        stencil_type& reg_10_0_0,
        stencil_type& reg_10_0_1,
        stencil_type& reg_10_1_0,
        stencil_type& reg_10_1_1,
        stencil_type& reg_10_2_0,
        stencil_type& reg_10_2_1,
        stencil_type& reg_10_3_0,
        stencil_type& reg_10_3_1,
        stencil_type& reg_10_4_0,
        stencil_type& reg_10_4_1,
        stencil_type& reg_10_5_0,
        stencil_type& reg_10_5_1,
        stencil_type& reg_10_6_0,
        stencil_type& reg_10_6_1,
        stencil_type& reg_10_7_0,
        stencil_type& reg_10_7_1,
        stencil_type& reg_10_8_0,
        stencil_type& reg_10_8_1,
        stencil_type& reg_10_9_0,
        stencil_type& reg_10_9_1,
        stencil_type& reg_10_10_0,
        stencil_type& reg_10_10_1,
        stencil_type& reg_10_11_0,
        stencil_type& reg_10_11_1,
        stencil_type& reg_10_12_0,
        stencil_type& reg_10_12_1,
        stencil_type& reg_10_13_0,
        stencil_type& reg_10_13_1,
        stencil_type& reg_10_14_0,
        stencil_type& reg_10_14_1,
        stencil_type& reg_10_15_0,
        stencil_type& reg_10_15_1,
        stencil_type& reg_10_16_0,
        stencil_type& reg_10_16_1,
        stencil_type& reg_10_17_0,
        stencil_type& reg_10_17_1,
        stencil_type& reg_10_18_0,
        stencil_type& reg_10_18_1,
        stencil_type& reg_10_19_0,
        stencil_type& reg_10_19_1,
        stencil_type& reg_10_20_0,
        stencil_type& reg_10_20_1,
        stencil_type& reg_10_21_0,
        stencil_type& reg_10_21_1,
        stencil_type& reg_10_22_0,
        stencil_type& reg_10_22_1,
        stencil_type& reg_10_23_0,
        stencil_type& reg_10_23_1,
        stencil_type& reg_10_24_0,
        stencil_type& reg_10_24_1,
        stencil_type& reg_11_0_0,
        stencil_type& reg_11_0_1,
        stencil_type& reg_11_1_0,
        stencil_type& reg_11_1_1,
        stencil_type& reg_11_2_0,
        stencil_type& reg_11_2_1,
        stencil_type& reg_11_3_0,
        stencil_type& reg_11_3_1,
        stencil_type& reg_11_4_0,
        stencil_type& reg_11_4_1,
        stencil_type& reg_11_5_0,
        stencil_type& reg_11_5_1,
        stencil_type& reg_11_6_0,
        stencil_type& reg_11_6_1,
        stencil_type& reg_11_7_0,
        stencil_type& reg_11_7_1,
        stencil_type& reg_11_8_0,
        stencil_type& reg_11_8_1,
        stencil_type& reg_11_9_0,
        stencil_type& reg_11_9_1,
        stencil_type& reg_11_10_0,
        stencil_type& reg_11_10_1,
        stencil_type& reg_11_11_0,
        stencil_type& reg_11_11_1,
        stencil_type& reg_11_12_0,
        stencil_type& reg_11_12_1,
        stencil_type& reg_11_13_0,
        stencil_type& reg_11_13_1,
        stencil_type& reg_11_14_0,
        stencil_type& reg_11_14_1,
        stencil_type& reg_11_15_0,
        stencil_type& reg_11_15_1,
        stencil_type& reg_11_16_0,
        stencil_type& reg_11_16_1,
        stencil_type& reg_11_17_0,
        stencil_type& reg_11_17_1,
        stencil_type& reg_11_18_0,
        stencil_type& reg_11_18_1,
        stencil_type& reg_11_19_0,
        stencil_type& reg_11_19_1,
        stencil_type& reg_11_20_0,
        stencil_type& reg_11_20_1,
        stencil_type& reg_11_21_0,
        stencil_type& reg_11_21_1,
        stencil_type& reg_11_22_0,
        stencil_type& reg_11_22_1,
        stencil_type& reg_11_23_0,
        stencil_type& reg_11_23_1,
        stencil_type& reg_11_24_0,
        stencil_type& reg_11_24_1,
        stencil_type& reg_12_0_0,
        stencil_type& reg_12_0_1,
        stencil_type& reg_12_1_0,
        stencil_type& reg_12_1_1,
        stencil_type& reg_12_2_0,
        stencil_type& reg_12_2_1,
        stencil_type& reg_12_3_0,
        stencil_type& reg_12_3_1,
        stencil_type& reg_12_4_0,
        stencil_type& reg_12_4_1,
        stencil_type& reg_12_5_0,
        stencil_type& reg_12_5_1,
        stencil_type& reg_12_6_0,
        stencil_type& reg_12_6_1,
        stencil_type& reg_12_7_0,
        stencil_type& reg_12_7_1,
        stencil_type& reg_12_8_0,
        stencil_type& reg_12_8_1,
        stencil_type& reg_12_9_0,
        stencil_type& reg_12_9_1,
        stencil_type& reg_12_10_0,
        stencil_type& reg_12_10_1,
        stencil_type& reg_12_11_0,
        stencil_type& reg_12_11_1,
        stencil_type& reg_12_12_0,
        stencil_type& reg_12_12_1,
        stencil_type& reg_12_13_0,
        stencil_type& reg_12_13_1,
        stencil_type& reg_12_14_0,
        stencil_type& reg_12_14_1,
        stencil_type& reg_12_15_0,
        stencil_type& reg_12_15_1,
        stencil_type& reg_12_16_0,
        stencil_type& reg_12_16_1,
        stencil_type& reg_12_17_0,
        stencil_type& reg_12_17_1,
        stencil_type& reg_12_18_0,
        stencil_type& reg_12_18_1,
        stencil_type& reg_12_19_0,
        stencil_type& reg_12_19_1,
        stencil_type& reg_12_20_0,
        stencil_type& reg_12_20_1,
        stencil_type& reg_12_21_0,
        stencil_type& reg_12_21_1,
        stencil_type& reg_12_22_0,
        stencil_type& reg_12_22_1,
        stencil_type& reg_12_23_0,
        stencil_type& reg_12_23_1,
        stencil_type& reg_12_24_0,
        stencil_type& reg_12_24_1,
        const float& dx,
        const float& dy,
        const float& dz,
        const float& invdx,
        const float& invdy,
        const float& invdz,
        const int& nx,
        const int& ny,
        const int& nz,
        const int& pml_width,
        const int& half_order,
        const int& order
)
{
#ifdef DEBUG_LOG
    printf("[KERNEL_INTERNAL_CORE]|%s| starting kernel core: kernel_fd3d_pml_kernel2_core\n",__func__);
#endif

    const float c[9] = {0.0035714285714285713,-0.0380952380952381,0.2,-0.8,0.0,0.8,-0.2,0.0380952380952381,-0.0035714285714285713};

    int xbeg=half_order;
    int xend=nx-half_order;
    int ybeg=half_order;
    int yend=ny-half_order;
    int zbeg=half_order;
    int zend=nz-half_order;
    int xpmlbeg=xbeg+pml_width;
    int ypmlbeg=ybeg+pml_width;
    int zpmlbeg=zbeg+pml_width;
    int xpmlend=xend-pml_width;
    int ypmlend=yend-pml_width;
    int zpmlend=zend-pml_width;

    float sigma = reg_0_12_1/reg_0_12_0;
    float sigma_10_percent = sigma * 0.1f;
    float sigmax=0.0;
    float sigmay=0.0;
    float sigmaz=0.0;

    if(idx[0]<=xbeg+pml_width){

        sigmax = (xpmlbeg-idx[0])*sigma_10_percent;
    }
    else if(idx[0]>=xend-pml_width){
        sigmax=(idx[0]-xpmlend)*sigma_10_percent;
    }
    if(idx[1]<=ybeg+pml_width){
        sigmay=(ypmlbeg-idx[1])*sigma_10_percent;
    }
    else if(idx[1]>=yend-pml_width){
        sigmay=(idx[1]-ypmlend)*sigma_10_percent;
    }
    if(idx[2]<=zbeg+pml_width){
        sigmaz=(zpmlbeg-idx[2])*sigma_10_percent;
    }
    else if(idx[2]>=zend-pml_width){
        sigmaz=(idx[2]-zpmlend)*sigma_10_percent;
    }

    float px = reg_4_12_0;
    float py = reg_4_12_1;
    float pz = reg_5_12_0;

    float vx = reg_5_12_1;
    float vy = reg_6_12_0;
    float vz = reg_6_12_1;

    float yy_0_add_sum_0 = reg_1_12_0 + reg_10_12_0;
    float yy_1_add_sum_1 = reg_1_12_1 + reg_10_12_1;
    float yy_2_add_sum_2 = reg_2_12_0 + reg_11_12_0;
    float yy_3_add_sum_3 = reg_2_12_1 + reg_11_12_1;
    float yy_4_add_sum_4 = reg_3_12_0 + reg_12_12_0;
    float yy_5_add_sum_5 = reg_3_12_1 + reg_12_12_1;

    float sigmax_mul_px = sigmax * px;
    float sigmay_mul_py = sigmay * py;
    float sigmaz_mul_pz = sigmaz * pz;
    float sigmax_mul_vx = sigmax * vx;
    float sigmay_mul_vy = sigmay * vy;
    float sigmaz_mul_vz = sigmaz * vz;

    float vxx=0.0;
    float vxy=0.0;
    float vxz=0.0;

    float vyx=0.0;
    float vyy=0.0;
    float vyz=0.0;

    float vzx=0.0;
    float vzy=0.0;
    float vzz=0.0;

    float pxx=0.0;
    float pxy=0.0;
    float pxz=0.0;

    float pyx=0.0;
    float pyy=0.0;
    float pyz=0.0;

    float pzx=0.0;
    float pzy=0.0;
    float pzz=0.0;

    const unsigned short h_min_4 = half_order - 4;
    float pxx0 = reg_4_8_0*c[h_min_4];
    float pyx0 = reg_4_8_1*c[h_min_4];
    float pzx0 = reg_5_8_0*c[h_min_4];

    float vxx0 = reg_5_8_1*c[h_min_4];
    float vyx0 = reg_6_8_0*c[h_min_4];
    float vzx0 = reg_6_8_1*c[h_min_4];

    float pxy0 = reg_4_4_0*c[h_min_4];
    float pyy0 = reg_4_4_1*c[h_min_4];
    float pzy0 = reg_5_4_0*c[h_min_4];

    float vxy0 = reg_5_4_1*c[h_min_4];
    float vyy0 = reg_6_4_0*c[h_min_4];
    float vzy0 = reg_6_4_1*c[h_min_4];

    float pxz0 = reg_4_0_0*c[h_min_4];
    float pyz0 = reg_4_0_1*c[h_min_4];
    float pzz0 = reg_5_0_0*c[h_min_4];

    float vxz0 = reg_5_0_1*c[h_min_4];
    float vyz0 = reg_6_0_0*c[h_min_4];
    float vzz0 = reg_6_0_1*c[h_min_4];

    const unsigned short h_min_3 = half_order - 3;
    float pxx1 = reg_4_9_0*c[h_min_3];
    float pyx1 = reg_4_9_1*c[h_min_3];
    float pzx1 = reg_5_9_0*c[h_min_3];

    float vxx1 = reg_5_9_1*c[h_min_3];
    float vyx1 = reg_6_9_0*c[h_min_3];
    float vzx1 = reg_6_9_1*c[h_min_3];

    float pxy1 = reg_4_5_0*c[h_min_3];
    float pyy1 = reg_4_5_1*c[h_min_3];
    float pzy1 = reg_5_5_0*c[h_min_3];

    float vxy1 = reg_5_5_1*c[h_min_3];
    float vyy1 = reg_6_5_0*c[h_min_3];
    float vzy1 = reg_6_5_1*c[h_min_3];

    float pxz1 = reg_4_1_0*c[h_min_3];
    float pyz1 = reg_4_1_1*c[h_min_3];
    float pzz1 = reg_5_1_0*c[h_min_3];

    float vxz1 = reg_5_1_1*c[h_min_3];
    float vyz1 = reg_6_1_0*c[h_min_3];
    float vzz1 = reg_6_1_1*c[h_min_3];

    const unsigned short h_min_2 = half_order - 2;
    float pxx2 = reg_4_10_0*c[h_min_2];
    float pyx2 = reg_4_10_1*c[h_min_2];
    float pzx2 = reg_5_10_0*c[h_min_2];

    float vxx2 = reg_5_10_1*c[h_min_2];
    float vyx2 = reg_6_10_0*c[h_min_2];
    float vzx2 = reg_6_10_1*c[h_min_2];

    float pxy2 = reg_4_6_0*c[h_min_2];
    float pyy2 = reg_4_6_1*c[h_min_2];
    float pzy2 = reg_5_6_0*c[h_min_2];

    float vxy2 = reg_5_6_1*c[h_min_2];
    float vyy2 = reg_6_6_0*c[h_min_2];
    float vzy2 = reg_6_6_1*c[h_min_2];

    float pxz2 = reg_4_2_0*c[h_min_2];
    float pyz2 = reg_4_2_1*c[h_min_2];
    float pzz2 = reg_5_2_0*c[h_min_2];

    float vxz2 = reg_5_2_1*c[h_min_2];
    float vyz2 = reg_6_2_0*c[h_min_2];
    float vzz2 = reg_6_2_1*c[h_min_2];

    const unsigned short h_min_1 = half_order - 1;
    float pxx3 = reg_4_11_0*c[h_min_1];
    float pyx3 = reg_4_11_1*c[h_min_1];
    float pzx3 = reg_5_11_0*c[h_min_1];

    float vxx3 = reg_5_11_1*c[h_min_1];
    float vyx3 = reg_6_11_0*c[h_min_1];
    float vzx3 = reg_6_11_1*c[h_min_1];

    float pxy3 = reg_4_7_0*c[h_min_1];
    float pyy3 = reg_4_7_1*c[h_min_1];
    float pzy3 = reg_5_7_0*c[h_min_1];

    float vxy3 = reg_5_7_1*c[h_min_1];
    float vyy3 = reg_6_7_0*c[h_min_1];
    float vzy3 = reg_6_7_1*c[h_min_1];

    float pxz3 = reg_4_3_0*c[h_min_1];
    float pyz3 = reg_4_3_1*c[h_min_1];
    float pzz3 = reg_5_3_0*c[h_min_1];

    float vxz3 = reg_5_3_1*c[h_min_1];
    float vyz3 = reg_6_3_0*c[h_min_1];
    float vzz3 = reg_6_3_1*c[h_min_1];

    float pxx4 = reg_4_12_0*c[half_order];
    float pyx4 = reg_4_12_1*c[half_order];
    float pzx4 = reg_5_12_0*c[half_order];

    float vxx4 = reg_5_12_1*c[half_order];
    float vyx4 = reg_6_12_0*c[half_order];
    float vzx4 = reg_6_12_1*c[half_order];

    float pxy4 = reg_4_12_0*c[half_order];
    float pyy4 = reg_4_12_1*c[half_order];
    float pzy4 = reg_5_12_0*c[half_order];

    float vxy4 = reg_5_12_1*c[half_order];
    float vyy4 = reg_6_12_0*c[half_order];
    float vzy4 = reg_6_12_1*c[half_order];

    float pxz4 = reg_4_12_0*c[half_order];
    float pyz4 = reg_4_12_1*c[half_order];
    float pzz4 = reg_5_12_0*c[half_order];

    float vxz4 = reg_5_12_1*c[half_order];
    float vyz4 = reg_6_12_0*c[half_order];
    float vzz4 = reg_6_12_1*c[half_order];

    const unsigned short h_pl_1 = half_order + 1;
    float pxx5 = reg_4_13_0*c[h_pl_1];
    float pyx5 = reg_4_13_1*c[h_pl_1];
    float pzx5 = reg_5_13_0*c[h_pl_1];

    float vxx5 = reg_5_13_1*c[h_pl_1];
    float vyx5 = reg_6_13_0*c[h_pl_1];
    float vzx5 = reg_6_13_1*c[h_pl_1];

    float pxy5 = reg_4_17_0*c[h_pl_1];
    float pyy5 = reg_4_17_1*c[h_pl_1];
    float pzy5 = reg_5_17_0*c[h_pl_1];

    float vxy5 = reg_5_17_1*c[h_pl_1];
    float vyy5 = reg_6_17_0*c[h_pl_1];
    float vzy5 = reg_6_17_1*c[h_pl_1];

    float pxz5 = reg_4_21_0*c[h_pl_1];
    float pyz5 = reg_4_21_1*c[h_pl_1];
    float pzz5 = reg_5_21_0*c[h_pl_1];

    float vxz5 = reg_5_21_1*c[h_pl_1];
    float vyz5 = reg_6_21_0*c[h_pl_1];
    float vzz5 = reg_6_21_1*c[h_pl_1];

    const unsigned short h_pl_2 = half_order + 2;
    float pxx6 = reg_4_14_0*c[h_pl_2];
    float pyx6 = reg_4_14_1*c[h_pl_2];
    float pzx6 = reg_5_14_0*c[h_pl_2];

    float vxx6 = reg_5_14_1*c[h_pl_2];
    float vyx6 = reg_6_14_0*c[h_pl_2];
    float vzx6 = reg_6_14_1*c[h_pl_2];

    float pxy6 = reg_4_18_0*c[h_pl_2];
    float pyy6 = reg_4_18_1*c[h_pl_2];
    float pzy6 = reg_5_18_0*c[h_pl_2];

    float vxy6 = reg_5_18_1*c[h_pl_2];
    float vyy6 = reg_6_18_0*c[h_pl_2];
    float vzy6 = reg_6_18_1*c[h_pl_2];

    float pxz6 = reg_4_22_0*c[h_pl_2];
    float pyz6 = reg_4_22_1*c[h_pl_2];
    float pzz6 = reg_5_22_0*c[h_pl_2];

    float vxz6 = reg_5_22_1*c[h_pl_2];
    float vyz6 = reg_6_22_0*c[h_pl_2];
    float vzz6 = reg_6_22_1*c[h_pl_2];

    const unsigned short h_pl_3 = half_order + 3;
    float pxx7 = reg_4_15_0*c[h_pl_3];
    float pyx7 = reg_4_15_1*c[h_pl_3];
    float pzx7 = reg_5_15_0*c[h_pl_3];

    float vxx7 = reg_5_15_1*c[h_pl_3];
    float vyx7 = reg_6_15_0*c[h_pl_3];
    float vzx7 = reg_6_15_1*c[h_pl_3];

    float pxy7 = reg_4_19_0*c[h_pl_3];
    float pyy7 = reg_4_19_1*c[h_pl_3];
    float pzy7 = reg_5_19_0*c[h_pl_3];

    float vxy7 = reg_5_19_1*c[h_pl_3];
    float vyy7 = reg_6_19_0*c[h_pl_3];
    float vzy7 = reg_6_19_1*c[h_pl_3];

    float pxz7 = reg_4_23_0*c[h_pl_3];
    float pyz7 = reg_4_23_1*c[h_pl_3];
    float pzz7 = reg_5_23_0*c[h_pl_3];

    float vxz7 = reg_5_23_1*c[h_pl_3];
    float vyz7 = reg_6_23_0*c[h_pl_3];
    float vzz7 = reg_6_23_1*c[h_pl_3];

    const unsigned short h_pl_4 = half_order + 4;
    float pxx8 = reg_4_16_0*c[h_pl_4];
    float pyx8 = reg_4_16_1*c[h_pl_4];
    float pzx8 = reg_5_16_0*c[h_pl_4];

    float vxx8 = reg_5_16_1*c[h_pl_4];
    float vyx8 = reg_6_16_0*c[h_pl_4];
    float vzx8 = reg_6_16_1*c[h_pl_4];

    float pxy8 = reg_4_20_0*c[h_pl_4];
    float pyy8 = reg_4_20_1*c[h_pl_4];
    float pzy8 = reg_5_20_0*c[h_pl_4];

    float vxy8 = reg_5_20_1*c[h_pl_4];
    float vyy8 = reg_6_20_0*c[h_pl_4];
    float vzy8 = reg_6_20_1*c[h_pl_4];

    float pxz8 = reg_4_24_0*c[h_pl_4];
    float pyz8 = reg_4_24_1*c[h_pl_4];
    float pzz8 = reg_5_24_0*c[h_pl_4];

    float vxz8 = reg_5_24_1*c[h_pl_4];
    float vyz8 = reg_6_24_0*c[h_pl_4];
    float vzz8 = reg_6_24_1*c[h_pl_4];

    float pxx9 = pxx0 + pxx1;
    float pxx10 = pxx2 + pxx3;
    float pxx11 = pxx4 + pxx5;
    float pxx12 = pxx6 + pxx7;
    float pxx13 = pxx8 + pxx9;
    float pxx14 = pxx10 + pxx11;
    float pxx15 = pxx12 + pxx13;
    pxx = pxx14 + pxx15;

    float pyx9 = pyx0 + pyx1;
    float pyx10 = pyx2 + pyx3;
    float pyx11 = pyx4 + pyx5;
    float pyx12 = pyx6 + pyx7;
    float pyx13 = pyx8 + pyx9;
    float pyx14 = pyx10 + pyx11;
    float pyx15 = pyx12 + pyx13;
    pyx = pyx14 + pyx15;

    float pzx9 = pzx0 + pzx1;
    float pzx10 = pzx2 + pzx3;
    float pzx11 = pzx4 + pzx5;
    float pzx12 = pzx6 + pzx7;
    float pzx13 = pzx8 + pzx9;
    float pzx14 = pzx10 + pzx11;
    float pzx15 = pzx12 + pzx13;
    pzx = pzx14 + pzx15;

    float vxx9 = vxx0 + vxx1;
    float vxx10 = vxx2 + vxx3;
    float vxx11 = vxx4 + vxx5;
    float vxx12 = vxx6 + vxx7;
    float vxx13 = vxx8 + vxx9;
    float vxx14 = vxx10 + vxx11;
    float vxx15 = vxx12 + vxx13;
    vxx = vxx14 + vxx15;

    float vyx9 = vyx0 + vyx1;
    float vyx10 = vyx2 + vyx3;
    float vyx11 = vyx4 + vyx5;
    float vyx12 = vyx6 + vyx7;
    float vyx13 = vyx8 + vyx9;
    float vyx14 = vyx10 + vyx11;
    float vyx15 = vyx12 + vyx13;
    vyx = vyx14 + vyx15;

    float vzx9 = vzx0 + vzx1;
    float vzx10 = vzx2 + vzx3;
    float vzx11 = vzx4 + vzx5;
    float vzx12 = vzx6 + vzx7;
    float vzx13 = vzx8 + vzx9;
    float vzx14 = vzx10 + vzx11;
    float vzx15 = vzx12 + vzx13;
    vzx = vzx14 + vzx15;

    float pxy9 = pxy0 + pxy1;
    float pxy10 = pxy2 + pxy3;
    float pxy11 = pxy4 + pxy5;
    float pxy12 = pxy6 + pxy7;
    float pxy13 = pxy8 + pxy9;
    float pxy14 = pxy10 + pxy11;
    float pxy15 = pxy12 + pxy13;
    pxy = pxy14 + pxy15;

    float pyy9 = pyy0 + pyy1;
    float pyy10 = pyy2 + pyy3;
    float pyy11 = pyy4 + pyy5;
    float pyy12 = pyy6 + pyy7;
    float pyy13 = pyy8 + pyy9;
    float pyy14 = pyy10 + pyy11;
    float pyy15 = pyy12 + pyy13;
    pyy = pyy14 + pyy15;

    float pzy9 = pzy0 + pzy1;
    float pzy10 = pzy2 + pzy3;
    float pzy11 = pzy4 + pzy5;
    float pzy12 = pzy6 + pzy7;
    float pzy13 = pzy8 + pzy9;
    float pzy14 = pzy10 + pzy11;
    float pzy15 = pzy12 + pzy13;
    pzy = pzy14 + pzy15;

    float vxy9 = vxy0 + vxy1;
    float vxy10 = vxy2 + vxy3;
    float vxy11 = vxy4 + vxy5;
    float vxy12 = vxy6 + vxy7;
    float vxy13 = vxy8 + vxy9;
    float vxy14 = vxy10 + vxy11;
    float vxy15 = vxy12 + vxy13;
    vxy = vxy14 + vxy15;

    float vyy9 = vyy0 + vyy1;
    float vyy10 = vyy2 + vyy3;
    float vyy11 = vyy4 + vyy5;
    float vyy12 = vyy6 + vyy7;
    float vyy13 = vyy8 + vyy9;
    float vyy14 = vyy10 + vyy11;
    float vyy15 = vyy12 + vyy13;
    vyy = vyy14 + vyy15;

    float pxz9 = pxz0 + pxz1;
    float pxz10 = pxz2 + pxz3;
    float pxz11 = pxz4 + pxz5;
    float pxz12 = pxz6 + pxz7;
    float pxz13 = pxz8 + pxz9;
    float pxz14 = pxz10 + pxz11;
    float pxz15 = pxz12 + pxz13;
    pxz = pxz14 + pxz15;

    float pyz9 = pyz0 + pyz1;
    float pyz10 = pyz2 + pyz3;
    float pyz11 = pyz4 + pyz5;
    float pyz12 = pyz6 + pyz7;
    float pyz13 = pyz8 + pyz9;
    float pyz14 = pyz10 + pyz11;
    float pyz15 = pyz12 + pyz13;
    pyz = pyz14 + pyz15;

    float pzz9 = pzz0 + pzz1;
    float pzz10 = pzz2 + pzz3;
    float pzz11 = pzz4 + pzz5;
    float pzz12 = pzz6 + pzz7;
    float pzz13 = pzz8 + pzz9;
    float pzz14 = pzz10 + pzz11;
    float pzz15 = pzz12 + pzz13;
    pzz = pzz14 + pzz15;

    float vxz9 = vxz0 + vxz1;
    float vxz10 = vxz2 + vxz3;
    float vxz11 = vxz4 + vxz5;
    float vxz12 = vxz6 + vxz7;
    float vxz13 = vxz8 + vxz9;
    float vxz14 = vxz10 + vxz11;
    float vxz15 = vxz12 + vxz13;
    vxz = vxz14 + vxz15;

    float vyz9 = vyz0 + vyz1;
    float vyz10 = vyz2 + vyz3;
    float vyz11 = vyz4 + vyz5;
    float vyz12 = vyz6 + vyz7;
    float vyz13 = vyz8 + vyz9;
    float vyz14 = vyz10 + vyz11;
    float vyz15 = vyz12 + vyz13;
    vyz = vyz14 + vyz15;

    float vzz9 = vzz0 + vzz1;
    float vzz10 = vzz2 + vzz3;
    float vzz11 = vzz4 + vzz5;
    float vzz12 = vzz6 + vzz7;
    float vzz13 = vzz8 + vzz9;
    float vzz14 = vzz10 + vzz11;
    float vzz15 = vzz12 + vzz13;
    vzz = vzz14 + vzz15;

    pxx *= invdx;
    pyx *= invdx;
    pzx *= invdx;

    vxx *= invdx;
    vyx *= invdx;
    vzx *= invdx;

    pxy *= invdy;
    pyy *= invdy;
    pzy *= invdy;

    vxy *= invdy;
    vyy *= invdy;
    vzy *= invdy;

    pxz *= invdz;
    pyz *= invdz;
    pzz *= invdz;

    vxz *= invdz;
    vyz *= invdz;
    vzz *= invdz;

    float vxx_div_rho = vxx/reg_0_12_0;
    float vyy_div_rho = vyy/reg_0_12_0;
    float vzz_div_rho = vzz/reg_0_12_0;

    float add_pxx_pyx_pxz0 = pxx+pyx;
    float add_pxx_pyx_pxz = add_pxx_pyx_pxz0 + pxz;
    float add_pxx_pyx_pxz_mul_mu = add_pxx_pyx_pxz*reg_0_12_1;
    float add_pxy_pyy_pyz0 = pxy+pyy;
    float add_pxy_pyy_pyz = add_pxy_pyy_pyz0 + pyz;
    float add_pxy_pyy_pyz_mul_mu = add_pxy_pyy_pyz*reg_0_12_1;
    float add_pxz_pyz_pzz0 = pxz+pyz;
    float add_pxz_pyz_pzz = add_pxz_pyz_pzz0 + pzz;
    float add_pxz_pyz_pzz_mul_mu = add_pxz_pyz_pzz*reg_0_12_1;

    float ytemp0 =(vxx_div_rho - sigmax_mul_px) * *dt;
    float ytemp3 =(add_pxx_pyx_pxz_mul_mu - sigmax_mul_vx)* *dt;

    float ytemp1 =(vyy_div_rho - sigmay_mul_py)* *dt;
    float ytemp4 =(add_pxy_pyy_pyz_mul_mu - sigmay_mul_vy)* *dt;

    float ytemp2 =(vzz_div_rho - sigmaz_mul_pz)* *dt;
    float ytemp5 =(add_pxz_pyz_pzz_mul_mu - sigmaz_mul_vz)* *dt;

    float scale1_ytemp0 = ytemp0 * *scale1;
    float scale1_ytemp1 = ytemp1 * *scale1;
    float scale1_ytemp2 = ytemp2 * *scale1;
    float scale1_ytemp3 = ytemp3 * *scale1;
    float scale1_ytemp4 = ytemp4 * *scale1;
    float scale1_ytemp5 = ytemp5 * *scale1;

    reg_7_0_0 = yy_0_add_sum_0 + scale1_ytemp0;
    reg_8_0_1 = yy_3_add_sum_3 + scale1_ytemp3;
    reg_7_0_1 = yy_1_add_sum_1 + scale1_ytemp1;
    reg_9_0_0 = yy_4_add_sum_4 + scale1_ytemp4;
    reg_8_0_0 = yy_2_add_sum_2 + scale1_ytemp2;
    reg_9_0_1 = yy_5_add_sum_5 + scale1_ytemp5;

    reg_10_12_0 += ytemp0 * *scale2;
    reg_11_12_1 += ytemp3 * *scale2;
    reg_10_12_1 += ytemp1 * *scale2;
    reg_12_12_0 += ytemp4 * *scale2;
    reg_11_12_0 += ytemp2 * *scale2;
    reg_12_12_1 += ytemp5 * *scale2;

#ifdef DEBUG_LOG
    printf("[KERNEL_INTERNAL_CORE]|%s| index_val: (%d, %d, %d) \n", __func__, idx[0], idx[1], idx[2]);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_0_0: %f \n", __func__, reg_0_0_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_0_1: %f \n", __func__, reg_0_0_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_1_0: %f \n", __func__, reg_0_1_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_1_1: %f \n", __func__, reg_0_1_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_2_0: %f \n", __func__, reg_0_2_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_2_1: %f \n", __func__, reg_0_2_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_3_0: %f \n", __func__, reg_0_3_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_3_1: %f \n", __func__, reg_0_3_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_4_0: %f \n", __func__, reg_0_4_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_4_1: %f \n", __func__, reg_0_4_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_5_0: %f \n", __func__, reg_0_5_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_5_1: %f \n", __func__, reg_0_5_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_6_0: %f \n", __func__, reg_0_6_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_6_1: %f \n", __func__, reg_0_6_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_7_0: %f \n", __func__, reg_0_7_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_7_1: %f \n", __func__, reg_0_7_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_8_0: %f \n", __func__, reg_0_8_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_8_1: %f \n", __func__, reg_0_8_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_9_0: %f \n", __func__, reg_0_9_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_9_1: %f \n", __func__, reg_0_9_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_10_0: %f \n", __func__, reg_0_10_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_10_1: %f \n", __func__, reg_0_10_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_11_0: %f \n", __func__, reg_0_11_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_11_1: %f \n", __func__, reg_0_11_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_12_0: %f \n", __func__, reg_0_12_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_12_1: %f \n", __func__, reg_0_12_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_13_0: %f \n", __func__, reg_0_13_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_13_1: %f \n", __func__, reg_0_13_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_14_0: %f \n", __func__, reg_0_14_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_14_1: %f \n", __func__, reg_0_14_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_15_0: %f \n", __func__, reg_0_15_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_15_1: %f \n", __func__, reg_0_15_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_16_0: %f \n", __func__, reg_0_16_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_16_1: %f \n", __func__, reg_0_16_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_17_0: %f \n", __func__, reg_0_17_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_17_1: %f \n", __func__, reg_0_17_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_18_0: %f \n", __func__, reg_0_18_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_18_1: %f \n", __func__, reg_0_18_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_19_0: %f \n", __func__, reg_0_19_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_19_1: %f \n", __func__, reg_0_19_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_20_0: %f \n", __func__, reg_0_20_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_20_1: %f \n", __func__, reg_0_20_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_21_0: %f \n", __func__, reg_0_21_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_21_1: %f \n", __func__, reg_0_21_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_22_0: %f \n", __func__, reg_0_22_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_22_1: %f \n", __func__, reg_0_22_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_23_0: %f \n", __func__, reg_0_23_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_23_1: %f \n", __func__, reg_0_23_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_24_0: %f \n", __func__, reg_0_24_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_24_1: %f \n", __func__, reg_0_24_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_0_0: %f \n", __func__, reg_1_0_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_0_1: %f \n", __func__, reg_1_0_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_1_0: %f \n", __func__, reg_1_1_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_1_1: %f \n", __func__, reg_1_1_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_2_0: %f \n", __func__, reg_1_2_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_2_1: %f \n", __func__, reg_1_2_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_3_0: %f \n", __func__, reg_1_3_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_3_1: %f \n", __func__, reg_1_3_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_4_0: %f \n", __func__, reg_1_4_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_4_1: %f \n", __func__, reg_1_4_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_5_0: %f \n", __func__, reg_1_5_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_5_1: %f \n", __func__, reg_1_5_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_6_0: %f \n", __func__, reg_1_6_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_6_1: %f \n", __func__, reg_1_6_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_7_0: %f \n", __func__, reg_1_7_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_7_1: %f \n", __func__, reg_1_7_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_8_0: %f \n", __func__, reg_1_8_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_8_1: %f \n", __func__, reg_1_8_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_9_0: %f \n", __func__, reg_1_9_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_9_1: %f \n", __func__, reg_1_9_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_10_0: %f \n", __func__, reg_1_10_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_10_1: %f \n", __func__, reg_1_10_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_11_0: %f \n", __func__, reg_1_11_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_11_1: %f \n", __func__, reg_1_11_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_12_0: %f \n", __func__, reg_1_12_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_12_1: %f \n", __func__, reg_1_12_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_13_0: %f \n", __func__, reg_1_13_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_13_1: %f \n", __func__, reg_1_13_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_14_0: %f \n", __func__, reg_1_14_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_14_1: %f \n", __func__, reg_1_14_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_15_0: %f \n", __func__, reg_1_15_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_15_1: %f \n", __func__, reg_1_15_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_16_0: %f \n", __func__, reg_1_16_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_16_1: %f \n", __func__, reg_1_16_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_17_0: %f \n", __func__, reg_1_17_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_17_1: %f \n", __func__, reg_1_17_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_18_0: %f \n", __func__, reg_1_18_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_18_1: %f \n", __func__, reg_1_18_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_19_0: %f \n", __func__, reg_1_19_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_19_1: %f \n", __func__, reg_1_19_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_20_0: %f \n", __func__, reg_1_20_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_20_1: %f \n", __func__, reg_1_20_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_21_0: %f \n", __func__, reg_1_21_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_21_1: %f \n", __func__, reg_1_21_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_22_0: %f \n", __func__, reg_1_22_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_22_1: %f \n", __func__, reg_1_22_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_23_0: %f \n", __func__, reg_1_23_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_23_1: %f \n", __func__, reg_1_23_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_24_0: %f \n", __func__, reg_1_24_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_1_24_1: %f \n", __func__, reg_1_24_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_0_0: %f \n", __func__, reg_2_0_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_0_1: %f \n", __func__, reg_2_0_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_1_0: %f \n", __func__, reg_2_1_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_1_1: %f \n", __func__, reg_2_1_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_2_0: %f \n", __func__, reg_2_2_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_2_1: %f \n", __func__, reg_2_2_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_3_0: %f \n", __func__, reg_2_3_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_3_1: %f \n", __func__, reg_2_3_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_4_0: %f \n", __func__, reg_2_4_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_4_1: %f \n", __func__, reg_2_4_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_5_0: %f \n", __func__, reg_2_5_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_5_1: %f \n", __func__, reg_2_5_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_6_0: %f \n", __func__, reg_2_6_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_6_1: %f \n", __func__, reg_2_6_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_7_0: %f \n", __func__, reg_2_7_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_7_1: %f \n", __func__, reg_2_7_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_8_0: %f \n", __func__, reg_2_8_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_8_1: %f \n", __func__, reg_2_8_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_9_0: %f \n", __func__, reg_2_9_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_9_1: %f \n", __func__, reg_2_9_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_10_0: %f \n", __func__, reg_2_10_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_10_1: %f \n", __func__, reg_2_10_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_11_0: %f \n", __func__, reg_2_11_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_11_1: %f \n", __func__, reg_2_11_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_12_0: %f \n", __func__, reg_2_12_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_12_1: %f \n", __func__, reg_2_12_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_13_0: %f \n", __func__, reg_2_13_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_13_1: %f \n", __func__, reg_2_13_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_14_0: %f \n", __func__, reg_2_14_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_14_1: %f \n", __func__, reg_2_14_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_15_0: %f \n", __func__, reg_2_15_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_15_1: %f \n", __func__, reg_2_15_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_16_0: %f \n", __func__, reg_2_16_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_16_1: %f \n", __func__, reg_2_16_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_17_0: %f \n", __func__, reg_2_17_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_17_1: %f \n", __func__, reg_2_17_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_18_0: %f \n", __func__, reg_2_18_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_18_1: %f \n", __func__, reg_2_18_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_19_0: %f \n", __func__, reg_2_19_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_19_1: %f \n", __func__, reg_2_19_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_20_0: %f \n", __func__, reg_2_20_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_20_1: %f \n", __func__, reg_2_20_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_21_0: %f \n", __func__, reg_2_21_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_21_1: %f \n", __func__, reg_2_21_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_22_0: %f \n", __func__, reg_2_22_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_22_1: %f \n", __func__, reg_2_22_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_23_0: %f \n", __func__, reg_2_23_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_23_1: %f \n", __func__, reg_2_23_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_24_0: %f \n", __func__, reg_2_24_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_24_1: %f \n", __func__, reg_2_24_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_0_0: %f \n", __func__, reg_3_0_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_0_1: %f \n", __func__, reg_3_0_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_1_0: %f \n", __func__, reg_3_1_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_1_1: %f \n", __func__, reg_3_1_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_2_0: %f \n", __func__, reg_3_2_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_2_1: %f \n", __func__, reg_3_2_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_3_0: %f \n", __func__, reg_3_3_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_3_1: %f \n", __func__, reg_3_3_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_4_0: %f \n", __func__, reg_3_4_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_4_1: %f \n", __func__, reg_3_4_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_5_0: %f \n", __func__, reg_3_5_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_5_1: %f \n", __func__, reg_3_5_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_6_0: %f \n", __func__, reg_3_6_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_6_1: %f \n", __func__, reg_3_6_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_7_0: %f \n", __func__, reg_3_7_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_7_1: %f \n", __func__, reg_3_7_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_8_0: %f \n", __func__, reg_3_8_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_8_1: %f \n", __func__, reg_3_8_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_9_0: %f \n", __func__, reg_3_9_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_9_1: %f \n", __func__, reg_3_9_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_10_0: %f \n", __func__, reg_3_10_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_10_1: %f \n", __func__, reg_3_10_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_11_0: %f \n", __func__, reg_3_11_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_11_1: %f \n", __func__, reg_3_11_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_12_0: %f \n", __func__, reg_3_12_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_12_1: %f \n", __func__, reg_3_12_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_13_0: %f \n", __func__, reg_3_13_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_13_1: %f \n", __func__, reg_3_13_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_14_0: %f \n", __func__, reg_3_14_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_14_1: %f \n", __func__, reg_3_14_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_15_0: %f \n", __func__, reg_3_15_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_15_1: %f \n", __func__, reg_3_15_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_16_0: %f \n", __func__, reg_3_16_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_16_1: %f \n", __func__, reg_3_16_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_17_0: %f \n", __func__, reg_3_17_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_17_1: %f \n", __func__, reg_3_17_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_18_0: %f \n", __func__, reg_3_18_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_18_1: %f \n", __func__, reg_3_18_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_19_0: %f \n", __func__, reg_3_19_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_19_1: %f \n", __func__, reg_3_19_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_20_0: %f \n", __func__, reg_3_20_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_20_1: %f \n", __func__, reg_3_20_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_21_0: %f \n", __func__, reg_3_21_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_21_1: %f \n", __func__, reg_3_21_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_22_0: %f \n", __func__, reg_3_22_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_22_1: %f \n", __func__, reg_3_22_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_23_0: %f \n", __func__, reg_3_23_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_23_1: %f \n", __func__, reg_3_23_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_24_0: %f \n", __func__, reg_3_24_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_24_1: %f \n", __func__, reg_3_24_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_0_0: %f \n", __func__, reg_4_0_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_0_1: %f \n", __func__, reg_4_0_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_1_0: %f \n", __func__, reg_4_1_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_1_1: %f \n", __func__, reg_4_1_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_2_0: %f \n", __func__, reg_4_2_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_2_1: %f \n", __func__, reg_4_2_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_3_0: %f \n", __func__, reg_4_3_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_3_1: %f \n", __func__, reg_4_3_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_4_0: %f \n", __func__, reg_4_4_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_4_1: %f \n", __func__, reg_4_4_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_5_0: %f \n", __func__, reg_4_5_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_5_1: %f \n", __func__, reg_4_5_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_6_0: %f \n", __func__, reg_4_6_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_6_1: %f \n", __func__, reg_4_6_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_7_0: %f \n", __func__, reg_4_7_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_7_1: %f \n", __func__, reg_4_7_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_8_0: %f \n", __func__, reg_4_8_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_8_1: %f \n", __func__, reg_4_8_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_9_0: %f \n", __func__, reg_4_9_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_9_1: %f \n", __func__, reg_4_9_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_10_0: %f \n", __func__, reg_4_10_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_10_1: %f \n", __func__, reg_4_10_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_11_0: %f \n", __func__, reg_4_11_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_11_1: %f \n", __func__, reg_4_11_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_12_0: %f \n", __func__, reg_4_12_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_12_1: %f \n", __func__, reg_4_12_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_13_0: %f \n", __func__, reg_4_13_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_13_1: %f \n", __func__, reg_4_13_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_14_0: %f \n", __func__, reg_4_14_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_14_1: %f \n", __func__, reg_4_14_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_15_0: %f \n", __func__, reg_4_15_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_15_1: %f \n", __func__, reg_4_15_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_16_0: %f \n", __func__, reg_4_16_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_16_1: %f \n", __func__, reg_4_16_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_17_0: %f \n", __func__, reg_4_17_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_17_1: %f \n", __func__, reg_4_17_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_18_0: %f \n", __func__, reg_4_18_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_18_1: %f \n", __func__, reg_4_18_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_19_0: %f \n", __func__, reg_4_19_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_19_1: %f \n", __func__, reg_4_19_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_20_0: %f \n", __func__, reg_4_20_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_20_1: %f \n", __func__, reg_4_20_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_21_0: %f \n", __func__, reg_4_21_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_21_1: %f \n", __func__, reg_4_21_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_22_0: %f \n", __func__, reg_4_22_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_22_1: %f \n", __func__, reg_4_22_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_23_0: %f \n", __func__, reg_4_23_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_23_1: %f \n", __func__, reg_4_23_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_24_0: %f \n", __func__, reg_4_24_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_4_24_1: %f \n", __func__, reg_4_24_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_0_0: %f \n", __func__, reg_5_0_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_0_1: %f \n", __func__, reg_5_0_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_1_0: %f \n", __func__, reg_5_1_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_1_1: %f \n", __func__, reg_5_1_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_2_0: %f \n", __func__, reg_5_2_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_2_1: %f \n", __func__, reg_5_2_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_3_0: %f \n", __func__, reg_5_3_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_3_1: %f \n", __func__, reg_5_3_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_4_0: %f \n", __func__, reg_5_4_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_4_1: %f \n", __func__, reg_5_4_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_5_0: %f \n", __func__, reg_5_5_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_5_1: %f \n", __func__, reg_5_5_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_6_0: %f \n", __func__, reg_5_6_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_6_1: %f \n", __func__, reg_5_6_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_7_0: %f \n", __func__, reg_5_7_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_7_1: %f \n", __func__, reg_5_7_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_8_0: %f \n", __func__, reg_5_8_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_8_1: %f \n", __func__, reg_5_8_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_9_0: %f \n", __func__, reg_5_9_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_9_1: %f \n", __func__, reg_5_9_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_10_0: %f \n", __func__, reg_5_10_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_10_1: %f \n", __func__, reg_5_10_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_11_0: %f \n", __func__, reg_5_11_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_11_1: %f \n", __func__, reg_5_11_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_12_0: %f \n", __func__, reg_5_12_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_12_1: %f \n", __func__, reg_5_12_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_13_0: %f \n", __func__, reg_5_13_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_13_1: %f \n", __func__, reg_5_13_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_14_0: %f \n", __func__, reg_5_14_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_14_1: %f \n", __func__, reg_5_14_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_15_0: %f \n", __func__, reg_5_15_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_15_1: %f \n", __func__, reg_5_15_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_16_0: %f \n", __func__, reg_5_16_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_16_1: %f \n", __func__, reg_5_16_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_17_0: %f \n", __func__, reg_5_17_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_17_1: %f \n", __func__, reg_5_17_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_18_0: %f \n", __func__, reg_5_18_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_18_1: %f \n", __func__, reg_5_18_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_19_0: %f \n", __func__, reg_5_19_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_19_1: %f \n", __func__, reg_5_19_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_20_0: %f \n", __func__, reg_5_20_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_20_1: %f \n", __func__, reg_5_20_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_21_0: %f \n", __func__, reg_5_21_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_21_1: %f \n", __func__, reg_5_21_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_22_0: %f \n", __func__, reg_5_22_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_22_1: %f \n", __func__, reg_5_22_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_23_0: %f \n", __func__, reg_5_23_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_23_1: %f \n", __func__, reg_5_23_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_24_0: %f \n", __func__, reg_5_24_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_5_24_1: %f \n", __func__, reg_5_24_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_0_0: %f \n", __func__, reg_6_0_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_0_1: %f \n", __func__, reg_6_0_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_1_0: %f \n", __func__, reg_6_1_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_1_1: %f \n", __func__, reg_6_1_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_2_0: %f \n", __func__, reg_6_2_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_2_1: %f \n", __func__, reg_6_2_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_3_0: %f \n", __func__, reg_6_3_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_3_1: %f \n", __func__, reg_6_3_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_4_0: %f \n", __func__, reg_6_4_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_4_1: %f \n", __func__, reg_6_4_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_5_0: %f \n", __func__, reg_6_5_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_5_1: %f \n", __func__, reg_6_5_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_6_0: %f \n", __func__, reg_6_6_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_6_1: %f \n", __func__, reg_6_6_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_7_0: %f \n", __func__, reg_6_7_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_7_1: %f \n", __func__, reg_6_7_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_8_0: %f \n", __func__, reg_6_8_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_8_1: %f \n", __func__, reg_6_8_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_9_0: %f \n", __func__, reg_6_9_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_9_1: %f \n", __func__, reg_6_9_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_10_0: %f \n", __func__, reg_6_10_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_10_1: %f \n", __func__, reg_6_10_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_11_0: %f \n", __func__, reg_6_11_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_11_1: %f \n", __func__, reg_6_11_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_12_0: %f \n", __func__, reg_6_12_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_12_1: %f \n", __func__, reg_6_12_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_13_0: %f \n", __func__, reg_6_13_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_13_1: %f \n", __func__, reg_6_13_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_14_0: %f \n", __func__, reg_6_14_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_14_1: %f \n", __func__, reg_6_14_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_15_0: %f \n", __func__, reg_6_15_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_15_1: %f \n", __func__, reg_6_15_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_16_0: %f \n", __func__, reg_6_16_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_16_1: %f \n", __func__, reg_6_16_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_17_0: %f \n", __func__, reg_6_17_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_17_1: %f \n", __func__, reg_6_17_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_18_0: %f \n", __func__, reg_6_18_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_18_1: %f \n", __func__, reg_6_18_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_19_0: %f \n", __func__, reg_6_19_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_19_1: %f \n", __func__, reg_6_19_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_20_0: %f \n", __func__, reg_6_20_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_20_1: %f \n", __func__, reg_6_20_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_21_0: %f \n", __func__, reg_6_21_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_21_1: %f \n", __func__, reg_6_21_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_22_0: %f \n", __func__, reg_6_22_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_22_1: %f \n", __func__, reg_6_22_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_23_0: %f \n", __func__, reg_6_23_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_23_1: %f \n", __func__, reg_6_23_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_24_0: %f \n", __func__, reg_6_24_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_6_24_1: %f \n", __func__, reg_6_24_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_7_0_0: %f \n", __func__, reg_7_0_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_7_0_1: %f \n", __func__, reg_7_0_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_8_0_0: %f \n", __func__, reg_8_0_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_8_0_1: %f \n", __func__, reg_8_0_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_9_0_0: %f \n", __func__, reg_9_0_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_9_0_1: %f \n", __func__, reg_9_0_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_0_0: %f \n", __func__, reg_10_0_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_0_1: %f \n", __func__, reg_10_0_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_1_0: %f \n", __func__, reg_10_1_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_1_1: %f \n", __func__, reg_10_1_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_2_0: %f \n", __func__, reg_10_2_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_2_1: %f \n", __func__, reg_10_2_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_3_0: %f \n", __func__, reg_10_3_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_3_1: %f \n", __func__, reg_10_3_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_4_0: %f \n", __func__, reg_10_4_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_4_1: %f \n", __func__, reg_10_4_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_5_0: %f \n", __func__, reg_10_5_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_5_1: %f \n", __func__, reg_10_5_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_6_0: %f \n", __func__, reg_10_6_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_6_1: %f \n", __func__, reg_10_6_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_7_0: %f \n", __func__, reg_10_7_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_7_1: %f \n", __func__, reg_10_7_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_8_0: %f \n", __func__, reg_10_8_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_8_1: %f \n", __func__, reg_10_8_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_9_0: %f \n", __func__, reg_10_9_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_9_1: %f \n", __func__, reg_10_9_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_10_0: %f \n", __func__, reg_10_10_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_10_1: %f \n", __func__, reg_10_10_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_11_0: %f \n", __func__, reg_10_11_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_11_1: %f \n", __func__, reg_10_11_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_12_0: %f \n", __func__, reg_10_12_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_12_1: %f \n", __func__, reg_10_12_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_13_0: %f \n", __func__, reg_10_13_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_13_1: %f \n", __func__, reg_10_13_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_14_0: %f \n", __func__, reg_10_14_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_14_1: %f \n", __func__, reg_10_14_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_15_0: %f \n", __func__, reg_10_15_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_15_1: %f \n", __func__, reg_10_15_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_16_0: %f \n", __func__, reg_10_16_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_16_1: %f \n", __func__, reg_10_16_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_17_0: %f \n", __func__, reg_10_17_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_17_1: %f \n", __func__, reg_10_17_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_18_0: %f \n", __func__, reg_10_18_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_18_1: %f \n", __func__, reg_10_18_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_19_0: %f \n", __func__, reg_10_19_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_19_1: %f \n", __func__, reg_10_19_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_20_0: %f \n", __func__, reg_10_20_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_20_1: %f \n", __func__, reg_10_20_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_21_0: %f \n", __func__, reg_10_21_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_21_1: %f \n", __func__, reg_10_21_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_22_0: %f \n", __func__, reg_10_22_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_22_1: %f \n", __func__, reg_10_22_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_23_0: %f \n", __func__, reg_10_23_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_23_1: %f \n", __func__, reg_10_23_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_24_0: %f \n", __func__, reg_10_24_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_10_24_1: %f \n", __func__, reg_10_24_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_0_0: %f \n", __func__, reg_11_0_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_0_1: %f \n", __func__, reg_11_0_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_1_0: %f \n", __func__, reg_11_1_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_1_1: %f \n", __func__, reg_11_1_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_2_0: %f \n", __func__, reg_11_2_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_2_1: %f \n", __func__, reg_11_2_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_3_0: %f \n", __func__, reg_11_3_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_3_1: %f \n", __func__, reg_11_3_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_4_0: %f \n", __func__, reg_11_4_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_4_1: %f \n", __func__, reg_11_4_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_5_0: %f \n", __func__, reg_11_5_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_5_1: %f \n", __func__, reg_11_5_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_6_0: %f \n", __func__, reg_11_6_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_6_1: %f \n", __func__, reg_11_6_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_7_0: %f \n", __func__, reg_11_7_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_7_1: %f \n", __func__, reg_11_7_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_8_0: %f \n", __func__, reg_11_8_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_8_1: %f \n", __func__, reg_11_8_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_9_0: %f \n", __func__, reg_11_9_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_9_1: %f \n", __func__, reg_11_9_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_10_0: %f \n", __func__, reg_11_10_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_10_1: %f \n", __func__, reg_11_10_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_11_0: %f \n", __func__, reg_11_11_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_11_1: %f \n", __func__, reg_11_11_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_12_0: %f \n", __func__, reg_11_12_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_12_1: %f \n", __func__, reg_11_12_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_13_0: %f \n", __func__, reg_11_13_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_13_1: %f \n", __func__, reg_11_13_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_14_0: %f \n", __func__, reg_11_14_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_14_1: %f \n", __func__, reg_11_14_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_15_0: %f \n", __func__, reg_11_15_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_15_1: %f \n", __func__, reg_11_15_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_16_0: %f \n", __func__, reg_11_16_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_16_1: %f \n", __func__, reg_11_16_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_17_0: %f \n", __func__, reg_11_17_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_17_1: %f \n", __func__, reg_11_17_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_18_0: %f \n", __func__, reg_11_18_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_18_1: %f \n", __func__, reg_11_18_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_19_0: %f \n", __func__, reg_11_19_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_19_1: %f \n", __func__, reg_11_19_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_20_0: %f \n", __func__, reg_11_20_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_20_1: %f \n", __func__, reg_11_20_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_21_0: %f \n", __func__, reg_11_21_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_21_1: %f \n", __func__, reg_11_21_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_22_0: %f \n", __func__, reg_11_22_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_22_1: %f \n", __func__, reg_11_22_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_23_0: %f \n", __func__, reg_11_23_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_23_1: %f \n", __func__, reg_11_23_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_24_0: %f \n", __func__, reg_11_24_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_11_24_1: %f \n", __func__, reg_11_24_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_0_0: %f \n", __func__, reg_12_0_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_0_1: %f \n", __func__, reg_12_0_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_1_0: %f \n", __func__, reg_12_1_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_1_1: %f \n", __func__, reg_12_1_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_2_0: %f \n", __func__, reg_12_2_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_2_1: %f \n", __func__, reg_12_2_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_3_0: %f \n", __func__, reg_12_3_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_3_1: %f \n", __func__, reg_12_3_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_4_0: %f \n", __func__, reg_12_4_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_4_1: %f \n", __func__, reg_12_4_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_5_0: %f \n", __func__, reg_12_5_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_5_1: %f \n", __func__, reg_12_5_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_6_0: %f \n", __func__, reg_12_6_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_6_1: %f \n", __func__, reg_12_6_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_7_0: %f \n", __func__, reg_12_7_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_7_1: %f \n", __func__, reg_12_7_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_8_0: %f \n", __func__, reg_12_8_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_8_1: %f \n", __func__, reg_12_8_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_9_0: %f \n", __func__, reg_12_9_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_9_1: %f \n", __func__, reg_12_9_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_10_0: %f \n", __func__, reg_12_10_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_10_1: %f \n", __func__, reg_12_10_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_11_0: %f \n", __func__, reg_12_11_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_11_1: %f \n", __func__, reg_12_11_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_12_0: %f \n", __func__, reg_12_12_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_12_1: %f \n", __func__, reg_12_12_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_13_0: %f \n", __func__, reg_12_13_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_13_1: %f \n", __func__, reg_12_13_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_14_0: %f \n", __func__, reg_12_14_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_14_1: %f \n", __func__, reg_12_14_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_15_0: %f \n", __func__, reg_12_15_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_15_1: %f \n", __func__, reg_12_15_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_16_0: %f \n", __func__, reg_12_16_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_16_1: %f \n", __func__, reg_12_16_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_17_0: %f \n", __func__, reg_12_17_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_17_1: %f \n", __func__, reg_12_17_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_18_0: %f \n", __func__, reg_12_18_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_18_1: %f \n", __func__, reg_12_18_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_19_0: %f \n", __func__, reg_12_19_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_19_1: %f \n", __func__, reg_12_19_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_20_0: %f \n", __func__, reg_12_20_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_20_1: %f \n", __func__, reg_12_20_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_21_0: %f \n", __func__, reg_12_21_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_21_1: %f \n", __func__, reg_12_21_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_22_0: %f \n", __func__, reg_12_22_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_22_1: %f \n", __func__, reg_12_22_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_23_0: %f \n", __func__, reg_12_23_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_23_1: %f \n", __func__, reg_12_23_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_24_0: %f \n", __func__, reg_12_24_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_12_24_1: %f \n", __func__, reg_12_24_1);
#endif

#ifdef DEBUG_LOG
    printf("[KERNEL_INTERNAL_CORE]|%s| exiting: kernel_fd3d_pml_kernel2_core\n",__func__);
#endif
}

class Stencil_fd3d_pml_kernel2 : public ops::hls::StencilCoreV2<stencil_type, read_num_points_fd3d_pml_kernel2, vector_factor, ops::hls::CoefTypes::CONST_COEF,
        read_stencil_size_fd3d_pml_kernel2, read_stencil_dim_fd3d_pml_kernel2>
{
    using ops::hls::StencilCoreV2<stencil_type, read_num_points_fd3d_pml_kernel2, vector_factor, ops::hls::CoefTypes::CONST_COEF,
            read_stencil_size_fd3d_pml_kernel2, read_stencil_dim_fd3d_pml_kernel2>::m_stencilConfig;
public:

    void stencilRun(
            const int& disps0,
            const int& disps1,
            const int& disps2,
            const float& dt,
            const float& scale1_der2_2,
            const float& scale2_der2_2,
            widen_stream_fd3d_pml_kernel2_0_dt& arg0_rd_buffer,
            widen_stream_fd3d_pml_kernel2_0_dt& arg0_wr_buffer,
            widen_stream_fd3d_pml_kernel2_1_dt& arg1_rd_buffer,
            widen_stream_fd3d_pml_kernel2_1_dt& arg1_wr_buffer,
            widen_stream_fd3d_pml_kernel2_2_dt& arg2_rd_buffer,
            widen_stream_fd3d_pml_kernel2_2_dt& arg2_wr_buffer,
            widen_stream_fd3d_pml_kernel2_3_dt& arg3_rd_buffer,
            widen_stream_fd3d_pml_kernel2_3_dt& arg3_wr_buffer,
            widen_stream_fd3d_pml_kernel2_4_dt& arg4_rd_buffer,
            widen_stream_fd3d_pml_kernel2_5_dt& arg5_rd_buffer,
            widen_stream_fd3d_pml_kernel2_6_dt& arg6_rd_buffer,
            widen_stream_fd3d_pml_kernel2_7_dt& arg7_wr_buffer,
            widen_stream_fd3d_pml_kernel2_8_dt& arg8_wr_buffer,
            widen_stream_fd3d_pml_kernel2_9_dt& arg9_wr_buffer,
            widen_stream_fd3d_pml_kernel2_10_dt& arg10_rd_buffer,
            widen_stream_fd3d_pml_kernel2_10_dt& arg10_wr_buffer,
            widen_stream_fd3d_pml_kernel2_11_dt& arg11_rd_buffer,
            widen_stream_fd3d_pml_kernel2_11_dt& arg11_wr_buffer,
            widen_stream_fd3d_pml_kernel2_12_dt& arg12_rd_buffer,
            widen_stream_fd3d_pml_kernel2_12_dt& arg12_wr_buffer,
            const float& dx,
            const float& dy,
            const float& dz,
            const float& invdx,
            const float& invdy,
            const float& invdz,
            const int& nx,
            const int& ny,
            const int& nz,
            const int& pml_width,
            const int& half_order,
            const int& order
        )
    {
        const unsigned short span_x = 8;
        const unsigned short half_span_x = 4;

        ::ops::hls::StencilConfigCore stencilConfig = m_stencilConfig;
    //read_origin_wide_diff_x: 0, read_origin_wide_diff: (0,0,4)

    //  *** counters definitions ****
        short i = -1;
        short j = 0; 
        short k = -4;
        unsigned short plane_diff = stencilConfig.grid_size[0] * stencilConfig.grid_size[1] - 1;

    //  *** stencil description and read & write point definitions  ****
        /*
        WindowBufferDiscriptor(widen_stencil=Stencil(id=-1, dim=3, stencil_ptr='read_stencil_widen', num_points=25, points=[Point(x=4, y=4, z=0), Point(x=4, y=4, z=1), Point(x=4, y=4, z=2), Point(x=4, y=4, z=3), Point(x=4, y=0, z=4), Point(x=4, y=1, z=4), Point(x=4, y=2, z=4), Point(x=4, y=3, z=4), Point(x=0, y=4, z=4), Point(x=1, y=4, z=4), Point(x=2, y=4, z=4), Point(x=3, y=4, z=4), Point(x=4, y=4, z=4), Point(x=5, y=4, z=4), Point(x=6, y=4, z=4), Point(x=7, y=4, z=4), Point(x=8, y=4, z=4), Point(x=4, y=5, z=4), Point(x=4, y=6, z=4), Point(x=4, y=7, z=4), Point(x=4, y=8, z=4), Point(x=4, y=4, z=5), Point(x=4, y=4, z=6), Point(x=4, y=4, z=7), Point(x=4, y=4, z=8)], base_point=Point(x=4, y=4, z=4), stencil_size=Point(x=9, y=9, z=9), d_m=Point(x=4.0, y=4, z=4), d_p=Point(x=4.0, y=4, z=4), row_discriptors=[StencilRowDiscriptor(row_id=(4, 0), base_point=Point(x=4, y=4, z=4), row_points=[Point(x=4, y=4, z=0)]), StencilRowDiscriptor(row_id=(4, 1), base_point=Point(x=4, y=4, z=4), row_points=[Point(x=4, y=4, z=1)]), StencilRowDiscriptor(row_id=(4, 2), base_point=Point(x=4, y=4, z=4), row_points=[Point(x=4, y=4, z=2)]), StencilRowDiscriptor(row_id=(4, 3), base_point=Point(x=4, y=4, z=4), row_points=[Point(x=4, y=4, z=3)]), StencilRowDiscriptor(row_id=(0, 4), base_point=Point(x=4, y=4, z=4), row_points=[Point(x=4, y=0, z=4)]), StencilRowDiscriptor(row_id=(1, 4), base_point=Point(x=4, y=4, z=4), row_points=[Point(x=4, y=1, z=4)]), StencilRowDiscriptor(row_id=(2, 4), base_point=Point(x=4, y=4, z=4), row_points=[Point(x=4, y=2, z=4)]), StencilRowDiscriptor(row_id=(3, 4), base_point=Point(x=4, y=4, z=4), row_points=[Point(x=4, y=3, z=4)]), StencilRowDiscriptor(row_id=(4, 4), base_point=Point(x=4, y=4, z=4), row_points=[Point(x=0, y=4, z=4), Point(x=1, y=4, z=4), Point(x=2, y=4, z=4), Point(x=3, y=4, z=4), Point(x=4, y=4, z=4), Point(x=5, y=4, z=4), Point(x=6, y=4, z=4), Point(x=7, y=4, z=4), Point(x=8, y=4, z=4)]), StencilRowDiscriptor(row_id=(5, 4), base_point=Point(x=4, y=4, z=4), row_points=[Point(x=4, y=5, z=4)]), StencilRowDiscriptor(row_id=(6, 4), base_point=Point(x=4, y=4, z=4), row_points=[Point(x=4, y=6, z=4)]), StencilRowDiscriptor(row_id=(7, 4), base_point=Point(x=4, y=4, z=4), row_points=[Point(x=4, y=7, z=4)]), StencilRowDiscriptor(row_id=(8, 4), base_point=Point(x=4, y=4, z=4), row_points=[Point(x=4, y=8, z=4)]), StencilRowDiscriptor(row_id=(4, 5), base_point=Point(x=4, y=4, z=4), row_points=[Point(x=4, y=4, z=5)]), StencilRowDiscriptor(row_id=(4, 6), base_point=Point(x=4, y=4, z=4), row_points=[Point(x=4, y=4, z=6)]), StencilRowDiscriptor(row_id=(4, 7), base_point=Point(x=4, y=4, z=4), row_points=[Point(x=4, y=4, z=7)]), StencilRowDiscriptor(row_id=(4, 8), base_point=Point(x=4, y=4, z=4), row_points=[Point(x=4, y=4, z=8)])], stride=[], read_origin_diff=Point(x=0, y=0, z=4)), window_buffers=[WindowBuffer(name='buf_p0_1', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=1), write_point=Point(x=4, y=4, z=0), is_read_write_aligned=True), WindowBuffer(name='buf_p1_2', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=2), write_point=Point(x=4, y=4, z=1), is_read_write_aligned=True), WindowBuffer(name='buf_p2_3', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=3), write_point=Point(x=4, y=4, z=2), is_read_write_aligned=True), WindowBuffer(name='buf_p3_4', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=0, z=4), write_point=Point(x=4, y=4, z=3), is_read_write_aligned=False), WindowBuffer(name='buf_r0_1_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=1, z=4), write_point=Point(x=4, y=0, z=4), is_read_write_aligned=True), WindowBuffer(name='buf_r1_2_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=2, z=4), write_point=Point(x=4, y=1, z=4), is_read_write_aligned=True), WindowBuffer(name='buf_r2_3_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=3, z=4), write_point=Point(x=4, y=2, z=4), is_read_write_aligned=True), WindowBuffer(name='buf_r3_4_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=4, z=4), write_point=Point(x=4, y=3, z=4), is_read_write_aligned=False), WindowBuffer(name='buf_r4_5_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=5, z=4), write_point=Point(x=8, y=4, z=4), is_read_write_aligned=False), WindowBuffer(name='buf_r5_6_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=6, z=4), write_point=Point(x=4, y=5, z=4), is_read_write_aligned=True), WindowBuffer(name='buf_r6_7_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=7, z=4), write_point=Point(x=4, y=6, z=4), is_read_write_aligned=True), WindowBuffer(name='buf_r7_8_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=8, z=4), write_point=Point(x=4, y=7, z=4), is_read_write_aligned=True), WindowBuffer(name='buf_p4_5', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=5), write_point=Point(x=4, y=8, z=4), is_read_write_aligned=False), WindowBuffer(name='buf_p5_6', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=6), write_point=Point(x=4, y=4, z=5), is_read_write_aligned=True), WindowBuffer(name='buf_p6_7', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=7), write_point=Point(x=4, y=4, z=6), is_read_write_aligned=True), WindowBuffer(name='buf_p7_8', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=8), write_point=Point(x=4, y=4, z=7), is_read_write_aligned=True)], chains=[(0, WindowBuffer(name='buf_p0_1', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=1), write_point=Point(x=4, y=4, z=0), is_read_write_aligned=True)), (1, WindowBuffer(name='buf_p1_2', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=2), write_point=Point(x=4, y=4, z=1), is_read_write_aligned=True)), (WindowBuffer(name='buf_p0_1', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=1), write_point=Point(x=4, y=4, z=0), is_read_write_aligned=True), 1), (2, WindowBuffer(name='buf_p2_3', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=3), write_point=Point(x=4, y=4, z=2), is_read_write_aligned=True)), (WindowBuffer(name='buf_p1_2', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=2), write_point=Point(x=4, y=4, z=1), is_read_write_aligned=True), 2), (3, WindowBuffer(name='buf_p3_4', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=0, z=4), write_point=Point(x=4, y=4, z=3), is_read_write_aligned=False)), (WindowBuffer(name='buf_p2_3', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=3), write_point=Point(x=4, y=4, z=2), is_read_write_aligned=True), 3), (4, WindowBuffer(name='buf_r0_1_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=1, z=4), write_point=Point(x=4, y=0, z=4), is_read_write_aligned=True)), (WindowBuffer(name='buf_p3_4', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=0, z=4), write_point=Point(x=4, y=4, z=3), is_read_write_aligned=False), 4), (5, WindowBuffer(name='buf_r1_2_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=2, z=4), write_point=Point(x=4, y=1, z=4), is_read_write_aligned=True)), (WindowBuffer(name='buf_r0_1_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=1, z=4), write_point=Point(x=4, y=0, z=4), is_read_write_aligned=True), 5), (6, WindowBuffer(name='buf_r2_3_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=3, z=4), write_point=Point(x=4, y=2, z=4), is_read_write_aligned=True)), (WindowBuffer(name='buf_r1_2_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=2, z=4), write_point=Point(x=4, y=1, z=4), is_read_write_aligned=True), 6), (7, WindowBuffer(name='buf_r3_4_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=4, z=4), write_point=Point(x=4, y=3, z=4), is_read_write_aligned=False)), (WindowBuffer(name='buf_r2_3_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=3, z=4), write_point=Point(x=4, y=2, z=4), is_read_write_aligned=True), 7), (8, 9), (9, 10), (10, 11), (11, 12), (12, 13), (13, 14), (14, 15), (15, 16), (16, WindowBuffer(name='buf_r4_5_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=5, z=4), write_point=Point(x=8, y=4, z=4), is_read_write_aligned=False)), (WindowBuffer(name='buf_r3_4_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=4, z=4), write_point=Point(x=4, y=3, z=4), is_read_write_aligned=False), 8), (17, WindowBuffer(name='buf_r5_6_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=6, z=4), write_point=Point(x=4, y=5, z=4), is_read_write_aligned=True)), (WindowBuffer(name='buf_r4_5_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=5, z=4), write_point=Point(x=8, y=4, z=4), is_read_write_aligned=False), 17), (18, WindowBuffer(name='buf_r6_7_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=7, z=4), write_point=Point(x=4, y=6, z=4), is_read_write_aligned=True)), (WindowBuffer(name='buf_r5_6_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=6, z=4), write_point=Point(x=4, y=5, z=4), is_read_write_aligned=True), 18), (19, WindowBuffer(name='buf_r7_8_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=8, z=4), write_point=Point(x=4, y=7, z=4), is_read_write_aligned=True)), (WindowBuffer(name='buf_r6_7_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=7, z=4), write_point=Point(x=4, y=6, z=4), is_read_write_aligned=True), 19), (20, WindowBuffer(name='buf_p4_5', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=5), write_point=Point(x=4, y=8, z=4), is_read_write_aligned=False)), (WindowBuffer(name='buf_r7_8_p4', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=4, y=8, z=4), write_point=Point(x=4, y=7, z=4), is_read_write_aligned=True), 20), (21, WindowBuffer(name='buf_p5_6', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=6), write_point=Point(x=4, y=4, z=5), is_read_write_aligned=True)), (WindowBuffer(name='buf_p4_5', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=5), write_point=Point(x=4, y=8, z=4), is_read_write_aligned=False), 21), (22, WindowBuffer(name='buf_p6_7', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=7), write_point=Point(x=4, y=4, z=6), is_read_write_aligned=True)), (WindowBuffer(name='buf_p5_6', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=6), write_point=Point(x=4, y=4, z=5), is_read_write_aligned=True), 22), (23, WindowBuffer(name='buf_p7_8', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=8), write_point=Point(x=4, y=4, z=7), is_read_write_aligned=True)), (WindowBuffer(name='buf_p6_7', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=7), write_point=Point(x=4, y=4, z=6), is_read_write_aligned=True), 23), (24, 'read_val'), (WindowBuffer(name='buf_p7_8', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=4, y=4, z=8), write_point=Point(x=4, y=4, z=7), is_read_write_aligned=True), 24)], point_to_widen_map={Point(x=4, y=4, z=0): Point(x=4, y=4, z=0), Point(x=4, y=4, z=1): Point(x=4, y=4, z=1), Point(x=4, y=4, z=2): Point(x=4, y=4, z=2), Point(x=4, y=4, z=3): Point(x=4, y=4, z=3), Point(x=4, y=0, z=4): Point(x=4, y=0, z=4), Point(x=4, y=1, z=4): Point(x=4, y=1, z=4), Point(x=4, y=2, z=4): Point(x=4, y=2, z=4), Point(x=4, y=3, z=4): Point(x=4, y=3, z=4), Point(x=0, y=4, z=4): Point(x=0, y=4, z=4), Point(x=1, y=4, z=4): Point(x=1, y=4, z=4), Point(x=2, y=4, z=4): Point(x=2, y=4, z=4), Point(x=3, y=4, z=4): Point(x=3, y=4, z=4), Point(x=4, y=4, z=4): Point(x=4, y=4, z=4), Point(x=5, y=4, z=4): Point(x=5, y=4, z=4), Point(x=6, y=4, z=4): Point(x=6, y=4, z=4), Point(x=7, y=4, z=4): Point(x=7, y=4, z=4), Point(x=8, y=4, z=4): Point(x=8, y=4, z=4), Point(x=4, y=5, z=4): Point(x=4, y=5, z=4), Point(x=4, y=6, z=4): Point(x=4, y=6, z=4), Point(x=4, y=7, z=4): Point(x=4, y=7, z=4), Point(x=4, y=8, z=4): Point(x=4, y=8, z=4), Point(x=4, y=4, z=5): Point(x=4, y=4, z=5), Point(x=4, y=4, z=6): Point(x=4, y=4, z=6), Point(x=4, y=4, z=7): Point(x=4, y=4, z=7), Point(x=4, y=4, z=8): Point(x=4, y=4, z=8)})
        */
        // Stencil: S3D_big_sten
        //      |- point: (4,4,0)
        //      |- point: (4,4,1)
        //      |- point: (4,4,2)
        //      |- point: (4,4,3)
        //      |- point: (4,0,4)
        //      |- point: (4,1,4)
        //      |- point: (4,2,4)
        //      |- point: (4,3,4)
        //      |- point: (0,4,4)
        //      |- point: (1,4,4)
        //      |- point: (2,4,4)
        //      |- point: (3,4,4)
        //      |- point: (4,4,4)
        //      |- point: (5,4,4)
        //      |- point: (6,4,4)
        //      |- point: (7,4,4)
        //      |- point: (8,4,4)
        //      |- point: (4,5,4)
        //      |- point: (4,6,4)
        //      |- point: (4,7,4)
        //      |- point: (4,8,4)
        //      |- point: (4,4,5)
        //      |- point: (4,4,6)
        //      |- point: (4,4,7)
        //      `- point: (4,4,8)
        unsigned short S3D_big_sten_buf_p0_1_rd_wr = 0;
        unsigned short S3D_big_sten_buf_p1_2_rd_wr = 0;
        unsigned short S3D_big_sten_buf_p2_3_rd_wr = 0;
        unsigned short S3D_big_sten_buf_p3_4_rd;

        if (-4 * stencilConfig.grid_size[0] + 0 > 0)
            S3D_big_sten_buf_p3_4_rd = -4 * stencilConfig.grid_size[0] + 0;
        else
            S3D_big_sten_buf_p3_4_rd = 0;

        unsigned short S3D_big_sten_buf_p3_4_wr;

        if (4 * stencilConfig.grid_size[0] + 0 > 0)
            S3D_big_sten_buf_p3_4_wr = 4 * stencilConfig.grid_size[0] + 0;
        else
            S3D_big_sten_buf_p3_4_wr = 0;
        // read point: (4,1,4), write point: (4,0,4)
        unsigned short S3D_big_sten_buf_r0_1_p4_rd_wr = 0;
        // read point: (4,2,4), write point: (4,1,4)
        unsigned short S3D_big_sten_buf_r1_2_p4_rd_wr = 0;
        // read point: (4,3,4), write point: (4,2,4)
        unsigned short S3D_big_sten_buf_r2_3_p4_rd_wr = 0;
        // read point: (0,4,4), write point: (4,3,4)
        unsigned short S3D_big_sten_buf_r3_4_p4_rd = 0;
        unsigned short S3D_big_sten_buf_r3_4_p4_wr = 4;
        // read point: (4,5,4), write point: (8,4,4)
        unsigned short S3D_big_sten_buf_r4_5_p4_rd = 0;
        unsigned short S3D_big_sten_buf_r4_5_p4_wr = 4;
        // read point: (4,6,4), write point: (4,5,4)
        unsigned short S3D_big_sten_buf_r5_6_p4_rd_wr = 0;
        // read point: (4,7,4), write point: (4,6,4)
        unsigned short S3D_big_sten_buf_r6_7_p4_rd_wr = 0;
        // read point: (4,8,4), write point: (4,7,4)
        unsigned short S3D_big_sten_buf_r7_8_p4_rd_wr = 0;
        unsigned short S3D_big_sten_buf_p4_5_rd;

        if (-4 * stencilConfig.grid_size[0] + 0 > 0)
            S3D_big_sten_buf_p4_5_rd = -4 * stencilConfig.grid_size[0] + 0;
        else
            S3D_big_sten_buf_p4_5_rd = 0;

        unsigned short S3D_big_sten_buf_p4_5_wr;

        if (4 * stencilConfig.grid_size[0] + 0 > 0)
            S3D_big_sten_buf_p4_5_wr = 4 * stencilConfig.grid_size[0] + 0;
        else
            S3D_big_sten_buf_p4_5_wr = 0;
        unsigned short S3D_big_sten_buf_p5_6_rd_wr = 0;
        unsigned short S3D_big_sten_buf_p6_7_rd_wr = 0;
        unsigned short S3D_big_sten_buf_p7_8_rd_wr = 0;

        #pragma HLS ARRAY_PARTITION variable = stencilConfig.lower_limit dim = 1 complete
        #pragma HLS ARRAY_PARTITION variable = stencilConfig.upper_limit dim = 1 complete

    //  *** iteration limit definition ****
        unsigned int iter_limit = stencilConfig.outer_loop_limit * 
                stencilConfig.grid_size[1] * stencilConfig.grid_size[0] ;

    //  *** data read write boundary definitions ****
            unsigned int S3D_big_sten_read_lb_itr = 0 * stencilConfig.grid_size[0] * stencilConfig.grid_size[1];
            unsigned int S3D_big_sten_read_ub_itr = (0 + stencilConfig.grid_size[2]) * stencilConfig.grid_size[1] * stencilConfig.grid_size[0];

        /*

        unsigned int read_lb_itr = 0;
        unsigned int read_ub_itr = stencilConfig.grid_size[2] * stencilConfig.grid_size[1] * stencilConfig.grid_size[0];
    */
    //  *** Read & write widen temporaries ****
    // arg0(rho_mu)
        widen_fd3d_pml_kernel2_0_dt arg0_read_val = 0;
        widen_fd3d_pml_kernel2_0_dt arg0_update_val;
    // arg1(yy_0_1)
        widen_fd3d_pml_kernel2_1_dt arg1_read_val = 0;
        widen_fd3d_pml_kernel2_1_dt arg1_update_val;
    // arg2(yy_2_3)
        widen_fd3d_pml_kernel2_2_dt arg2_read_val = 0;
        widen_fd3d_pml_kernel2_2_dt arg2_update_val;
    // arg3(yy_4_5)
        widen_fd3d_pml_kernel2_3_dt arg3_read_val = 0;
        widen_fd3d_pml_kernel2_3_dt arg3_update_val;
    // arg4(ytemp2_0_1)
        widen_fd3d_pml_kernel2_4_dt arg4_read_val = 0;
    // arg5(ytemp2_2_3)
        widen_fd3d_pml_kernel2_5_dt arg5_read_val = 0;
    // arg6(ytemp2_4_5)
        widen_fd3d_pml_kernel2_6_dt arg6_read_val = 0;
    // arg7(ytemp1_0_1)
        widen_fd3d_pml_kernel2_7_dt arg7_update_val;
    // arg8(ytemp1_2_3)
        widen_fd3d_pml_kernel2_8_dt arg8_update_val;
    // arg9(ytemp1_4_5)
        widen_fd3d_pml_kernel2_9_dt arg9_update_val;
    // arg10(yy_sum_0_1)
        widen_fd3d_pml_kernel2_10_dt arg10_read_val = 0;
        widen_fd3d_pml_kernel2_10_dt arg10_update_val;
    // arg11(yy_sum_2_3)
        widen_fd3d_pml_kernel2_11_dt arg11_read_val = 0;
        widen_fd3d_pml_kernel2_11_dt arg11_update_val;
    // arg12(yy_sum_4_5)
        widen_fd3d_pml_kernel2_12_dt arg12_read_val = 0;
        widen_fd3d_pml_kernel2_12_dt arg12_update_val;
    //  *** widen stencil values holder & window buffers ****

        // arg0(rho_mu)
        widen_fd3d_pml_kernel2_0_dt arg0_widenStencilValues[read_num_points_fd3d_pml_kernel2];
        #pragma HLS ARRAY_PARTITION variable = arg0_widenStencilValues dim = 1 complete

        widen_fd3d_pml_kernel2_0_dt arg0_buf_p0_1[max_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_p0_1 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_0_dt arg0_buf_p1_2[max_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_p1_2 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_0_dt arg0_buf_p2_3[max_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_p2_3 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_0_dt arg0_buf_p3_4[max_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_p3_4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_0_dt arg0_buf_r0_1_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_r0_1_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_0_dt arg0_buf_r1_2_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_r1_2_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_0_dt arg0_buf_r2_3_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_r2_3_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_0_dt arg0_buf_r3_4_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_r3_4_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_0_dt arg0_buf_r4_5_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_r4_5_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_0_dt arg0_buf_r5_6_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_r5_6_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_0_dt arg0_buf_r6_7_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_r6_7_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_0_dt arg0_buf_r7_8_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_r7_8_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_0_dt arg0_buf_p4_5[max_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_p4_5 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_0_dt arg0_buf_p5_6[max_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_p5_6 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_0_dt arg0_buf_p6_7[max_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_p6_7 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_0_dt arg0_buf_p7_8[max_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_p7_8 type = ram_s2p latency=2

        stencil_type arg0_0_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_0_rowArr_4_0 dim=1 complete
        stencil_type arg0_1_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_1_rowArr_4_0 dim=1 complete
        stencil_type arg0_0_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_0_rowArr_4_1 dim=1 complete
        stencil_type arg0_1_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_1_rowArr_4_1 dim=1 complete
        stencil_type arg0_0_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_0_rowArr_4_2 dim=1 complete
        stencil_type arg0_1_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_1_rowArr_4_2 dim=1 complete
        stencil_type arg0_0_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_0_rowArr_4_3 dim=1 complete
        stencil_type arg0_1_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_1_rowArr_4_3 dim=1 complete
        stencil_type arg0_0_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_0_rowArr_0_4 dim=1 complete
        stencil_type arg0_1_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_1_rowArr_0_4 dim=1 complete
        stencil_type arg0_0_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_0_rowArr_1_4 dim=1 complete
        stencil_type arg0_1_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_1_rowArr_1_4 dim=1 complete
        stencil_type arg0_0_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_0_rowArr_2_4 dim=1 complete
        stencil_type arg0_1_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_1_rowArr_2_4 dim=1 complete
        stencil_type arg0_0_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_0_rowArr_3_4 dim=1 complete
        stencil_type arg0_1_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_1_rowArr_3_4 dim=1 complete
        stencil_type arg0_0_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_0_rowArr_4_4 dim=1 complete
        stencil_type arg0_1_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_1_rowArr_4_4 dim=1 complete
        stencil_type arg0_0_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_0_rowArr_5_4 dim=1 complete
        stencil_type arg0_1_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_1_rowArr_5_4 dim=1 complete
        stencil_type arg0_0_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_0_rowArr_6_4 dim=1 complete
        stencil_type arg0_1_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_1_rowArr_6_4 dim=1 complete
        stencil_type arg0_0_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_0_rowArr_7_4 dim=1 complete
        stencil_type arg0_1_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_1_rowArr_7_4 dim=1 complete
        stencil_type arg0_0_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_0_rowArr_8_4 dim=1 complete
        stencil_type arg0_1_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_1_rowArr_8_4 dim=1 complete
        stencil_type arg0_0_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_0_rowArr_4_5 dim=1 complete
        stencil_type arg0_1_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_1_rowArr_4_5 dim=1 complete
        stencil_type arg0_0_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_0_rowArr_4_6 dim=1 complete
        stencil_type arg0_1_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_1_rowArr_4_6 dim=1 complete
        stencil_type arg0_0_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_0_rowArr_4_7 dim=1 complete
        stencil_type arg0_1_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_1_rowArr_4_7 dim=1 complete
        stencil_type arg0_0_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_0_rowArr_4_8 dim=1 complete
        stencil_type arg0_1_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_1_rowArr_4_8 dim=1 complete

        // arg1(yy_0_1)
        widen_fd3d_pml_kernel2_1_dt arg1_widenStencilValues[read_num_points_fd3d_pml_kernel2];
        #pragma HLS ARRAY_PARTITION variable = arg1_widenStencilValues dim = 1 complete

        widen_fd3d_pml_kernel2_1_dt arg1_buf_p0_1[max_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_p0_1 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_1_dt arg1_buf_p1_2[max_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_p1_2 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_1_dt arg1_buf_p2_3[max_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_p2_3 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_1_dt arg1_buf_p3_4[max_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_p3_4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_1_dt arg1_buf_r0_1_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_r0_1_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_1_dt arg1_buf_r1_2_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_r1_2_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_1_dt arg1_buf_r2_3_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_r2_3_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_1_dt arg1_buf_r3_4_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_r3_4_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_1_dt arg1_buf_r4_5_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_r4_5_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_1_dt arg1_buf_r5_6_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_r5_6_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_1_dt arg1_buf_r6_7_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_r6_7_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_1_dt arg1_buf_r7_8_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_r7_8_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_1_dt arg1_buf_p4_5[max_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_p4_5 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_1_dt arg1_buf_p5_6[max_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_p5_6 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_1_dt arg1_buf_p6_7[max_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_p6_7 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_1_dt arg1_buf_p7_8[max_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_p7_8 type = ram_s2p latency=2

        stencil_type arg1_0_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_0_rowArr_4_0 dim=1 complete
        stencil_type arg1_1_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_1_rowArr_4_0 dim=1 complete
        stencil_type arg1_0_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_0_rowArr_4_1 dim=1 complete
        stencil_type arg1_1_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_1_rowArr_4_1 dim=1 complete
        stencil_type arg1_0_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_0_rowArr_4_2 dim=1 complete
        stencil_type arg1_1_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_1_rowArr_4_2 dim=1 complete
        stencil_type arg1_0_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_0_rowArr_4_3 dim=1 complete
        stencil_type arg1_1_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_1_rowArr_4_3 dim=1 complete
        stencil_type arg1_0_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_0_rowArr_0_4 dim=1 complete
        stencil_type arg1_1_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_1_rowArr_0_4 dim=1 complete
        stencil_type arg1_0_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_0_rowArr_1_4 dim=1 complete
        stencil_type arg1_1_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_1_rowArr_1_4 dim=1 complete
        stencil_type arg1_0_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_0_rowArr_2_4 dim=1 complete
        stencil_type arg1_1_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_1_rowArr_2_4 dim=1 complete
        stencil_type arg1_0_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_0_rowArr_3_4 dim=1 complete
        stencil_type arg1_1_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_1_rowArr_3_4 dim=1 complete
        stencil_type arg1_0_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_0_rowArr_4_4 dim=1 complete
        stencil_type arg1_1_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_1_rowArr_4_4 dim=1 complete
        stencil_type arg1_0_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_0_rowArr_5_4 dim=1 complete
        stencil_type arg1_1_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_1_rowArr_5_4 dim=1 complete
        stencil_type arg1_0_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_0_rowArr_6_4 dim=1 complete
        stencil_type arg1_1_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_1_rowArr_6_4 dim=1 complete
        stencil_type arg1_0_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_0_rowArr_7_4 dim=1 complete
        stencil_type arg1_1_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_1_rowArr_7_4 dim=1 complete
        stencil_type arg1_0_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_0_rowArr_8_4 dim=1 complete
        stencil_type arg1_1_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_1_rowArr_8_4 dim=1 complete
        stencil_type arg1_0_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_0_rowArr_4_5 dim=1 complete
        stencil_type arg1_1_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_1_rowArr_4_5 dim=1 complete
        stencil_type arg1_0_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_0_rowArr_4_6 dim=1 complete
        stencil_type arg1_1_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_1_rowArr_4_6 dim=1 complete
        stencil_type arg1_0_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_0_rowArr_4_7 dim=1 complete
        stencil_type arg1_1_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_1_rowArr_4_7 dim=1 complete
        stencil_type arg1_0_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_0_rowArr_4_8 dim=1 complete
        stencil_type arg1_1_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_1_rowArr_4_8 dim=1 complete

        // arg2(yy_2_3)
        widen_fd3d_pml_kernel2_2_dt arg2_widenStencilValues[read_num_points_fd3d_pml_kernel2];
        #pragma HLS ARRAY_PARTITION variable = arg2_widenStencilValues dim = 1 complete

        widen_fd3d_pml_kernel2_2_dt arg2_buf_p0_1[max_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_p0_1 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_2_dt arg2_buf_p1_2[max_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_p1_2 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_2_dt arg2_buf_p2_3[max_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_p2_3 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_2_dt arg2_buf_p3_4[max_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_p3_4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_2_dt arg2_buf_r0_1_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_r0_1_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_2_dt arg2_buf_r1_2_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_r1_2_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_2_dt arg2_buf_r2_3_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_r2_3_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_2_dt arg2_buf_r3_4_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_r3_4_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_2_dt arg2_buf_r4_5_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_r4_5_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_2_dt arg2_buf_r5_6_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_r5_6_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_2_dt arg2_buf_r6_7_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_r6_7_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_2_dt arg2_buf_r7_8_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_r7_8_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_2_dt arg2_buf_p4_5[max_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_p4_5 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_2_dt arg2_buf_p5_6[max_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_p5_6 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_2_dt arg2_buf_p6_7[max_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_p6_7 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_2_dt arg2_buf_p7_8[max_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_p7_8 type = ram_s2p latency=2

        stencil_type arg2_0_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_0_rowArr_4_0 dim=1 complete
        stencil_type arg2_1_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_1_rowArr_4_0 dim=1 complete
        stencil_type arg2_0_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_0_rowArr_4_1 dim=1 complete
        stencil_type arg2_1_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_1_rowArr_4_1 dim=1 complete
        stencil_type arg2_0_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_0_rowArr_4_2 dim=1 complete
        stencil_type arg2_1_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_1_rowArr_4_2 dim=1 complete
        stencil_type arg2_0_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_0_rowArr_4_3 dim=1 complete
        stencil_type arg2_1_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_1_rowArr_4_3 dim=1 complete
        stencil_type arg2_0_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_0_rowArr_0_4 dim=1 complete
        stencil_type arg2_1_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_1_rowArr_0_4 dim=1 complete
        stencil_type arg2_0_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_0_rowArr_1_4 dim=1 complete
        stencil_type arg2_1_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_1_rowArr_1_4 dim=1 complete
        stencil_type arg2_0_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_0_rowArr_2_4 dim=1 complete
        stencil_type arg2_1_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_1_rowArr_2_4 dim=1 complete
        stencil_type arg2_0_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_0_rowArr_3_4 dim=1 complete
        stencil_type arg2_1_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_1_rowArr_3_4 dim=1 complete
        stencil_type arg2_0_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_0_rowArr_4_4 dim=1 complete
        stencil_type arg2_1_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_1_rowArr_4_4 dim=1 complete
        stencil_type arg2_0_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_0_rowArr_5_4 dim=1 complete
        stencil_type arg2_1_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_1_rowArr_5_4 dim=1 complete
        stencil_type arg2_0_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_0_rowArr_6_4 dim=1 complete
        stencil_type arg2_1_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_1_rowArr_6_4 dim=1 complete
        stencil_type arg2_0_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_0_rowArr_7_4 dim=1 complete
        stencil_type arg2_1_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_1_rowArr_7_4 dim=1 complete
        stencil_type arg2_0_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_0_rowArr_8_4 dim=1 complete
        stencil_type arg2_1_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_1_rowArr_8_4 dim=1 complete
        stencil_type arg2_0_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_0_rowArr_4_5 dim=1 complete
        stencil_type arg2_1_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_1_rowArr_4_5 dim=1 complete
        stencil_type arg2_0_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_0_rowArr_4_6 dim=1 complete
        stencil_type arg2_1_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_1_rowArr_4_6 dim=1 complete
        stencil_type arg2_0_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_0_rowArr_4_7 dim=1 complete
        stencil_type arg2_1_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_1_rowArr_4_7 dim=1 complete
        stencil_type arg2_0_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_0_rowArr_4_8 dim=1 complete
        stencil_type arg2_1_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_1_rowArr_4_8 dim=1 complete

        // arg3(yy_4_5)
        widen_fd3d_pml_kernel2_3_dt arg3_widenStencilValues[read_num_points_fd3d_pml_kernel2];
        #pragma HLS ARRAY_PARTITION variable = arg3_widenStencilValues dim = 1 complete

        widen_fd3d_pml_kernel2_3_dt arg3_buf_p0_1[max_depth];
        #pragma HLS BIND_STORAGE variable = arg3_buf_p0_1 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_3_dt arg3_buf_p1_2[max_depth];
        #pragma HLS BIND_STORAGE variable = arg3_buf_p1_2 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_3_dt arg3_buf_p2_3[max_depth];
        #pragma HLS BIND_STORAGE variable = arg3_buf_p2_3 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_3_dt arg3_buf_p3_4[max_depth];
        #pragma HLS BIND_STORAGE variable = arg3_buf_p3_4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_3_dt arg3_buf_r0_1_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg3_buf_r0_1_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_3_dt arg3_buf_r1_2_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg3_buf_r1_2_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_3_dt arg3_buf_r2_3_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg3_buf_r2_3_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_3_dt arg3_buf_r3_4_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg3_buf_r3_4_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_3_dt arg3_buf_r4_5_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg3_buf_r4_5_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_3_dt arg3_buf_r5_6_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg3_buf_r5_6_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_3_dt arg3_buf_r6_7_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg3_buf_r6_7_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_3_dt arg3_buf_r7_8_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg3_buf_r7_8_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_3_dt arg3_buf_p4_5[max_depth];
        #pragma HLS BIND_STORAGE variable = arg3_buf_p4_5 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_3_dt arg3_buf_p5_6[max_depth];
        #pragma HLS BIND_STORAGE variable = arg3_buf_p5_6 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_3_dt arg3_buf_p6_7[max_depth];
        #pragma HLS BIND_STORAGE variable = arg3_buf_p6_7 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_3_dt arg3_buf_p7_8[max_depth];
        #pragma HLS BIND_STORAGE variable = arg3_buf_p7_8 type = ram_s2p latency=2

        stencil_type arg3_0_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_0_rowArr_4_0 dim=1 complete
        stencil_type arg3_1_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_1_rowArr_4_0 dim=1 complete
        stencil_type arg3_0_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_0_rowArr_4_1 dim=1 complete
        stencil_type arg3_1_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_1_rowArr_4_1 dim=1 complete
        stencil_type arg3_0_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_0_rowArr_4_2 dim=1 complete
        stencil_type arg3_1_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_1_rowArr_4_2 dim=1 complete
        stencil_type arg3_0_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_0_rowArr_4_3 dim=1 complete
        stencil_type arg3_1_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_1_rowArr_4_3 dim=1 complete
        stencil_type arg3_0_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_0_rowArr_0_4 dim=1 complete
        stencil_type arg3_1_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_1_rowArr_0_4 dim=1 complete
        stencil_type arg3_0_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_0_rowArr_1_4 dim=1 complete
        stencil_type arg3_1_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_1_rowArr_1_4 dim=1 complete
        stencil_type arg3_0_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_0_rowArr_2_4 dim=1 complete
        stencil_type arg3_1_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_1_rowArr_2_4 dim=1 complete
        stencil_type arg3_0_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_0_rowArr_3_4 dim=1 complete
        stencil_type arg3_1_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_1_rowArr_3_4 dim=1 complete
        stencil_type arg3_0_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_0_rowArr_4_4 dim=1 complete
        stencil_type arg3_1_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_1_rowArr_4_4 dim=1 complete
        stencil_type arg3_0_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_0_rowArr_5_4 dim=1 complete
        stencil_type arg3_1_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_1_rowArr_5_4 dim=1 complete
        stencil_type arg3_0_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_0_rowArr_6_4 dim=1 complete
        stencil_type arg3_1_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_1_rowArr_6_4 dim=1 complete
        stencil_type arg3_0_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_0_rowArr_7_4 dim=1 complete
        stencil_type arg3_1_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_1_rowArr_7_4 dim=1 complete
        stencil_type arg3_0_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_0_rowArr_8_4 dim=1 complete
        stencil_type arg3_1_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_1_rowArr_8_4 dim=1 complete
        stencil_type arg3_0_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_0_rowArr_4_5 dim=1 complete
        stencil_type arg3_1_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_1_rowArr_4_5 dim=1 complete
        stencil_type arg3_0_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_0_rowArr_4_6 dim=1 complete
        stencil_type arg3_1_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_1_rowArr_4_6 dim=1 complete
        stencil_type arg3_0_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_0_rowArr_4_7 dim=1 complete
        stencil_type arg3_1_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_1_rowArr_4_7 dim=1 complete
        stencil_type arg3_0_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_0_rowArr_4_8 dim=1 complete
        stencil_type arg3_1_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_1_rowArr_4_8 dim=1 complete

        // arg4(ytemp2_0_1)
        widen_fd3d_pml_kernel2_4_dt arg4_widenStencilValues[read_num_points_fd3d_pml_kernel2];
        #pragma HLS ARRAY_PARTITION variable = arg4_widenStencilValues dim = 1 complete

        widen_fd3d_pml_kernel2_4_dt arg4_buf_p0_1[max_depth];
        #pragma HLS BIND_STORAGE variable = arg4_buf_p0_1 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_4_dt arg4_buf_p1_2[max_depth];
        #pragma HLS BIND_STORAGE variable = arg4_buf_p1_2 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_4_dt arg4_buf_p2_3[max_depth];
        #pragma HLS BIND_STORAGE variable = arg4_buf_p2_3 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_4_dt arg4_buf_p3_4[max_depth];
        #pragma HLS BIND_STORAGE variable = arg4_buf_p3_4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_4_dt arg4_buf_r0_1_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg4_buf_r0_1_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_4_dt arg4_buf_r1_2_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg4_buf_r1_2_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_4_dt arg4_buf_r2_3_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg4_buf_r2_3_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_4_dt arg4_buf_r3_4_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg4_buf_r3_4_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_4_dt arg4_buf_r4_5_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg4_buf_r4_5_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_4_dt arg4_buf_r5_6_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg4_buf_r5_6_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_4_dt arg4_buf_r6_7_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg4_buf_r6_7_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_4_dt arg4_buf_r7_8_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg4_buf_r7_8_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_4_dt arg4_buf_p4_5[max_depth];
        #pragma HLS BIND_STORAGE variable = arg4_buf_p4_5 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_4_dt arg4_buf_p5_6[max_depth];
        #pragma HLS BIND_STORAGE variable = arg4_buf_p5_6 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_4_dt arg4_buf_p6_7[max_depth];
        #pragma HLS BIND_STORAGE variable = arg4_buf_p6_7 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_4_dt arg4_buf_p7_8[max_depth];
        #pragma HLS BIND_STORAGE variable = arg4_buf_p7_8 type = ram_s2p latency=2

        stencil_type arg4_0_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_0_rowArr_4_0 dim=1 complete
        stencil_type arg4_1_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_1_rowArr_4_0 dim=1 complete
        stencil_type arg4_0_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_0_rowArr_4_1 dim=1 complete
        stencil_type arg4_1_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_1_rowArr_4_1 dim=1 complete
        stencil_type arg4_0_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_0_rowArr_4_2 dim=1 complete
        stencil_type arg4_1_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_1_rowArr_4_2 dim=1 complete
        stencil_type arg4_0_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_0_rowArr_4_3 dim=1 complete
        stencil_type arg4_1_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_1_rowArr_4_3 dim=1 complete
        stencil_type arg4_0_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_0_rowArr_0_4 dim=1 complete
        stencil_type arg4_1_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_1_rowArr_0_4 dim=1 complete
        stencil_type arg4_0_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_0_rowArr_1_4 dim=1 complete
        stencil_type arg4_1_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_1_rowArr_1_4 dim=1 complete
        stencil_type arg4_0_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_0_rowArr_2_4 dim=1 complete
        stencil_type arg4_1_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_1_rowArr_2_4 dim=1 complete
        stencil_type arg4_0_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_0_rowArr_3_4 dim=1 complete
        stencil_type arg4_1_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_1_rowArr_3_4 dim=1 complete
        stencil_type arg4_0_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_0_rowArr_4_4 dim=1 complete
        stencil_type arg4_1_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_1_rowArr_4_4 dim=1 complete
        stencil_type arg4_0_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_0_rowArr_5_4 dim=1 complete
        stencil_type arg4_1_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_1_rowArr_5_4 dim=1 complete
        stencil_type arg4_0_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_0_rowArr_6_4 dim=1 complete
        stencil_type arg4_1_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_1_rowArr_6_4 dim=1 complete
        stencil_type arg4_0_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_0_rowArr_7_4 dim=1 complete
        stencil_type arg4_1_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_1_rowArr_7_4 dim=1 complete
        stencil_type arg4_0_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_0_rowArr_8_4 dim=1 complete
        stencil_type arg4_1_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_1_rowArr_8_4 dim=1 complete
        stencil_type arg4_0_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_0_rowArr_4_5 dim=1 complete
        stencil_type arg4_1_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_1_rowArr_4_5 dim=1 complete
        stencil_type arg4_0_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_0_rowArr_4_6 dim=1 complete
        stencil_type arg4_1_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_1_rowArr_4_6 dim=1 complete
        stencil_type arg4_0_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_0_rowArr_4_7 dim=1 complete
        stencil_type arg4_1_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_1_rowArr_4_7 dim=1 complete
        stencil_type arg4_0_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_0_rowArr_4_8 dim=1 complete
        stencil_type arg4_1_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_1_rowArr_4_8 dim=1 complete

        // arg5(ytemp2_2_3)
        widen_fd3d_pml_kernel2_5_dt arg5_widenStencilValues[read_num_points_fd3d_pml_kernel2];
        #pragma HLS ARRAY_PARTITION variable = arg5_widenStencilValues dim = 1 complete

        widen_fd3d_pml_kernel2_5_dt arg5_buf_p0_1[max_depth];
        #pragma HLS BIND_STORAGE variable = arg5_buf_p0_1 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_5_dt arg5_buf_p1_2[max_depth];
        #pragma HLS BIND_STORAGE variable = arg5_buf_p1_2 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_5_dt arg5_buf_p2_3[max_depth];
        #pragma HLS BIND_STORAGE variable = arg5_buf_p2_3 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_5_dt arg5_buf_p3_4[max_depth];
        #pragma HLS BIND_STORAGE variable = arg5_buf_p3_4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_5_dt arg5_buf_r0_1_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg5_buf_r0_1_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_5_dt arg5_buf_r1_2_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg5_buf_r1_2_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_5_dt arg5_buf_r2_3_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg5_buf_r2_3_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_5_dt arg5_buf_r3_4_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg5_buf_r3_4_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_5_dt arg5_buf_r4_5_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg5_buf_r4_5_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_5_dt arg5_buf_r5_6_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg5_buf_r5_6_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_5_dt arg5_buf_r6_7_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg5_buf_r6_7_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_5_dt arg5_buf_r7_8_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg5_buf_r7_8_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_5_dt arg5_buf_p4_5[max_depth];
        #pragma HLS BIND_STORAGE variable = arg5_buf_p4_5 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_5_dt arg5_buf_p5_6[max_depth];
        #pragma HLS BIND_STORAGE variable = arg5_buf_p5_6 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_5_dt arg5_buf_p6_7[max_depth];
        #pragma HLS BIND_STORAGE variable = arg5_buf_p6_7 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_5_dt arg5_buf_p7_8[max_depth];
        #pragma HLS BIND_STORAGE variable = arg5_buf_p7_8 type = ram_s2p latency=2

        stencil_type arg5_0_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_0_rowArr_4_0 dim=1 complete
        stencil_type arg5_1_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_1_rowArr_4_0 dim=1 complete
        stencil_type arg5_0_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_0_rowArr_4_1 dim=1 complete
        stencil_type arg5_1_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_1_rowArr_4_1 dim=1 complete
        stencil_type arg5_0_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_0_rowArr_4_2 dim=1 complete
        stencil_type arg5_1_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_1_rowArr_4_2 dim=1 complete
        stencil_type arg5_0_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_0_rowArr_4_3 dim=1 complete
        stencil_type arg5_1_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_1_rowArr_4_3 dim=1 complete
        stencil_type arg5_0_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_0_rowArr_0_4 dim=1 complete
        stencil_type arg5_1_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_1_rowArr_0_4 dim=1 complete
        stencil_type arg5_0_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_0_rowArr_1_4 dim=1 complete
        stencil_type arg5_1_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_1_rowArr_1_4 dim=1 complete
        stencil_type arg5_0_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_0_rowArr_2_4 dim=1 complete
        stencil_type arg5_1_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_1_rowArr_2_4 dim=1 complete
        stencil_type arg5_0_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_0_rowArr_3_4 dim=1 complete
        stencil_type arg5_1_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_1_rowArr_3_4 dim=1 complete
        stencil_type arg5_0_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_0_rowArr_4_4 dim=1 complete
        stencil_type arg5_1_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_1_rowArr_4_4 dim=1 complete
        stencil_type arg5_0_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_0_rowArr_5_4 dim=1 complete
        stencil_type arg5_1_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_1_rowArr_5_4 dim=1 complete
        stencil_type arg5_0_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_0_rowArr_6_4 dim=1 complete
        stencil_type arg5_1_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_1_rowArr_6_4 dim=1 complete
        stencil_type arg5_0_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_0_rowArr_7_4 dim=1 complete
        stencil_type arg5_1_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_1_rowArr_7_4 dim=1 complete
        stencil_type arg5_0_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_0_rowArr_8_4 dim=1 complete
        stencil_type arg5_1_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_1_rowArr_8_4 dim=1 complete
        stencil_type arg5_0_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_0_rowArr_4_5 dim=1 complete
        stencil_type arg5_1_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_1_rowArr_4_5 dim=1 complete
        stencil_type arg5_0_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_0_rowArr_4_6 dim=1 complete
        stencil_type arg5_1_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_1_rowArr_4_6 dim=1 complete
        stencil_type arg5_0_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_0_rowArr_4_7 dim=1 complete
        stencil_type arg5_1_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_1_rowArr_4_7 dim=1 complete
        stencil_type arg5_0_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_0_rowArr_4_8 dim=1 complete
        stencil_type arg5_1_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg5_1_rowArr_4_8 dim=1 complete

        // arg6(ytemp2_4_5)
        widen_fd3d_pml_kernel2_6_dt arg6_widenStencilValues[read_num_points_fd3d_pml_kernel2];
        #pragma HLS ARRAY_PARTITION variable = arg6_widenStencilValues dim = 1 complete

        widen_fd3d_pml_kernel2_6_dt arg6_buf_p0_1[max_depth];
        #pragma HLS BIND_STORAGE variable = arg6_buf_p0_1 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_6_dt arg6_buf_p1_2[max_depth];
        #pragma HLS BIND_STORAGE variable = arg6_buf_p1_2 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_6_dt arg6_buf_p2_3[max_depth];
        #pragma HLS BIND_STORAGE variable = arg6_buf_p2_3 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_6_dt arg6_buf_p3_4[max_depth];
        #pragma HLS BIND_STORAGE variable = arg6_buf_p3_4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_6_dt arg6_buf_r0_1_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg6_buf_r0_1_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_6_dt arg6_buf_r1_2_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg6_buf_r1_2_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_6_dt arg6_buf_r2_3_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg6_buf_r2_3_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_6_dt arg6_buf_r3_4_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg6_buf_r3_4_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_6_dt arg6_buf_r4_5_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg6_buf_r4_5_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_6_dt arg6_buf_r5_6_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg6_buf_r5_6_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_6_dt arg6_buf_r6_7_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg6_buf_r6_7_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_6_dt arg6_buf_r7_8_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg6_buf_r7_8_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_6_dt arg6_buf_p4_5[max_depth];
        #pragma HLS BIND_STORAGE variable = arg6_buf_p4_5 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_6_dt arg6_buf_p5_6[max_depth];
        #pragma HLS BIND_STORAGE variable = arg6_buf_p5_6 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_6_dt arg6_buf_p6_7[max_depth];
        #pragma HLS BIND_STORAGE variable = arg6_buf_p6_7 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_6_dt arg6_buf_p7_8[max_depth];
        #pragma HLS BIND_STORAGE variable = arg6_buf_p7_8 type = ram_s2p latency=2

        stencil_type arg6_0_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_0_rowArr_4_0 dim=1 complete
        stencil_type arg6_1_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_1_rowArr_4_0 dim=1 complete
        stencil_type arg6_0_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_0_rowArr_4_1 dim=1 complete
        stencil_type arg6_1_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_1_rowArr_4_1 dim=1 complete
        stencil_type arg6_0_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_0_rowArr_4_2 dim=1 complete
        stencil_type arg6_1_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_1_rowArr_4_2 dim=1 complete
        stencil_type arg6_0_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_0_rowArr_4_3 dim=1 complete
        stencil_type arg6_1_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_1_rowArr_4_3 dim=1 complete
        stencil_type arg6_0_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_0_rowArr_0_4 dim=1 complete
        stencil_type arg6_1_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_1_rowArr_0_4 dim=1 complete
        stencil_type arg6_0_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_0_rowArr_1_4 dim=1 complete
        stencil_type arg6_1_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_1_rowArr_1_4 dim=1 complete
        stencil_type arg6_0_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_0_rowArr_2_4 dim=1 complete
        stencil_type arg6_1_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_1_rowArr_2_4 dim=1 complete
        stencil_type arg6_0_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_0_rowArr_3_4 dim=1 complete
        stencil_type arg6_1_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_1_rowArr_3_4 dim=1 complete
        stencil_type arg6_0_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_0_rowArr_4_4 dim=1 complete
        stencil_type arg6_1_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_1_rowArr_4_4 dim=1 complete
        stencil_type arg6_0_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_0_rowArr_5_4 dim=1 complete
        stencil_type arg6_1_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_1_rowArr_5_4 dim=1 complete
        stencil_type arg6_0_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_0_rowArr_6_4 dim=1 complete
        stencil_type arg6_1_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_1_rowArr_6_4 dim=1 complete
        stencil_type arg6_0_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_0_rowArr_7_4 dim=1 complete
        stencil_type arg6_1_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_1_rowArr_7_4 dim=1 complete
        stencil_type arg6_0_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_0_rowArr_8_4 dim=1 complete
        stencil_type arg6_1_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_1_rowArr_8_4 dim=1 complete
        stencil_type arg6_0_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_0_rowArr_4_5 dim=1 complete
        stencil_type arg6_1_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_1_rowArr_4_5 dim=1 complete
        stencil_type arg6_0_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_0_rowArr_4_6 dim=1 complete
        stencil_type arg6_1_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_1_rowArr_4_6 dim=1 complete
        stencil_type arg6_0_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_0_rowArr_4_7 dim=1 complete
        stencil_type arg6_1_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_1_rowArr_4_7 dim=1 complete
        stencil_type arg6_0_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_0_rowArr_4_8 dim=1 complete
        stencil_type arg6_1_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_1_rowArr_4_8 dim=1 complete

        // arg10(yy_sum_0_1)
        widen_fd3d_pml_kernel2_10_dt arg10_widenStencilValues[read_num_points_fd3d_pml_kernel2];
        #pragma HLS ARRAY_PARTITION variable = arg10_widenStencilValues dim = 1 complete

        widen_fd3d_pml_kernel2_10_dt arg10_buf_p0_1[max_depth];
        #pragma HLS BIND_STORAGE variable = arg10_buf_p0_1 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_10_dt arg10_buf_p1_2[max_depth];
        #pragma HLS BIND_STORAGE variable = arg10_buf_p1_2 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_10_dt arg10_buf_p2_3[max_depth];
        #pragma HLS BIND_STORAGE variable = arg10_buf_p2_3 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_10_dt arg10_buf_p3_4[max_depth];
        #pragma HLS BIND_STORAGE variable = arg10_buf_p3_4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_10_dt arg10_buf_r0_1_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg10_buf_r0_1_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_10_dt arg10_buf_r1_2_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg10_buf_r1_2_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_10_dt arg10_buf_r2_3_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg10_buf_r2_3_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_10_dt arg10_buf_r3_4_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg10_buf_r3_4_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_10_dt arg10_buf_r4_5_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg10_buf_r4_5_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_10_dt arg10_buf_r5_6_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg10_buf_r5_6_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_10_dt arg10_buf_r6_7_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg10_buf_r6_7_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_10_dt arg10_buf_r7_8_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg10_buf_r7_8_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_10_dt arg10_buf_p4_5[max_depth];
        #pragma HLS BIND_STORAGE variable = arg10_buf_p4_5 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_10_dt arg10_buf_p5_6[max_depth];
        #pragma HLS BIND_STORAGE variable = arg10_buf_p5_6 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_10_dt arg10_buf_p6_7[max_depth];
        #pragma HLS BIND_STORAGE variable = arg10_buf_p6_7 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_10_dt arg10_buf_p7_8[max_depth];
        #pragma HLS BIND_STORAGE variable = arg10_buf_p7_8 type = ram_s2p latency=2

        stencil_type arg10_0_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_0_rowArr_4_0 dim=1 complete
        stencil_type arg10_1_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_1_rowArr_4_0 dim=1 complete
        stencil_type arg10_0_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_0_rowArr_4_1 dim=1 complete
        stencil_type arg10_1_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_1_rowArr_4_1 dim=1 complete
        stencil_type arg10_0_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_0_rowArr_4_2 dim=1 complete
        stencil_type arg10_1_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_1_rowArr_4_2 dim=1 complete
        stencil_type arg10_0_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_0_rowArr_4_3 dim=1 complete
        stencil_type arg10_1_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_1_rowArr_4_3 dim=1 complete
        stencil_type arg10_0_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_0_rowArr_0_4 dim=1 complete
        stencil_type arg10_1_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_1_rowArr_0_4 dim=1 complete
        stencil_type arg10_0_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_0_rowArr_1_4 dim=1 complete
        stencil_type arg10_1_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_1_rowArr_1_4 dim=1 complete
        stencil_type arg10_0_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_0_rowArr_2_4 dim=1 complete
        stencil_type arg10_1_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_1_rowArr_2_4 dim=1 complete
        stencil_type arg10_0_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_0_rowArr_3_4 dim=1 complete
        stencil_type arg10_1_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_1_rowArr_3_4 dim=1 complete
        stencil_type arg10_0_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_0_rowArr_4_4 dim=1 complete
        stencil_type arg10_1_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_1_rowArr_4_4 dim=1 complete
        stencil_type arg10_0_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_0_rowArr_5_4 dim=1 complete
        stencil_type arg10_1_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_1_rowArr_5_4 dim=1 complete
        stencil_type arg10_0_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_0_rowArr_6_4 dim=1 complete
        stencil_type arg10_1_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_1_rowArr_6_4 dim=1 complete
        stencil_type arg10_0_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_0_rowArr_7_4 dim=1 complete
        stencil_type arg10_1_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_1_rowArr_7_4 dim=1 complete
        stencil_type arg10_0_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_0_rowArr_8_4 dim=1 complete
        stencil_type arg10_1_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_1_rowArr_8_4 dim=1 complete
        stencil_type arg10_0_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_0_rowArr_4_5 dim=1 complete
        stencil_type arg10_1_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_1_rowArr_4_5 dim=1 complete
        stencil_type arg10_0_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_0_rowArr_4_6 dim=1 complete
        stencil_type arg10_1_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_1_rowArr_4_6 dim=1 complete
        stencil_type arg10_0_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_0_rowArr_4_7 dim=1 complete
        stencil_type arg10_1_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_1_rowArr_4_7 dim=1 complete
        stencil_type arg10_0_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_0_rowArr_4_8 dim=1 complete
        stencil_type arg10_1_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg10_1_rowArr_4_8 dim=1 complete

        // arg11(yy_sum_2_3)
        widen_fd3d_pml_kernel2_11_dt arg11_widenStencilValues[read_num_points_fd3d_pml_kernel2];
        #pragma HLS ARRAY_PARTITION variable = arg11_widenStencilValues dim = 1 complete

        widen_fd3d_pml_kernel2_11_dt arg11_buf_p0_1[max_depth];
        #pragma HLS BIND_STORAGE variable = arg11_buf_p0_1 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_11_dt arg11_buf_p1_2[max_depth];
        #pragma HLS BIND_STORAGE variable = arg11_buf_p1_2 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_11_dt arg11_buf_p2_3[max_depth];
        #pragma HLS BIND_STORAGE variable = arg11_buf_p2_3 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_11_dt arg11_buf_p3_4[max_depth];
        #pragma HLS BIND_STORAGE variable = arg11_buf_p3_4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_11_dt arg11_buf_r0_1_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg11_buf_r0_1_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_11_dt arg11_buf_r1_2_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg11_buf_r1_2_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_11_dt arg11_buf_r2_3_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg11_buf_r2_3_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_11_dt arg11_buf_r3_4_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg11_buf_r3_4_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_11_dt arg11_buf_r4_5_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg11_buf_r4_5_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_11_dt arg11_buf_r5_6_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg11_buf_r5_6_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_11_dt arg11_buf_r6_7_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg11_buf_r6_7_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_11_dt arg11_buf_r7_8_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg11_buf_r7_8_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_11_dt arg11_buf_p4_5[max_depth];
        #pragma HLS BIND_STORAGE variable = arg11_buf_p4_5 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_11_dt arg11_buf_p5_6[max_depth];
        #pragma HLS BIND_STORAGE variable = arg11_buf_p5_6 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_11_dt arg11_buf_p6_7[max_depth];
        #pragma HLS BIND_STORAGE variable = arg11_buf_p6_7 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_11_dt arg11_buf_p7_8[max_depth];
        #pragma HLS BIND_STORAGE variable = arg11_buf_p7_8 type = ram_s2p latency=2

        stencil_type arg11_0_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_0_rowArr_4_0 dim=1 complete
        stencil_type arg11_1_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_1_rowArr_4_0 dim=1 complete
        stencil_type arg11_0_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_0_rowArr_4_1 dim=1 complete
        stencil_type arg11_1_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_1_rowArr_4_1 dim=1 complete
        stencil_type arg11_0_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_0_rowArr_4_2 dim=1 complete
        stencil_type arg11_1_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_1_rowArr_4_2 dim=1 complete
        stencil_type arg11_0_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_0_rowArr_4_3 dim=1 complete
        stencil_type arg11_1_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_1_rowArr_4_3 dim=1 complete
        stencil_type arg11_0_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_0_rowArr_0_4 dim=1 complete
        stencil_type arg11_1_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_1_rowArr_0_4 dim=1 complete
        stencil_type arg11_0_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_0_rowArr_1_4 dim=1 complete
        stencil_type arg11_1_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_1_rowArr_1_4 dim=1 complete
        stencil_type arg11_0_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_0_rowArr_2_4 dim=1 complete
        stencil_type arg11_1_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_1_rowArr_2_4 dim=1 complete
        stencil_type arg11_0_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_0_rowArr_3_4 dim=1 complete
        stencil_type arg11_1_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_1_rowArr_3_4 dim=1 complete
        stencil_type arg11_0_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_0_rowArr_4_4 dim=1 complete
        stencil_type arg11_1_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_1_rowArr_4_4 dim=1 complete
        stencil_type arg11_0_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_0_rowArr_5_4 dim=1 complete
        stencil_type arg11_1_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_1_rowArr_5_4 dim=1 complete
        stencil_type arg11_0_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_0_rowArr_6_4 dim=1 complete
        stencil_type arg11_1_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_1_rowArr_6_4 dim=1 complete
        stencil_type arg11_0_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_0_rowArr_7_4 dim=1 complete
        stencil_type arg11_1_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_1_rowArr_7_4 dim=1 complete
        stencil_type arg11_0_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_0_rowArr_8_4 dim=1 complete
        stencil_type arg11_1_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_1_rowArr_8_4 dim=1 complete
        stencil_type arg11_0_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_0_rowArr_4_5 dim=1 complete
        stencil_type arg11_1_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_1_rowArr_4_5 dim=1 complete
        stencil_type arg11_0_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_0_rowArr_4_6 dim=1 complete
        stencil_type arg11_1_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_1_rowArr_4_6 dim=1 complete
        stencil_type arg11_0_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_0_rowArr_4_7 dim=1 complete
        stencil_type arg11_1_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_1_rowArr_4_7 dim=1 complete
        stencil_type arg11_0_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_0_rowArr_4_8 dim=1 complete
        stencil_type arg11_1_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg11_1_rowArr_4_8 dim=1 complete

        // arg12(yy_sum_4_5)
        widen_fd3d_pml_kernel2_12_dt arg12_widenStencilValues[read_num_points_fd3d_pml_kernel2];
        #pragma HLS ARRAY_PARTITION variable = arg12_widenStencilValues dim = 1 complete

        widen_fd3d_pml_kernel2_12_dt arg12_buf_p0_1[max_depth];
        #pragma HLS BIND_STORAGE variable = arg12_buf_p0_1 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_12_dt arg12_buf_p1_2[max_depth];
        #pragma HLS BIND_STORAGE variable = arg12_buf_p1_2 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_12_dt arg12_buf_p2_3[max_depth];
        #pragma HLS BIND_STORAGE variable = arg12_buf_p2_3 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_12_dt arg12_buf_p3_4[max_depth];
        #pragma HLS BIND_STORAGE variable = arg12_buf_p3_4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_12_dt arg12_buf_r0_1_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg12_buf_r0_1_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_12_dt arg12_buf_r1_2_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg12_buf_r1_2_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_12_dt arg12_buf_r2_3_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg12_buf_r2_3_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_12_dt arg12_buf_r3_4_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg12_buf_r3_4_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_12_dt arg12_buf_r4_5_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg12_buf_r4_5_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_12_dt arg12_buf_r5_6_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg12_buf_r5_6_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_12_dt arg12_buf_r6_7_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg12_buf_r6_7_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_12_dt arg12_buf_r7_8_p4[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg12_buf_r7_8_p4 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_12_dt arg12_buf_p4_5[max_depth];
        #pragma HLS BIND_STORAGE variable = arg12_buf_p4_5 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_12_dt arg12_buf_p5_6[max_depth];
        #pragma HLS BIND_STORAGE variable = arg12_buf_p5_6 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_12_dt arg12_buf_p6_7[max_depth];
        #pragma HLS BIND_STORAGE variable = arg12_buf_p6_7 type = ram_s2p latency=2
        widen_fd3d_pml_kernel2_12_dt arg12_buf_p7_8[max_depth];
        #pragma HLS BIND_STORAGE variable = arg12_buf_p7_8 type = ram_s2p latency=2

        stencil_type arg12_0_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_0_rowArr_4_0 dim=1 complete
        stencil_type arg12_1_rowArr_4_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_1_rowArr_4_0 dim=1 complete
        stencil_type arg12_0_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_0_rowArr_4_1 dim=1 complete
        stencil_type arg12_1_rowArr_4_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_1_rowArr_4_1 dim=1 complete
        stencil_type arg12_0_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_0_rowArr_4_2 dim=1 complete
        stencil_type arg12_1_rowArr_4_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_1_rowArr_4_2 dim=1 complete
        stencil_type arg12_0_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_0_rowArr_4_3 dim=1 complete
        stencil_type arg12_1_rowArr_4_3[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_1_rowArr_4_3 dim=1 complete
        stencil_type arg12_0_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_0_rowArr_0_4 dim=1 complete
        stencil_type arg12_1_rowArr_0_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_1_rowArr_0_4 dim=1 complete
        stencil_type arg12_0_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_0_rowArr_1_4 dim=1 complete
        stencil_type arg12_1_rowArr_1_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_1_rowArr_1_4 dim=1 complete
        stencil_type arg12_0_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_0_rowArr_2_4 dim=1 complete
        stencil_type arg12_1_rowArr_2_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_1_rowArr_2_4 dim=1 complete
        stencil_type arg12_0_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_0_rowArr_3_4 dim=1 complete
        stencil_type arg12_1_rowArr_3_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_1_rowArr_3_4 dim=1 complete
        stencil_type arg12_0_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_0_rowArr_4_4 dim=1 complete
        stencil_type arg12_1_rowArr_4_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_1_rowArr_4_4 dim=1 complete
        stencil_type arg12_0_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_0_rowArr_5_4 dim=1 complete
        stencil_type arg12_1_rowArr_5_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_1_rowArr_5_4 dim=1 complete
        stencil_type arg12_0_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_0_rowArr_6_4 dim=1 complete
        stencil_type arg12_1_rowArr_6_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_1_rowArr_6_4 dim=1 complete
        stencil_type arg12_0_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_0_rowArr_7_4 dim=1 complete
        stencil_type arg12_1_rowArr_7_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_1_rowArr_7_4 dim=1 complete
        stencil_type arg12_0_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_0_rowArr_8_4 dim=1 complete
        stencil_type arg12_1_rowArr_8_4[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_1_rowArr_8_4 dim=1 complete
        stencil_type arg12_0_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_0_rowArr_4_5 dim=1 complete
        stencil_type arg12_1_rowArr_4_5[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_1_rowArr_4_5 dim=1 complete
        stencil_type arg12_0_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_0_rowArr_4_6 dim=1 complete
        stencil_type arg12_1_rowArr_4_6[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_1_rowArr_4_6 dim=1 complete
        stencil_type arg12_0_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_0_rowArr_4_7 dim=1 complete
        stencil_type arg12_1_rowArr_4_7[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_1_rowArr_4_7 dim=1 complete
        stencil_type arg12_0_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_0_rowArr_4_8 dim=1 complete
        stencil_type arg12_1_rowArr_4_8[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg12_1_rowArr_4_8 dim=1 complete

        const short cond_x_val = stencilConfig.grid_size[0] - 1; 
        const short cond_y_val = stencilConfig.grid_size[1] - 1;
        const short cond_z_val = stencilConfig.outer_loop_limit - 1;

        for (unsigned int itr = 0; itr < iter_limit; itr++)
        {
        #pragma HLS PIPELINE II=1
            unsigned int reg_itr = register_it(itr);

            spc_temp_blocking_read:
            {
                bool cond_x_terminate = (i == cond_x_val ? true : false); 
                bool cond_y_terminate = (j == cond_y_val ? true : false);
                bool cond_z_terminate = (k == cond_z_val ? true : false);

#ifdef DEBUG_LOG
                printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] loop params before update i(%d), "\
                    "j(%d), "\
                    "k(%d), "\
                    "S3D_big_sten_buf_p0_1_rd_wr: %d, "\
                    "S3D_big_sten_buf_p0_1_rd_wr: %d, "\
                    "S3D_big_sten_buf_p1_2_rd_wr: %d, "\
                    "S3D_big_sten_buf_p1_2_rd_wr: %d, "\
                    "S3D_big_sten_buf_p2_3_rd_wr: %d, "\
                    "S3D_big_sten_buf_p2_3_rd_wr: %d, "\
                    "S3D_big_sten_buf_p3_4_rd: %d, "\
                    "S3D_big_sten_buf_p3_4_wr: %d, "\
                    "S3D_big_sten_buf_r0_1_p4_rd_wr: %d, "\
                    "S3D_big_sten_buf_r0_1_p4_rd_wr: %d, "\
                    "S3D_big_sten_buf_r1_2_p4_rd_wr: %d, "\
                    "S3D_big_sten_buf_r1_2_p4_rd_wr: %d, "\
                    "S3D_big_sten_buf_r2_3_p4_rd_wr: %d, "\
                    "S3D_big_sten_buf_r2_3_p4_rd_wr: %d, "\
                    "S3D_big_sten_buf_r3_4_p4_rd: %d, "\
                    "S3D_big_sten_buf_r3_4_p4_wr: %d, "\
                    "S3D_big_sten_buf_r4_5_p4_rd: %d, "\
                    "S3D_big_sten_buf_r4_5_p4_wr: %d, "\
                    "S3D_big_sten_buf_r5_6_p4_rd_wr: %d, "\
                    "S3D_big_sten_buf_r5_6_p4_rd_wr: %d, "\
                    "S3D_big_sten_buf_r6_7_p4_rd_wr: %d, "\
                    "S3D_big_sten_buf_r6_7_p4_rd_wr: %d, "\
                    "S3D_big_sten_buf_r7_8_p4_rd_wr: %d, "\
                    "S3D_big_sten_buf_r7_8_p4_rd_wr: %d, "\
                    "S3D_big_sten_buf_p4_5_rd: %d, "\
                    "S3D_big_sten_buf_p4_5_wr: %d, "\
                    "S3D_big_sten_buf_p5_6_rd_wr: %d, "\
                    "S3D_big_sten_buf_p5_6_rd_wr: %d, "\
                    "S3D_big_sten_buf_p6_7_rd_wr: %d, "\
                    "S3D_big_sten_buf_p6_7_rd_wr: %d, "\
                    "S3D_big_sten_buf_p7_8_rd_wr: %d, "\
                    "S3D_big_sten_buf_p7_8_rd_wr: %d, "\
                    "reg_itr(%d)\n", m_PEId, i, 
                    j,
                    k,
                    S3D_big_sten_buf_p0_1_rd_wr, 
                    S3D_big_sten_buf_p0_1_rd_wr, 
                    S3D_big_sten_buf_p1_2_rd_wr, 
                    S3D_big_sten_buf_p1_2_rd_wr, 
                    S3D_big_sten_buf_p2_3_rd_wr, 
                    S3D_big_sten_buf_p2_3_rd_wr, 
                    S3D_big_sten_buf_p3_4_rd, 
                    S3D_big_sten_buf_p3_4_wr, 
                    S3D_big_sten_buf_r0_1_p4_rd_wr, 
                    S3D_big_sten_buf_r0_1_p4_rd_wr, 
                    S3D_big_sten_buf_r1_2_p4_rd_wr, 
                    S3D_big_sten_buf_r1_2_p4_rd_wr, 
                    S3D_big_sten_buf_r2_3_p4_rd_wr, 
                    S3D_big_sten_buf_r2_3_p4_rd_wr, 
                    S3D_big_sten_buf_r3_4_p4_rd, 
                    S3D_big_sten_buf_r3_4_p4_wr, 
                    S3D_big_sten_buf_r4_5_p4_rd, 
                    S3D_big_sten_buf_r4_5_p4_wr, 
                    S3D_big_sten_buf_r5_6_p4_rd_wr, 
                    S3D_big_sten_buf_r5_6_p4_rd_wr, 
                    S3D_big_sten_buf_r6_7_p4_rd_wr, 
                    S3D_big_sten_buf_r6_7_p4_rd_wr, 
                    S3D_big_sten_buf_r7_8_p4_rd_wr, 
                    S3D_big_sten_buf_r7_8_p4_rd_wr, 
                    S3D_big_sten_buf_p4_5_rd, 
                    S3D_big_sten_buf_p4_5_wr, 
                    S3D_big_sten_buf_p5_6_rd_wr, 
                    S3D_big_sten_buf_p5_6_rd_wr, 
                    S3D_big_sten_buf_p6_7_rd_wr, 
                    S3D_big_sten_buf_p6_7_rd_wr, 
                    S3D_big_sten_buf_p7_8_rd_wr, 
                    S3D_big_sten_buf_p7_8_rd_wr, 
                    reg_itr);
#endif
                if (cond_x_terminate)
                    i = 0;
                else
                    i++;
                if (cond_x_terminate && cond_y_terminate)
                    j = 0;
                else if  (cond_x_terminate)
                    j++;
                if (cond_x_terminate && cond_y_terminate && cond_z_terminate)
                    k = 0;
                else if (cond_x_terminate && cond_y_terminate)
                    k++;
                    bool S3D_big_sten_read_cond = (reg_itr < S3D_big_sten_read_ub_itr) and (reg_itr >= S3D_big_sten_read_lb_itr);
                /*    bool read_cond  =  (reg_itr < read_ub_itr) and (reg_itr >= read_lb_itr); */

                    if (S3D_big_sten_read_cond)
                    {
                        arg0_read_val = arg0_rd_buffer.read();
                        arg1_read_val = arg1_rd_buffer.read();
                        arg2_read_val = arg2_rd_buffer.read();
                        arg3_read_val = arg3_rd_buffer.read();
                        arg4_read_val = arg4_rd_buffer.read();
                        arg5_read_val = arg5_rd_buffer.read();
                        arg6_read_val = arg6_rd_buffer.read();
                        arg10_read_val = arg10_rd_buffer.read();
                        arg11_read_val = arg11_rd_buffer.read();
                        arg12_read_val = arg12_rd_buffer.read();
                    }

                    /*if (read_cond)
                    {
                        arg0_read_val = arg0_rd_buffer.read();
                        arg1_read_val = arg1_rd_buffer.read();
                        arg2_read_val = arg2_rd_buffer.read();
                        arg3_read_val = arg3_rd_buffer.read();
                        arg4_read_val = arg4_rd_buffer.read();
                        arg5_read_val = arg5_rd_buffer.read();
                        arg6_read_val = arg6_rd_buffer.read();
                        arg10_read_val = arg10_rd_buffer.read();
                        arg11_read_val = arg11_rd_buffer.read();
                        arg12_read_val = arg12_rd_buffer.read();
                    }*/

                arg0_widenStencilValues[0] = arg0_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr];                
                arg0_widenStencilValues[1] = arg0_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr];                
                arg0_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr] = arg0_widenStencilValues[1];                
                arg0_widenStencilValues[2] = arg0_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr];                
                arg0_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr] = arg0_widenStencilValues[2];                
                arg0_widenStencilValues[3] = arg0_buf_p3_4[S3D_big_sten_buf_p3_4_wr];                
                arg0_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr] = arg0_widenStencilValues[3];                
                arg0_widenStencilValues[4] = arg0_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr];                
                arg0_buf_p3_4[S3D_big_sten_buf_p3_4_rd] = arg0_widenStencilValues[4];                
                arg0_widenStencilValues[5] = arg0_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr];                
                arg0_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr] = arg0_widenStencilValues[5];                
                arg0_widenStencilValues[6] = arg0_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr];                
                arg0_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr] = arg0_widenStencilValues[6];                
                arg0_widenStencilValues[7] = arg0_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_wr];                
                arg0_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr] = arg0_widenStencilValues[7];                
                arg0_widenStencilValues[8] = arg0_widenStencilValues[9];                
                arg0_widenStencilValues[9] = arg0_widenStencilValues[10];                
                arg0_widenStencilValues[10] = arg0_widenStencilValues[11];                
                arg0_widenStencilValues[11] = arg0_widenStencilValues[12];                
                arg0_widenStencilValues[12] = arg0_widenStencilValues[13];                
                arg0_widenStencilValues[13] = arg0_widenStencilValues[14];                
                arg0_widenStencilValues[14] = arg0_widenStencilValues[15];                
                arg0_widenStencilValues[15] = arg0_widenStencilValues[16];                
                arg0_widenStencilValues[16] = arg0_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_wr];                
                arg0_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_rd] = arg0_widenStencilValues[8];                
                arg0_widenStencilValues[17] = arg0_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr];                
                arg0_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_rd] = arg0_widenStencilValues[17];                
                arg0_widenStencilValues[18] = arg0_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr];                
                arg0_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr] = arg0_widenStencilValues[18];                
                arg0_widenStencilValues[19] = arg0_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr];                
                arg0_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr] = arg0_widenStencilValues[19];                
                arg0_widenStencilValues[20] = arg0_buf_p4_5[S3D_big_sten_buf_p4_5_wr];                
                arg0_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr] = arg0_widenStencilValues[20];                
                arg0_widenStencilValues[21] = arg0_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr];                
                arg0_buf_p4_5[S3D_big_sten_buf_p4_5_rd] = arg0_widenStencilValues[21];                
                arg0_widenStencilValues[22] = arg0_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr];                
                arg0_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr] = arg0_widenStencilValues[22];                
                arg0_widenStencilValues[23] = arg0_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr];                
                arg0_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr] = arg0_widenStencilValues[23];                
                arg0_widenStencilValues[24] = arg0_read_val;                
                arg0_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr] = arg0_widenStencilValues[24];                
                arg1_widenStencilValues[0] = arg1_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr];                
                arg1_widenStencilValues[1] = arg1_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr];                
                arg1_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr] = arg1_widenStencilValues[1];                
                arg1_widenStencilValues[2] = arg1_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr];                
                arg1_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr] = arg1_widenStencilValues[2];                
                arg1_widenStencilValues[3] = arg1_buf_p3_4[S3D_big_sten_buf_p3_4_wr];                
                arg1_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr] = arg1_widenStencilValues[3];                
                arg1_widenStencilValues[4] = arg1_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr];                
                arg1_buf_p3_4[S3D_big_sten_buf_p3_4_rd] = arg1_widenStencilValues[4];                
                arg1_widenStencilValues[5] = arg1_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr];                
                arg1_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr] = arg1_widenStencilValues[5];                
                arg1_widenStencilValues[6] = arg1_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr];                
                arg1_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr] = arg1_widenStencilValues[6];                
                arg1_widenStencilValues[7] = arg1_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_wr];                
                arg1_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr] = arg1_widenStencilValues[7];                
                arg1_widenStencilValues[8] = arg1_widenStencilValues[9];                
                arg1_widenStencilValues[9] = arg1_widenStencilValues[10];                
                arg1_widenStencilValues[10] = arg1_widenStencilValues[11];                
                arg1_widenStencilValues[11] = arg1_widenStencilValues[12];                
                arg1_widenStencilValues[12] = arg1_widenStencilValues[13];                
                arg1_widenStencilValues[13] = arg1_widenStencilValues[14];                
                arg1_widenStencilValues[14] = arg1_widenStencilValues[15];                
                arg1_widenStencilValues[15] = arg1_widenStencilValues[16];                
                arg1_widenStencilValues[16] = arg1_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_wr];                
                arg1_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_rd] = arg1_widenStencilValues[8];                
                arg1_widenStencilValues[17] = arg1_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr];                
                arg1_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_rd] = arg1_widenStencilValues[17];                
                arg1_widenStencilValues[18] = arg1_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr];                
                arg1_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr] = arg1_widenStencilValues[18];                
                arg1_widenStencilValues[19] = arg1_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr];                
                arg1_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr] = arg1_widenStencilValues[19];                
                arg1_widenStencilValues[20] = arg1_buf_p4_5[S3D_big_sten_buf_p4_5_wr];                
                arg1_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr] = arg1_widenStencilValues[20];                
                arg1_widenStencilValues[21] = arg1_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr];                
                arg1_buf_p4_5[S3D_big_sten_buf_p4_5_rd] = arg1_widenStencilValues[21];                
                arg1_widenStencilValues[22] = arg1_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr];                
                arg1_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr] = arg1_widenStencilValues[22];                
                arg1_widenStencilValues[23] = arg1_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr];                
                arg1_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr] = arg1_widenStencilValues[23];                
                arg1_widenStencilValues[24] = arg1_read_val;                
                arg1_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr] = arg1_widenStencilValues[24];                
                arg2_widenStencilValues[0] = arg2_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr];                
                arg2_widenStencilValues[1] = arg2_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr];                
                arg2_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr] = arg2_widenStencilValues[1];                
                arg2_widenStencilValues[2] = arg2_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr];                
                arg2_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr] = arg2_widenStencilValues[2];                
                arg2_widenStencilValues[3] = arg2_buf_p3_4[S3D_big_sten_buf_p3_4_wr];                
                arg2_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr] = arg2_widenStencilValues[3];                
                arg2_widenStencilValues[4] = arg2_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr];                
                arg2_buf_p3_4[S3D_big_sten_buf_p3_4_rd] = arg2_widenStencilValues[4];                
                arg2_widenStencilValues[5] = arg2_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr];                
                arg2_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr] = arg2_widenStencilValues[5];                
                arg2_widenStencilValues[6] = arg2_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr];                
                arg2_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr] = arg2_widenStencilValues[6];                
                arg2_widenStencilValues[7] = arg2_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_wr];                
                arg2_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr] = arg2_widenStencilValues[7];                
                arg2_widenStencilValues[8] = arg2_widenStencilValues[9];                
                arg2_widenStencilValues[9] = arg2_widenStencilValues[10];                
                arg2_widenStencilValues[10] = arg2_widenStencilValues[11];                
                arg2_widenStencilValues[11] = arg2_widenStencilValues[12];                
                arg2_widenStencilValues[12] = arg2_widenStencilValues[13];                
                arg2_widenStencilValues[13] = arg2_widenStencilValues[14];                
                arg2_widenStencilValues[14] = arg2_widenStencilValues[15];                
                arg2_widenStencilValues[15] = arg2_widenStencilValues[16];                
                arg2_widenStencilValues[16] = arg2_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_wr];                
                arg2_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_rd] = arg2_widenStencilValues[8];                
                arg2_widenStencilValues[17] = arg2_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr];                
                arg2_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_rd] = arg2_widenStencilValues[17];                
                arg2_widenStencilValues[18] = arg2_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr];                
                arg2_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr] = arg2_widenStencilValues[18];                
                arg2_widenStencilValues[19] = arg2_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr];                
                arg2_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr] = arg2_widenStencilValues[19];                
                arg2_widenStencilValues[20] = arg2_buf_p4_5[S3D_big_sten_buf_p4_5_wr];                
                arg2_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr] = arg2_widenStencilValues[20];                
                arg2_widenStencilValues[21] = arg2_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr];                
                arg2_buf_p4_5[S3D_big_sten_buf_p4_5_rd] = arg2_widenStencilValues[21];                
                arg2_widenStencilValues[22] = arg2_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr];                
                arg2_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr] = arg2_widenStencilValues[22];                
                arg2_widenStencilValues[23] = arg2_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr];                
                arg2_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr] = arg2_widenStencilValues[23];                
                arg2_widenStencilValues[24] = arg2_read_val;                
                arg2_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr] = arg2_widenStencilValues[24];                
                arg3_widenStencilValues[0] = arg3_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr];                
                arg3_widenStencilValues[1] = arg3_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr];                
                arg3_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr] = arg3_widenStencilValues[1];                
                arg3_widenStencilValues[2] = arg3_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr];                
                arg3_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr] = arg3_widenStencilValues[2];                
                arg3_widenStencilValues[3] = arg3_buf_p3_4[S3D_big_sten_buf_p3_4_wr];                
                arg3_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr] = arg3_widenStencilValues[3];                
                arg3_widenStencilValues[4] = arg3_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr];                
                arg3_buf_p3_4[S3D_big_sten_buf_p3_4_rd] = arg3_widenStencilValues[4];                
                arg3_widenStencilValues[5] = arg3_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr];                
                arg3_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr] = arg3_widenStencilValues[5];                
                arg3_widenStencilValues[6] = arg3_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr];                
                arg3_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr] = arg3_widenStencilValues[6];                
                arg3_widenStencilValues[7] = arg3_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_wr];                
                arg3_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr] = arg3_widenStencilValues[7];                
                arg3_widenStencilValues[8] = arg3_widenStencilValues[9];                
                arg3_widenStencilValues[9] = arg3_widenStencilValues[10];                
                arg3_widenStencilValues[10] = arg3_widenStencilValues[11];                
                arg3_widenStencilValues[11] = arg3_widenStencilValues[12];                
                arg3_widenStencilValues[12] = arg3_widenStencilValues[13];                
                arg3_widenStencilValues[13] = arg3_widenStencilValues[14];                
                arg3_widenStencilValues[14] = arg3_widenStencilValues[15];                
                arg3_widenStencilValues[15] = arg3_widenStencilValues[16];                
                arg3_widenStencilValues[16] = arg3_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_wr];                
                arg3_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_rd] = arg3_widenStencilValues[8];                
                arg3_widenStencilValues[17] = arg3_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr];                
                arg3_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_rd] = arg3_widenStencilValues[17];                
                arg3_widenStencilValues[18] = arg3_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr];                
                arg3_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr] = arg3_widenStencilValues[18];                
                arg3_widenStencilValues[19] = arg3_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr];                
                arg3_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr] = arg3_widenStencilValues[19];                
                arg3_widenStencilValues[20] = arg3_buf_p4_5[S3D_big_sten_buf_p4_5_wr];                
                arg3_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr] = arg3_widenStencilValues[20];                
                arg3_widenStencilValues[21] = arg3_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr];                
                arg3_buf_p4_5[S3D_big_sten_buf_p4_5_rd] = arg3_widenStencilValues[21];                
                arg3_widenStencilValues[22] = arg3_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr];                
                arg3_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr] = arg3_widenStencilValues[22];                
                arg3_widenStencilValues[23] = arg3_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr];                
                arg3_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr] = arg3_widenStencilValues[23];                
                arg3_widenStencilValues[24] = arg3_read_val;                
                arg3_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr] = arg3_widenStencilValues[24];                
                arg4_widenStencilValues[0] = arg4_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr];                
                arg4_widenStencilValues[1] = arg4_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr];                
                arg4_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr] = arg4_widenStencilValues[1];                
                arg4_widenStencilValues[2] = arg4_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr];                
                arg4_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr] = arg4_widenStencilValues[2];                
                arg4_widenStencilValues[3] = arg4_buf_p3_4[S3D_big_sten_buf_p3_4_wr];                
                arg4_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr] = arg4_widenStencilValues[3];                
                arg4_widenStencilValues[4] = arg4_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr];                
                arg4_buf_p3_4[S3D_big_sten_buf_p3_4_rd] = arg4_widenStencilValues[4];                
                arg4_widenStencilValues[5] = arg4_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr];                
                arg4_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr] = arg4_widenStencilValues[5];                
                arg4_widenStencilValues[6] = arg4_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr];                
                arg4_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr] = arg4_widenStencilValues[6];                
                arg4_widenStencilValues[7] = arg4_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_wr];                
                arg4_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr] = arg4_widenStencilValues[7];                
                arg4_widenStencilValues[8] = arg4_widenStencilValues[9];                
                arg4_widenStencilValues[9] = arg4_widenStencilValues[10];                
                arg4_widenStencilValues[10] = arg4_widenStencilValues[11];                
                arg4_widenStencilValues[11] = arg4_widenStencilValues[12];                
                arg4_widenStencilValues[12] = arg4_widenStencilValues[13];                
                arg4_widenStencilValues[13] = arg4_widenStencilValues[14];                
                arg4_widenStencilValues[14] = arg4_widenStencilValues[15];                
                arg4_widenStencilValues[15] = arg4_widenStencilValues[16];                
                arg4_widenStencilValues[16] = arg4_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_wr];                
                arg4_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_rd] = arg4_widenStencilValues[8];                
                arg4_widenStencilValues[17] = arg4_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr];                
                arg4_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_rd] = arg4_widenStencilValues[17];                
                arg4_widenStencilValues[18] = arg4_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr];                
                arg4_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr] = arg4_widenStencilValues[18];                
                arg4_widenStencilValues[19] = arg4_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr];                
                arg4_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr] = arg4_widenStencilValues[19];                
                arg4_widenStencilValues[20] = arg4_buf_p4_5[S3D_big_sten_buf_p4_5_wr];                
                arg4_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr] = arg4_widenStencilValues[20];                
                arg4_widenStencilValues[21] = arg4_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr];                
                arg4_buf_p4_5[S3D_big_sten_buf_p4_5_rd] = arg4_widenStencilValues[21];                
                arg4_widenStencilValues[22] = arg4_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr];                
                arg4_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr] = arg4_widenStencilValues[22];                
                arg4_widenStencilValues[23] = arg4_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr];                
                arg4_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr] = arg4_widenStencilValues[23];                
                arg4_widenStencilValues[24] = arg4_read_val;                
                arg4_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr] = arg4_widenStencilValues[24];                
                arg5_widenStencilValues[0] = arg5_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr];                
                arg5_widenStencilValues[1] = arg5_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr];                
                arg5_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr] = arg5_widenStencilValues[1];                
                arg5_widenStencilValues[2] = arg5_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr];                
                arg5_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr] = arg5_widenStencilValues[2];                
                arg5_widenStencilValues[3] = arg5_buf_p3_4[S3D_big_sten_buf_p3_4_wr];                
                arg5_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr] = arg5_widenStencilValues[3];                
                arg5_widenStencilValues[4] = arg5_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr];                
                arg5_buf_p3_4[S3D_big_sten_buf_p3_4_rd] = arg5_widenStencilValues[4];                
                arg5_widenStencilValues[5] = arg5_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr];                
                arg5_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr] = arg5_widenStencilValues[5];                
                arg5_widenStencilValues[6] = arg5_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr];                
                arg5_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr] = arg5_widenStencilValues[6];                
                arg5_widenStencilValues[7] = arg5_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_wr];                
                arg5_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr] = arg5_widenStencilValues[7];                
                arg5_widenStencilValues[8] = arg5_widenStencilValues[9];                
                arg5_widenStencilValues[9] = arg5_widenStencilValues[10];                
                arg5_widenStencilValues[10] = arg5_widenStencilValues[11];                
                arg5_widenStencilValues[11] = arg5_widenStencilValues[12];                
                arg5_widenStencilValues[12] = arg5_widenStencilValues[13];                
                arg5_widenStencilValues[13] = arg5_widenStencilValues[14];                
                arg5_widenStencilValues[14] = arg5_widenStencilValues[15];                
                arg5_widenStencilValues[15] = arg5_widenStencilValues[16];                
                arg5_widenStencilValues[16] = arg5_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_wr];                
                arg5_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_rd] = arg5_widenStencilValues[8];                
                arg5_widenStencilValues[17] = arg5_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr];                
                arg5_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_rd] = arg5_widenStencilValues[17];                
                arg5_widenStencilValues[18] = arg5_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr];                
                arg5_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr] = arg5_widenStencilValues[18];                
                arg5_widenStencilValues[19] = arg5_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr];                
                arg5_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr] = arg5_widenStencilValues[19];                
                arg5_widenStencilValues[20] = arg5_buf_p4_5[S3D_big_sten_buf_p4_5_wr];                
                arg5_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr] = arg5_widenStencilValues[20];                
                arg5_widenStencilValues[21] = arg5_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr];                
                arg5_buf_p4_5[S3D_big_sten_buf_p4_5_rd] = arg5_widenStencilValues[21];                
                arg5_widenStencilValues[22] = arg5_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr];                
                arg5_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr] = arg5_widenStencilValues[22];                
                arg5_widenStencilValues[23] = arg5_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr];                
                arg5_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr] = arg5_widenStencilValues[23];                
                arg5_widenStencilValues[24] = arg5_read_val;                
                arg5_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr] = arg5_widenStencilValues[24];                
                arg6_widenStencilValues[0] = arg6_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr];                
                arg6_widenStencilValues[1] = arg6_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr];                
                arg6_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr] = arg6_widenStencilValues[1];                
                arg6_widenStencilValues[2] = arg6_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr];                
                arg6_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr] = arg6_widenStencilValues[2];                
                arg6_widenStencilValues[3] = arg6_buf_p3_4[S3D_big_sten_buf_p3_4_wr];                
                arg6_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr] = arg6_widenStencilValues[3];                
                arg6_widenStencilValues[4] = arg6_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr];                
                arg6_buf_p3_4[S3D_big_sten_buf_p3_4_rd] = arg6_widenStencilValues[4];                
                arg6_widenStencilValues[5] = arg6_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr];                
                arg6_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr] = arg6_widenStencilValues[5];                
                arg6_widenStencilValues[6] = arg6_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr];                
                arg6_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr] = arg6_widenStencilValues[6];                
                arg6_widenStencilValues[7] = arg6_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_wr];                
                arg6_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr] = arg6_widenStencilValues[7];                
                arg6_widenStencilValues[8] = arg6_widenStencilValues[9];                
                arg6_widenStencilValues[9] = arg6_widenStencilValues[10];                
                arg6_widenStencilValues[10] = arg6_widenStencilValues[11];                
                arg6_widenStencilValues[11] = arg6_widenStencilValues[12];                
                arg6_widenStencilValues[12] = arg6_widenStencilValues[13];                
                arg6_widenStencilValues[13] = arg6_widenStencilValues[14];                
                arg6_widenStencilValues[14] = arg6_widenStencilValues[15];                
                arg6_widenStencilValues[15] = arg6_widenStencilValues[16];                
                arg6_widenStencilValues[16] = arg6_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_wr];                
                arg6_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_rd] = arg6_widenStencilValues[8];                
                arg6_widenStencilValues[17] = arg6_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr];                
                arg6_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_rd] = arg6_widenStencilValues[17];                
                arg6_widenStencilValues[18] = arg6_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr];                
                arg6_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr] = arg6_widenStencilValues[18];                
                arg6_widenStencilValues[19] = arg6_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr];                
                arg6_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr] = arg6_widenStencilValues[19];                
                arg6_widenStencilValues[20] = arg6_buf_p4_5[S3D_big_sten_buf_p4_5_wr];                
                arg6_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr] = arg6_widenStencilValues[20];                
                arg6_widenStencilValues[21] = arg6_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr];                
                arg6_buf_p4_5[S3D_big_sten_buf_p4_5_rd] = arg6_widenStencilValues[21];                
                arg6_widenStencilValues[22] = arg6_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr];                
                arg6_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr] = arg6_widenStencilValues[22];                
                arg6_widenStencilValues[23] = arg6_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr];                
                arg6_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr] = arg6_widenStencilValues[23];                
                arg6_widenStencilValues[24] = arg6_read_val;                
                arg6_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr] = arg6_widenStencilValues[24];                
                arg10_widenStencilValues[0] = arg10_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr];                
                arg10_widenStencilValues[1] = arg10_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr];                
                arg10_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr] = arg10_widenStencilValues[1];                
                arg10_widenStencilValues[2] = arg10_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr];                
                arg10_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr] = arg10_widenStencilValues[2];                
                arg10_widenStencilValues[3] = arg10_buf_p3_4[S3D_big_sten_buf_p3_4_wr];                
                arg10_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr] = arg10_widenStencilValues[3];                
                arg10_widenStencilValues[4] = arg10_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr];                
                arg10_buf_p3_4[S3D_big_sten_buf_p3_4_rd] = arg10_widenStencilValues[4];                
                arg10_widenStencilValues[5] = arg10_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr];                
                arg10_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr] = arg10_widenStencilValues[5];                
                arg10_widenStencilValues[6] = arg10_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr];                
                arg10_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr] = arg10_widenStencilValues[6];                
                arg10_widenStencilValues[7] = arg10_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_wr];                
                arg10_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr] = arg10_widenStencilValues[7];                
                arg10_widenStencilValues[8] = arg10_widenStencilValues[9];                
                arg10_widenStencilValues[9] = arg10_widenStencilValues[10];                
                arg10_widenStencilValues[10] = arg10_widenStencilValues[11];                
                arg10_widenStencilValues[11] = arg10_widenStencilValues[12];                
                arg10_widenStencilValues[12] = arg10_widenStencilValues[13];                
                arg10_widenStencilValues[13] = arg10_widenStencilValues[14];                
                arg10_widenStencilValues[14] = arg10_widenStencilValues[15];                
                arg10_widenStencilValues[15] = arg10_widenStencilValues[16];                
                arg10_widenStencilValues[16] = arg10_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_wr];                
                arg10_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_rd] = arg10_widenStencilValues[8];                
                arg10_widenStencilValues[17] = arg10_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr];                
                arg10_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_rd] = arg10_widenStencilValues[17];                
                arg10_widenStencilValues[18] = arg10_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr];                
                arg10_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr] = arg10_widenStencilValues[18];                
                arg10_widenStencilValues[19] = arg10_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr];                
                arg10_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr] = arg10_widenStencilValues[19];                
                arg10_widenStencilValues[20] = arg10_buf_p4_5[S3D_big_sten_buf_p4_5_wr];                
                arg10_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr] = arg10_widenStencilValues[20];                
                arg10_widenStencilValues[21] = arg10_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr];                
                arg10_buf_p4_5[S3D_big_sten_buf_p4_5_rd] = arg10_widenStencilValues[21];                
                arg10_widenStencilValues[22] = arg10_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr];                
                arg10_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr] = arg10_widenStencilValues[22];                
                arg10_widenStencilValues[23] = arg10_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr];                
                arg10_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr] = arg10_widenStencilValues[23];                
                arg10_widenStencilValues[24] = arg10_read_val;                
                arg10_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr] = arg10_widenStencilValues[24];                
                arg11_widenStencilValues[0] = arg11_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr];                
                arg11_widenStencilValues[1] = arg11_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr];                
                arg11_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr] = arg11_widenStencilValues[1];                
                arg11_widenStencilValues[2] = arg11_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr];                
                arg11_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr] = arg11_widenStencilValues[2];                
                arg11_widenStencilValues[3] = arg11_buf_p3_4[S3D_big_sten_buf_p3_4_wr];                
                arg11_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr] = arg11_widenStencilValues[3];                
                arg11_widenStencilValues[4] = arg11_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr];                
                arg11_buf_p3_4[S3D_big_sten_buf_p3_4_rd] = arg11_widenStencilValues[4];                
                arg11_widenStencilValues[5] = arg11_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr];                
                arg11_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr] = arg11_widenStencilValues[5];                
                arg11_widenStencilValues[6] = arg11_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr];                
                arg11_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr] = arg11_widenStencilValues[6];                
                arg11_widenStencilValues[7] = arg11_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_wr];                
                arg11_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr] = arg11_widenStencilValues[7];                
                arg11_widenStencilValues[8] = arg11_widenStencilValues[9];                
                arg11_widenStencilValues[9] = arg11_widenStencilValues[10];                
                arg11_widenStencilValues[10] = arg11_widenStencilValues[11];                
                arg11_widenStencilValues[11] = arg11_widenStencilValues[12];                
                arg11_widenStencilValues[12] = arg11_widenStencilValues[13];                
                arg11_widenStencilValues[13] = arg11_widenStencilValues[14];                
                arg11_widenStencilValues[14] = arg11_widenStencilValues[15];                
                arg11_widenStencilValues[15] = arg11_widenStencilValues[16];                
                arg11_widenStencilValues[16] = arg11_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_wr];                
                arg11_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_rd] = arg11_widenStencilValues[8];                
                arg11_widenStencilValues[17] = arg11_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr];                
                arg11_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_rd] = arg11_widenStencilValues[17];                
                arg11_widenStencilValues[18] = arg11_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr];                
                arg11_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr] = arg11_widenStencilValues[18];                
                arg11_widenStencilValues[19] = arg11_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr];                
                arg11_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr] = arg11_widenStencilValues[19];                
                arg11_widenStencilValues[20] = arg11_buf_p4_5[S3D_big_sten_buf_p4_5_wr];                
                arg11_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr] = arg11_widenStencilValues[20];                
                arg11_widenStencilValues[21] = arg11_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr];                
                arg11_buf_p4_5[S3D_big_sten_buf_p4_5_rd] = arg11_widenStencilValues[21];                
                arg11_widenStencilValues[22] = arg11_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr];                
                arg11_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr] = arg11_widenStencilValues[22];                
                arg11_widenStencilValues[23] = arg11_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr];                
                arg11_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr] = arg11_widenStencilValues[23];                
                arg11_widenStencilValues[24] = arg11_read_val;                
                arg11_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr] = arg11_widenStencilValues[24];                
                arg12_widenStencilValues[0] = arg12_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr];                
                arg12_widenStencilValues[1] = arg12_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr];                
                arg12_buf_p0_1[S3D_big_sten_buf_p0_1_rd_wr] = arg12_widenStencilValues[1];                
                arg12_widenStencilValues[2] = arg12_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr];                
                arg12_buf_p1_2[S3D_big_sten_buf_p1_2_rd_wr] = arg12_widenStencilValues[2];                
                arg12_widenStencilValues[3] = arg12_buf_p3_4[S3D_big_sten_buf_p3_4_wr];                
                arg12_buf_p2_3[S3D_big_sten_buf_p2_3_rd_wr] = arg12_widenStencilValues[3];                
                arg12_widenStencilValues[4] = arg12_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr];                
                arg12_buf_p3_4[S3D_big_sten_buf_p3_4_rd] = arg12_widenStencilValues[4];                
                arg12_widenStencilValues[5] = arg12_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr];                
                arg12_buf_r0_1_p4[S3D_big_sten_buf_r0_1_p4_rd_wr] = arg12_widenStencilValues[5];                
                arg12_widenStencilValues[6] = arg12_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr];                
                arg12_buf_r1_2_p4[S3D_big_sten_buf_r1_2_p4_rd_wr] = arg12_widenStencilValues[6];                
                arg12_widenStencilValues[7] = arg12_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_wr];                
                arg12_buf_r2_3_p4[S3D_big_sten_buf_r2_3_p4_rd_wr] = arg12_widenStencilValues[7];                
                arg12_widenStencilValues[8] = arg12_widenStencilValues[9];                
                arg12_widenStencilValues[9] = arg12_widenStencilValues[10];                
                arg12_widenStencilValues[10] = arg12_widenStencilValues[11];                
                arg12_widenStencilValues[11] = arg12_widenStencilValues[12];                
                arg12_widenStencilValues[12] = arg12_widenStencilValues[13];                
                arg12_widenStencilValues[13] = arg12_widenStencilValues[14];                
                arg12_widenStencilValues[14] = arg12_widenStencilValues[15];                
                arg12_widenStencilValues[15] = arg12_widenStencilValues[16];                
                arg12_widenStencilValues[16] = arg12_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_wr];                
                arg12_buf_r3_4_p4[S3D_big_sten_buf_r3_4_p4_rd] = arg12_widenStencilValues[8];                
                arg12_widenStencilValues[17] = arg12_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr];                
                arg12_buf_r4_5_p4[S3D_big_sten_buf_r4_5_p4_rd] = arg12_widenStencilValues[17];                
                arg12_widenStencilValues[18] = arg12_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr];                
                arg12_buf_r5_6_p4[S3D_big_sten_buf_r5_6_p4_rd_wr] = arg12_widenStencilValues[18];                
                arg12_widenStencilValues[19] = arg12_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr];                
                arg12_buf_r6_7_p4[S3D_big_sten_buf_r6_7_p4_rd_wr] = arg12_widenStencilValues[19];                
                arg12_widenStencilValues[20] = arg12_buf_p4_5[S3D_big_sten_buf_p4_5_wr];                
                arg12_buf_r7_8_p4[S3D_big_sten_buf_r7_8_p4_rd_wr] = arg12_widenStencilValues[20];                
                arg12_widenStencilValues[21] = arg12_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr];                
                arg12_buf_p4_5[S3D_big_sten_buf_p4_5_rd] = arg12_widenStencilValues[21];                
                arg12_widenStencilValues[22] = arg12_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr];                
                arg12_buf_p5_6[S3D_big_sten_buf_p5_6_rd_wr] = arg12_widenStencilValues[22];                
                arg12_widenStencilValues[23] = arg12_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr];                
                arg12_buf_p6_7[S3D_big_sten_buf_p6_7_rd_wr] = arg12_widenStencilValues[23];                
                arg12_widenStencilValues[24] = arg12_read_val;                
                arg12_buf_p7_8[S3D_big_sten_buf_p7_8_rd_wr] = arg12_widenStencilValues[24];

                bool cond_end_of_line_buff_S3D_big_sten_buf_p0_1_rd_wr = S3D_big_sten_buf_p0_1_rd_wr >= (plane_diff);

                if (cond_end_of_line_buff_S3D_big_sten_buf_p0_1_rd_wr)
                    S3D_big_sten_buf_p0_1_rd_wr = 0;
                else
                    S3D_big_sten_buf_p0_1_rd_wr++;
                bool cond_end_of_line_buff_S3D_big_sten_buf_p1_2_rd_wr = S3D_big_sten_buf_p1_2_rd_wr >= (plane_diff);

                if (cond_end_of_line_buff_S3D_big_sten_buf_p1_2_rd_wr)
                    S3D_big_sten_buf_p1_2_rd_wr = 0;
                else
                    S3D_big_sten_buf_p1_2_rd_wr++;
                bool cond_end_of_line_buff_S3D_big_sten_buf_p2_3_rd_wr = S3D_big_sten_buf_p2_3_rd_wr >= (plane_diff);

                if (cond_end_of_line_buff_S3D_big_sten_buf_p2_3_rd_wr)
                    S3D_big_sten_buf_p2_3_rd_wr = 0;
                else
                    S3D_big_sten_buf_p2_3_rd_wr++;
                bool cond_end_of_line_buff_S3D_big_sten_buf_p3_4_rd = S3D_big_sten_buf_p3_4_rd >= (plane_diff);
                bool cond_end_of_line_buff_S3D_big_sten_buf_p3_4_wr = S3D_big_sten_buf_p3_4_wr >= (plane_diff);

                if (cond_end_of_line_buff_S3D_big_sten_buf_p3_4_rd)
                    S3D_big_sten_buf_p3_4_rd = 0;
                else
                    S3D_big_sten_buf_p3_4_rd++;

                if (cond_end_of_line_buff_S3D_big_sten_buf_p3_4_wr)
                    S3D_big_sten_buf_p3_4_wr = 0;
                else
                    S3D_big_sten_buf_p3_4_wr++;
                bool cond_end_of_line_buff_S3D_big_sten_buf_r0_1_p4_rd_wr = S3D_big_sten_buf_r0_1_p4_rd_wr >= (stencilConfig.grid_size[0] - 1);

                if (cond_end_of_line_buff_S3D_big_sten_buf_r0_1_p4_rd_wr)
                    S3D_big_sten_buf_r0_1_p4_rd_wr = 0;
                else
                    S3D_big_sten_buf_r0_1_p4_rd_wr++;
                bool cond_end_of_line_buff_S3D_big_sten_buf_r1_2_p4_rd_wr = S3D_big_sten_buf_r1_2_p4_rd_wr >= (stencilConfig.grid_size[0] - 1);

                if (cond_end_of_line_buff_S3D_big_sten_buf_r1_2_p4_rd_wr)
                    S3D_big_sten_buf_r1_2_p4_rd_wr = 0;
                else
                    S3D_big_sten_buf_r1_2_p4_rd_wr++;
                bool cond_end_of_line_buff_S3D_big_sten_buf_r2_3_p4_rd_wr = S3D_big_sten_buf_r2_3_p4_rd_wr >= (stencilConfig.grid_size[0] - 1);

                if (cond_end_of_line_buff_S3D_big_sten_buf_r2_3_p4_rd_wr)
                    S3D_big_sten_buf_r2_3_p4_rd_wr = 0;
                else
                    S3D_big_sten_buf_r2_3_p4_rd_wr++;
                bool cond_end_of_line_buff_S3D_big_sten_buf_r3_4_p4_rd = S3D_big_sten_buf_r3_4_p4_rd >= (stencilConfig.grid_size[0] - 1);
                bool cond_end_of_line_buff_S3D_big_sten_buf_r3_4_p4_wr = S3D_big_sten_buf_r3_4_p4_wr >= (stencilConfig.grid_size[0] - 1);

                if (cond_end_of_line_buff_S3D_big_sten_buf_r3_4_p4_rd)
                    S3D_big_sten_buf_r3_4_p4_rd = 0;
                else
                    S3D_big_sten_buf_r3_4_p4_rd++;

                if (cond_end_of_line_buff_S3D_big_sten_buf_r3_4_p4_wr)
                    S3D_big_sten_buf_r3_4_p4_wr = 0;
                else
                    S3D_big_sten_buf_r3_4_p4_wr++;
                bool cond_end_of_line_buff_S3D_big_sten_buf_r4_5_p4_rd = S3D_big_sten_buf_r4_5_p4_rd >= (stencilConfig.grid_size[0] - 1);
                bool cond_end_of_line_buff_S3D_big_sten_buf_r4_5_p4_wr = S3D_big_sten_buf_r4_5_p4_wr >= (stencilConfig.grid_size[0] - 1);

                if (cond_end_of_line_buff_S3D_big_sten_buf_r4_5_p4_rd)
                    S3D_big_sten_buf_r4_5_p4_rd = 0;
                else
                    S3D_big_sten_buf_r4_5_p4_rd++;

                if (cond_end_of_line_buff_S3D_big_sten_buf_r4_5_p4_wr)
                    S3D_big_sten_buf_r4_5_p4_wr = 0;
                else
                    S3D_big_sten_buf_r4_5_p4_wr++;
                bool cond_end_of_line_buff_S3D_big_sten_buf_r5_6_p4_rd_wr = S3D_big_sten_buf_r5_6_p4_rd_wr >= (stencilConfig.grid_size[0] - 1);

                if (cond_end_of_line_buff_S3D_big_sten_buf_r5_6_p4_rd_wr)
                    S3D_big_sten_buf_r5_6_p4_rd_wr = 0;
                else
                    S3D_big_sten_buf_r5_6_p4_rd_wr++;
                bool cond_end_of_line_buff_S3D_big_sten_buf_r6_7_p4_rd_wr = S3D_big_sten_buf_r6_7_p4_rd_wr >= (stencilConfig.grid_size[0] - 1);

                if (cond_end_of_line_buff_S3D_big_sten_buf_r6_7_p4_rd_wr)
                    S3D_big_sten_buf_r6_7_p4_rd_wr = 0;
                else
                    S3D_big_sten_buf_r6_7_p4_rd_wr++;
                bool cond_end_of_line_buff_S3D_big_sten_buf_r7_8_p4_rd_wr = S3D_big_sten_buf_r7_8_p4_rd_wr >= (stencilConfig.grid_size[0] - 1);

                if (cond_end_of_line_buff_S3D_big_sten_buf_r7_8_p4_rd_wr)
                    S3D_big_sten_buf_r7_8_p4_rd_wr = 0;
                else
                    S3D_big_sten_buf_r7_8_p4_rd_wr++;
                bool cond_end_of_line_buff_S3D_big_sten_buf_p4_5_rd = S3D_big_sten_buf_p4_5_rd >= (plane_diff);
                bool cond_end_of_line_buff_S3D_big_sten_buf_p4_5_wr = S3D_big_sten_buf_p4_5_wr >= (plane_diff);

                if (cond_end_of_line_buff_S3D_big_sten_buf_p4_5_rd)
                    S3D_big_sten_buf_p4_5_rd = 0;
                else
                    S3D_big_sten_buf_p4_5_rd++;

                if (cond_end_of_line_buff_S3D_big_sten_buf_p4_5_wr)
                    S3D_big_sten_buf_p4_5_wr = 0;
                else
                    S3D_big_sten_buf_p4_5_wr++;
                bool cond_end_of_line_buff_S3D_big_sten_buf_p5_6_rd_wr = S3D_big_sten_buf_p5_6_rd_wr >= (plane_diff);

                if (cond_end_of_line_buff_S3D_big_sten_buf_p5_6_rd_wr)
                    S3D_big_sten_buf_p5_6_rd_wr = 0;
                else
                    S3D_big_sten_buf_p5_6_rd_wr++;
                bool cond_end_of_line_buff_S3D_big_sten_buf_p6_7_rd_wr = S3D_big_sten_buf_p6_7_rd_wr >= (plane_diff);

                if (cond_end_of_line_buff_S3D_big_sten_buf_p6_7_rd_wr)
                    S3D_big_sten_buf_p6_7_rd_wr = 0;
                else
                    S3D_big_sten_buf_p6_7_rd_wr++;
                bool cond_end_of_line_buff_S3D_big_sten_buf_p7_8_rd_wr = S3D_big_sten_buf_p7_8_rd_wr >= (plane_diff);

                if (cond_end_of_line_buff_S3D_big_sten_buf_p7_8_rd_wr)
                    S3D_big_sten_buf_p7_8_rd_wr = 0;
                else
                    S3D_big_sten_buf_p7_8_rd_wr++;

#ifdef DEBUG_LOG
                printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] loop params after update i(%d), "\
                                "j(%d), "\
                                "k(%d), "\
                                "S3D_big_sten_buf_p0_1_rd_wr(%d), "\
                                "S3D_big_sten_buf_p0_1_rd_wr(%d), "\
                                "S3D_big_sten_buf_p1_2_rd_wr(%d), "\
                                "S3D_big_sten_buf_p1_2_rd_wr(%d), "\
                                "S3D_big_sten_buf_p2_3_rd_wr(%d), "\
                                "S3D_big_sten_buf_p2_3_rd_wr(%d), "\
                                "S3D_big_sten_buf_p3_4_rd(%d), "\
                                "S3D_big_sten_buf_p3_4_wr(%d), "\
                                "S3D_big_sten_buf_r0_1_p4_rd_wr(%d), "\
                                "S3D_big_sten_buf_r0_1_p4_rd_wr(%d), "\
                                "S3D_big_sten_buf_r1_2_p4_rd_wr(%d), "\
                                "S3D_big_sten_buf_r1_2_p4_rd_wr(%d), "\
                                "S3D_big_sten_buf_r2_3_p4_rd_wr(%d), "\
                                "S3D_big_sten_buf_r2_3_p4_rd_wr(%d), "\
                                "S3D_big_sten_buf_r3_4_p4_rd(%d), "\
                                "S3D_big_sten_buf_r3_4_p4_wr(%d), "\
                                "S3D_big_sten_buf_r4_5_p4_rd(%d), "\
                                "S3D_big_sten_buf_r4_5_p4_wr(%d), "\
                                "S3D_big_sten_buf_r5_6_p4_rd_wr(%d), "\
                                "S3D_big_sten_buf_r5_6_p4_rd_wr(%d), "\
                                "S3D_big_sten_buf_r6_7_p4_rd_wr(%d), "\
                                "S3D_big_sten_buf_r6_7_p4_rd_wr(%d), "\
                                "S3D_big_sten_buf_r7_8_p4_rd_wr(%d), "\
                                "S3D_big_sten_buf_r7_8_p4_rd_wr(%d), "\
                                "S3D_big_sten_buf_p4_5_rd(%d), "\
                                "S3D_big_sten_buf_p4_5_wr(%d), "\
                                "S3D_big_sten_buf_p5_6_rd_wr(%d), "\
                                "S3D_big_sten_buf_p5_6_rd_wr(%d), "\
                                "S3D_big_sten_buf_p6_7_rd_wr(%d), "\
                                "S3D_big_sten_buf_p6_7_rd_wr(%d), "\
                                "S3D_big_sten_buf_p7_8_rd_wr(%d), "\
                                "S3D_big_sten_buf_p7_8_rd_wr(%d), "\
                                "reg_itr(%d)\n", m_PEId, i, 
                                j,
                                k,
                                S3D_big_sten_buf_p0_1_rd_wr, 
                                S3D_big_sten_buf_p0_1_rd_wr, 
                                S3D_big_sten_buf_p1_2_rd_wr, 
                                S3D_big_sten_buf_p1_2_rd_wr, 
                                S3D_big_sten_buf_p2_3_rd_wr, 
                                S3D_big_sten_buf_p2_3_rd_wr, 
                                S3D_big_sten_buf_p3_4_rd, 
                                S3D_big_sten_buf_p3_4_wr, 
                                S3D_big_sten_buf_r0_1_p4_rd_wr, 
                                S3D_big_sten_buf_r0_1_p4_rd_wr, 
                                S3D_big_sten_buf_r1_2_p4_rd_wr, 
                                S3D_big_sten_buf_r1_2_p4_rd_wr, 
                                S3D_big_sten_buf_r2_3_p4_rd_wr, 
                                S3D_big_sten_buf_r2_3_p4_rd_wr, 
                                S3D_big_sten_buf_r3_4_p4_rd, 
                                S3D_big_sten_buf_r3_4_p4_wr, 
                                S3D_big_sten_buf_r4_5_p4_rd, 
                                S3D_big_sten_buf_r4_5_p4_wr, 
                                S3D_big_sten_buf_r5_6_p4_rd_wr, 
                                S3D_big_sten_buf_r5_6_p4_rd_wr, 
                                S3D_big_sten_buf_r6_7_p4_rd_wr, 
                                S3D_big_sten_buf_r6_7_p4_rd_wr, 
                                S3D_big_sten_buf_r7_8_p4_rd_wr, 
                                S3D_big_sten_buf_r7_8_p4_rd_wr, 
                                S3D_big_sten_buf_p4_5_rd, 
                                S3D_big_sten_buf_p4_5_wr, 
                                S3D_big_sten_buf_p5_6_rd_wr, 
                                S3D_big_sten_buf_p5_6_rd_wr, 
                                S3D_big_sten_buf_p6_7_rd_wr, 
                                S3D_big_sten_buf_p6_7_rd_wr, 
                                S3D_big_sten_buf_p7_8_rd_wr, 
                                S3D_big_sten_buf_p7_8_rd_wr, 
                                reg_itr);

                printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] --------------------------------------------------------\n\n", m_PEId);

                printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] read values arg0: (", m_PEId);
                for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_0; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg0_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
                printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] read values arg1: (", m_PEId);
                for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_1; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg1_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
                printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] read values arg2: (", m_PEId);
                for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_2; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg2_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
                printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] read values arg3: (", m_PEId);
                for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_3; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg3_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
                printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] read values arg4: (", m_PEId);
                for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_4; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg4_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
                printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] read values arg5: (", m_PEId);
                for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_5; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg5_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
                printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] read values arg6: (", m_PEId);
                for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_6; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg6_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
                printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] read values arg10: (", m_PEId);
                for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_10; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg10_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
                printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] read values arg11: (", m_PEId);
                for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_11; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg11_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
                printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] read values arg12: (", m_PEId);
                for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_12; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg12_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
#endif      
            }

            vec2arr: for (unsigned short x = 0; x < vector_factor; x++)
            {
#pragma HLS UNROLL factor=vector_factor
                unsigned short x_d2 = x * 2;
                ops::hls::DataConv arg0_0_tmpConverter_4_0;
                arg0_0_tmpConverter_4_0.i = arg0_widenStencilValues[0].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg0_0_rowArr_4_0[x + half_span_x] = arg0_0_tmpConverter_4_0.f; 
                ops::hls::DataConv arg0_1_tmpConverter_4_0;
                arg0_1_tmpConverter_4_0.i = arg0_widenStencilValues[0].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg0_1_rowArr_4_0[x + half_span_x] = arg0_1_tmpConverter_4_0.f; 
                ops::hls::DataConv arg0_0_tmpConverter_4_1;
                arg0_0_tmpConverter_4_1.i = arg0_widenStencilValues[1].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg0_0_rowArr_4_1[x + half_span_x] = arg0_0_tmpConverter_4_1.f; 
                ops::hls::DataConv arg0_1_tmpConverter_4_1;
                arg0_1_tmpConverter_4_1.i = arg0_widenStencilValues[1].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg0_1_rowArr_4_1[x + half_span_x] = arg0_1_tmpConverter_4_1.f; 
                ops::hls::DataConv arg0_0_tmpConverter_4_2;
                arg0_0_tmpConverter_4_2.i = arg0_widenStencilValues[2].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg0_0_rowArr_4_2[x + half_span_x] = arg0_0_tmpConverter_4_2.f; 
                ops::hls::DataConv arg0_1_tmpConverter_4_2;
                arg0_1_tmpConverter_4_2.i = arg0_widenStencilValues[2].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg0_1_rowArr_4_2[x + half_span_x] = arg0_1_tmpConverter_4_2.f; 
                ops::hls::DataConv arg0_0_tmpConverter_4_3;
                arg0_0_tmpConverter_4_3.i = arg0_widenStencilValues[3].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg0_0_rowArr_4_3[x + half_span_x] = arg0_0_tmpConverter_4_3.f; 
                ops::hls::DataConv arg0_1_tmpConverter_4_3;
                arg0_1_tmpConverter_4_3.i = arg0_widenStencilValues[3].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg0_1_rowArr_4_3[x + half_span_x] = arg0_1_tmpConverter_4_3.f; 
                ops::hls::DataConv arg0_0_tmpConverter_0_4;
                arg0_0_tmpConverter_0_4.i = arg0_widenStencilValues[4].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg0_0_rowArr_0_4[x + half_span_x] = arg0_0_tmpConverter_0_4.f; 
                ops::hls::DataConv arg0_1_tmpConverter_0_4;
                arg0_1_tmpConverter_0_4.i = arg0_widenStencilValues[4].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg0_1_rowArr_0_4[x + half_span_x] = arg0_1_tmpConverter_0_4.f; 
                ops::hls::DataConv arg0_0_tmpConverter_1_4;
                arg0_0_tmpConverter_1_4.i = arg0_widenStencilValues[5].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg0_0_rowArr_1_4[x + half_span_x] = arg0_0_tmpConverter_1_4.f; 
                ops::hls::DataConv arg0_1_tmpConverter_1_4;
                arg0_1_tmpConverter_1_4.i = arg0_widenStencilValues[5].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg0_1_rowArr_1_4[x + half_span_x] = arg0_1_tmpConverter_1_4.f; 
                ops::hls::DataConv arg0_0_tmpConverter_2_4;
                arg0_0_tmpConverter_2_4.i = arg0_widenStencilValues[6].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg0_0_rowArr_2_4[x + half_span_x] = arg0_0_tmpConverter_2_4.f; 
                ops::hls::DataConv arg0_1_tmpConverter_2_4;
                arg0_1_tmpConverter_2_4.i = arg0_widenStencilValues[6].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg0_1_rowArr_2_4[x + half_span_x] = arg0_1_tmpConverter_2_4.f; 
                ops::hls::DataConv arg0_0_tmpConverter_3_4;
                arg0_0_tmpConverter_3_4.i = arg0_widenStencilValues[7].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg0_0_rowArr_3_4[x + half_span_x] = arg0_0_tmpConverter_3_4.f; 
                ops::hls::DataConv arg0_1_tmpConverter_3_4;
                arg0_1_tmpConverter_3_4.i = arg0_widenStencilValues[7].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg0_1_rowArr_3_4[x + half_span_x] = arg0_1_tmpConverter_3_4.f; 
                ops::hls::DataConv arg0_0_tmpConverter_4_4;
                arg0_0_tmpConverter_4_4.i = arg0_widenStencilValues[12].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg0_0_rowArr_4_4[x + half_span_x] = arg0_0_tmpConverter_4_4.f; 
                ops::hls::DataConv arg0_1_tmpConverter_4_4;
                arg0_1_tmpConverter_4_4.i = arg0_widenStencilValues[12].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg0_1_rowArr_4_4[x + half_span_x] = arg0_1_tmpConverter_4_4.f; 
                ops::hls::DataConv arg0_0_tmpConverter_5_4;
                arg0_0_tmpConverter_5_4.i = arg0_widenStencilValues[17].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg0_0_rowArr_5_4[x + half_span_x] = arg0_0_tmpConverter_5_4.f; 
                ops::hls::DataConv arg0_1_tmpConverter_5_4;
                arg0_1_tmpConverter_5_4.i = arg0_widenStencilValues[17].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg0_1_rowArr_5_4[x + half_span_x] = arg0_1_tmpConverter_5_4.f; 
                ops::hls::DataConv arg0_0_tmpConverter_6_4;
                arg0_0_tmpConverter_6_4.i = arg0_widenStencilValues[18].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg0_0_rowArr_6_4[x + half_span_x] = arg0_0_tmpConverter_6_4.f; 
                ops::hls::DataConv arg0_1_tmpConverter_6_4;
                arg0_1_tmpConverter_6_4.i = arg0_widenStencilValues[18].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg0_1_rowArr_6_4[x + half_span_x] = arg0_1_tmpConverter_6_4.f; 
                ops::hls::DataConv arg0_0_tmpConverter_7_4;
                arg0_0_tmpConverter_7_4.i = arg0_widenStencilValues[19].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg0_0_rowArr_7_4[x + half_span_x] = arg0_0_tmpConverter_7_4.f; 
                ops::hls::DataConv arg0_1_tmpConverter_7_4;
                arg0_1_tmpConverter_7_4.i = arg0_widenStencilValues[19].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg0_1_rowArr_7_4[x + half_span_x] = arg0_1_tmpConverter_7_4.f; 
                ops::hls::DataConv arg0_0_tmpConverter_8_4;
                arg0_0_tmpConverter_8_4.i = arg0_widenStencilValues[20].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg0_0_rowArr_8_4[x + half_span_x] = arg0_0_tmpConverter_8_4.f; 
                ops::hls::DataConv arg0_1_tmpConverter_8_4;
                arg0_1_tmpConverter_8_4.i = arg0_widenStencilValues[20].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg0_1_rowArr_8_4[x + half_span_x] = arg0_1_tmpConverter_8_4.f; 
                ops::hls::DataConv arg0_0_tmpConverter_4_5;
                arg0_0_tmpConverter_4_5.i = arg0_widenStencilValues[21].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg0_0_rowArr_4_5[x + half_span_x] = arg0_0_tmpConverter_4_5.f; 
                ops::hls::DataConv arg0_1_tmpConverter_4_5;
                arg0_1_tmpConverter_4_5.i = arg0_widenStencilValues[21].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg0_1_rowArr_4_5[x + half_span_x] = arg0_1_tmpConverter_4_5.f; 
                ops::hls::DataConv arg0_0_tmpConverter_4_6;
                arg0_0_tmpConverter_4_6.i = arg0_widenStencilValues[22].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg0_0_rowArr_4_6[x + half_span_x] = arg0_0_tmpConverter_4_6.f; 
                ops::hls::DataConv arg0_1_tmpConverter_4_6;
                arg0_1_tmpConverter_4_6.i = arg0_widenStencilValues[22].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg0_1_rowArr_4_6[x + half_span_x] = arg0_1_tmpConverter_4_6.f; 
                ops::hls::DataConv arg0_0_tmpConverter_4_7;
                arg0_0_tmpConverter_4_7.i = arg0_widenStencilValues[23].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg0_0_rowArr_4_7[x + half_span_x] = arg0_0_tmpConverter_4_7.f; 
                ops::hls::DataConv arg0_1_tmpConverter_4_7;
                arg0_1_tmpConverter_4_7.i = arg0_widenStencilValues[23].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg0_1_rowArr_4_7[x + half_span_x] = arg0_1_tmpConverter_4_7.f; 
                ops::hls::DataConv arg0_0_tmpConverter_4_8;
                arg0_0_tmpConverter_4_8.i = arg0_widenStencilValues[24].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg0_0_rowArr_4_8[x + half_span_x] = arg0_0_tmpConverter_4_8.f; 
                ops::hls::DataConv arg0_1_tmpConverter_4_8;
                arg0_1_tmpConverter_4_8.i = arg0_widenStencilValues[24].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg0_1_rowArr_4_8[x + half_span_x] = arg0_1_tmpConverter_4_8.f; 
                ops::hls::DataConv arg1_0_tmpConverter_4_0;
                arg1_0_tmpConverter_4_0.i = arg1_widenStencilValues[0].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg1_0_rowArr_4_0[x + half_span_x] = arg1_0_tmpConverter_4_0.f; 
                ops::hls::DataConv arg1_1_tmpConverter_4_0;
                arg1_1_tmpConverter_4_0.i = arg1_widenStencilValues[0].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg1_1_rowArr_4_0[x + half_span_x] = arg1_1_tmpConverter_4_0.f; 
                ops::hls::DataConv arg1_0_tmpConverter_4_1;
                arg1_0_tmpConverter_4_1.i = arg1_widenStencilValues[1].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg1_0_rowArr_4_1[x + half_span_x] = arg1_0_tmpConverter_4_1.f; 
                ops::hls::DataConv arg1_1_tmpConverter_4_1;
                arg1_1_tmpConverter_4_1.i = arg1_widenStencilValues[1].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg1_1_rowArr_4_1[x + half_span_x] = arg1_1_tmpConverter_4_1.f; 
                ops::hls::DataConv arg1_0_tmpConverter_4_2;
                arg1_0_tmpConverter_4_2.i = arg1_widenStencilValues[2].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg1_0_rowArr_4_2[x + half_span_x] = arg1_0_tmpConverter_4_2.f; 
                ops::hls::DataConv arg1_1_tmpConverter_4_2;
                arg1_1_tmpConverter_4_2.i = arg1_widenStencilValues[2].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg1_1_rowArr_4_2[x + half_span_x] = arg1_1_tmpConverter_4_2.f; 
                ops::hls::DataConv arg1_0_tmpConverter_4_3;
                arg1_0_tmpConverter_4_3.i = arg1_widenStencilValues[3].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg1_0_rowArr_4_3[x + half_span_x] = arg1_0_tmpConverter_4_3.f; 
                ops::hls::DataConv arg1_1_tmpConverter_4_3;
                arg1_1_tmpConverter_4_3.i = arg1_widenStencilValues[3].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg1_1_rowArr_4_3[x + half_span_x] = arg1_1_tmpConverter_4_3.f; 
                ops::hls::DataConv arg1_0_tmpConverter_0_4;
                arg1_0_tmpConverter_0_4.i = arg1_widenStencilValues[4].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg1_0_rowArr_0_4[x + half_span_x] = arg1_0_tmpConverter_0_4.f; 
                ops::hls::DataConv arg1_1_tmpConverter_0_4;
                arg1_1_tmpConverter_0_4.i = arg1_widenStencilValues[4].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg1_1_rowArr_0_4[x + half_span_x] = arg1_1_tmpConverter_0_4.f; 
                ops::hls::DataConv arg1_0_tmpConverter_1_4;
                arg1_0_tmpConverter_1_4.i = arg1_widenStencilValues[5].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg1_0_rowArr_1_4[x + half_span_x] = arg1_0_tmpConverter_1_4.f; 
                ops::hls::DataConv arg1_1_tmpConverter_1_4;
                arg1_1_tmpConverter_1_4.i = arg1_widenStencilValues[5].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg1_1_rowArr_1_4[x + half_span_x] = arg1_1_tmpConverter_1_4.f; 
                ops::hls::DataConv arg1_0_tmpConverter_2_4;
                arg1_0_tmpConverter_2_4.i = arg1_widenStencilValues[6].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg1_0_rowArr_2_4[x + half_span_x] = arg1_0_tmpConverter_2_4.f; 
                ops::hls::DataConv arg1_1_tmpConverter_2_4;
                arg1_1_tmpConverter_2_4.i = arg1_widenStencilValues[6].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg1_1_rowArr_2_4[x + half_span_x] = arg1_1_tmpConverter_2_4.f; 
                ops::hls::DataConv arg1_0_tmpConverter_3_4;
                arg1_0_tmpConverter_3_4.i = arg1_widenStencilValues[7].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg1_0_rowArr_3_4[x + half_span_x] = arg1_0_tmpConverter_3_4.f; 
                ops::hls::DataConv arg1_1_tmpConverter_3_4;
                arg1_1_tmpConverter_3_4.i = arg1_widenStencilValues[7].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg1_1_rowArr_3_4[x + half_span_x] = arg1_1_tmpConverter_3_4.f; 
                ops::hls::DataConv arg1_0_tmpConverter_4_4;
                arg1_0_tmpConverter_4_4.i = arg1_widenStencilValues[12].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg1_0_rowArr_4_4[x + half_span_x] = arg1_0_tmpConverter_4_4.f; 
                ops::hls::DataConv arg1_1_tmpConverter_4_4;
                arg1_1_tmpConverter_4_4.i = arg1_widenStencilValues[12].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg1_1_rowArr_4_4[x + half_span_x] = arg1_1_tmpConverter_4_4.f; 
                ops::hls::DataConv arg1_0_tmpConverter_5_4;
                arg1_0_tmpConverter_5_4.i = arg1_widenStencilValues[17].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg1_0_rowArr_5_4[x + half_span_x] = arg1_0_tmpConverter_5_4.f; 
                ops::hls::DataConv arg1_1_tmpConverter_5_4;
                arg1_1_tmpConverter_5_4.i = arg1_widenStencilValues[17].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg1_1_rowArr_5_4[x + half_span_x] = arg1_1_tmpConverter_5_4.f; 
                ops::hls::DataConv arg1_0_tmpConverter_6_4;
                arg1_0_tmpConverter_6_4.i = arg1_widenStencilValues[18].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg1_0_rowArr_6_4[x + half_span_x] = arg1_0_tmpConverter_6_4.f; 
                ops::hls::DataConv arg1_1_tmpConverter_6_4;
                arg1_1_tmpConverter_6_4.i = arg1_widenStencilValues[18].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg1_1_rowArr_6_4[x + half_span_x] = arg1_1_tmpConverter_6_4.f; 
                ops::hls::DataConv arg1_0_tmpConverter_7_4;
                arg1_0_tmpConverter_7_4.i = arg1_widenStencilValues[19].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg1_0_rowArr_7_4[x + half_span_x] = arg1_0_tmpConverter_7_4.f; 
                ops::hls::DataConv arg1_1_tmpConverter_7_4;
                arg1_1_tmpConverter_7_4.i = arg1_widenStencilValues[19].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg1_1_rowArr_7_4[x + half_span_x] = arg1_1_tmpConverter_7_4.f; 
                ops::hls::DataConv arg1_0_tmpConverter_8_4;
                arg1_0_tmpConverter_8_4.i = arg1_widenStencilValues[20].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg1_0_rowArr_8_4[x + half_span_x] = arg1_0_tmpConverter_8_4.f; 
                ops::hls::DataConv arg1_1_tmpConverter_8_4;
                arg1_1_tmpConverter_8_4.i = arg1_widenStencilValues[20].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg1_1_rowArr_8_4[x + half_span_x] = arg1_1_tmpConverter_8_4.f; 
                ops::hls::DataConv arg1_0_tmpConverter_4_5;
                arg1_0_tmpConverter_4_5.i = arg1_widenStencilValues[21].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg1_0_rowArr_4_5[x + half_span_x] = arg1_0_tmpConverter_4_5.f; 
                ops::hls::DataConv arg1_1_tmpConverter_4_5;
                arg1_1_tmpConverter_4_5.i = arg1_widenStencilValues[21].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg1_1_rowArr_4_5[x + half_span_x] = arg1_1_tmpConverter_4_5.f; 
                ops::hls::DataConv arg1_0_tmpConverter_4_6;
                arg1_0_tmpConverter_4_6.i = arg1_widenStencilValues[22].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg1_0_rowArr_4_6[x + half_span_x] = arg1_0_tmpConverter_4_6.f; 
                ops::hls::DataConv arg1_1_tmpConverter_4_6;
                arg1_1_tmpConverter_4_6.i = arg1_widenStencilValues[22].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg1_1_rowArr_4_6[x + half_span_x] = arg1_1_tmpConverter_4_6.f; 
                ops::hls::DataConv arg1_0_tmpConverter_4_7;
                arg1_0_tmpConverter_4_7.i = arg1_widenStencilValues[23].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg1_0_rowArr_4_7[x + half_span_x] = arg1_0_tmpConverter_4_7.f; 
                ops::hls::DataConv arg1_1_tmpConverter_4_7;
                arg1_1_tmpConverter_4_7.i = arg1_widenStencilValues[23].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg1_1_rowArr_4_7[x + half_span_x] = arg1_1_tmpConverter_4_7.f; 
                ops::hls::DataConv arg1_0_tmpConverter_4_8;
                arg1_0_tmpConverter_4_8.i = arg1_widenStencilValues[24].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg1_0_rowArr_4_8[x + half_span_x] = arg1_0_tmpConverter_4_8.f; 
                ops::hls::DataConv arg1_1_tmpConverter_4_8;
                arg1_1_tmpConverter_4_8.i = arg1_widenStencilValues[24].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg1_1_rowArr_4_8[x + half_span_x] = arg1_1_tmpConverter_4_8.f; 
                ops::hls::DataConv arg2_0_tmpConverter_4_0;
                arg2_0_tmpConverter_4_0.i = arg2_widenStencilValues[0].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg2_0_rowArr_4_0[x + half_span_x] = arg2_0_tmpConverter_4_0.f; 
                ops::hls::DataConv arg2_1_tmpConverter_4_0;
                arg2_1_tmpConverter_4_0.i = arg2_widenStencilValues[0].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg2_1_rowArr_4_0[x + half_span_x] = arg2_1_tmpConverter_4_0.f; 
                ops::hls::DataConv arg2_0_tmpConverter_4_1;
                arg2_0_tmpConverter_4_1.i = arg2_widenStencilValues[1].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg2_0_rowArr_4_1[x + half_span_x] = arg2_0_tmpConverter_4_1.f; 
                ops::hls::DataConv arg2_1_tmpConverter_4_1;
                arg2_1_tmpConverter_4_1.i = arg2_widenStencilValues[1].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg2_1_rowArr_4_1[x + half_span_x] = arg2_1_tmpConverter_4_1.f; 
                ops::hls::DataConv arg2_0_tmpConverter_4_2;
                arg2_0_tmpConverter_4_2.i = arg2_widenStencilValues[2].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg2_0_rowArr_4_2[x + half_span_x] = arg2_0_tmpConverter_4_2.f; 
                ops::hls::DataConv arg2_1_tmpConverter_4_2;
                arg2_1_tmpConverter_4_2.i = arg2_widenStencilValues[2].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg2_1_rowArr_4_2[x + half_span_x] = arg2_1_tmpConverter_4_2.f; 
                ops::hls::DataConv arg2_0_tmpConverter_4_3;
                arg2_0_tmpConverter_4_3.i = arg2_widenStencilValues[3].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg2_0_rowArr_4_3[x + half_span_x] = arg2_0_tmpConverter_4_3.f; 
                ops::hls::DataConv arg2_1_tmpConverter_4_3;
                arg2_1_tmpConverter_4_3.i = arg2_widenStencilValues[3].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg2_1_rowArr_4_3[x + half_span_x] = arg2_1_tmpConverter_4_3.f; 
                ops::hls::DataConv arg2_0_tmpConverter_0_4;
                arg2_0_tmpConverter_0_4.i = arg2_widenStencilValues[4].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg2_0_rowArr_0_4[x + half_span_x] = arg2_0_tmpConverter_0_4.f; 
                ops::hls::DataConv arg2_1_tmpConverter_0_4;
                arg2_1_tmpConverter_0_4.i = arg2_widenStencilValues[4].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg2_1_rowArr_0_4[x + half_span_x] = arg2_1_tmpConverter_0_4.f; 
                ops::hls::DataConv arg2_0_tmpConverter_1_4;
                arg2_0_tmpConverter_1_4.i = arg2_widenStencilValues[5].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg2_0_rowArr_1_4[x + half_span_x] = arg2_0_tmpConverter_1_4.f; 
                ops::hls::DataConv arg2_1_tmpConverter_1_4;
                arg2_1_tmpConverter_1_4.i = arg2_widenStencilValues[5].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg2_1_rowArr_1_4[x + half_span_x] = arg2_1_tmpConverter_1_4.f; 
                ops::hls::DataConv arg2_0_tmpConverter_2_4;
                arg2_0_tmpConverter_2_4.i = arg2_widenStencilValues[6].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg2_0_rowArr_2_4[x + half_span_x] = arg2_0_tmpConverter_2_4.f; 
                ops::hls::DataConv arg2_1_tmpConverter_2_4;
                arg2_1_tmpConverter_2_4.i = arg2_widenStencilValues[6].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg2_1_rowArr_2_4[x + half_span_x] = arg2_1_tmpConverter_2_4.f; 
                ops::hls::DataConv arg2_0_tmpConverter_3_4;
                arg2_0_tmpConverter_3_4.i = arg2_widenStencilValues[7].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg2_0_rowArr_3_4[x + half_span_x] = arg2_0_tmpConverter_3_4.f; 
                ops::hls::DataConv arg2_1_tmpConverter_3_4;
                arg2_1_tmpConverter_3_4.i = arg2_widenStencilValues[7].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg2_1_rowArr_3_4[x + half_span_x] = arg2_1_tmpConverter_3_4.f; 
                ops::hls::DataConv arg2_0_tmpConverter_4_4;
                arg2_0_tmpConverter_4_4.i = arg2_widenStencilValues[12].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg2_0_rowArr_4_4[x + half_span_x] = arg2_0_tmpConverter_4_4.f; 
                ops::hls::DataConv arg2_1_tmpConverter_4_4;
                arg2_1_tmpConverter_4_4.i = arg2_widenStencilValues[12].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg2_1_rowArr_4_4[x + half_span_x] = arg2_1_tmpConverter_4_4.f; 
                ops::hls::DataConv arg2_0_tmpConverter_5_4;
                arg2_0_tmpConverter_5_4.i = arg2_widenStencilValues[17].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg2_0_rowArr_5_4[x + half_span_x] = arg2_0_tmpConverter_5_4.f; 
                ops::hls::DataConv arg2_1_tmpConverter_5_4;
                arg2_1_tmpConverter_5_4.i = arg2_widenStencilValues[17].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg2_1_rowArr_5_4[x + half_span_x] = arg2_1_tmpConverter_5_4.f; 
                ops::hls::DataConv arg2_0_tmpConverter_6_4;
                arg2_0_tmpConverter_6_4.i = arg2_widenStencilValues[18].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg2_0_rowArr_6_4[x + half_span_x] = arg2_0_tmpConverter_6_4.f; 
                ops::hls::DataConv arg2_1_tmpConverter_6_4;
                arg2_1_tmpConverter_6_4.i = arg2_widenStencilValues[18].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg2_1_rowArr_6_4[x + half_span_x] = arg2_1_tmpConverter_6_4.f; 
                ops::hls::DataConv arg2_0_tmpConverter_7_4;
                arg2_0_tmpConverter_7_4.i = arg2_widenStencilValues[19].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg2_0_rowArr_7_4[x + half_span_x] = arg2_0_tmpConverter_7_4.f; 
                ops::hls::DataConv arg2_1_tmpConverter_7_4;
                arg2_1_tmpConverter_7_4.i = arg2_widenStencilValues[19].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg2_1_rowArr_7_4[x + half_span_x] = arg2_1_tmpConverter_7_4.f; 
                ops::hls::DataConv arg2_0_tmpConverter_8_4;
                arg2_0_tmpConverter_8_4.i = arg2_widenStencilValues[20].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg2_0_rowArr_8_4[x + half_span_x] = arg2_0_tmpConverter_8_4.f; 
                ops::hls::DataConv arg2_1_tmpConverter_8_4;
                arg2_1_tmpConverter_8_4.i = arg2_widenStencilValues[20].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg2_1_rowArr_8_4[x + half_span_x] = arg2_1_tmpConverter_8_4.f; 
                ops::hls::DataConv arg2_0_tmpConverter_4_5;
                arg2_0_tmpConverter_4_5.i = arg2_widenStencilValues[21].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg2_0_rowArr_4_5[x + half_span_x] = arg2_0_tmpConverter_4_5.f; 
                ops::hls::DataConv arg2_1_tmpConverter_4_5;
                arg2_1_tmpConverter_4_5.i = arg2_widenStencilValues[21].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg2_1_rowArr_4_5[x + half_span_x] = arg2_1_tmpConverter_4_5.f; 
                ops::hls::DataConv arg2_0_tmpConverter_4_6;
                arg2_0_tmpConverter_4_6.i = arg2_widenStencilValues[22].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg2_0_rowArr_4_6[x + half_span_x] = arg2_0_tmpConverter_4_6.f; 
                ops::hls::DataConv arg2_1_tmpConverter_4_6;
                arg2_1_tmpConverter_4_6.i = arg2_widenStencilValues[22].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg2_1_rowArr_4_6[x + half_span_x] = arg2_1_tmpConverter_4_6.f; 
                ops::hls::DataConv arg2_0_tmpConverter_4_7;
                arg2_0_tmpConverter_4_7.i = arg2_widenStencilValues[23].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg2_0_rowArr_4_7[x + half_span_x] = arg2_0_tmpConverter_4_7.f; 
                ops::hls::DataConv arg2_1_tmpConverter_4_7;
                arg2_1_tmpConverter_4_7.i = arg2_widenStencilValues[23].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg2_1_rowArr_4_7[x + half_span_x] = arg2_1_tmpConverter_4_7.f; 
                ops::hls::DataConv arg2_0_tmpConverter_4_8;
                arg2_0_tmpConverter_4_8.i = arg2_widenStencilValues[24].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg2_0_rowArr_4_8[x + half_span_x] = arg2_0_tmpConverter_4_8.f; 
                ops::hls::DataConv arg2_1_tmpConverter_4_8;
                arg2_1_tmpConverter_4_8.i = arg2_widenStencilValues[24].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg2_1_rowArr_4_8[x + half_span_x] = arg2_1_tmpConverter_4_8.f; 
                ops::hls::DataConv arg3_0_tmpConverter_4_0;
                arg3_0_tmpConverter_4_0.i = arg3_widenStencilValues[0].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg3_0_rowArr_4_0[x + half_span_x] = arg3_0_tmpConverter_4_0.f; 
                ops::hls::DataConv arg3_1_tmpConverter_4_0;
                arg3_1_tmpConverter_4_0.i = arg3_widenStencilValues[0].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg3_1_rowArr_4_0[x + half_span_x] = arg3_1_tmpConverter_4_0.f; 
                ops::hls::DataConv arg3_0_tmpConverter_4_1;
                arg3_0_tmpConverter_4_1.i = arg3_widenStencilValues[1].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg3_0_rowArr_4_1[x + half_span_x] = arg3_0_tmpConverter_4_1.f; 
                ops::hls::DataConv arg3_1_tmpConverter_4_1;
                arg3_1_tmpConverter_4_1.i = arg3_widenStencilValues[1].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg3_1_rowArr_4_1[x + half_span_x] = arg3_1_tmpConverter_4_1.f; 
                ops::hls::DataConv arg3_0_tmpConverter_4_2;
                arg3_0_tmpConverter_4_2.i = arg3_widenStencilValues[2].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg3_0_rowArr_4_2[x + half_span_x] = arg3_0_tmpConverter_4_2.f; 
                ops::hls::DataConv arg3_1_tmpConverter_4_2;
                arg3_1_tmpConverter_4_2.i = arg3_widenStencilValues[2].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg3_1_rowArr_4_2[x + half_span_x] = arg3_1_tmpConverter_4_2.f; 
                ops::hls::DataConv arg3_0_tmpConverter_4_3;
                arg3_0_tmpConverter_4_3.i = arg3_widenStencilValues[3].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg3_0_rowArr_4_3[x + half_span_x] = arg3_0_tmpConverter_4_3.f; 
                ops::hls::DataConv arg3_1_tmpConverter_4_3;
                arg3_1_tmpConverter_4_3.i = arg3_widenStencilValues[3].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg3_1_rowArr_4_3[x + half_span_x] = arg3_1_tmpConverter_4_3.f; 
                ops::hls::DataConv arg3_0_tmpConverter_0_4;
                arg3_0_tmpConverter_0_4.i = arg3_widenStencilValues[4].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg3_0_rowArr_0_4[x + half_span_x] = arg3_0_tmpConverter_0_4.f; 
                ops::hls::DataConv arg3_1_tmpConverter_0_4;
                arg3_1_tmpConverter_0_4.i = arg3_widenStencilValues[4].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg3_1_rowArr_0_4[x + half_span_x] = arg3_1_tmpConverter_0_4.f; 
                ops::hls::DataConv arg3_0_tmpConverter_1_4;
                arg3_0_tmpConverter_1_4.i = arg3_widenStencilValues[5].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg3_0_rowArr_1_4[x + half_span_x] = arg3_0_tmpConverter_1_4.f; 
                ops::hls::DataConv arg3_1_tmpConverter_1_4;
                arg3_1_tmpConverter_1_4.i = arg3_widenStencilValues[5].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg3_1_rowArr_1_4[x + half_span_x] = arg3_1_tmpConverter_1_4.f; 
                ops::hls::DataConv arg3_0_tmpConverter_2_4;
                arg3_0_tmpConverter_2_4.i = arg3_widenStencilValues[6].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg3_0_rowArr_2_4[x + half_span_x] = arg3_0_tmpConverter_2_4.f; 
                ops::hls::DataConv arg3_1_tmpConverter_2_4;
                arg3_1_tmpConverter_2_4.i = arg3_widenStencilValues[6].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg3_1_rowArr_2_4[x + half_span_x] = arg3_1_tmpConverter_2_4.f; 
                ops::hls::DataConv arg3_0_tmpConverter_3_4;
                arg3_0_tmpConverter_3_4.i = arg3_widenStencilValues[7].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg3_0_rowArr_3_4[x + half_span_x] = arg3_0_tmpConverter_3_4.f; 
                ops::hls::DataConv arg3_1_tmpConverter_3_4;
                arg3_1_tmpConverter_3_4.i = arg3_widenStencilValues[7].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg3_1_rowArr_3_4[x + half_span_x] = arg3_1_tmpConverter_3_4.f; 
                ops::hls::DataConv arg3_0_tmpConverter_4_4;
                arg3_0_tmpConverter_4_4.i = arg3_widenStencilValues[12].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg3_0_rowArr_4_4[x + half_span_x] = arg3_0_tmpConverter_4_4.f; 
                ops::hls::DataConv arg3_1_tmpConverter_4_4;
                arg3_1_tmpConverter_4_4.i = arg3_widenStencilValues[12].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg3_1_rowArr_4_4[x + half_span_x] = arg3_1_tmpConverter_4_4.f; 
                ops::hls::DataConv arg3_0_tmpConverter_5_4;
                arg3_0_tmpConverter_5_4.i = arg3_widenStencilValues[17].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg3_0_rowArr_5_4[x + half_span_x] = arg3_0_tmpConverter_5_4.f; 
                ops::hls::DataConv arg3_1_tmpConverter_5_4;
                arg3_1_tmpConverter_5_4.i = arg3_widenStencilValues[17].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg3_1_rowArr_5_4[x + half_span_x] = arg3_1_tmpConverter_5_4.f; 
                ops::hls::DataConv arg3_0_tmpConverter_6_4;
                arg3_0_tmpConverter_6_4.i = arg3_widenStencilValues[18].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg3_0_rowArr_6_4[x + half_span_x] = arg3_0_tmpConverter_6_4.f; 
                ops::hls::DataConv arg3_1_tmpConverter_6_4;
                arg3_1_tmpConverter_6_4.i = arg3_widenStencilValues[18].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg3_1_rowArr_6_4[x + half_span_x] = arg3_1_tmpConverter_6_4.f; 
                ops::hls::DataConv arg3_0_tmpConverter_7_4;
                arg3_0_tmpConverter_7_4.i = arg3_widenStencilValues[19].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg3_0_rowArr_7_4[x + half_span_x] = arg3_0_tmpConverter_7_4.f; 
                ops::hls::DataConv arg3_1_tmpConverter_7_4;
                arg3_1_tmpConverter_7_4.i = arg3_widenStencilValues[19].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg3_1_rowArr_7_4[x + half_span_x] = arg3_1_tmpConverter_7_4.f; 
                ops::hls::DataConv arg3_0_tmpConverter_8_4;
                arg3_0_tmpConverter_8_4.i = arg3_widenStencilValues[20].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg3_0_rowArr_8_4[x + half_span_x] = arg3_0_tmpConverter_8_4.f; 
                ops::hls::DataConv arg3_1_tmpConverter_8_4;
                arg3_1_tmpConverter_8_4.i = arg3_widenStencilValues[20].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg3_1_rowArr_8_4[x + half_span_x] = arg3_1_tmpConverter_8_4.f; 
                ops::hls::DataConv arg3_0_tmpConverter_4_5;
                arg3_0_tmpConverter_4_5.i = arg3_widenStencilValues[21].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg3_0_rowArr_4_5[x + half_span_x] = arg3_0_tmpConverter_4_5.f; 
                ops::hls::DataConv arg3_1_tmpConverter_4_5;
                arg3_1_tmpConverter_4_5.i = arg3_widenStencilValues[21].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg3_1_rowArr_4_5[x + half_span_x] = arg3_1_tmpConverter_4_5.f; 
                ops::hls::DataConv arg3_0_tmpConverter_4_6;
                arg3_0_tmpConverter_4_6.i = arg3_widenStencilValues[22].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg3_0_rowArr_4_6[x + half_span_x] = arg3_0_tmpConverter_4_6.f; 
                ops::hls::DataConv arg3_1_tmpConverter_4_6;
                arg3_1_tmpConverter_4_6.i = arg3_widenStencilValues[22].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg3_1_rowArr_4_6[x + half_span_x] = arg3_1_tmpConverter_4_6.f; 
                ops::hls::DataConv arg3_0_tmpConverter_4_7;
                arg3_0_tmpConverter_4_7.i = arg3_widenStencilValues[23].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg3_0_rowArr_4_7[x + half_span_x] = arg3_0_tmpConverter_4_7.f; 
                ops::hls::DataConv arg3_1_tmpConverter_4_7;
                arg3_1_tmpConverter_4_7.i = arg3_widenStencilValues[23].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg3_1_rowArr_4_7[x + half_span_x] = arg3_1_tmpConverter_4_7.f; 
                ops::hls::DataConv arg3_0_tmpConverter_4_8;
                arg3_0_tmpConverter_4_8.i = arg3_widenStencilValues[24].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg3_0_rowArr_4_8[x + half_span_x] = arg3_0_tmpConverter_4_8.f; 
                ops::hls::DataConv arg3_1_tmpConverter_4_8;
                arg3_1_tmpConverter_4_8.i = arg3_widenStencilValues[24].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg3_1_rowArr_4_8[x + half_span_x] = arg3_1_tmpConverter_4_8.f; 
                ops::hls::DataConv arg4_0_tmpConverter_4_0;
                arg4_0_tmpConverter_4_0.i = arg4_widenStencilValues[0].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg4_0_rowArr_4_0[x + half_span_x] = arg4_0_tmpConverter_4_0.f; 
                ops::hls::DataConv arg4_1_tmpConverter_4_0;
                arg4_1_tmpConverter_4_0.i = arg4_widenStencilValues[0].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg4_1_rowArr_4_0[x + half_span_x] = arg4_1_tmpConverter_4_0.f; 
                ops::hls::DataConv arg4_0_tmpConverter_4_1;
                arg4_0_tmpConverter_4_1.i = arg4_widenStencilValues[1].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg4_0_rowArr_4_1[x + half_span_x] = arg4_0_tmpConverter_4_1.f; 
                ops::hls::DataConv arg4_1_tmpConverter_4_1;
                arg4_1_tmpConverter_4_1.i = arg4_widenStencilValues[1].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg4_1_rowArr_4_1[x + half_span_x] = arg4_1_tmpConverter_4_1.f; 
                ops::hls::DataConv arg4_0_tmpConverter_4_2;
                arg4_0_tmpConverter_4_2.i = arg4_widenStencilValues[2].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg4_0_rowArr_4_2[x + half_span_x] = arg4_0_tmpConverter_4_2.f; 
                ops::hls::DataConv arg4_1_tmpConverter_4_2;
                arg4_1_tmpConverter_4_2.i = arg4_widenStencilValues[2].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg4_1_rowArr_4_2[x + half_span_x] = arg4_1_tmpConverter_4_2.f; 
                ops::hls::DataConv arg4_0_tmpConverter_4_3;
                arg4_0_tmpConverter_4_3.i = arg4_widenStencilValues[3].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg4_0_rowArr_4_3[x + half_span_x] = arg4_0_tmpConverter_4_3.f; 
                ops::hls::DataConv arg4_1_tmpConverter_4_3;
                arg4_1_tmpConverter_4_3.i = arg4_widenStencilValues[3].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg4_1_rowArr_4_3[x + half_span_x] = arg4_1_tmpConverter_4_3.f; 
                ops::hls::DataConv arg4_0_tmpConverter_0_4;
                arg4_0_tmpConverter_0_4.i = arg4_widenStencilValues[4].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg4_0_rowArr_0_4[x + half_span_x] = arg4_0_tmpConverter_0_4.f; 
                ops::hls::DataConv arg4_1_tmpConverter_0_4;
                arg4_1_tmpConverter_0_4.i = arg4_widenStencilValues[4].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg4_1_rowArr_0_4[x + half_span_x] = arg4_1_tmpConverter_0_4.f; 
                ops::hls::DataConv arg4_0_tmpConverter_1_4;
                arg4_0_tmpConverter_1_4.i = arg4_widenStencilValues[5].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg4_0_rowArr_1_4[x + half_span_x] = arg4_0_tmpConverter_1_4.f; 
                ops::hls::DataConv arg4_1_tmpConverter_1_4;
                arg4_1_tmpConverter_1_4.i = arg4_widenStencilValues[5].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg4_1_rowArr_1_4[x + half_span_x] = arg4_1_tmpConverter_1_4.f; 
                ops::hls::DataConv arg4_0_tmpConverter_2_4;
                arg4_0_tmpConverter_2_4.i = arg4_widenStencilValues[6].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg4_0_rowArr_2_4[x + half_span_x] = arg4_0_tmpConverter_2_4.f; 
                ops::hls::DataConv arg4_1_tmpConverter_2_4;
                arg4_1_tmpConverter_2_4.i = arg4_widenStencilValues[6].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg4_1_rowArr_2_4[x + half_span_x] = arg4_1_tmpConverter_2_4.f; 
                ops::hls::DataConv arg4_0_tmpConverter_3_4;
                arg4_0_tmpConverter_3_4.i = arg4_widenStencilValues[7].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg4_0_rowArr_3_4[x + half_span_x] = arg4_0_tmpConverter_3_4.f; 
                ops::hls::DataConv arg4_1_tmpConverter_3_4;
                arg4_1_tmpConverter_3_4.i = arg4_widenStencilValues[7].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg4_1_rowArr_3_4[x + half_span_x] = arg4_1_tmpConverter_3_4.f; 
                ops::hls::DataConv arg4_0_tmpConverter_4_4;
                arg4_0_tmpConverter_4_4.i = arg4_widenStencilValues[12].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg4_0_rowArr_4_4[x + half_span_x] = arg4_0_tmpConverter_4_4.f; 
                ops::hls::DataConv arg4_1_tmpConverter_4_4;
                arg4_1_tmpConverter_4_4.i = arg4_widenStencilValues[12].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg4_1_rowArr_4_4[x + half_span_x] = arg4_1_tmpConverter_4_4.f; 
                ops::hls::DataConv arg4_0_tmpConverter_5_4;
                arg4_0_tmpConverter_5_4.i = arg4_widenStencilValues[17].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg4_0_rowArr_5_4[x + half_span_x] = arg4_0_tmpConverter_5_4.f; 
                ops::hls::DataConv arg4_1_tmpConverter_5_4;
                arg4_1_tmpConverter_5_4.i = arg4_widenStencilValues[17].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg4_1_rowArr_5_4[x + half_span_x] = arg4_1_tmpConverter_5_4.f; 
                ops::hls::DataConv arg4_0_tmpConverter_6_4;
                arg4_0_tmpConverter_6_4.i = arg4_widenStencilValues[18].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg4_0_rowArr_6_4[x + half_span_x] = arg4_0_tmpConverter_6_4.f; 
                ops::hls::DataConv arg4_1_tmpConverter_6_4;
                arg4_1_tmpConverter_6_4.i = arg4_widenStencilValues[18].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg4_1_rowArr_6_4[x + half_span_x] = arg4_1_tmpConverter_6_4.f; 
                ops::hls::DataConv arg4_0_tmpConverter_7_4;
                arg4_0_tmpConverter_7_4.i = arg4_widenStencilValues[19].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg4_0_rowArr_7_4[x + half_span_x] = arg4_0_tmpConverter_7_4.f; 
                ops::hls::DataConv arg4_1_tmpConverter_7_4;
                arg4_1_tmpConverter_7_4.i = arg4_widenStencilValues[19].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg4_1_rowArr_7_4[x + half_span_x] = arg4_1_tmpConverter_7_4.f; 
                ops::hls::DataConv arg4_0_tmpConverter_8_4;
                arg4_0_tmpConverter_8_4.i = arg4_widenStencilValues[20].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg4_0_rowArr_8_4[x + half_span_x] = arg4_0_tmpConverter_8_4.f; 
                ops::hls::DataConv arg4_1_tmpConverter_8_4;
                arg4_1_tmpConverter_8_4.i = arg4_widenStencilValues[20].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg4_1_rowArr_8_4[x + half_span_x] = arg4_1_tmpConverter_8_4.f; 
                ops::hls::DataConv arg4_0_tmpConverter_4_5;
                arg4_0_tmpConverter_4_5.i = arg4_widenStencilValues[21].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg4_0_rowArr_4_5[x + half_span_x] = arg4_0_tmpConverter_4_5.f; 
                ops::hls::DataConv arg4_1_tmpConverter_4_5;
                arg4_1_tmpConverter_4_5.i = arg4_widenStencilValues[21].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg4_1_rowArr_4_5[x + half_span_x] = arg4_1_tmpConverter_4_5.f; 
                ops::hls::DataConv arg4_0_tmpConverter_4_6;
                arg4_0_tmpConverter_4_6.i = arg4_widenStencilValues[22].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg4_0_rowArr_4_6[x + half_span_x] = arg4_0_tmpConverter_4_6.f; 
                ops::hls::DataConv arg4_1_tmpConverter_4_6;
                arg4_1_tmpConverter_4_6.i = arg4_widenStencilValues[22].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg4_1_rowArr_4_6[x + half_span_x] = arg4_1_tmpConverter_4_6.f; 
                ops::hls::DataConv arg4_0_tmpConverter_4_7;
                arg4_0_tmpConverter_4_7.i = arg4_widenStencilValues[23].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg4_0_rowArr_4_7[x + half_span_x] = arg4_0_tmpConverter_4_7.f; 
                ops::hls::DataConv arg4_1_tmpConverter_4_7;
                arg4_1_tmpConverter_4_7.i = arg4_widenStencilValues[23].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg4_1_rowArr_4_7[x + half_span_x] = arg4_1_tmpConverter_4_7.f; 
                ops::hls::DataConv arg4_0_tmpConverter_4_8;
                arg4_0_tmpConverter_4_8.i = arg4_widenStencilValues[24].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg4_0_rowArr_4_8[x + half_span_x] = arg4_0_tmpConverter_4_8.f; 
                ops::hls::DataConv arg4_1_tmpConverter_4_8;
                arg4_1_tmpConverter_4_8.i = arg4_widenStencilValues[24].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg4_1_rowArr_4_8[x + half_span_x] = arg4_1_tmpConverter_4_8.f; 
                ops::hls::DataConv arg5_0_tmpConverter_4_0;
                arg5_0_tmpConverter_4_0.i = arg5_widenStencilValues[0].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg5_0_rowArr_4_0[x + half_span_x] = arg5_0_tmpConverter_4_0.f; 
                ops::hls::DataConv arg5_1_tmpConverter_4_0;
                arg5_1_tmpConverter_4_0.i = arg5_widenStencilValues[0].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg5_1_rowArr_4_0[x + half_span_x] = arg5_1_tmpConverter_4_0.f; 
                ops::hls::DataConv arg5_0_tmpConverter_4_1;
                arg5_0_tmpConverter_4_1.i = arg5_widenStencilValues[1].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg5_0_rowArr_4_1[x + half_span_x] = arg5_0_tmpConverter_4_1.f; 
                ops::hls::DataConv arg5_1_tmpConverter_4_1;
                arg5_1_tmpConverter_4_1.i = arg5_widenStencilValues[1].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg5_1_rowArr_4_1[x + half_span_x] = arg5_1_tmpConverter_4_1.f; 
                ops::hls::DataConv arg5_0_tmpConverter_4_2;
                arg5_0_tmpConverter_4_2.i = arg5_widenStencilValues[2].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg5_0_rowArr_4_2[x + half_span_x] = arg5_0_tmpConverter_4_2.f; 
                ops::hls::DataConv arg5_1_tmpConverter_4_2;
                arg5_1_tmpConverter_4_2.i = arg5_widenStencilValues[2].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg5_1_rowArr_4_2[x + half_span_x] = arg5_1_tmpConverter_4_2.f; 
                ops::hls::DataConv arg5_0_tmpConverter_4_3;
                arg5_0_tmpConverter_4_3.i = arg5_widenStencilValues[3].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg5_0_rowArr_4_3[x + half_span_x] = arg5_0_tmpConverter_4_3.f; 
                ops::hls::DataConv arg5_1_tmpConverter_4_3;
                arg5_1_tmpConverter_4_3.i = arg5_widenStencilValues[3].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg5_1_rowArr_4_3[x + half_span_x] = arg5_1_tmpConverter_4_3.f; 
                ops::hls::DataConv arg5_0_tmpConverter_0_4;
                arg5_0_tmpConverter_0_4.i = arg5_widenStencilValues[4].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg5_0_rowArr_0_4[x + half_span_x] = arg5_0_tmpConverter_0_4.f; 
                ops::hls::DataConv arg5_1_tmpConverter_0_4;
                arg5_1_tmpConverter_0_4.i = arg5_widenStencilValues[4].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg5_1_rowArr_0_4[x + half_span_x] = arg5_1_tmpConverter_0_4.f; 
                ops::hls::DataConv arg5_0_tmpConverter_1_4;
                arg5_0_tmpConverter_1_4.i = arg5_widenStencilValues[5].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg5_0_rowArr_1_4[x + half_span_x] = arg5_0_tmpConverter_1_4.f; 
                ops::hls::DataConv arg5_1_tmpConverter_1_4;
                arg5_1_tmpConverter_1_4.i = arg5_widenStencilValues[5].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg5_1_rowArr_1_4[x + half_span_x] = arg5_1_tmpConverter_1_4.f; 
                ops::hls::DataConv arg5_0_tmpConverter_2_4;
                arg5_0_tmpConverter_2_4.i = arg5_widenStencilValues[6].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg5_0_rowArr_2_4[x + half_span_x] = arg5_0_tmpConverter_2_4.f; 
                ops::hls::DataConv arg5_1_tmpConverter_2_4;
                arg5_1_tmpConverter_2_4.i = arg5_widenStencilValues[6].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg5_1_rowArr_2_4[x + half_span_x] = arg5_1_tmpConverter_2_4.f; 
                ops::hls::DataConv arg5_0_tmpConverter_3_4;
                arg5_0_tmpConverter_3_4.i = arg5_widenStencilValues[7].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg5_0_rowArr_3_4[x + half_span_x] = arg5_0_tmpConverter_3_4.f; 
                ops::hls::DataConv arg5_1_tmpConverter_3_4;
                arg5_1_tmpConverter_3_4.i = arg5_widenStencilValues[7].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg5_1_rowArr_3_4[x + half_span_x] = arg5_1_tmpConverter_3_4.f; 
                ops::hls::DataConv arg5_0_tmpConverter_4_4;
                arg5_0_tmpConverter_4_4.i = arg5_widenStencilValues[12].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg5_0_rowArr_4_4[x + half_span_x] = arg5_0_tmpConverter_4_4.f; 
                ops::hls::DataConv arg5_1_tmpConverter_4_4;
                arg5_1_tmpConverter_4_4.i = arg5_widenStencilValues[12].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg5_1_rowArr_4_4[x + half_span_x] = arg5_1_tmpConverter_4_4.f; 
                ops::hls::DataConv arg5_0_tmpConverter_5_4;
                arg5_0_tmpConverter_5_4.i = arg5_widenStencilValues[17].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg5_0_rowArr_5_4[x + half_span_x] = arg5_0_tmpConverter_5_4.f; 
                ops::hls::DataConv arg5_1_tmpConverter_5_4;
                arg5_1_tmpConverter_5_4.i = arg5_widenStencilValues[17].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg5_1_rowArr_5_4[x + half_span_x] = arg5_1_tmpConverter_5_4.f; 
                ops::hls::DataConv arg5_0_tmpConverter_6_4;
                arg5_0_tmpConverter_6_4.i = arg5_widenStencilValues[18].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg5_0_rowArr_6_4[x + half_span_x] = arg5_0_tmpConverter_6_4.f; 
                ops::hls::DataConv arg5_1_tmpConverter_6_4;
                arg5_1_tmpConverter_6_4.i = arg5_widenStencilValues[18].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg5_1_rowArr_6_4[x + half_span_x] = arg5_1_tmpConverter_6_4.f; 
                ops::hls::DataConv arg5_0_tmpConverter_7_4;
                arg5_0_tmpConverter_7_4.i = arg5_widenStencilValues[19].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg5_0_rowArr_7_4[x + half_span_x] = arg5_0_tmpConverter_7_4.f; 
                ops::hls::DataConv arg5_1_tmpConverter_7_4;
                arg5_1_tmpConverter_7_4.i = arg5_widenStencilValues[19].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg5_1_rowArr_7_4[x + half_span_x] = arg5_1_tmpConverter_7_4.f; 
                ops::hls::DataConv arg5_0_tmpConverter_8_4;
                arg5_0_tmpConverter_8_4.i = arg5_widenStencilValues[20].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg5_0_rowArr_8_4[x + half_span_x] = arg5_0_tmpConverter_8_4.f; 
                ops::hls::DataConv arg5_1_tmpConverter_8_4;
                arg5_1_tmpConverter_8_4.i = arg5_widenStencilValues[20].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg5_1_rowArr_8_4[x + half_span_x] = arg5_1_tmpConverter_8_4.f; 
                ops::hls::DataConv arg5_0_tmpConverter_4_5;
                arg5_0_tmpConverter_4_5.i = arg5_widenStencilValues[21].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg5_0_rowArr_4_5[x + half_span_x] = arg5_0_tmpConverter_4_5.f; 
                ops::hls::DataConv arg5_1_tmpConverter_4_5;
                arg5_1_tmpConverter_4_5.i = arg5_widenStencilValues[21].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg5_1_rowArr_4_5[x + half_span_x] = arg5_1_tmpConverter_4_5.f; 
                ops::hls::DataConv arg5_0_tmpConverter_4_6;
                arg5_0_tmpConverter_4_6.i = arg5_widenStencilValues[22].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg5_0_rowArr_4_6[x + half_span_x] = arg5_0_tmpConverter_4_6.f; 
                ops::hls::DataConv arg5_1_tmpConverter_4_6;
                arg5_1_tmpConverter_4_6.i = arg5_widenStencilValues[22].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg5_1_rowArr_4_6[x + half_span_x] = arg5_1_tmpConverter_4_6.f; 
                ops::hls::DataConv arg5_0_tmpConverter_4_7;
                arg5_0_tmpConverter_4_7.i = arg5_widenStencilValues[23].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg5_0_rowArr_4_7[x + half_span_x] = arg5_0_tmpConverter_4_7.f; 
                ops::hls::DataConv arg5_1_tmpConverter_4_7;
                arg5_1_tmpConverter_4_7.i = arg5_widenStencilValues[23].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg5_1_rowArr_4_7[x + half_span_x] = arg5_1_tmpConverter_4_7.f; 
                ops::hls::DataConv arg5_0_tmpConverter_4_8;
                arg5_0_tmpConverter_4_8.i = arg5_widenStencilValues[24].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg5_0_rowArr_4_8[x + half_span_x] = arg5_0_tmpConverter_4_8.f; 
                ops::hls::DataConv arg5_1_tmpConverter_4_8;
                arg5_1_tmpConverter_4_8.i = arg5_widenStencilValues[24].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg5_1_rowArr_4_8[x + half_span_x] = arg5_1_tmpConverter_4_8.f; 
                ops::hls::DataConv arg6_0_tmpConverter_4_0;
                arg6_0_tmpConverter_4_0.i = arg6_widenStencilValues[0].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg6_0_rowArr_4_0[x + half_span_x] = arg6_0_tmpConverter_4_0.f; 
                ops::hls::DataConv arg6_1_tmpConverter_4_0;
                arg6_1_tmpConverter_4_0.i = arg6_widenStencilValues[0].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg6_1_rowArr_4_0[x + half_span_x] = arg6_1_tmpConverter_4_0.f; 
                ops::hls::DataConv arg6_0_tmpConverter_4_1;
                arg6_0_tmpConverter_4_1.i = arg6_widenStencilValues[1].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg6_0_rowArr_4_1[x + half_span_x] = arg6_0_tmpConverter_4_1.f; 
                ops::hls::DataConv arg6_1_tmpConverter_4_1;
                arg6_1_tmpConverter_4_1.i = arg6_widenStencilValues[1].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg6_1_rowArr_4_1[x + half_span_x] = arg6_1_tmpConverter_4_1.f; 
                ops::hls::DataConv arg6_0_tmpConverter_4_2;
                arg6_0_tmpConverter_4_2.i = arg6_widenStencilValues[2].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg6_0_rowArr_4_2[x + half_span_x] = arg6_0_tmpConverter_4_2.f; 
                ops::hls::DataConv arg6_1_tmpConverter_4_2;
                arg6_1_tmpConverter_4_2.i = arg6_widenStencilValues[2].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg6_1_rowArr_4_2[x + half_span_x] = arg6_1_tmpConverter_4_2.f; 
                ops::hls::DataConv arg6_0_tmpConverter_4_3;
                arg6_0_tmpConverter_4_3.i = arg6_widenStencilValues[3].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg6_0_rowArr_4_3[x + half_span_x] = arg6_0_tmpConverter_4_3.f; 
                ops::hls::DataConv arg6_1_tmpConverter_4_3;
                arg6_1_tmpConverter_4_3.i = arg6_widenStencilValues[3].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg6_1_rowArr_4_3[x + half_span_x] = arg6_1_tmpConverter_4_3.f; 
                ops::hls::DataConv arg6_0_tmpConverter_0_4;
                arg6_0_tmpConverter_0_4.i = arg6_widenStencilValues[4].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg6_0_rowArr_0_4[x + half_span_x] = arg6_0_tmpConverter_0_4.f; 
                ops::hls::DataConv arg6_1_tmpConverter_0_4;
                arg6_1_tmpConverter_0_4.i = arg6_widenStencilValues[4].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg6_1_rowArr_0_4[x + half_span_x] = arg6_1_tmpConverter_0_4.f; 
                ops::hls::DataConv arg6_0_tmpConverter_1_4;
                arg6_0_tmpConverter_1_4.i = arg6_widenStencilValues[5].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg6_0_rowArr_1_4[x + half_span_x] = arg6_0_tmpConverter_1_4.f; 
                ops::hls::DataConv arg6_1_tmpConverter_1_4;
                arg6_1_tmpConverter_1_4.i = arg6_widenStencilValues[5].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg6_1_rowArr_1_4[x + half_span_x] = arg6_1_tmpConverter_1_4.f; 
                ops::hls::DataConv arg6_0_tmpConverter_2_4;
                arg6_0_tmpConverter_2_4.i = arg6_widenStencilValues[6].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg6_0_rowArr_2_4[x + half_span_x] = arg6_0_tmpConverter_2_4.f; 
                ops::hls::DataConv arg6_1_tmpConverter_2_4;
                arg6_1_tmpConverter_2_4.i = arg6_widenStencilValues[6].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg6_1_rowArr_2_4[x + half_span_x] = arg6_1_tmpConverter_2_4.f; 
                ops::hls::DataConv arg6_0_tmpConverter_3_4;
                arg6_0_tmpConverter_3_4.i = arg6_widenStencilValues[7].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg6_0_rowArr_3_4[x + half_span_x] = arg6_0_tmpConverter_3_4.f; 
                ops::hls::DataConv arg6_1_tmpConverter_3_4;
                arg6_1_tmpConverter_3_4.i = arg6_widenStencilValues[7].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg6_1_rowArr_3_4[x + half_span_x] = arg6_1_tmpConverter_3_4.f; 
                ops::hls::DataConv arg6_0_tmpConverter_4_4;
                arg6_0_tmpConverter_4_4.i = arg6_widenStencilValues[12].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg6_0_rowArr_4_4[x + half_span_x] = arg6_0_tmpConverter_4_4.f; 
                ops::hls::DataConv arg6_1_tmpConverter_4_4;
                arg6_1_tmpConverter_4_4.i = arg6_widenStencilValues[12].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg6_1_rowArr_4_4[x + half_span_x] = arg6_1_tmpConverter_4_4.f; 
                ops::hls::DataConv arg6_0_tmpConverter_5_4;
                arg6_0_tmpConverter_5_4.i = arg6_widenStencilValues[17].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg6_0_rowArr_5_4[x + half_span_x] = arg6_0_tmpConverter_5_4.f; 
                ops::hls::DataConv arg6_1_tmpConverter_5_4;
                arg6_1_tmpConverter_5_4.i = arg6_widenStencilValues[17].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg6_1_rowArr_5_4[x + half_span_x] = arg6_1_tmpConverter_5_4.f; 
                ops::hls::DataConv arg6_0_tmpConverter_6_4;
                arg6_0_tmpConverter_6_4.i = arg6_widenStencilValues[18].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg6_0_rowArr_6_4[x + half_span_x] = arg6_0_tmpConverter_6_4.f; 
                ops::hls::DataConv arg6_1_tmpConverter_6_4;
                arg6_1_tmpConverter_6_4.i = arg6_widenStencilValues[18].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg6_1_rowArr_6_4[x + half_span_x] = arg6_1_tmpConverter_6_4.f; 
                ops::hls::DataConv arg6_0_tmpConverter_7_4;
                arg6_0_tmpConverter_7_4.i = arg6_widenStencilValues[19].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg6_0_rowArr_7_4[x + half_span_x] = arg6_0_tmpConverter_7_4.f; 
                ops::hls::DataConv arg6_1_tmpConverter_7_4;
                arg6_1_tmpConverter_7_4.i = arg6_widenStencilValues[19].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg6_1_rowArr_7_4[x + half_span_x] = arg6_1_tmpConverter_7_4.f; 
                ops::hls::DataConv arg6_0_tmpConverter_8_4;
                arg6_0_tmpConverter_8_4.i = arg6_widenStencilValues[20].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg6_0_rowArr_8_4[x + half_span_x] = arg6_0_tmpConverter_8_4.f; 
                ops::hls::DataConv arg6_1_tmpConverter_8_4;
                arg6_1_tmpConverter_8_4.i = arg6_widenStencilValues[20].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg6_1_rowArr_8_4[x + half_span_x] = arg6_1_tmpConverter_8_4.f; 
                ops::hls::DataConv arg6_0_tmpConverter_4_5;
                arg6_0_tmpConverter_4_5.i = arg6_widenStencilValues[21].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg6_0_rowArr_4_5[x + half_span_x] = arg6_0_tmpConverter_4_5.f; 
                ops::hls::DataConv arg6_1_tmpConverter_4_5;
                arg6_1_tmpConverter_4_5.i = arg6_widenStencilValues[21].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg6_1_rowArr_4_5[x + half_span_x] = arg6_1_tmpConverter_4_5.f; 
                ops::hls::DataConv arg6_0_tmpConverter_4_6;
                arg6_0_tmpConverter_4_6.i = arg6_widenStencilValues[22].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg6_0_rowArr_4_6[x + half_span_x] = arg6_0_tmpConverter_4_6.f; 
                ops::hls::DataConv arg6_1_tmpConverter_4_6;
                arg6_1_tmpConverter_4_6.i = arg6_widenStencilValues[22].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg6_1_rowArr_4_6[x + half_span_x] = arg6_1_tmpConverter_4_6.f; 
                ops::hls::DataConv arg6_0_tmpConverter_4_7;
                arg6_0_tmpConverter_4_7.i = arg6_widenStencilValues[23].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg6_0_rowArr_4_7[x + half_span_x] = arg6_0_tmpConverter_4_7.f; 
                ops::hls::DataConv arg6_1_tmpConverter_4_7;
                arg6_1_tmpConverter_4_7.i = arg6_widenStencilValues[23].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg6_1_rowArr_4_7[x + half_span_x] = arg6_1_tmpConverter_4_7.f; 
                ops::hls::DataConv arg6_0_tmpConverter_4_8;
                arg6_0_tmpConverter_4_8.i = arg6_widenStencilValues[24].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg6_0_rowArr_4_8[x + half_span_x] = arg6_0_tmpConverter_4_8.f; 
                ops::hls::DataConv arg6_1_tmpConverter_4_8;
                arg6_1_tmpConverter_4_8.i = arg6_widenStencilValues[24].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg6_1_rowArr_4_8[x + half_span_x] = arg6_1_tmpConverter_4_8.f; 
                ops::hls::DataConv arg10_0_tmpConverter_4_0;
                arg10_0_tmpConverter_4_0.i = arg10_widenStencilValues[0].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg10_0_rowArr_4_0[x + half_span_x] = arg10_0_tmpConverter_4_0.f; 
                ops::hls::DataConv arg10_1_tmpConverter_4_0;
                arg10_1_tmpConverter_4_0.i = arg10_widenStencilValues[0].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg10_1_rowArr_4_0[x + half_span_x] = arg10_1_tmpConverter_4_0.f; 
                ops::hls::DataConv arg10_0_tmpConverter_4_1;
                arg10_0_tmpConverter_4_1.i = arg10_widenStencilValues[1].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg10_0_rowArr_4_1[x + half_span_x] = arg10_0_tmpConverter_4_1.f; 
                ops::hls::DataConv arg10_1_tmpConverter_4_1;
                arg10_1_tmpConverter_4_1.i = arg10_widenStencilValues[1].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg10_1_rowArr_4_1[x + half_span_x] = arg10_1_tmpConverter_4_1.f; 
                ops::hls::DataConv arg10_0_tmpConverter_4_2;
                arg10_0_tmpConverter_4_2.i = arg10_widenStencilValues[2].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg10_0_rowArr_4_2[x + half_span_x] = arg10_0_tmpConverter_4_2.f; 
                ops::hls::DataConv arg10_1_tmpConverter_4_2;
                arg10_1_tmpConverter_4_2.i = arg10_widenStencilValues[2].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg10_1_rowArr_4_2[x + half_span_x] = arg10_1_tmpConverter_4_2.f; 
                ops::hls::DataConv arg10_0_tmpConverter_4_3;
                arg10_0_tmpConverter_4_3.i = arg10_widenStencilValues[3].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg10_0_rowArr_4_3[x + half_span_x] = arg10_0_tmpConverter_4_3.f; 
                ops::hls::DataConv arg10_1_tmpConverter_4_3;
                arg10_1_tmpConverter_4_3.i = arg10_widenStencilValues[3].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg10_1_rowArr_4_3[x + half_span_x] = arg10_1_tmpConverter_4_3.f; 
                ops::hls::DataConv arg10_0_tmpConverter_0_4;
                arg10_0_tmpConverter_0_4.i = arg10_widenStencilValues[4].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg10_0_rowArr_0_4[x + half_span_x] = arg10_0_tmpConverter_0_4.f; 
                ops::hls::DataConv arg10_1_tmpConverter_0_4;
                arg10_1_tmpConverter_0_4.i = arg10_widenStencilValues[4].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg10_1_rowArr_0_4[x + half_span_x] = arg10_1_tmpConverter_0_4.f; 
                ops::hls::DataConv arg10_0_tmpConverter_1_4;
                arg10_0_tmpConverter_1_4.i = arg10_widenStencilValues[5].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg10_0_rowArr_1_4[x + half_span_x] = arg10_0_tmpConverter_1_4.f; 
                ops::hls::DataConv arg10_1_tmpConverter_1_4;
                arg10_1_tmpConverter_1_4.i = arg10_widenStencilValues[5].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg10_1_rowArr_1_4[x + half_span_x] = arg10_1_tmpConverter_1_4.f; 
                ops::hls::DataConv arg10_0_tmpConverter_2_4;
                arg10_0_tmpConverter_2_4.i = arg10_widenStencilValues[6].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg10_0_rowArr_2_4[x + half_span_x] = arg10_0_tmpConverter_2_4.f; 
                ops::hls::DataConv arg10_1_tmpConverter_2_4;
                arg10_1_tmpConverter_2_4.i = arg10_widenStencilValues[6].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg10_1_rowArr_2_4[x + half_span_x] = arg10_1_tmpConverter_2_4.f; 
                ops::hls::DataConv arg10_0_tmpConverter_3_4;
                arg10_0_tmpConverter_3_4.i = arg10_widenStencilValues[7].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg10_0_rowArr_3_4[x + half_span_x] = arg10_0_tmpConverter_3_4.f; 
                ops::hls::DataConv arg10_1_tmpConverter_3_4;
                arg10_1_tmpConverter_3_4.i = arg10_widenStencilValues[7].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg10_1_rowArr_3_4[x + half_span_x] = arg10_1_tmpConverter_3_4.f; 
                ops::hls::DataConv arg10_0_tmpConverter_4_4;
                arg10_0_tmpConverter_4_4.i = arg10_widenStencilValues[12].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg10_0_rowArr_4_4[x + half_span_x] = arg10_0_tmpConverter_4_4.f; 
                ops::hls::DataConv arg10_1_tmpConverter_4_4;
                arg10_1_tmpConverter_4_4.i = arg10_widenStencilValues[12].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg10_1_rowArr_4_4[x + half_span_x] = arg10_1_tmpConverter_4_4.f; 
                ops::hls::DataConv arg10_0_tmpConverter_5_4;
                arg10_0_tmpConverter_5_4.i = arg10_widenStencilValues[17].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg10_0_rowArr_5_4[x + half_span_x] = arg10_0_tmpConverter_5_4.f; 
                ops::hls::DataConv arg10_1_tmpConverter_5_4;
                arg10_1_tmpConverter_5_4.i = arg10_widenStencilValues[17].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg10_1_rowArr_5_4[x + half_span_x] = arg10_1_tmpConverter_5_4.f; 
                ops::hls::DataConv arg10_0_tmpConverter_6_4;
                arg10_0_tmpConverter_6_4.i = arg10_widenStencilValues[18].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg10_0_rowArr_6_4[x + half_span_x] = arg10_0_tmpConverter_6_4.f; 
                ops::hls::DataConv arg10_1_tmpConverter_6_4;
                arg10_1_tmpConverter_6_4.i = arg10_widenStencilValues[18].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg10_1_rowArr_6_4[x + half_span_x] = arg10_1_tmpConverter_6_4.f; 
                ops::hls::DataConv arg10_0_tmpConverter_7_4;
                arg10_0_tmpConverter_7_4.i = arg10_widenStencilValues[19].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg10_0_rowArr_7_4[x + half_span_x] = arg10_0_tmpConverter_7_4.f; 
                ops::hls::DataConv arg10_1_tmpConverter_7_4;
                arg10_1_tmpConverter_7_4.i = arg10_widenStencilValues[19].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg10_1_rowArr_7_4[x + half_span_x] = arg10_1_tmpConverter_7_4.f; 
                ops::hls::DataConv arg10_0_tmpConverter_8_4;
                arg10_0_tmpConverter_8_4.i = arg10_widenStencilValues[20].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg10_0_rowArr_8_4[x + half_span_x] = arg10_0_tmpConverter_8_4.f; 
                ops::hls::DataConv arg10_1_tmpConverter_8_4;
                arg10_1_tmpConverter_8_4.i = arg10_widenStencilValues[20].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg10_1_rowArr_8_4[x + half_span_x] = arg10_1_tmpConverter_8_4.f; 
                ops::hls::DataConv arg10_0_tmpConverter_4_5;
                arg10_0_tmpConverter_4_5.i = arg10_widenStencilValues[21].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg10_0_rowArr_4_5[x + half_span_x] = arg10_0_tmpConverter_4_5.f; 
                ops::hls::DataConv arg10_1_tmpConverter_4_5;
                arg10_1_tmpConverter_4_5.i = arg10_widenStencilValues[21].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg10_1_rowArr_4_5[x + half_span_x] = arg10_1_tmpConverter_4_5.f; 
                ops::hls::DataConv arg10_0_tmpConverter_4_6;
                arg10_0_tmpConverter_4_6.i = arg10_widenStencilValues[22].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg10_0_rowArr_4_6[x + half_span_x] = arg10_0_tmpConverter_4_6.f; 
                ops::hls::DataConv arg10_1_tmpConverter_4_6;
                arg10_1_tmpConverter_4_6.i = arg10_widenStencilValues[22].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg10_1_rowArr_4_6[x + half_span_x] = arg10_1_tmpConverter_4_6.f; 
                ops::hls::DataConv arg10_0_tmpConverter_4_7;
                arg10_0_tmpConverter_4_7.i = arg10_widenStencilValues[23].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg10_0_rowArr_4_7[x + half_span_x] = arg10_0_tmpConverter_4_7.f; 
                ops::hls::DataConv arg10_1_tmpConverter_4_7;
                arg10_1_tmpConverter_4_7.i = arg10_widenStencilValues[23].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg10_1_rowArr_4_7[x + half_span_x] = arg10_1_tmpConverter_4_7.f; 
                ops::hls::DataConv arg10_0_tmpConverter_4_8;
                arg10_0_tmpConverter_4_8.i = arg10_widenStencilValues[24].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg10_0_rowArr_4_8[x + half_span_x] = arg10_0_tmpConverter_4_8.f; 
                ops::hls::DataConv arg10_1_tmpConverter_4_8;
                arg10_1_tmpConverter_4_8.i = arg10_widenStencilValues[24].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg10_1_rowArr_4_8[x + half_span_x] = arg10_1_tmpConverter_4_8.f; 
                ops::hls::DataConv arg11_0_tmpConverter_4_0;
                arg11_0_tmpConverter_4_0.i = arg11_widenStencilValues[0].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg11_0_rowArr_4_0[x + half_span_x] = arg11_0_tmpConverter_4_0.f; 
                ops::hls::DataConv arg11_1_tmpConverter_4_0;
                arg11_1_tmpConverter_4_0.i = arg11_widenStencilValues[0].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg11_1_rowArr_4_0[x + half_span_x] = arg11_1_tmpConverter_4_0.f; 
                ops::hls::DataConv arg11_0_tmpConverter_4_1;
                arg11_0_tmpConverter_4_1.i = arg11_widenStencilValues[1].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg11_0_rowArr_4_1[x + half_span_x] = arg11_0_tmpConverter_4_1.f; 
                ops::hls::DataConv arg11_1_tmpConverter_4_1;
                arg11_1_tmpConverter_4_1.i = arg11_widenStencilValues[1].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg11_1_rowArr_4_1[x + half_span_x] = arg11_1_tmpConverter_4_1.f; 
                ops::hls::DataConv arg11_0_tmpConverter_4_2;
                arg11_0_tmpConverter_4_2.i = arg11_widenStencilValues[2].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg11_0_rowArr_4_2[x + half_span_x] = arg11_0_tmpConverter_4_2.f; 
                ops::hls::DataConv arg11_1_tmpConverter_4_2;
                arg11_1_tmpConverter_4_2.i = arg11_widenStencilValues[2].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg11_1_rowArr_4_2[x + half_span_x] = arg11_1_tmpConverter_4_2.f; 
                ops::hls::DataConv arg11_0_tmpConverter_4_3;
                arg11_0_tmpConverter_4_3.i = arg11_widenStencilValues[3].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg11_0_rowArr_4_3[x + half_span_x] = arg11_0_tmpConverter_4_3.f; 
                ops::hls::DataConv arg11_1_tmpConverter_4_3;
                arg11_1_tmpConverter_4_3.i = arg11_widenStencilValues[3].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg11_1_rowArr_4_3[x + half_span_x] = arg11_1_tmpConverter_4_3.f; 
                ops::hls::DataConv arg11_0_tmpConverter_0_4;
                arg11_0_tmpConverter_0_4.i = arg11_widenStencilValues[4].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg11_0_rowArr_0_4[x + half_span_x] = arg11_0_tmpConverter_0_4.f; 
                ops::hls::DataConv arg11_1_tmpConverter_0_4;
                arg11_1_tmpConverter_0_4.i = arg11_widenStencilValues[4].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg11_1_rowArr_0_4[x + half_span_x] = arg11_1_tmpConverter_0_4.f; 
                ops::hls::DataConv arg11_0_tmpConverter_1_4;
                arg11_0_tmpConverter_1_4.i = arg11_widenStencilValues[5].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg11_0_rowArr_1_4[x + half_span_x] = arg11_0_tmpConverter_1_4.f; 
                ops::hls::DataConv arg11_1_tmpConverter_1_4;
                arg11_1_tmpConverter_1_4.i = arg11_widenStencilValues[5].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg11_1_rowArr_1_4[x + half_span_x] = arg11_1_tmpConverter_1_4.f; 
                ops::hls::DataConv arg11_0_tmpConverter_2_4;
                arg11_0_tmpConverter_2_4.i = arg11_widenStencilValues[6].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg11_0_rowArr_2_4[x + half_span_x] = arg11_0_tmpConverter_2_4.f; 
                ops::hls::DataConv arg11_1_tmpConverter_2_4;
                arg11_1_tmpConverter_2_4.i = arg11_widenStencilValues[6].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg11_1_rowArr_2_4[x + half_span_x] = arg11_1_tmpConverter_2_4.f; 
                ops::hls::DataConv arg11_0_tmpConverter_3_4;
                arg11_0_tmpConverter_3_4.i = arg11_widenStencilValues[7].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg11_0_rowArr_3_4[x + half_span_x] = arg11_0_tmpConverter_3_4.f; 
                ops::hls::DataConv arg11_1_tmpConverter_3_4;
                arg11_1_tmpConverter_3_4.i = arg11_widenStencilValues[7].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg11_1_rowArr_3_4[x + half_span_x] = arg11_1_tmpConverter_3_4.f; 
                ops::hls::DataConv arg11_0_tmpConverter_4_4;
                arg11_0_tmpConverter_4_4.i = arg11_widenStencilValues[12].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg11_0_rowArr_4_4[x + half_span_x] = arg11_0_tmpConverter_4_4.f; 
                ops::hls::DataConv arg11_1_tmpConverter_4_4;
                arg11_1_tmpConverter_4_4.i = arg11_widenStencilValues[12].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg11_1_rowArr_4_4[x + half_span_x] = arg11_1_tmpConverter_4_4.f; 
                ops::hls::DataConv arg11_0_tmpConverter_5_4;
                arg11_0_tmpConverter_5_4.i = arg11_widenStencilValues[17].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg11_0_rowArr_5_4[x + half_span_x] = arg11_0_tmpConverter_5_4.f; 
                ops::hls::DataConv arg11_1_tmpConverter_5_4;
                arg11_1_tmpConverter_5_4.i = arg11_widenStencilValues[17].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg11_1_rowArr_5_4[x + half_span_x] = arg11_1_tmpConverter_5_4.f; 
                ops::hls::DataConv arg11_0_tmpConverter_6_4;
                arg11_0_tmpConverter_6_4.i = arg11_widenStencilValues[18].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg11_0_rowArr_6_4[x + half_span_x] = arg11_0_tmpConverter_6_4.f; 
                ops::hls::DataConv arg11_1_tmpConverter_6_4;
                arg11_1_tmpConverter_6_4.i = arg11_widenStencilValues[18].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg11_1_rowArr_6_4[x + half_span_x] = arg11_1_tmpConverter_6_4.f; 
                ops::hls::DataConv arg11_0_tmpConverter_7_4;
                arg11_0_tmpConverter_7_4.i = arg11_widenStencilValues[19].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg11_0_rowArr_7_4[x + half_span_x] = arg11_0_tmpConverter_7_4.f; 
                ops::hls::DataConv arg11_1_tmpConverter_7_4;
                arg11_1_tmpConverter_7_4.i = arg11_widenStencilValues[19].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg11_1_rowArr_7_4[x + half_span_x] = arg11_1_tmpConverter_7_4.f; 
                ops::hls::DataConv arg11_0_tmpConverter_8_4;
                arg11_0_tmpConverter_8_4.i = arg11_widenStencilValues[20].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg11_0_rowArr_8_4[x + half_span_x] = arg11_0_tmpConverter_8_4.f; 
                ops::hls::DataConv arg11_1_tmpConverter_8_4;
                arg11_1_tmpConverter_8_4.i = arg11_widenStencilValues[20].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg11_1_rowArr_8_4[x + half_span_x] = arg11_1_tmpConverter_8_4.f; 
                ops::hls::DataConv arg11_0_tmpConverter_4_5;
                arg11_0_tmpConverter_4_5.i = arg11_widenStencilValues[21].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg11_0_rowArr_4_5[x + half_span_x] = arg11_0_tmpConverter_4_5.f; 
                ops::hls::DataConv arg11_1_tmpConverter_4_5;
                arg11_1_tmpConverter_4_5.i = arg11_widenStencilValues[21].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg11_1_rowArr_4_5[x + half_span_x] = arg11_1_tmpConverter_4_5.f; 
                ops::hls::DataConv arg11_0_tmpConverter_4_6;
                arg11_0_tmpConverter_4_6.i = arg11_widenStencilValues[22].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg11_0_rowArr_4_6[x + half_span_x] = arg11_0_tmpConverter_4_6.f; 
                ops::hls::DataConv arg11_1_tmpConverter_4_6;
                arg11_1_tmpConverter_4_6.i = arg11_widenStencilValues[22].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg11_1_rowArr_4_6[x + half_span_x] = arg11_1_tmpConverter_4_6.f; 
                ops::hls::DataConv arg11_0_tmpConverter_4_7;
                arg11_0_tmpConverter_4_7.i = arg11_widenStencilValues[23].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg11_0_rowArr_4_7[x + half_span_x] = arg11_0_tmpConverter_4_7.f; 
                ops::hls::DataConv arg11_1_tmpConverter_4_7;
                arg11_1_tmpConverter_4_7.i = arg11_widenStencilValues[23].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg11_1_rowArr_4_7[x + half_span_x] = arg11_1_tmpConverter_4_7.f; 
                ops::hls::DataConv arg11_0_tmpConverter_4_8;
                arg11_0_tmpConverter_4_8.i = arg11_widenStencilValues[24].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg11_0_rowArr_4_8[x + half_span_x] = arg11_0_tmpConverter_4_8.f; 
                ops::hls::DataConv arg11_1_tmpConverter_4_8;
                arg11_1_tmpConverter_4_8.i = arg11_widenStencilValues[24].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg11_1_rowArr_4_8[x + half_span_x] = arg11_1_tmpConverter_4_8.f; 
                ops::hls::DataConv arg12_0_tmpConverter_4_0;
                arg12_0_tmpConverter_4_0.i = arg12_widenStencilValues[0].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg12_0_rowArr_4_0[x + half_span_x] = arg12_0_tmpConverter_4_0.f; 
                ops::hls::DataConv arg12_1_tmpConverter_4_0;
                arg12_1_tmpConverter_4_0.i = arg12_widenStencilValues[0].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg12_1_rowArr_4_0[x + half_span_x] = arg12_1_tmpConverter_4_0.f; 
                ops::hls::DataConv arg12_0_tmpConverter_4_1;
                arg12_0_tmpConverter_4_1.i = arg12_widenStencilValues[1].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg12_0_rowArr_4_1[x + half_span_x] = arg12_0_tmpConverter_4_1.f; 
                ops::hls::DataConv arg12_1_tmpConverter_4_1;
                arg12_1_tmpConverter_4_1.i = arg12_widenStencilValues[1].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg12_1_rowArr_4_1[x + half_span_x] = arg12_1_tmpConverter_4_1.f; 
                ops::hls::DataConv arg12_0_tmpConverter_4_2;
                arg12_0_tmpConverter_4_2.i = arg12_widenStencilValues[2].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg12_0_rowArr_4_2[x + half_span_x] = arg12_0_tmpConverter_4_2.f; 
                ops::hls::DataConv arg12_1_tmpConverter_4_2;
                arg12_1_tmpConverter_4_2.i = arg12_widenStencilValues[2].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg12_1_rowArr_4_2[x + half_span_x] = arg12_1_tmpConverter_4_2.f; 
                ops::hls::DataConv arg12_0_tmpConverter_4_3;
                arg12_0_tmpConverter_4_3.i = arg12_widenStencilValues[3].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg12_0_rowArr_4_3[x + half_span_x] = arg12_0_tmpConverter_4_3.f; 
                ops::hls::DataConv arg12_1_tmpConverter_4_3;
                arg12_1_tmpConverter_4_3.i = arg12_widenStencilValues[3].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg12_1_rowArr_4_3[x + half_span_x] = arg12_1_tmpConverter_4_3.f; 
                ops::hls::DataConv arg12_0_tmpConverter_0_4;
                arg12_0_tmpConverter_0_4.i = arg12_widenStencilValues[4].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg12_0_rowArr_0_4[x + half_span_x] = arg12_0_tmpConverter_0_4.f; 
                ops::hls::DataConv arg12_1_tmpConverter_0_4;
                arg12_1_tmpConverter_0_4.i = arg12_widenStencilValues[4].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg12_1_rowArr_0_4[x + half_span_x] = arg12_1_tmpConverter_0_4.f; 
                ops::hls::DataConv arg12_0_tmpConverter_1_4;
                arg12_0_tmpConverter_1_4.i = arg12_widenStencilValues[5].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg12_0_rowArr_1_4[x + half_span_x] = arg12_0_tmpConverter_1_4.f; 
                ops::hls::DataConv arg12_1_tmpConverter_1_4;
                arg12_1_tmpConverter_1_4.i = arg12_widenStencilValues[5].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg12_1_rowArr_1_4[x + half_span_x] = arg12_1_tmpConverter_1_4.f; 
                ops::hls::DataConv arg12_0_tmpConverter_2_4;
                arg12_0_tmpConverter_2_4.i = arg12_widenStencilValues[6].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg12_0_rowArr_2_4[x + half_span_x] = arg12_0_tmpConverter_2_4.f; 
                ops::hls::DataConv arg12_1_tmpConverter_2_4;
                arg12_1_tmpConverter_2_4.i = arg12_widenStencilValues[6].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg12_1_rowArr_2_4[x + half_span_x] = arg12_1_tmpConverter_2_4.f; 
                ops::hls::DataConv arg12_0_tmpConverter_3_4;
                arg12_0_tmpConverter_3_4.i = arg12_widenStencilValues[7].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg12_0_rowArr_3_4[x + half_span_x] = arg12_0_tmpConverter_3_4.f; 
                ops::hls::DataConv arg12_1_tmpConverter_3_4;
                arg12_1_tmpConverter_3_4.i = arg12_widenStencilValues[7].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg12_1_rowArr_3_4[x + half_span_x] = arg12_1_tmpConverter_3_4.f; 
                ops::hls::DataConv arg12_0_tmpConverter_4_4;
                arg12_0_tmpConverter_4_4.i = arg12_widenStencilValues[12].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg12_0_rowArr_4_4[x + half_span_x] = arg12_0_tmpConverter_4_4.f; 
                ops::hls::DataConv arg12_1_tmpConverter_4_4;
                arg12_1_tmpConverter_4_4.i = arg12_widenStencilValues[12].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg12_1_rowArr_4_4[x + half_span_x] = arg12_1_tmpConverter_4_4.f; 
                ops::hls::DataConv arg12_0_tmpConverter_5_4;
                arg12_0_tmpConverter_5_4.i = arg12_widenStencilValues[17].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg12_0_rowArr_5_4[x + half_span_x] = arg12_0_tmpConverter_5_4.f; 
                ops::hls::DataConv arg12_1_tmpConverter_5_4;
                arg12_1_tmpConverter_5_4.i = arg12_widenStencilValues[17].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg12_1_rowArr_5_4[x + half_span_x] = arg12_1_tmpConverter_5_4.f; 
                ops::hls::DataConv arg12_0_tmpConverter_6_4;
                arg12_0_tmpConverter_6_4.i = arg12_widenStencilValues[18].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg12_0_rowArr_6_4[x + half_span_x] = arg12_0_tmpConverter_6_4.f; 
                ops::hls::DataConv arg12_1_tmpConverter_6_4;
                arg12_1_tmpConverter_6_4.i = arg12_widenStencilValues[18].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg12_1_rowArr_6_4[x + half_span_x] = arg12_1_tmpConverter_6_4.f; 
                ops::hls::DataConv arg12_0_tmpConverter_7_4;
                arg12_0_tmpConverter_7_4.i = arg12_widenStencilValues[19].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg12_0_rowArr_7_4[x + half_span_x] = arg12_0_tmpConverter_7_4.f; 
                ops::hls::DataConv arg12_1_tmpConverter_7_4;
                arg12_1_tmpConverter_7_4.i = arg12_widenStencilValues[19].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg12_1_rowArr_7_4[x + half_span_x] = arg12_1_tmpConverter_7_4.f; 
                ops::hls::DataConv arg12_0_tmpConverter_8_4;
                arg12_0_tmpConverter_8_4.i = arg12_widenStencilValues[20].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg12_0_rowArr_8_4[x + half_span_x] = arg12_0_tmpConverter_8_4.f; 
                ops::hls::DataConv arg12_1_tmpConverter_8_4;
                arg12_1_tmpConverter_8_4.i = arg12_widenStencilValues[20].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg12_1_rowArr_8_4[x + half_span_x] = arg12_1_tmpConverter_8_4.f; 
                ops::hls::DataConv arg12_0_tmpConverter_4_5;
                arg12_0_tmpConverter_4_5.i = arg12_widenStencilValues[21].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg12_0_rowArr_4_5[x + half_span_x] = arg12_0_tmpConverter_4_5.f; 
                ops::hls::DataConv arg12_1_tmpConverter_4_5;
                arg12_1_tmpConverter_4_5.i = arg12_widenStencilValues[21].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg12_1_rowArr_4_5[x + half_span_x] = arg12_1_tmpConverter_4_5.f; 
                ops::hls::DataConv arg12_0_tmpConverter_4_6;
                arg12_0_tmpConverter_4_6.i = arg12_widenStencilValues[22].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg12_0_rowArr_4_6[x + half_span_x] = arg12_0_tmpConverter_4_6.f; 
                ops::hls::DataConv arg12_1_tmpConverter_4_6;
                arg12_1_tmpConverter_4_6.i = arg12_widenStencilValues[22].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg12_1_rowArr_4_6[x + half_span_x] = arg12_1_tmpConverter_4_6.f; 
                ops::hls::DataConv arg12_0_tmpConverter_4_7;
                arg12_0_tmpConverter_4_7.i = arg12_widenStencilValues[23].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg12_0_rowArr_4_7[x + half_span_x] = arg12_0_tmpConverter_4_7.f; 
                ops::hls::DataConv arg12_1_tmpConverter_4_7;
                arg12_1_tmpConverter_4_7.i = arg12_widenStencilValues[23].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg12_1_rowArr_4_7[x + half_span_x] = arg12_1_tmpConverter_4_7.f; 
                ops::hls::DataConv arg12_0_tmpConverter_4_8;
                arg12_0_tmpConverter_4_8.i = arg12_widenStencilValues[24].range(s_datatype_size * (x_d2 + 1) - 1, (x_d2 + 0) * s_datatype_size);
                arg12_0_rowArr_4_8[x + half_span_x] = arg12_0_tmpConverter_4_8.f; 
                ops::hls::DataConv arg12_1_tmpConverter_4_8;
                arg12_1_tmpConverter_4_8.i = arg12_widenStencilValues[24].range(s_datatype_size * (x_d2 + 2) - 1, (x_d2 + 1) * s_datatype_size);
                arg12_1_rowArr_4_8[x + half_span_x] = arg12_1_tmpConverter_4_8.f; 

            }
            vec2arr_rest:
            {
                //diff = -4
                // access_idx = 0
                ops::hls::DataConv arg0_0_tmpConverter_0_4_4_0;
                arg0_0_tmpConverter_0_4_4_0.i = arg0_widenStencilValues[8].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg0_0_rowArr_4_4[0] = arg0_0_tmpConverter_0_4_4_0.f;
                ops::hls::DataConv arg0_1_tmpConverter_0_4_4_0;
                arg0_1_tmpConverter_0_4_4_0.i = arg0_widenStencilValues[8].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg0_1_rowArr_4_4[0] = arg0_1_tmpConverter_0_4_4_0.f;
                //diff = -3
                // access_idx = 1
                ops::hls::DataConv arg0_0_tmpConverter_1_4_4_0;
                arg0_0_tmpConverter_1_4_4_0.i = arg0_widenStencilValues[9].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg0_0_rowArr_4_4[1] = arg0_0_tmpConverter_1_4_4_0.f;
                ops::hls::DataConv arg0_1_tmpConverter_1_4_4_0;
                arg0_1_tmpConverter_1_4_4_0.i = arg0_widenStencilValues[9].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg0_1_rowArr_4_4[1] = arg0_1_tmpConverter_1_4_4_0.f;
                //diff = -2
                // access_idx = 2
                ops::hls::DataConv arg0_0_tmpConverter_2_4_4_0;
                arg0_0_tmpConverter_2_4_4_0.i = arg0_widenStencilValues[10].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg0_0_rowArr_4_4[2] = arg0_0_tmpConverter_2_4_4_0.f;
                ops::hls::DataConv arg0_1_tmpConverter_2_4_4_0;
                arg0_1_tmpConverter_2_4_4_0.i = arg0_widenStencilValues[10].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg0_1_rowArr_4_4[2] = arg0_1_tmpConverter_2_4_4_0.f;
                //diff = -1
                // access_idx = 3
                ops::hls::DataConv arg0_0_tmpConverter_3_4_4_0;
                arg0_0_tmpConverter_3_4_4_0.i = arg0_widenStencilValues[11].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg0_0_rowArr_4_4[3] = arg0_0_tmpConverter_3_4_4_0.f;
                ops::hls::DataConv arg0_1_tmpConverter_3_4_4_0;
                arg0_1_tmpConverter_3_4_4_0.i = arg0_widenStencilValues[11].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg0_1_rowArr_4_4[3] = arg0_1_tmpConverter_3_4_4_0.f;
                //diff = 1
                // access_idx = 5
                ops::hls::DataConv arg0_0_tmpConverter_5_4_4_0;
                arg0_0_tmpConverter_5_4_4_0.i = arg0_widenStencilValues[13].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg0_0_rowArr_4_4[5] = arg0_0_tmpConverter_5_4_4_0.f;
                ops::hls::DataConv arg0_1_tmpConverter_5_4_4_0;
                arg0_1_tmpConverter_5_4_4_0.i = arg0_widenStencilValues[13].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg0_1_rowArr_4_4[5] = arg0_1_tmpConverter_5_4_4_0.f;
                //diff = 2
                // access_idx = 6
                ops::hls::DataConv arg0_0_tmpConverter_6_4_4_0;
                arg0_0_tmpConverter_6_4_4_0.i = arg0_widenStencilValues[14].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg0_0_rowArr_4_4[6] = arg0_0_tmpConverter_6_4_4_0.f;
                ops::hls::DataConv arg0_1_tmpConverter_6_4_4_0;
                arg0_1_tmpConverter_6_4_4_0.i = arg0_widenStencilValues[14].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg0_1_rowArr_4_4[6] = arg0_1_tmpConverter_6_4_4_0.f;
                //diff = 3
                // access_idx = 7
                ops::hls::DataConv arg0_0_tmpConverter_7_4_4_0;
                arg0_0_tmpConverter_7_4_4_0.i = arg0_widenStencilValues[15].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg0_0_rowArr_4_4[7] = arg0_0_tmpConverter_7_4_4_0.f;
                ops::hls::DataConv arg0_1_tmpConverter_7_4_4_0;
                arg0_1_tmpConverter_7_4_4_0.i = arg0_widenStencilValues[15].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg0_1_rowArr_4_4[7] = arg0_1_tmpConverter_7_4_4_0.f;
                //diff = 4
                // access_idx = 8
                ops::hls::DataConv arg0_0_tmpConverter_8_4_4_0;
                arg0_0_tmpConverter_8_4_4_0.i = arg0_widenStencilValues[16].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg0_0_rowArr_4_4[8] = arg0_0_tmpConverter_8_4_4_0.f;
                ops::hls::DataConv arg0_1_tmpConverter_8_4_4_0;
                arg0_1_tmpConverter_8_4_4_0.i = arg0_widenStencilValues[16].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg0_1_rowArr_4_4[8] = arg0_1_tmpConverter_8_4_4_0.f;
                //diff = -4
                // access_idx = 0
                ops::hls::DataConv arg1_0_tmpConverter_0_4_4_0;
                arg1_0_tmpConverter_0_4_4_0.i = arg1_widenStencilValues[8].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg1_0_rowArr_4_4[0] = arg1_0_tmpConverter_0_4_4_0.f;
                ops::hls::DataConv arg1_1_tmpConverter_0_4_4_0;
                arg1_1_tmpConverter_0_4_4_0.i = arg1_widenStencilValues[8].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg1_1_rowArr_4_4[0] = arg1_1_tmpConverter_0_4_4_0.f;
                //diff = -3
                // access_idx = 1
                ops::hls::DataConv arg1_0_tmpConverter_1_4_4_0;
                arg1_0_tmpConverter_1_4_4_0.i = arg1_widenStencilValues[9].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg1_0_rowArr_4_4[1] = arg1_0_tmpConverter_1_4_4_0.f;
                ops::hls::DataConv arg1_1_tmpConverter_1_4_4_0;
                arg1_1_tmpConverter_1_4_4_0.i = arg1_widenStencilValues[9].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg1_1_rowArr_4_4[1] = arg1_1_tmpConverter_1_4_4_0.f;
                //diff = -2
                // access_idx = 2
                ops::hls::DataConv arg1_0_tmpConverter_2_4_4_0;
                arg1_0_tmpConverter_2_4_4_0.i = arg1_widenStencilValues[10].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg1_0_rowArr_4_4[2] = arg1_0_tmpConverter_2_4_4_0.f;
                ops::hls::DataConv arg1_1_tmpConverter_2_4_4_0;
                arg1_1_tmpConverter_2_4_4_0.i = arg1_widenStencilValues[10].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg1_1_rowArr_4_4[2] = arg1_1_tmpConverter_2_4_4_0.f;
                //diff = -1
                // access_idx = 3
                ops::hls::DataConv arg1_0_tmpConverter_3_4_4_0;
                arg1_0_tmpConverter_3_4_4_0.i = arg1_widenStencilValues[11].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg1_0_rowArr_4_4[3] = arg1_0_tmpConverter_3_4_4_0.f;
                ops::hls::DataConv arg1_1_tmpConverter_3_4_4_0;
                arg1_1_tmpConverter_3_4_4_0.i = arg1_widenStencilValues[11].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg1_1_rowArr_4_4[3] = arg1_1_tmpConverter_3_4_4_0.f;
                //diff = 1
                // access_idx = 5
                ops::hls::DataConv arg1_0_tmpConverter_5_4_4_0;
                arg1_0_tmpConverter_5_4_4_0.i = arg1_widenStencilValues[13].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg1_0_rowArr_4_4[5] = arg1_0_tmpConverter_5_4_4_0.f;
                ops::hls::DataConv arg1_1_tmpConverter_5_4_4_0;
                arg1_1_tmpConverter_5_4_4_0.i = arg1_widenStencilValues[13].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg1_1_rowArr_4_4[5] = arg1_1_tmpConverter_5_4_4_0.f;
                //diff = 2
                // access_idx = 6
                ops::hls::DataConv arg1_0_tmpConverter_6_4_4_0;
                arg1_0_tmpConverter_6_4_4_0.i = arg1_widenStencilValues[14].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg1_0_rowArr_4_4[6] = arg1_0_tmpConverter_6_4_4_0.f;
                ops::hls::DataConv arg1_1_tmpConverter_6_4_4_0;
                arg1_1_tmpConverter_6_4_4_0.i = arg1_widenStencilValues[14].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg1_1_rowArr_4_4[6] = arg1_1_tmpConverter_6_4_4_0.f;
                //diff = 3
                // access_idx = 7
                ops::hls::DataConv arg1_0_tmpConverter_7_4_4_0;
                arg1_0_tmpConverter_7_4_4_0.i = arg1_widenStencilValues[15].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg1_0_rowArr_4_4[7] = arg1_0_tmpConverter_7_4_4_0.f;
                ops::hls::DataConv arg1_1_tmpConverter_7_4_4_0;
                arg1_1_tmpConverter_7_4_4_0.i = arg1_widenStencilValues[15].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg1_1_rowArr_4_4[7] = arg1_1_tmpConverter_7_4_4_0.f;
                //diff = 4
                // access_idx = 8
                ops::hls::DataConv arg1_0_tmpConverter_8_4_4_0;
                arg1_0_tmpConverter_8_4_4_0.i = arg1_widenStencilValues[16].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg1_0_rowArr_4_4[8] = arg1_0_tmpConverter_8_4_4_0.f;
                ops::hls::DataConv arg1_1_tmpConverter_8_4_4_0;
                arg1_1_tmpConverter_8_4_4_0.i = arg1_widenStencilValues[16].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg1_1_rowArr_4_4[8] = arg1_1_tmpConverter_8_4_4_0.f;
                //diff = -4
                // access_idx = 0
                ops::hls::DataConv arg2_0_tmpConverter_0_4_4_0;
                arg2_0_tmpConverter_0_4_4_0.i = arg2_widenStencilValues[8].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg2_0_rowArr_4_4[0] = arg2_0_tmpConverter_0_4_4_0.f;
                ops::hls::DataConv arg2_1_tmpConverter_0_4_4_0;
                arg2_1_tmpConverter_0_4_4_0.i = arg2_widenStencilValues[8].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg2_1_rowArr_4_4[0] = arg2_1_tmpConverter_0_4_4_0.f;
                //diff = -3
                // access_idx = 1
                ops::hls::DataConv arg2_0_tmpConverter_1_4_4_0;
                arg2_0_tmpConverter_1_4_4_0.i = arg2_widenStencilValues[9].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg2_0_rowArr_4_4[1] = arg2_0_tmpConverter_1_4_4_0.f;
                ops::hls::DataConv arg2_1_tmpConverter_1_4_4_0;
                arg2_1_tmpConverter_1_4_4_0.i = arg2_widenStencilValues[9].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg2_1_rowArr_4_4[1] = arg2_1_tmpConverter_1_4_4_0.f;
                //diff = -2
                // access_idx = 2
                ops::hls::DataConv arg2_0_tmpConverter_2_4_4_0;
                arg2_0_tmpConverter_2_4_4_0.i = arg2_widenStencilValues[10].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg2_0_rowArr_4_4[2] = arg2_0_tmpConverter_2_4_4_0.f;
                ops::hls::DataConv arg2_1_tmpConverter_2_4_4_0;
                arg2_1_tmpConverter_2_4_4_0.i = arg2_widenStencilValues[10].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg2_1_rowArr_4_4[2] = arg2_1_tmpConverter_2_4_4_0.f;
                //diff = -1
                // access_idx = 3
                ops::hls::DataConv arg2_0_tmpConverter_3_4_4_0;
                arg2_0_tmpConverter_3_4_4_0.i = arg2_widenStencilValues[11].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg2_0_rowArr_4_4[3] = arg2_0_tmpConverter_3_4_4_0.f;
                ops::hls::DataConv arg2_1_tmpConverter_3_4_4_0;
                arg2_1_tmpConverter_3_4_4_0.i = arg2_widenStencilValues[11].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg2_1_rowArr_4_4[3] = arg2_1_tmpConverter_3_4_4_0.f;
                //diff = 1
                // access_idx = 5
                ops::hls::DataConv arg2_0_tmpConverter_5_4_4_0;
                arg2_0_tmpConverter_5_4_4_0.i = arg2_widenStencilValues[13].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg2_0_rowArr_4_4[5] = arg2_0_tmpConverter_5_4_4_0.f;
                ops::hls::DataConv arg2_1_tmpConverter_5_4_4_0;
                arg2_1_tmpConverter_5_4_4_0.i = arg2_widenStencilValues[13].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg2_1_rowArr_4_4[5] = arg2_1_tmpConverter_5_4_4_0.f;
                //diff = 2
                // access_idx = 6
                ops::hls::DataConv arg2_0_tmpConverter_6_4_4_0;
                arg2_0_tmpConverter_6_4_4_0.i = arg2_widenStencilValues[14].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg2_0_rowArr_4_4[6] = arg2_0_tmpConverter_6_4_4_0.f;
                ops::hls::DataConv arg2_1_tmpConverter_6_4_4_0;
                arg2_1_tmpConverter_6_4_4_0.i = arg2_widenStencilValues[14].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg2_1_rowArr_4_4[6] = arg2_1_tmpConverter_6_4_4_0.f;
                //diff = 3
                // access_idx = 7
                ops::hls::DataConv arg2_0_tmpConverter_7_4_4_0;
                arg2_0_tmpConverter_7_4_4_0.i = arg2_widenStencilValues[15].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg2_0_rowArr_4_4[7] = arg2_0_tmpConverter_7_4_4_0.f;
                ops::hls::DataConv arg2_1_tmpConverter_7_4_4_0;
                arg2_1_tmpConverter_7_4_4_0.i = arg2_widenStencilValues[15].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg2_1_rowArr_4_4[7] = arg2_1_tmpConverter_7_4_4_0.f;
                //diff = 4
                // access_idx = 8
                ops::hls::DataConv arg2_0_tmpConverter_8_4_4_0;
                arg2_0_tmpConverter_8_4_4_0.i = arg2_widenStencilValues[16].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg2_0_rowArr_4_4[8] = arg2_0_tmpConverter_8_4_4_0.f;
                ops::hls::DataConv arg2_1_tmpConverter_8_4_4_0;
                arg2_1_tmpConverter_8_4_4_0.i = arg2_widenStencilValues[16].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg2_1_rowArr_4_4[8] = arg2_1_tmpConverter_8_4_4_0.f;
                //diff = -4
                // access_idx = 0
                ops::hls::DataConv arg3_0_tmpConverter_0_4_4_0;
                arg3_0_tmpConverter_0_4_4_0.i = arg3_widenStencilValues[8].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg3_0_rowArr_4_4[0] = arg3_0_tmpConverter_0_4_4_0.f;
                ops::hls::DataConv arg3_1_tmpConverter_0_4_4_0;
                arg3_1_tmpConverter_0_4_4_0.i = arg3_widenStencilValues[8].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg3_1_rowArr_4_4[0] = arg3_1_tmpConverter_0_4_4_0.f;
                //diff = -3
                // access_idx = 1
                ops::hls::DataConv arg3_0_tmpConverter_1_4_4_0;
                arg3_0_tmpConverter_1_4_4_0.i = arg3_widenStencilValues[9].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg3_0_rowArr_4_4[1] = arg3_0_tmpConverter_1_4_4_0.f;
                ops::hls::DataConv arg3_1_tmpConverter_1_4_4_0;
                arg3_1_tmpConverter_1_4_4_0.i = arg3_widenStencilValues[9].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg3_1_rowArr_4_4[1] = arg3_1_tmpConverter_1_4_4_0.f;
                //diff = -2
                // access_idx = 2
                ops::hls::DataConv arg3_0_tmpConverter_2_4_4_0;
                arg3_0_tmpConverter_2_4_4_0.i = arg3_widenStencilValues[10].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg3_0_rowArr_4_4[2] = arg3_0_tmpConverter_2_4_4_0.f;
                ops::hls::DataConv arg3_1_tmpConverter_2_4_4_0;
                arg3_1_tmpConverter_2_4_4_0.i = arg3_widenStencilValues[10].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg3_1_rowArr_4_4[2] = arg3_1_tmpConverter_2_4_4_0.f;
                //diff = -1
                // access_idx = 3
                ops::hls::DataConv arg3_0_tmpConverter_3_4_4_0;
                arg3_0_tmpConverter_3_4_4_0.i = arg3_widenStencilValues[11].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg3_0_rowArr_4_4[3] = arg3_0_tmpConverter_3_4_4_0.f;
                ops::hls::DataConv arg3_1_tmpConverter_3_4_4_0;
                arg3_1_tmpConverter_3_4_4_0.i = arg3_widenStencilValues[11].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg3_1_rowArr_4_4[3] = arg3_1_tmpConverter_3_4_4_0.f;
                //diff = 1
                // access_idx = 5
                ops::hls::DataConv arg3_0_tmpConverter_5_4_4_0;
                arg3_0_tmpConverter_5_4_4_0.i = arg3_widenStencilValues[13].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg3_0_rowArr_4_4[5] = arg3_0_tmpConverter_5_4_4_0.f;
                ops::hls::DataConv arg3_1_tmpConverter_5_4_4_0;
                arg3_1_tmpConverter_5_4_4_0.i = arg3_widenStencilValues[13].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg3_1_rowArr_4_4[5] = arg3_1_tmpConverter_5_4_4_0.f;
                //diff = 2
                // access_idx = 6
                ops::hls::DataConv arg3_0_tmpConverter_6_4_4_0;
                arg3_0_tmpConverter_6_4_4_0.i = arg3_widenStencilValues[14].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg3_0_rowArr_4_4[6] = arg3_0_tmpConverter_6_4_4_0.f;
                ops::hls::DataConv arg3_1_tmpConverter_6_4_4_0;
                arg3_1_tmpConverter_6_4_4_0.i = arg3_widenStencilValues[14].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg3_1_rowArr_4_4[6] = arg3_1_tmpConverter_6_4_4_0.f;
                //diff = 3
                // access_idx = 7
                ops::hls::DataConv arg3_0_tmpConverter_7_4_4_0;
                arg3_0_tmpConverter_7_4_4_0.i = arg3_widenStencilValues[15].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg3_0_rowArr_4_4[7] = arg3_0_tmpConverter_7_4_4_0.f;
                ops::hls::DataConv arg3_1_tmpConverter_7_4_4_0;
                arg3_1_tmpConverter_7_4_4_0.i = arg3_widenStencilValues[15].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg3_1_rowArr_4_4[7] = arg3_1_tmpConverter_7_4_4_0.f;
                //diff = 4
                // access_idx = 8
                ops::hls::DataConv arg3_0_tmpConverter_8_4_4_0;
                arg3_0_tmpConverter_8_4_4_0.i = arg3_widenStencilValues[16].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg3_0_rowArr_4_4[8] = arg3_0_tmpConverter_8_4_4_0.f;
                ops::hls::DataConv arg3_1_tmpConverter_8_4_4_0;
                arg3_1_tmpConverter_8_4_4_0.i = arg3_widenStencilValues[16].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg3_1_rowArr_4_4[8] = arg3_1_tmpConverter_8_4_4_0.f;
                //diff = -4
                // access_idx = 0
                ops::hls::DataConv arg4_0_tmpConverter_0_4_4_0;
                arg4_0_tmpConverter_0_4_4_0.i = arg4_widenStencilValues[8].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg4_0_rowArr_4_4[0] = arg4_0_tmpConverter_0_4_4_0.f;
                ops::hls::DataConv arg4_1_tmpConverter_0_4_4_0;
                arg4_1_tmpConverter_0_4_4_0.i = arg4_widenStencilValues[8].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg4_1_rowArr_4_4[0] = arg4_1_tmpConverter_0_4_4_0.f;
                //diff = -3
                // access_idx = 1
                ops::hls::DataConv arg4_0_tmpConverter_1_4_4_0;
                arg4_0_tmpConverter_1_4_4_0.i = arg4_widenStencilValues[9].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg4_0_rowArr_4_4[1] = arg4_0_tmpConverter_1_4_4_0.f;
                ops::hls::DataConv arg4_1_tmpConverter_1_4_4_0;
                arg4_1_tmpConverter_1_4_4_0.i = arg4_widenStencilValues[9].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg4_1_rowArr_4_4[1] = arg4_1_tmpConverter_1_4_4_0.f;
                //diff = -2
                // access_idx = 2
                ops::hls::DataConv arg4_0_tmpConverter_2_4_4_0;
                arg4_0_tmpConverter_2_4_4_0.i = arg4_widenStencilValues[10].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg4_0_rowArr_4_4[2] = arg4_0_tmpConverter_2_4_4_0.f;
                ops::hls::DataConv arg4_1_tmpConverter_2_4_4_0;
                arg4_1_tmpConverter_2_4_4_0.i = arg4_widenStencilValues[10].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg4_1_rowArr_4_4[2] = arg4_1_tmpConverter_2_4_4_0.f;
                //diff = -1
                // access_idx = 3
                ops::hls::DataConv arg4_0_tmpConverter_3_4_4_0;
                arg4_0_tmpConverter_3_4_4_0.i = arg4_widenStencilValues[11].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg4_0_rowArr_4_4[3] = arg4_0_tmpConverter_3_4_4_0.f;
                ops::hls::DataConv arg4_1_tmpConverter_3_4_4_0;
                arg4_1_tmpConverter_3_4_4_0.i = arg4_widenStencilValues[11].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg4_1_rowArr_4_4[3] = arg4_1_tmpConverter_3_4_4_0.f;
                //diff = 1
                // access_idx = 5
                ops::hls::DataConv arg4_0_tmpConverter_5_4_4_0;
                arg4_0_tmpConverter_5_4_4_0.i = arg4_widenStencilValues[13].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg4_0_rowArr_4_4[5] = arg4_0_tmpConverter_5_4_4_0.f;
                ops::hls::DataConv arg4_1_tmpConverter_5_4_4_0;
                arg4_1_tmpConverter_5_4_4_0.i = arg4_widenStencilValues[13].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg4_1_rowArr_4_4[5] = arg4_1_tmpConverter_5_4_4_0.f;
                //diff = 2
                // access_idx = 6
                ops::hls::DataConv arg4_0_tmpConverter_6_4_4_0;
                arg4_0_tmpConverter_6_4_4_0.i = arg4_widenStencilValues[14].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg4_0_rowArr_4_4[6] = arg4_0_tmpConverter_6_4_4_0.f;
                ops::hls::DataConv arg4_1_tmpConverter_6_4_4_0;
                arg4_1_tmpConverter_6_4_4_0.i = arg4_widenStencilValues[14].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg4_1_rowArr_4_4[6] = arg4_1_tmpConverter_6_4_4_0.f;
                //diff = 3
                // access_idx = 7
                ops::hls::DataConv arg4_0_tmpConverter_7_4_4_0;
                arg4_0_tmpConverter_7_4_4_0.i = arg4_widenStencilValues[15].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg4_0_rowArr_4_4[7] = arg4_0_tmpConverter_7_4_4_0.f;
                ops::hls::DataConv arg4_1_tmpConverter_7_4_4_0;
                arg4_1_tmpConverter_7_4_4_0.i = arg4_widenStencilValues[15].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg4_1_rowArr_4_4[7] = arg4_1_tmpConverter_7_4_4_0.f;
                //diff = 4
                // access_idx = 8
                ops::hls::DataConv arg4_0_tmpConverter_8_4_4_0;
                arg4_0_tmpConverter_8_4_4_0.i = arg4_widenStencilValues[16].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg4_0_rowArr_4_4[8] = arg4_0_tmpConverter_8_4_4_0.f;
                ops::hls::DataConv arg4_1_tmpConverter_8_4_4_0;
                arg4_1_tmpConverter_8_4_4_0.i = arg4_widenStencilValues[16].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg4_1_rowArr_4_4[8] = arg4_1_tmpConverter_8_4_4_0.f;
                //diff = -4
                // access_idx = 0
                ops::hls::DataConv arg5_0_tmpConverter_0_4_4_0;
                arg5_0_tmpConverter_0_4_4_0.i = arg5_widenStencilValues[8].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg5_0_rowArr_4_4[0] = arg5_0_tmpConverter_0_4_4_0.f;
                ops::hls::DataConv arg5_1_tmpConverter_0_4_4_0;
                arg5_1_tmpConverter_0_4_4_0.i = arg5_widenStencilValues[8].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg5_1_rowArr_4_4[0] = arg5_1_tmpConverter_0_4_4_0.f;
                //diff = -3
                // access_idx = 1
                ops::hls::DataConv arg5_0_tmpConverter_1_4_4_0;
                arg5_0_tmpConverter_1_4_4_0.i = arg5_widenStencilValues[9].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg5_0_rowArr_4_4[1] = arg5_0_tmpConverter_1_4_4_0.f;
                ops::hls::DataConv arg5_1_tmpConverter_1_4_4_0;
                arg5_1_tmpConverter_1_4_4_0.i = arg5_widenStencilValues[9].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg5_1_rowArr_4_4[1] = arg5_1_tmpConverter_1_4_4_0.f;
                //diff = -2
                // access_idx = 2
                ops::hls::DataConv arg5_0_tmpConverter_2_4_4_0;
                arg5_0_tmpConverter_2_4_4_0.i = arg5_widenStencilValues[10].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg5_0_rowArr_4_4[2] = arg5_0_tmpConverter_2_4_4_0.f;
                ops::hls::DataConv arg5_1_tmpConverter_2_4_4_0;
                arg5_1_tmpConverter_2_4_4_0.i = arg5_widenStencilValues[10].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg5_1_rowArr_4_4[2] = arg5_1_tmpConverter_2_4_4_0.f;
                //diff = -1
                // access_idx = 3
                ops::hls::DataConv arg5_0_tmpConverter_3_4_4_0;
                arg5_0_tmpConverter_3_4_4_0.i = arg5_widenStencilValues[11].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg5_0_rowArr_4_4[3] = arg5_0_tmpConverter_3_4_4_0.f;
                ops::hls::DataConv arg5_1_tmpConverter_3_4_4_0;
                arg5_1_tmpConverter_3_4_4_0.i = arg5_widenStencilValues[11].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg5_1_rowArr_4_4[3] = arg5_1_tmpConverter_3_4_4_0.f;
                //diff = 1
                // access_idx = 5
                ops::hls::DataConv arg5_0_tmpConverter_5_4_4_0;
                arg5_0_tmpConverter_5_4_4_0.i = arg5_widenStencilValues[13].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg5_0_rowArr_4_4[5] = arg5_0_tmpConverter_5_4_4_0.f;
                ops::hls::DataConv arg5_1_tmpConverter_5_4_4_0;
                arg5_1_tmpConverter_5_4_4_0.i = arg5_widenStencilValues[13].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg5_1_rowArr_4_4[5] = arg5_1_tmpConverter_5_4_4_0.f;
                //diff = 2
                // access_idx = 6
                ops::hls::DataConv arg5_0_tmpConverter_6_4_4_0;
                arg5_0_tmpConverter_6_4_4_0.i = arg5_widenStencilValues[14].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg5_0_rowArr_4_4[6] = arg5_0_tmpConverter_6_4_4_0.f;
                ops::hls::DataConv arg5_1_tmpConverter_6_4_4_0;
                arg5_1_tmpConverter_6_4_4_0.i = arg5_widenStencilValues[14].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg5_1_rowArr_4_4[6] = arg5_1_tmpConverter_6_4_4_0.f;
                //diff = 3
                // access_idx = 7
                ops::hls::DataConv arg5_0_tmpConverter_7_4_4_0;
                arg5_0_tmpConverter_7_4_4_0.i = arg5_widenStencilValues[15].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg5_0_rowArr_4_4[7] = arg5_0_tmpConverter_7_4_4_0.f;
                ops::hls::DataConv arg5_1_tmpConverter_7_4_4_0;
                arg5_1_tmpConverter_7_4_4_0.i = arg5_widenStencilValues[15].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg5_1_rowArr_4_4[7] = arg5_1_tmpConverter_7_4_4_0.f;
                //diff = 4
                // access_idx = 8
                ops::hls::DataConv arg5_0_tmpConverter_8_4_4_0;
                arg5_0_tmpConverter_8_4_4_0.i = arg5_widenStencilValues[16].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg5_0_rowArr_4_4[8] = arg5_0_tmpConverter_8_4_4_0.f;
                ops::hls::DataConv arg5_1_tmpConverter_8_4_4_0;
                arg5_1_tmpConverter_8_4_4_0.i = arg5_widenStencilValues[16].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg5_1_rowArr_4_4[8] = arg5_1_tmpConverter_8_4_4_0.f;
                //diff = -4
                // access_idx = 0
                ops::hls::DataConv arg6_0_tmpConverter_0_4_4_0;
                arg6_0_tmpConverter_0_4_4_0.i = arg6_widenStencilValues[8].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg6_0_rowArr_4_4[0] = arg6_0_tmpConverter_0_4_4_0.f;
                ops::hls::DataConv arg6_1_tmpConverter_0_4_4_0;
                arg6_1_tmpConverter_0_4_4_0.i = arg6_widenStencilValues[8].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg6_1_rowArr_4_4[0] = arg6_1_tmpConverter_0_4_4_0.f;
                //diff = -3
                // access_idx = 1
                ops::hls::DataConv arg6_0_tmpConverter_1_4_4_0;
                arg6_0_tmpConverter_1_4_4_0.i = arg6_widenStencilValues[9].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg6_0_rowArr_4_4[1] = arg6_0_tmpConverter_1_4_4_0.f;
                ops::hls::DataConv arg6_1_tmpConverter_1_4_4_0;
                arg6_1_tmpConverter_1_4_4_0.i = arg6_widenStencilValues[9].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg6_1_rowArr_4_4[1] = arg6_1_tmpConverter_1_4_4_0.f;
                //diff = -2
                // access_idx = 2
                ops::hls::DataConv arg6_0_tmpConverter_2_4_4_0;
                arg6_0_tmpConverter_2_4_4_0.i = arg6_widenStencilValues[10].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg6_0_rowArr_4_4[2] = arg6_0_tmpConverter_2_4_4_0.f;
                ops::hls::DataConv arg6_1_tmpConverter_2_4_4_0;
                arg6_1_tmpConverter_2_4_4_0.i = arg6_widenStencilValues[10].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg6_1_rowArr_4_4[2] = arg6_1_tmpConverter_2_4_4_0.f;
                //diff = -1
                // access_idx = 3
                ops::hls::DataConv arg6_0_tmpConverter_3_4_4_0;
                arg6_0_tmpConverter_3_4_4_0.i = arg6_widenStencilValues[11].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg6_0_rowArr_4_4[3] = arg6_0_tmpConverter_3_4_4_0.f;
                ops::hls::DataConv arg6_1_tmpConverter_3_4_4_0;
                arg6_1_tmpConverter_3_4_4_0.i = arg6_widenStencilValues[11].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg6_1_rowArr_4_4[3] = arg6_1_tmpConverter_3_4_4_0.f;
                //diff = 1
                // access_idx = 5
                ops::hls::DataConv arg6_0_tmpConverter_5_4_4_0;
                arg6_0_tmpConverter_5_4_4_0.i = arg6_widenStencilValues[13].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg6_0_rowArr_4_4[5] = arg6_0_tmpConverter_5_4_4_0.f;
                ops::hls::DataConv arg6_1_tmpConverter_5_4_4_0;
                arg6_1_tmpConverter_5_4_4_0.i = arg6_widenStencilValues[13].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg6_1_rowArr_4_4[5] = arg6_1_tmpConverter_5_4_4_0.f;
                //diff = 2
                // access_idx = 6
                ops::hls::DataConv arg6_0_tmpConverter_6_4_4_0;
                arg6_0_tmpConverter_6_4_4_0.i = arg6_widenStencilValues[14].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg6_0_rowArr_4_4[6] = arg6_0_tmpConverter_6_4_4_0.f;
                ops::hls::DataConv arg6_1_tmpConverter_6_4_4_0;
                arg6_1_tmpConverter_6_4_4_0.i = arg6_widenStencilValues[14].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg6_1_rowArr_4_4[6] = arg6_1_tmpConverter_6_4_4_0.f;
                //diff = 3
                // access_idx = 7
                ops::hls::DataConv arg6_0_tmpConverter_7_4_4_0;
                arg6_0_tmpConverter_7_4_4_0.i = arg6_widenStencilValues[15].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg6_0_rowArr_4_4[7] = arg6_0_tmpConverter_7_4_4_0.f;
                ops::hls::DataConv arg6_1_tmpConverter_7_4_4_0;
                arg6_1_tmpConverter_7_4_4_0.i = arg6_widenStencilValues[15].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg6_1_rowArr_4_4[7] = arg6_1_tmpConverter_7_4_4_0.f;
                //diff = 4
                // access_idx = 8
                ops::hls::DataConv arg6_0_tmpConverter_8_4_4_0;
                arg6_0_tmpConverter_8_4_4_0.i = arg6_widenStencilValues[16].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg6_0_rowArr_4_4[8] = arg6_0_tmpConverter_8_4_4_0.f;
                ops::hls::DataConv arg6_1_tmpConverter_8_4_4_0;
                arg6_1_tmpConverter_8_4_4_0.i = arg6_widenStencilValues[16].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg6_1_rowArr_4_4[8] = arg6_1_tmpConverter_8_4_4_0.f;
                //diff = -4
                // access_idx = 0
                ops::hls::DataConv arg10_0_tmpConverter_0_4_4_0;
                arg10_0_tmpConverter_0_4_4_0.i = arg10_widenStencilValues[8].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg10_0_rowArr_4_4[0] = arg10_0_tmpConverter_0_4_4_0.f;
                ops::hls::DataConv arg10_1_tmpConverter_0_4_4_0;
                arg10_1_tmpConverter_0_4_4_0.i = arg10_widenStencilValues[8].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg10_1_rowArr_4_4[0] = arg10_1_tmpConverter_0_4_4_0.f;
                //diff = -3
                // access_idx = 1
                ops::hls::DataConv arg10_0_tmpConverter_1_4_4_0;
                arg10_0_tmpConverter_1_4_4_0.i = arg10_widenStencilValues[9].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg10_0_rowArr_4_4[1] = arg10_0_tmpConverter_1_4_4_0.f;
                ops::hls::DataConv arg10_1_tmpConverter_1_4_4_0;
                arg10_1_tmpConverter_1_4_4_0.i = arg10_widenStencilValues[9].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg10_1_rowArr_4_4[1] = arg10_1_tmpConverter_1_4_4_0.f;
                //diff = -2
                // access_idx = 2
                ops::hls::DataConv arg10_0_tmpConverter_2_4_4_0;
                arg10_0_tmpConverter_2_4_4_0.i = arg10_widenStencilValues[10].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg10_0_rowArr_4_4[2] = arg10_0_tmpConverter_2_4_4_0.f;
                ops::hls::DataConv arg10_1_tmpConverter_2_4_4_0;
                arg10_1_tmpConverter_2_4_4_0.i = arg10_widenStencilValues[10].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg10_1_rowArr_4_4[2] = arg10_1_tmpConverter_2_4_4_0.f;
                //diff = -1
                // access_idx = 3
                ops::hls::DataConv arg10_0_tmpConverter_3_4_4_0;
                arg10_0_tmpConverter_3_4_4_0.i = arg10_widenStencilValues[11].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg10_0_rowArr_4_4[3] = arg10_0_tmpConverter_3_4_4_0.f;
                ops::hls::DataConv arg10_1_tmpConverter_3_4_4_0;
                arg10_1_tmpConverter_3_4_4_0.i = arg10_widenStencilValues[11].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg10_1_rowArr_4_4[3] = arg10_1_tmpConverter_3_4_4_0.f;
                //diff = 1
                // access_idx = 5
                ops::hls::DataConv arg10_0_tmpConverter_5_4_4_0;
                arg10_0_tmpConverter_5_4_4_0.i = arg10_widenStencilValues[13].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg10_0_rowArr_4_4[5] = arg10_0_tmpConverter_5_4_4_0.f;
                ops::hls::DataConv arg10_1_tmpConverter_5_4_4_0;
                arg10_1_tmpConverter_5_4_4_0.i = arg10_widenStencilValues[13].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg10_1_rowArr_4_4[5] = arg10_1_tmpConverter_5_4_4_0.f;
                //diff = 2
                // access_idx = 6
                ops::hls::DataConv arg10_0_tmpConverter_6_4_4_0;
                arg10_0_tmpConverter_6_4_4_0.i = arg10_widenStencilValues[14].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg10_0_rowArr_4_4[6] = arg10_0_tmpConverter_6_4_4_0.f;
                ops::hls::DataConv arg10_1_tmpConverter_6_4_4_0;
                arg10_1_tmpConverter_6_4_4_0.i = arg10_widenStencilValues[14].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg10_1_rowArr_4_4[6] = arg10_1_tmpConverter_6_4_4_0.f;
                //diff = 3
                // access_idx = 7
                ops::hls::DataConv arg10_0_tmpConverter_7_4_4_0;
                arg10_0_tmpConverter_7_4_4_0.i = arg10_widenStencilValues[15].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg10_0_rowArr_4_4[7] = arg10_0_tmpConverter_7_4_4_0.f;
                ops::hls::DataConv arg10_1_tmpConverter_7_4_4_0;
                arg10_1_tmpConverter_7_4_4_0.i = arg10_widenStencilValues[15].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg10_1_rowArr_4_4[7] = arg10_1_tmpConverter_7_4_4_0.f;
                //diff = 4
                // access_idx = 8
                ops::hls::DataConv arg10_0_tmpConverter_8_4_4_0;
                arg10_0_tmpConverter_8_4_4_0.i = arg10_widenStencilValues[16].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg10_0_rowArr_4_4[8] = arg10_0_tmpConverter_8_4_4_0.f;
                ops::hls::DataConv arg10_1_tmpConverter_8_4_4_0;
                arg10_1_tmpConverter_8_4_4_0.i = arg10_widenStencilValues[16].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg10_1_rowArr_4_4[8] = arg10_1_tmpConverter_8_4_4_0.f;
                //diff = -4
                // access_idx = 0
                ops::hls::DataConv arg11_0_tmpConverter_0_4_4_0;
                arg11_0_tmpConverter_0_4_4_0.i = arg11_widenStencilValues[8].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg11_0_rowArr_4_4[0] = arg11_0_tmpConverter_0_4_4_0.f;
                ops::hls::DataConv arg11_1_tmpConverter_0_4_4_0;
                arg11_1_tmpConverter_0_4_4_0.i = arg11_widenStencilValues[8].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg11_1_rowArr_4_4[0] = arg11_1_tmpConverter_0_4_4_0.f;
                //diff = -3
                // access_idx = 1
                ops::hls::DataConv arg11_0_tmpConverter_1_4_4_0;
                arg11_0_tmpConverter_1_4_4_0.i = arg11_widenStencilValues[9].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg11_0_rowArr_4_4[1] = arg11_0_tmpConverter_1_4_4_0.f;
                ops::hls::DataConv arg11_1_tmpConverter_1_4_4_0;
                arg11_1_tmpConverter_1_4_4_0.i = arg11_widenStencilValues[9].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg11_1_rowArr_4_4[1] = arg11_1_tmpConverter_1_4_4_0.f;
                //diff = -2
                // access_idx = 2
                ops::hls::DataConv arg11_0_tmpConverter_2_4_4_0;
                arg11_0_tmpConverter_2_4_4_0.i = arg11_widenStencilValues[10].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg11_0_rowArr_4_4[2] = arg11_0_tmpConverter_2_4_4_0.f;
                ops::hls::DataConv arg11_1_tmpConverter_2_4_4_0;
                arg11_1_tmpConverter_2_4_4_0.i = arg11_widenStencilValues[10].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg11_1_rowArr_4_4[2] = arg11_1_tmpConverter_2_4_4_0.f;
                //diff = -1
                // access_idx = 3
                ops::hls::DataConv arg11_0_tmpConverter_3_4_4_0;
                arg11_0_tmpConverter_3_4_4_0.i = arg11_widenStencilValues[11].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg11_0_rowArr_4_4[3] = arg11_0_tmpConverter_3_4_4_0.f;
                ops::hls::DataConv arg11_1_tmpConverter_3_4_4_0;
                arg11_1_tmpConverter_3_4_4_0.i = arg11_widenStencilValues[11].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg11_1_rowArr_4_4[3] = arg11_1_tmpConverter_3_4_4_0.f;
                //diff = 1
                // access_idx = 5
                ops::hls::DataConv arg11_0_tmpConverter_5_4_4_0;
                arg11_0_tmpConverter_5_4_4_0.i = arg11_widenStencilValues[13].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg11_0_rowArr_4_4[5] = arg11_0_tmpConverter_5_4_4_0.f;
                ops::hls::DataConv arg11_1_tmpConverter_5_4_4_0;
                arg11_1_tmpConverter_5_4_4_0.i = arg11_widenStencilValues[13].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg11_1_rowArr_4_4[5] = arg11_1_tmpConverter_5_4_4_0.f;
                //diff = 2
                // access_idx = 6
                ops::hls::DataConv arg11_0_tmpConverter_6_4_4_0;
                arg11_0_tmpConverter_6_4_4_0.i = arg11_widenStencilValues[14].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg11_0_rowArr_4_4[6] = arg11_0_tmpConverter_6_4_4_0.f;
                ops::hls::DataConv arg11_1_tmpConverter_6_4_4_0;
                arg11_1_tmpConverter_6_4_4_0.i = arg11_widenStencilValues[14].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg11_1_rowArr_4_4[6] = arg11_1_tmpConverter_6_4_4_0.f;
                //diff = 3
                // access_idx = 7
                ops::hls::DataConv arg11_0_tmpConverter_7_4_4_0;
                arg11_0_tmpConverter_7_4_4_0.i = arg11_widenStencilValues[15].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg11_0_rowArr_4_4[7] = arg11_0_tmpConverter_7_4_4_0.f;
                ops::hls::DataConv arg11_1_tmpConverter_7_4_4_0;
                arg11_1_tmpConverter_7_4_4_0.i = arg11_widenStencilValues[15].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg11_1_rowArr_4_4[7] = arg11_1_tmpConverter_7_4_4_0.f;
                //diff = 4
                // access_idx = 8
                ops::hls::DataConv arg11_0_tmpConverter_8_4_4_0;
                arg11_0_tmpConverter_8_4_4_0.i = arg11_widenStencilValues[16].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg11_0_rowArr_4_4[8] = arg11_0_tmpConverter_8_4_4_0.f;
                ops::hls::DataConv arg11_1_tmpConverter_8_4_4_0;
                arg11_1_tmpConverter_8_4_4_0.i = arg11_widenStencilValues[16].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg11_1_rowArr_4_4[8] = arg11_1_tmpConverter_8_4_4_0.f;
                //diff = -4
                // access_idx = 0
                ops::hls::DataConv arg12_0_tmpConverter_0_4_4_0;
                arg12_0_tmpConverter_0_4_4_0.i = arg12_widenStencilValues[8].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg12_0_rowArr_4_4[0] = arg12_0_tmpConverter_0_4_4_0.f;
                ops::hls::DataConv arg12_1_tmpConverter_0_4_4_0;
                arg12_1_tmpConverter_0_4_4_0.i = arg12_widenStencilValues[8].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg12_1_rowArr_4_4[0] = arg12_1_tmpConverter_0_4_4_0.f;
                //diff = -3
                // access_idx = 1
                ops::hls::DataConv arg12_0_tmpConverter_1_4_4_0;
                arg12_0_tmpConverter_1_4_4_0.i = arg12_widenStencilValues[9].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg12_0_rowArr_4_4[1] = arg12_0_tmpConverter_1_4_4_0.f;
                ops::hls::DataConv arg12_1_tmpConverter_1_4_4_0;
                arg12_1_tmpConverter_1_4_4_0.i = arg12_widenStencilValues[9].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg12_1_rowArr_4_4[1] = arg12_1_tmpConverter_1_4_4_0.f;
                //diff = -2
                // access_idx = 2
                ops::hls::DataConv arg12_0_tmpConverter_2_4_4_0;
                arg12_0_tmpConverter_2_4_4_0.i = arg12_widenStencilValues[10].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg12_0_rowArr_4_4[2] = arg12_0_tmpConverter_2_4_4_0.f;
                ops::hls::DataConv arg12_1_tmpConverter_2_4_4_0;
                arg12_1_tmpConverter_2_4_4_0.i = arg12_widenStencilValues[10].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg12_1_rowArr_4_4[2] = arg12_1_tmpConverter_2_4_4_0.f;
                //diff = -1
                // access_idx = 3
                ops::hls::DataConv arg12_0_tmpConverter_3_4_4_0;
                arg12_0_tmpConverter_3_4_4_0.i = arg12_widenStencilValues[11].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg12_0_rowArr_4_4[3] = arg12_0_tmpConverter_3_4_4_0.f;
                ops::hls::DataConv arg12_1_tmpConverter_3_4_4_0;
                arg12_1_tmpConverter_3_4_4_0.i = arg12_widenStencilValues[11].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg12_1_rowArr_4_4[3] = arg12_1_tmpConverter_3_4_4_0.f;
                //diff = 1
                // access_idx = 5
                ops::hls::DataConv arg12_0_tmpConverter_5_4_4_0;
                arg12_0_tmpConverter_5_4_4_0.i = arg12_widenStencilValues[13].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg12_0_rowArr_4_4[5] = arg12_0_tmpConverter_5_4_4_0.f;
                ops::hls::DataConv arg12_1_tmpConverter_5_4_4_0;
                arg12_1_tmpConverter_5_4_4_0.i = arg12_widenStencilValues[13].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg12_1_rowArr_4_4[5] = arg12_1_tmpConverter_5_4_4_0.f;
                //diff = 2
                // access_idx = 6
                ops::hls::DataConv arg12_0_tmpConverter_6_4_4_0;
                arg12_0_tmpConverter_6_4_4_0.i = arg12_widenStencilValues[14].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg12_0_rowArr_4_4[6] = arg12_0_tmpConverter_6_4_4_0.f;
                ops::hls::DataConv arg12_1_tmpConverter_6_4_4_0;
                arg12_1_tmpConverter_6_4_4_0.i = arg12_widenStencilValues[14].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg12_1_rowArr_4_4[6] = arg12_1_tmpConverter_6_4_4_0.f;
                //diff = 3
                // access_idx = 7
                ops::hls::DataConv arg12_0_tmpConverter_7_4_4_0;
                arg12_0_tmpConverter_7_4_4_0.i = arg12_widenStencilValues[15].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg12_0_rowArr_4_4[7] = arg12_0_tmpConverter_7_4_4_0.f;
                ops::hls::DataConv arg12_1_tmpConverter_7_4_4_0;
                arg12_1_tmpConverter_7_4_4_0.i = arg12_widenStencilValues[15].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg12_1_rowArr_4_4[7] = arg12_1_tmpConverter_7_4_4_0.f;
                //diff = 4
                // access_idx = 8
                ops::hls::DataConv arg12_0_tmpConverter_8_4_4_0;
                arg12_0_tmpConverter_8_4_4_0.i = arg12_widenStencilValues[16].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg12_0_rowArr_4_4[8] = arg12_0_tmpConverter_8_4_4_0.f;
                ops::hls::DataConv arg12_1_tmpConverter_8_4_4_0;
                arg12_1_tmpConverter_8_4_4_0.i = arg12_widenStencilValues[16].range(s_datatype_size * (1 + 1) - 1, s_datatype_size * 1);
                arg12_1_rowArr_4_4[8] = arg12_1_tmpConverter_8_4_4_0.f;
            }

            process: for (unsigned short x = 0; x < vector_factor; x++)
            {
#pragma HLS UNROLL factor=vector_factor
                short index = (i << shift_bits) + x;
                bool neg_cond = register_it(             
                        (index < stencilConfig.lower_limit[0]) 
                        || (index >= stencilConfig.upper_limit[0])
                        || (j < stencilConfig.lower_limit[1]) 
                        || (j >= stencilConfig.upper_limit[1])
                        || (k < stencilConfig.lower_limit[2]) 
                        || (k >= stencilConfig.upper_limit[2])
                );

#ifdef DEBUG_LOG
                printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] index=(%d, %d, %d), lowerbound=(%d, %d, %d), upperbound=(%d, %d, %d), neg_cond=%d\n", m_PEId, index, j, k,
                            stencilConfig.lower_limit[0], stencilConfig.lower_limit[1], stencilConfig.lower_limit[2], 
                            stencilConfig.upper_limit[0], stencilConfig.upper_limit[1], stencilConfig.upper_limit[2], neg_cond);

#endif

                stencil_type arg7_0_result;
                stencil_type arg7_1_result;

                stencil_type arg8_0_result;
                stencil_type arg8_1_result;

                stencil_type arg9_0_result;
                stencil_type arg9_1_result;

                short idx[] = {index, j, k};

                kernel_fd3d_pml_kernel2_core(
                        &disps0,
                        &disps1,
                        &disps2,
                        idx,
                        &dt,
                        &scale1_der2_2,
                        &scale2_der2_2,
                        arg0_0_rowArr_4_0[x + 4],
                        arg0_1_rowArr_4_0[x + 4],
                        arg0_0_rowArr_4_1[x + 4],
                        arg0_1_rowArr_4_1[x + 4],
                        arg0_0_rowArr_4_2[x + 4],
                        arg0_1_rowArr_4_2[x + 4],
                        arg0_0_rowArr_4_3[x + 4],
                        arg0_1_rowArr_4_3[x + 4],
                        arg0_0_rowArr_0_4[x + 4],
                        arg0_1_rowArr_0_4[x + 4],
                        arg0_0_rowArr_1_4[x + 4],
                        arg0_1_rowArr_1_4[x + 4],
                        arg0_0_rowArr_2_4[x + 4],
                        arg0_1_rowArr_2_4[x + 4],
                        arg0_0_rowArr_3_4[x + 4],
                        arg0_1_rowArr_3_4[x + 4],
                        arg0_0_rowArr_4_4[x + 0],
                        arg0_1_rowArr_4_4[x + 0],
                        arg0_0_rowArr_4_4[x + 1],
                        arg0_1_rowArr_4_4[x + 1],
                        arg0_0_rowArr_4_4[x + 2],
                        arg0_1_rowArr_4_4[x + 2],
                        arg0_0_rowArr_4_4[x + 3],
                        arg0_1_rowArr_4_4[x + 3],
                        arg0_0_rowArr_4_4[x + 4],
                        arg0_1_rowArr_4_4[x + 4],
                        arg0_0_rowArr_4_4[x + 5],
                        arg0_1_rowArr_4_4[x + 5],
                        arg0_0_rowArr_4_4[x + 6],
                        arg0_1_rowArr_4_4[x + 6],
                        arg0_0_rowArr_4_4[x + 7],
                        arg0_1_rowArr_4_4[x + 7],
                        arg0_0_rowArr_4_4[x + 8],
                        arg0_1_rowArr_4_4[x + 8],
                        arg0_0_rowArr_5_4[x + 4],
                        arg0_1_rowArr_5_4[x + 4],
                        arg0_0_rowArr_6_4[x + 4],
                        arg0_1_rowArr_6_4[x + 4],
                        arg0_0_rowArr_7_4[x + 4],
                        arg0_1_rowArr_7_4[x + 4],
                        arg0_0_rowArr_8_4[x + 4],
                        arg0_1_rowArr_8_4[x + 4],
                        arg0_0_rowArr_4_5[x + 4],
                        arg0_1_rowArr_4_5[x + 4],
                        arg0_0_rowArr_4_6[x + 4],
                        arg0_1_rowArr_4_6[x + 4],
                        arg0_0_rowArr_4_7[x + 4],
                        arg0_1_rowArr_4_7[x + 4],
                        arg0_0_rowArr_4_8[x + 4],
                        arg0_1_rowArr_4_8[x + 4],
                        arg1_0_rowArr_4_0[x + 4],
                        arg1_1_rowArr_4_0[x + 4],
                        arg1_0_rowArr_4_1[x + 4],
                        arg1_1_rowArr_4_1[x + 4],
                        arg1_0_rowArr_4_2[x + 4],
                        arg1_1_rowArr_4_2[x + 4],
                        arg1_0_rowArr_4_3[x + 4],
                        arg1_1_rowArr_4_3[x + 4],
                        arg1_0_rowArr_0_4[x + 4],
                        arg1_1_rowArr_0_4[x + 4],
                        arg1_0_rowArr_1_4[x + 4],
                        arg1_1_rowArr_1_4[x + 4],
                        arg1_0_rowArr_2_4[x + 4],
                        arg1_1_rowArr_2_4[x + 4],
                        arg1_0_rowArr_3_4[x + 4],
                        arg1_1_rowArr_3_4[x + 4],
                        arg1_0_rowArr_4_4[x + 0],
                        arg1_1_rowArr_4_4[x + 0],
                        arg1_0_rowArr_4_4[x + 1],
                        arg1_1_rowArr_4_4[x + 1],
                        arg1_0_rowArr_4_4[x + 2],
                        arg1_1_rowArr_4_4[x + 2],
                        arg1_0_rowArr_4_4[x + 3],
                        arg1_1_rowArr_4_4[x + 3],
                        arg1_0_rowArr_4_4[x + 4],
                        arg1_1_rowArr_4_4[x + 4],
                        arg1_0_rowArr_4_4[x + 5],
                        arg1_1_rowArr_4_4[x + 5],
                        arg1_0_rowArr_4_4[x + 6],
                        arg1_1_rowArr_4_4[x + 6],
                        arg1_0_rowArr_4_4[x + 7],
                        arg1_1_rowArr_4_4[x + 7],
                        arg1_0_rowArr_4_4[x + 8],
                        arg1_1_rowArr_4_4[x + 8],
                        arg1_0_rowArr_5_4[x + 4],
                        arg1_1_rowArr_5_4[x + 4],
                        arg1_0_rowArr_6_4[x + 4],
                        arg1_1_rowArr_6_4[x + 4],
                        arg1_0_rowArr_7_4[x + 4],
                        arg1_1_rowArr_7_4[x + 4],
                        arg1_0_rowArr_8_4[x + 4],
                        arg1_1_rowArr_8_4[x + 4],
                        arg1_0_rowArr_4_5[x + 4],
                        arg1_1_rowArr_4_5[x + 4],
                        arg1_0_rowArr_4_6[x + 4],
                        arg1_1_rowArr_4_6[x + 4],
                        arg1_0_rowArr_4_7[x + 4],
                        arg1_1_rowArr_4_7[x + 4],
                        arg1_0_rowArr_4_8[x + 4],
                        arg1_1_rowArr_4_8[x + 4],
                        arg2_0_rowArr_4_0[x + 4],
                        arg2_1_rowArr_4_0[x + 4],
                        arg2_0_rowArr_4_1[x + 4],
                        arg2_1_rowArr_4_1[x + 4],
                        arg2_0_rowArr_4_2[x + 4],
                        arg2_1_rowArr_4_2[x + 4],
                        arg2_0_rowArr_4_3[x + 4],
                        arg2_1_rowArr_4_3[x + 4],
                        arg2_0_rowArr_0_4[x + 4],
                        arg2_1_rowArr_0_4[x + 4],
                        arg2_0_rowArr_1_4[x + 4],
                        arg2_1_rowArr_1_4[x + 4],
                        arg2_0_rowArr_2_4[x + 4],
                        arg2_1_rowArr_2_4[x + 4],
                        arg2_0_rowArr_3_4[x + 4],
                        arg2_1_rowArr_3_4[x + 4],
                        arg2_0_rowArr_4_4[x + 0],
                        arg2_1_rowArr_4_4[x + 0],
                        arg2_0_rowArr_4_4[x + 1],
                        arg2_1_rowArr_4_4[x + 1],
                        arg2_0_rowArr_4_4[x + 2],
                        arg2_1_rowArr_4_4[x + 2],
                        arg2_0_rowArr_4_4[x + 3],
                        arg2_1_rowArr_4_4[x + 3],
                        arg2_0_rowArr_4_4[x + 4],
                        arg2_1_rowArr_4_4[x + 4],
                        arg2_0_rowArr_4_4[x + 5],
                        arg2_1_rowArr_4_4[x + 5],
                        arg2_0_rowArr_4_4[x + 6],
                        arg2_1_rowArr_4_4[x + 6],
                        arg2_0_rowArr_4_4[x + 7],
                        arg2_1_rowArr_4_4[x + 7],
                        arg2_0_rowArr_4_4[x + 8],
                        arg2_1_rowArr_4_4[x + 8],
                        arg2_0_rowArr_5_4[x + 4],
                        arg2_1_rowArr_5_4[x + 4],
                        arg2_0_rowArr_6_4[x + 4],
                        arg2_1_rowArr_6_4[x + 4],
                        arg2_0_rowArr_7_4[x + 4],
                        arg2_1_rowArr_7_4[x + 4],
                        arg2_0_rowArr_8_4[x + 4],
                        arg2_1_rowArr_8_4[x + 4],
                        arg2_0_rowArr_4_5[x + 4],
                        arg2_1_rowArr_4_5[x + 4],
                        arg2_0_rowArr_4_6[x + 4],
                        arg2_1_rowArr_4_6[x + 4],
                        arg2_0_rowArr_4_7[x + 4],
                        arg2_1_rowArr_4_7[x + 4],
                        arg2_0_rowArr_4_8[x + 4],
                        arg2_1_rowArr_4_8[x + 4],
                        arg3_0_rowArr_4_0[x + 4],
                        arg3_1_rowArr_4_0[x + 4],
                        arg3_0_rowArr_4_1[x + 4],
                        arg3_1_rowArr_4_1[x + 4],
                        arg3_0_rowArr_4_2[x + 4],
                        arg3_1_rowArr_4_2[x + 4],
                        arg3_0_rowArr_4_3[x + 4],
                        arg3_1_rowArr_4_3[x + 4],
                        arg3_0_rowArr_0_4[x + 4],
                        arg3_1_rowArr_0_4[x + 4],
                        arg3_0_rowArr_1_4[x + 4],
                        arg3_1_rowArr_1_4[x + 4],
                        arg3_0_rowArr_2_4[x + 4],
                        arg3_1_rowArr_2_4[x + 4],
                        arg3_0_rowArr_3_4[x + 4],
                        arg3_1_rowArr_3_4[x + 4],
                        arg3_0_rowArr_4_4[x + 0],
                        arg3_1_rowArr_4_4[x + 0],
                        arg3_0_rowArr_4_4[x + 1],
                        arg3_1_rowArr_4_4[x + 1],
                        arg3_0_rowArr_4_4[x + 2],
                        arg3_1_rowArr_4_4[x + 2],
                        arg3_0_rowArr_4_4[x + 3],
                        arg3_1_rowArr_4_4[x + 3],
                        arg3_0_rowArr_4_4[x + 4],
                        arg3_1_rowArr_4_4[x + 4],
                        arg3_0_rowArr_4_4[x + 5],
                        arg3_1_rowArr_4_4[x + 5],
                        arg3_0_rowArr_4_4[x + 6],
                        arg3_1_rowArr_4_4[x + 6],
                        arg3_0_rowArr_4_4[x + 7],
                        arg3_1_rowArr_4_4[x + 7],
                        arg3_0_rowArr_4_4[x + 8],
                        arg3_1_rowArr_4_4[x + 8],
                        arg3_0_rowArr_5_4[x + 4],
                        arg3_1_rowArr_5_4[x + 4],
                        arg3_0_rowArr_6_4[x + 4],
                        arg3_1_rowArr_6_4[x + 4],
                        arg3_0_rowArr_7_4[x + 4],
                        arg3_1_rowArr_7_4[x + 4],
                        arg3_0_rowArr_8_4[x + 4],
                        arg3_1_rowArr_8_4[x + 4],
                        arg3_0_rowArr_4_5[x + 4],
                        arg3_1_rowArr_4_5[x + 4],
                        arg3_0_rowArr_4_6[x + 4],
                        arg3_1_rowArr_4_6[x + 4],
                        arg3_0_rowArr_4_7[x + 4],
                        arg3_1_rowArr_4_7[x + 4],
                        arg3_0_rowArr_4_8[x + 4],
                        arg3_1_rowArr_4_8[x + 4],
                        arg4_0_rowArr_4_0[x + 4],
                        arg4_1_rowArr_4_0[x + 4],
                        arg4_0_rowArr_4_1[x + 4],
                        arg4_1_rowArr_4_1[x + 4],
                        arg4_0_rowArr_4_2[x + 4],
                        arg4_1_rowArr_4_2[x + 4],
                        arg4_0_rowArr_4_3[x + 4],
                        arg4_1_rowArr_4_3[x + 4],
                        arg4_0_rowArr_0_4[x + 4],
                        arg4_1_rowArr_0_4[x + 4],
                        arg4_0_rowArr_1_4[x + 4],
                        arg4_1_rowArr_1_4[x + 4],
                        arg4_0_rowArr_2_4[x + 4],
                        arg4_1_rowArr_2_4[x + 4],
                        arg4_0_rowArr_3_4[x + 4],
                        arg4_1_rowArr_3_4[x + 4],
                        arg4_0_rowArr_4_4[x + 0],
                        arg4_1_rowArr_4_4[x + 0],
                        arg4_0_rowArr_4_4[x + 1],
                        arg4_1_rowArr_4_4[x + 1],
                        arg4_0_rowArr_4_4[x + 2],
                        arg4_1_rowArr_4_4[x + 2],
                        arg4_0_rowArr_4_4[x + 3],
                        arg4_1_rowArr_4_4[x + 3],
                        arg4_0_rowArr_4_4[x + 4],
                        arg4_1_rowArr_4_4[x + 4],
                        arg4_0_rowArr_4_4[x + 5],
                        arg4_1_rowArr_4_4[x + 5],
                        arg4_0_rowArr_4_4[x + 6],
                        arg4_1_rowArr_4_4[x + 6],
                        arg4_0_rowArr_4_4[x + 7],
                        arg4_1_rowArr_4_4[x + 7],
                        arg4_0_rowArr_4_4[x + 8],
                        arg4_1_rowArr_4_4[x + 8],
                        arg4_0_rowArr_5_4[x + 4],
                        arg4_1_rowArr_5_4[x + 4],
                        arg4_0_rowArr_6_4[x + 4],
                        arg4_1_rowArr_6_4[x + 4],
                        arg4_0_rowArr_7_4[x + 4],
                        arg4_1_rowArr_7_4[x + 4],
                        arg4_0_rowArr_8_4[x + 4],
                        arg4_1_rowArr_8_4[x + 4],
                        arg4_0_rowArr_4_5[x + 4],
                        arg4_1_rowArr_4_5[x + 4],
                        arg4_0_rowArr_4_6[x + 4],
                        arg4_1_rowArr_4_6[x + 4],
                        arg4_0_rowArr_4_7[x + 4],
                        arg4_1_rowArr_4_7[x + 4],
                        arg4_0_rowArr_4_8[x + 4],
                        arg4_1_rowArr_4_8[x + 4],
                        arg5_0_rowArr_4_0[x + 4],
                        arg5_1_rowArr_4_0[x + 4],
                        arg5_0_rowArr_4_1[x + 4],
                        arg5_1_rowArr_4_1[x + 4],
                        arg5_0_rowArr_4_2[x + 4],
                        arg5_1_rowArr_4_2[x + 4],
                        arg5_0_rowArr_4_3[x + 4],
                        arg5_1_rowArr_4_3[x + 4],
                        arg5_0_rowArr_0_4[x + 4],
                        arg5_1_rowArr_0_4[x + 4],
                        arg5_0_rowArr_1_4[x + 4],
                        arg5_1_rowArr_1_4[x + 4],
                        arg5_0_rowArr_2_4[x + 4],
                        arg5_1_rowArr_2_4[x + 4],
                        arg5_0_rowArr_3_4[x + 4],
                        arg5_1_rowArr_3_4[x + 4],
                        arg5_0_rowArr_4_4[x + 0],
                        arg5_1_rowArr_4_4[x + 0],
                        arg5_0_rowArr_4_4[x + 1],
                        arg5_1_rowArr_4_4[x + 1],
                        arg5_0_rowArr_4_4[x + 2],
                        arg5_1_rowArr_4_4[x + 2],
                        arg5_0_rowArr_4_4[x + 3],
                        arg5_1_rowArr_4_4[x + 3],
                        arg5_0_rowArr_4_4[x + 4],
                        arg5_1_rowArr_4_4[x + 4],
                        arg5_0_rowArr_4_4[x + 5],
                        arg5_1_rowArr_4_4[x + 5],
                        arg5_0_rowArr_4_4[x + 6],
                        arg5_1_rowArr_4_4[x + 6],
                        arg5_0_rowArr_4_4[x + 7],
                        arg5_1_rowArr_4_4[x + 7],
                        arg5_0_rowArr_4_4[x + 8],
                        arg5_1_rowArr_4_4[x + 8],
                        arg5_0_rowArr_5_4[x + 4],
                        arg5_1_rowArr_5_4[x + 4],
                        arg5_0_rowArr_6_4[x + 4],
                        arg5_1_rowArr_6_4[x + 4],
                        arg5_0_rowArr_7_4[x + 4],
                        arg5_1_rowArr_7_4[x + 4],
                        arg5_0_rowArr_8_4[x + 4],
                        arg5_1_rowArr_8_4[x + 4],
                        arg5_0_rowArr_4_5[x + 4],
                        arg5_1_rowArr_4_5[x + 4],
                        arg5_0_rowArr_4_6[x + 4],
                        arg5_1_rowArr_4_6[x + 4],
                        arg5_0_rowArr_4_7[x + 4],
                        arg5_1_rowArr_4_7[x + 4],
                        arg5_0_rowArr_4_8[x + 4],
                        arg5_1_rowArr_4_8[x + 4],
                        arg6_0_rowArr_4_0[x + 4],
                        arg6_1_rowArr_4_0[x + 4],
                        arg6_0_rowArr_4_1[x + 4],
                        arg6_1_rowArr_4_1[x + 4],
                        arg6_0_rowArr_4_2[x + 4],
                        arg6_1_rowArr_4_2[x + 4],
                        arg6_0_rowArr_4_3[x + 4],
                        arg6_1_rowArr_4_3[x + 4],
                        arg6_0_rowArr_0_4[x + 4],
                        arg6_1_rowArr_0_4[x + 4],
                        arg6_0_rowArr_1_4[x + 4],
                        arg6_1_rowArr_1_4[x + 4],
                        arg6_0_rowArr_2_4[x + 4],
                        arg6_1_rowArr_2_4[x + 4],
                        arg6_0_rowArr_3_4[x + 4],
                        arg6_1_rowArr_3_4[x + 4],
                        arg6_0_rowArr_4_4[x + 0],
                        arg6_1_rowArr_4_4[x + 0],
                        arg6_0_rowArr_4_4[x + 1],
                        arg6_1_rowArr_4_4[x + 1],
                        arg6_0_rowArr_4_4[x + 2],
                        arg6_1_rowArr_4_4[x + 2],
                        arg6_0_rowArr_4_4[x + 3],
                        arg6_1_rowArr_4_4[x + 3],
                        arg6_0_rowArr_4_4[x + 4],
                        arg6_1_rowArr_4_4[x + 4],
                        arg6_0_rowArr_4_4[x + 5],
                        arg6_1_rowArr_4_4[x + 5],
                        arg6_0_rowArr_4_4[x + 6],
                        arg6_1_rowArr_4_4[x + 6],
                        arg6_0_rowArr_4_4[x + 7],
                        arg6_1_rowArr_4_4[x + 7],
                        arg6_0_rowArr_4_4[x + 8],
                        arg6_1_rowArr_4_4[x + 8],
                        arg6_0_rowArr_5_4[x + 4],
                        arg6_1_rowArr_5_4[x + 4],
                        arg6_0_rowArr_6_4[x + 4],
                        arg6_1_rowArr_6_4[x + 4],
                        arg6_0_rowArr_7_4[x + 4],
                        arg6_1_rowArr_7_4[x + 4],
                        arg6_0_rowArr_8_4[x + 4],
                        arg6_1_rowArr_8_4[x + 4],
                        arg6_0_rowArr_4_5[x + 4],
                        arg6_1_rowArr_4_5[x + 4],
                        arg6_0_rowArr_4_6[x + 4],
                        arg6_1_rowArr_4_6[x + 4],
                        arg6_0_rowArr_4_7[x + 4],
                        arg6_1_rowArr_4_7[x + 4],
                        arg6_0_rowArr_4_8[x + 4],
                        arg6_1_rowArr_4_8[x + 4],
                        arg7_0_result,
                        arg7_1_result,
                        arg8_0_result,
                        arg8_1_result,
                        arg9_0_result,
                        arg9_1_result,
                        arg10_0_rowArr_4_0[x + 4],
                        arg10_1_rowArr_4_0[x + 4],
                        arg10_0_rowArr_4_1[x + 4],
                        arg10_1_rowArr_4_1[x + 4],
                        arg10_0_rowArr_4_2[x + 4],
                        arg10_1_rowArr_4_2[x + 4],
                        arg10_0_rowArr_4_3[x + 4],
                        arg10_1_rowArr_4_3[x + 4],
                        arg10_0_rowArr_0_4[x + 4],
                        arg10_1_rowArr_0_4[x + 4],
                        arg10_0_rowArr_1_4[x + 4],
                        arg10_1_rowArr_1_4[x + 4],
                        arg10_0_rowArr_2_4[x + 4],
                        arg10_1_rowArr_2_4[x + 4],
                        arg10_0_rowArr_3_4[x + 4],
                        arg10_1_rowArr_3_4[x + 4],
                        arg10_0_rowArr_4_4[x + 0],
                        arg10_1_rowArr_4_4[x + 0],
                        arg10_0_rowArr_4_4[x + 1],
                        arg10_1_rowArr_4_4[x + 1],
                        arg10_0_rowArr_4_4[x + 2],
                        arg10_1_rowArr_4_4[x + 2],
                        arg10_0_rowArr_4_4[x + 3],
                        arg10_1_rowArr_4_4[x + 3],
                        arg10_0_rowArr_4_4[x + 4],
                        arg10_1_rowArr_4_4[x + 4],
                        arg10_0_rowArr_4_4[x + 5],
                        arg10_1_rowArr_4_4[x + 5],
                        arg10_0_rowArr_4_4[x + 6],
                        arg10_1_rowArr_4_4[x + 6],
                        arg10_0_rowArr_4_4[x + 7],
                        arg10_1_rowArr_4_4[x + 7],
                        arg10_0_rowArr_4_4[x + 8],
                        arg10_1_rowArr_4_4[x + 8],
                        arg10_0_rowArr_5_4[x + 4],
                        arg10_1_rowArr_5_4[x + 4],
                        arg10_0_rowArr_6_4[x + 4],
                        arg10_1_rowArr_6_4[x + 4],
                        arg10_0_rowArr_7_4[x + 4],
                        arg10_1_rowArr_7_4[x + 4],
                        arg10_0_rowArr_8_4[x + 4],
                        arg10_1_rowArr_8_4[x + 4],
                        arg10_0_rowArr_4_5[x + 4],
                        arg10_1_rowArr_4_5[x + 4],
                        arg10_0_rowArr_4_6[x + 4],
                        arg10_1_rowArr_4_6[x + 4],
                        arg10_0_rowArr_4_7[x + 4],
                        arg10_1_rowArr_4_7[x + 4],
                        arg10_0_rowArr_4_8[x + 4],
                        arg10_1_rowArr_4_8[x + 4],
                        arg11_0_rowArr_4_0[x + 4],
                        arg11_1_rowArr_4_0[x + 4],
                        arg11_0_rowArr_4_1[x + 4],
                        arg11_1_rowArr_4_1[x + 4],
                        arg11_0_rowArr_4_2[x + 4],
                        arg11_1_rowArr_4_2[x + 4],
                        arg11_0_rowArr_4_3[x + 4],
                        arg11_1_rowArr_4_3[x + 4],
                        arg11_0_rowArr_0_4[x + 4],
                        arg11_1_rowArr_0_4[x + 4],
                        arg11_0_rowArr_1_4[x + 4],
                        arg11_1_rowArr_1_4[x + 4],
                        arg11_0_rowArr_2_4[x + 4],
                        arg11_1_rowArr_2_4[x + 4],
                        arg11_0_rowArr_3_4[x + 4],
                        arg11_1_rowArr_3_4[x + 4],
                        arg11_0_rowArr_4_4[x + 0],
                        arg11_1_rowArr_4_4[x + 0],
                        arg11_0_rowArr_4_4[x + 1],
                        arg11_1_rowArr_4_4[x + 1],
                        arg11_0_rowArr_4_4[x + 2],
                        arg11_1_rowArr_4_4[x + 2],
                        arg11_0_rowArr_4_4[x + 3],
                        arg11_1_rowArr_4_4[x + 3],
                        arg11_0_rowArr_4_4[x + 4],
                        arg11_1_rowArr_4_4[x + 4],
                        arg11_0_rowArr_4_4[x + 5],
                        arg11_1_rowArr_4_4[x + 5],
                        arg11_0_rowArr_4_4[x + 6],
                        arg11_1_rowArr_4_4[x + 6],
                        arg11_0_rowArr_4_4[x + 7],
                        arg11_1_rowArr_4_4[x + 7],
                        arg11_0_rowArr_4_4[x + 8],
                        arg11_1_rowArr_4_4[x + 8],
                        arg11_0_rowArr_5_4[x + 4],
                        arg11_1_rowArr_5_4[x + 4],
                        arg11_0_rowArr_6_4[x + 4],
                        arg11_1_rowArr_6_4[x + 4],
                        arg11_0_rowArr_7_4[x + 4],
                        arg11_1_rowArr_7_4[x + 4],
                        arg11_0_rowArr_8_4[x + 4],
                        arg11_1_rowArr_8_4[x + 4],
                        arg11_0_rowArr_4_5[x + 4],
                        arg11_1_rowArr_4_5[x + 4],
                        arg11_0_rowArr_4_6[x + 4],
                        arg11_1_rowArr_4_6[x + 4],
                        arg11_0_rowArr_4_7[x + 4],
                        arg11_1_rowArr_4_7[x + 4],
                        arg11_0_rowArr_4_8[x + 4],
                        arg11_1_rowArr_4_8[x + 4],
                        arg12_0_rowArr_4_0[x + 4],
                        arg12_1_rowArr_4_0[x + 4],
                        arg12_0_rowArr_4_1[x + 4],
                        arg12_1_rowArr_4_1[x + 4],
                        arg12_0_rowArr_4_2[x + 4],
                        arg12_1_rowArr_4_2[x + 4],
                        arg12_0_rowArr_4_3[x + 4],
                        arg12_1_rowArr_4_3[x + 4],
                        arg12_0_rowArr_0_4[x + 4],
                        arg12_1_rowArr_0_4[x + 4],
                        arg12_0_rowArr_1_4[x + 4],
                        arg12_1_rowArr_1_4[x + 4],
                        arg12_0_rowArr_2_4[x + 4],
                        arg12_1_rowArr_2_4[x + 4],
                        arg12_0_rowArr_3_4[x + 4],
                        arg12_1_rowArr_3_4[x + 4],
                        arg12_0_rowArr_4_4[x + 0],
                        arg12_1_rowArr_4_4[x + 0],
                        arg12_0_rowArr_4_4[x + 1],
                        arg12_1_rowArr_4_4[x + 1],
                        arg12_0_rowArr_4_4[x + 2],
                        arg12_1_rowArr_4_4[x + 2],
                        arg12_0_rowArr_4_4[x + 3],
                        arg12_1_rowArr_4_4[x + 3],
                        arg12_0_rowArr_4_4[x + 4],
                        arg12_1_rowArr_4_4[x + 4],
                        arg12_0_rowArr_4_4[x + 5],
                        arg12_1_rowArr_4_4[x + 5],
                        arg12_0_rowArr_4_4[x + 6],
                        arg12_1_rowArr_4_4[x + 6],
                        arg12_0_rowArr_4_4[x + 7],
                        arg12_1_rowArr_4_4[x + 7],
                        arg12_0_rowArr_4_4[x + 8],
                        arg12_1_rowArr_4_4[x + 8],
                        arg12_0_rowArr_5_4[x + 4],
                        arg12_1_rowArr_5_4[x + 4],
                        arg12_0_rowArr_6_4[x + 4],
                        arg12_1_rowArr_6_4[x + 4],
                        arg12_0_rowArr_7_4[x + 4],
                        arg12_1_rowArr_7_4[x + 4],
                        arg12_0_rowArr_8_4[x + 4],
                        arg12_1_rowArr_8_4[x + 4],
                        arg12_0_rowArr_4_5[x + 4],
                        arg12_1_rowArr_4_5[x + 4],
                        arg12_0_rowArr_4_6[x + 4],
                        arg12_1_rowArr_4_6[x + 4],
                        arg12_0_rowArr_4_7[x + 4],
                        arg12_1_rowArr_4_7[x + 4],
                        arg12_0_rowArr_4_8[x + 4],
                        arg12_1_rowArr_4_8[x + 4],
                        dx,
                        dy,
                        dz,
                        invdx,
                        invdy,
                        invdz,
                        nx,
                        ny,
                        nz,
                        pml_width,
                        half_order,
                        order
                );

                ops::hls::DataConv arg0_0_tmpConvWrite;
                ops::hls::DataConv arg0_1_tmpConvWrite;
                ops::hls::DataConv arg1_0_tmpConvWrite;
                ops::hls::DataConv arg1_1_tmpConvWrite;
                ops::hls::DataConv arg2_0_tmpConvWrite;
                ops::hls::DataConv arg2_1_tmpConvWrite;
                ops::hls::DataConv arg3_0_tmpConvWrite;
                ops::hls::DataConv arg3_1_tmpConvWrite;
                ops::hls::DataConv arg7_0_tmpConvWrite;
                ops::hls::DataConv arg7_1_tmpConvWrite;
                ops::hls::DataConv arg8_0_tmpConvWrite;
                ops::hls::DataConv arg8_1_tmpConvWrite;
                ops::hls::DataConv arg9_0_tmpConvWrite;
                ops::hls::DataConv arg9_1_tmpConvWrite;
                ops::hls::DataConv arg10_0_tmpConvWrite;
                ops::hls::DataConv arg10_1_tmpConvWrite;
                ops::hls::DataConv arg11_0_tmpConvWrite;
                ops::hls::DataConv arg11_1_tmpConvWrite;
                ops::hls::DataConv arg12_0_tmpConvWrite;
                ops::hls::DataConv arg12_1_tmpConvWrite;

                if (not neg_cond)
                {
                    arg7_0_tmpConvWrite.f = arg7_0_result;
                    arg7_1_tmpConvWrite.f = arg7_1_result;
                    arg8_0_tmpConvWrite.f = arg8_0_result;
                    arg8_1_tmpConvWrite.f = arg8_1_result;
                    arg9_0_tmpConvWrite.f = arg9_0_result;
                    arg9_1_tmpConvWrite.f = arg9_1_result;
                }
                else
                {

    // [0, 7, 8, 9, 1, 2, 3, 1, 2, 3, 10, 11, 12]
            //dat_id: 7, dat: ytemp1_0_1, swap_id: 1, swap_dat: yy_0_1
                    arg7_0_tmpConvWrite.f = arg1_0_rowArr_4_4[x + 4];
                    arg7_1_tmpConvWrite.f = arg1_1_rowArr_4_4[x + 4];
            //dat_id: 8, dat: ytemp1_2_3, swap_id: 2, swap_dat: yy_2_3
                    arg8_0_tmpConvWrite.f = arg2_0_rowArr_4_4[x + 4];
                    arg8_1_tmpConvWrite.f = arg2_1_rowArr_4_4[x + 4];
            //dat_id: 9, dat: ytemp1_4_5, swap_id: 3, swap_dat: yy_4_5
                    arg9_0_tmpConvWrite.f = arg3_0_rowArr_4_4[x + 4];
                    arg9_1_tmpConvWrite.f = arg3_1_rowArr_4_4[x + 4];
                }
            // *** rw convertions ***
                arg0_0_tmpConvWrite.f = arg0_0_rowArr_4_4[x + 4];
                arg0_1_tmpConvWrite.f = arg0_1_rowArr_4_4[x + 4];
                arg1_0_tmpConvWrite.f = arg1_0_rowArr_4_4[x + 4];
                arg1_1_tmpConvWrite.f = arg1_1_rowArr_4_4[x + 4];
                arg2_0_tmpConvWrite.f = arg2_0_rowArr_4_4[x + 4];
                arg2_1_tmpConvWrite.f = arg2_1_rowArr_4_4[x + 4];
                arg3_0_tmpConvWrite.f = arg3_0_rowArr_4_4[x + 4];
                arg3_1_tmpConvWrite.f = arg3_1_rowArr_4_4[x + 4];
                arg10_0_tmpConvWrite.f = arg10_0_rowArr_4_4[x + 4];
                arg10_1_tmpConvWrite.f = arg10_1_rowArr_4_4[x + 4];
                arg11_0_tmpConvWrite.f = arg11_0_rowArr_4_4[x + 4];
                arg11_1_tmpConvWrite.f = arg11_1_rowArr_4_4[x + 4];
                arg12_0_tmpConvWrite.f = arg12_0_rowArr_4_4[x + 4];
                arg12_1_tmpConvWrite.f = arg12_1_rowArr_4_4[x + 4];

                arg0_update_val.range(s_datatype_size * (x + 1) - 1, (x + 0) * s_datatype_size) = arg0_0_tmpConvWrite.i;
                arg0_update_val.range(s_datatype_size * (x + 2) - 1, (x + 1) * s_datatype_size) = arg0_1_tmpConvWrite.i;
                arg1_update_val.range(s_datatype_size * (x + 1) - 1, (x + 0) * s_datatype_size) = arg1_0_tmpConvWrite.i;
                arg1_update_val.range(s_datatype_size * (x + 2) - 1, (x + 1) * s_datatype_size) = arg1_1_tmpConvWrite.i;
                arg2_update_val.range(s_datatype_size * (x + 1) - 1, (x + 0) * s_datatype_size) = arg2_0_tmpConvWrite.i;
                arg2_update_val.range(s_datatype_size * (x + 2) - 1, (x + 1) * s_datatype_size) = arg2_1_tmpConvWrite.i;
                arg3_update_val.range(s_datatype_size * (x + 1) - 1, (x + 0) * s_datatype_size) = arg3_0_tmpConvWrite.i;
                arg3_update_val.range(s_datatype_size * (x + 2) - 1, (x + 1) * s_datatype_size) = arg3_1_tmpConvWrite.i;
                arg7_update_val.range(s_datatype_size * (x + 1) - 1, (x + 0) * s_datatype_size) = arg7_0_tmpConvWrite.i;
                arg7_update_val.range(s_datatype_size * (x + 2) - 1, (x + 1) * s_datatype_size) = arg7_1_tmpConvWrite.i;
                arg8_update_val.range(s_datatype_size * (x + 1) - 1, (x + 0) * s_datatype_size) = arg8_0_tmpConvWrite.i;
                arg8_update_val.range(s_datatype_size * (x + 2) - 1, (x + 1) * s_datatype_size) = arg8_1_tmpConvWrite.i;
                arg9_update_val.range(s_datatype_size * (x + 1) - 1, (x + 0) * s_datatype_size) = arg9_0_tmpConvWrite.i;
                arg9_update_val.range(s_datatype_size * (x + 2) - 1, (x + 1) * s_datatype_size) = arg9_1_tmpConvWrite.i;
                arg10_update_val.range(s_datatype_size * (x + 1) - 1, (x + 0) * s_datatype_size) = arg10_0_tmpConvWrite.i;
                arg10_update_val.range(s_datatype_size * (x + 2) - 1, (x + 1) * s_datatype_size) = arg10_1_tmpConvWrite.i;
                arg11_update_val.range(s_datatype_size * (x + 1) - 1, (x + 0) * s_datatype_size) = arg11_0_tmpConvWrite.i;
                arg11_update_val.range(s_datatype_size * (x + 2) - 1, (x + 1) * s_datatype_size) = arg11_1_tmpConvWrite.i;
                arg12_update_val.range(s_datatype_size * (x + 1) - 1, (x + 0) * s_datatype_size) = arg12_0_tmpConvWrite.i;
                arg12_update_val.range(s_datatype_size * (x + 2) - 1, (x + 1) * s_datatype_size) = arg12_1_tmpConvWrite.i;

            }

            write:
            {
                bool cond_write = (k >= 0);

                if (cond_write)
                {
#ifdef DEBUG_LOG
                    printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] --------------------------------------------------------\n\n", m_PEId);

                    printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] wirte values arg0: (", m_PEId);
                    for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_0; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg0_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
                    printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] wirte values arg1: (", m_PEId);
                    for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_1; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg1_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
                    printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] wirte values arg2: (", m_PEId);
                    for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_2; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg2_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
                    printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] wirte values arg3: (", m_PEId);
                    for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_3; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg3_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
                    printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] wirte values arg7: (", m_PEId);
                    for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_7; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg7_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
                    printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] wirte values arg8: (", m_PEId);
                    for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_8; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg8_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
                    printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] wirte values arg9: (", m_PEId);
                    for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_9; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg9_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
                    printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] wirte values arg10: (", m_PEId);
                    for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_10; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg10_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
                    printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] wirte values arg11: (", m_PEId);
                    for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_11; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg11_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
                    printf("[DEBUG][INTERNAL][fd3d_pml_kernel2_PE_%d] wirte values arg12: (", m_PEId);
                    for (int ri = 0; ri < vector_factor_fd3d_pml_kernel2_12; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg12_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
#endif
                    arg0_wr_buffer <<  arg0_update_val;
                    arg1_wr_buffer <<  arg1_update_val;
                    arg2_wr_buffer <<  arg2_update_val;
                    arg3_wr_buffer <<  arg3_update_val;
                    arg7_wr_buffer <<  arg7_update_val;
                    arg8_wr_buffer <<  arg8_update_val;
                    arg9_wr_buffer <<  arg9_update_val;
                    arg10_wr_buffer <<  arg10_update_val;
                    arg11_wr_buffer <<  arg11_update_val;
                    arg12_wr_buffer <<  arg12_update_val;
                }
            }
        }
    } 
};

void kernel_fd3d_pml_kernel2_PE(const short& PEId, const ops::hls::StencilConfigCore& stencilConfig,
            //rho_mu
    widen_stream_fd3d_pml_kernel2_0_dt& arg0_rd_buffer,
    widen_stream_fd3d_pml_kernel2_0_dt& arg0_wr_buffer,
            //yy_0_1
    widen_stream_fd3d_pml_kernel2_1_dt& arg1_rd_buffer,
    widen_stream_fd3d_pml_kernel2_1_dt& arg1_wr_buffer,
            //yy_2_3
    widen_stream_fd3d_pml_kernel2_2_dt& arg2_rd_buffer,
    widen_stream_fd3d_pml_kernel2_2_dt& arg2_wr_buffer,
            //yy_4_5
    widen_stream_fd3d_pml_kernel2_3_dt& arg3_rd_buffer,
    widen_stream_fd3d_pml_kernel2_3_dt& arg3_wr_buffer,
            //ytemp2_0_1
    widen_stream_fd3d_pml_kernel2_4_dt& arg4_rd_buffer,
            //ytemp2_2_3
    widen_stream_fd3d_pml_kernel2_5_dt& arg5_rd_buffer,
            //ytemp2_4_5
    widen_stream_fd3d_pml_kernel2_6_dt& arg6_rd_buffer,
            //ytemp1_0_1
    widen_stream_fd3d_pml_kernel2_7_dt& arg7_wr_buffer,        
            //ytemp1_2_3
    widen_stream_fd3d_pml_kernel2_8_dt& arg8_wr_buffer,        
            //ytemp1_4_5
    widen_stream_fd3d_pml_kernel2_9_dt& arg9_wr_buffer,        
            //yy_sum_0_1
    widen_stream_fd3d_pml_kernel2_10_dt& arg10_rd_buffer,
    widen_stream_fd3d_pml_kernel2_10_dt& arg10_wr_buffer,
            //yy_sum_2_3
    widen_stream_fd3d_pml_kernel2_11_dt& arg11_rd_buffer,
    widen_stream_fd3d_pml_kernel2_11_dt& arg11_wr_buffer,
            //yy_sum_4_5
    widen_stream_fd3d_pml_kernel2_12_dt& arg12_rd_buffer,
    widen_stream_fd3d_pml_kernel2_12_dt& arg12_wr_buffer,
    const int& disps0,
    const int& disps1,
    const int& disps2,
    const float& dt,
    const float& scale1_der2_2,
    const float& scale2_der2_2,
    const float& dx,
    const float& dy,
    const float& dz,
    const float& invdx,
    const float& invdy,
    const float& invdz,
    const int& nx,
    const int& ny,
    const int& nz,
    const int& pml_width,
    const int& half_order,
    const int& order
)
{
    Stencil_fd3d_pml_kernel2 stencil;

#ifdef DEBUG_LOG
    printf("[KERNEL_DEBUG]|%s| stencil config gridSize: %d (xblocks), %d, %d\n", __func__, stencilConfig.grid_size[0], stencilConfig.grid_size[1], stencilConfig.grid_size[2]);
#endif
    stencil.setConfig(PEId, stencilConfig);

#ifdef DEBUG_LOG
    printf("[KERNEL_DEBUG]|%s| starting stencil kernel PE\n", __func__);
#endif

    stencil.stencilRun(
            disps0,
            disps1,
            disps2,
            dt,
            scale1_der2_2,
            scale2_der2_2,
            arg0_rd_buffer,
            arg0_wr_buffer,
            arg1_rd_buffer,
            arg1_wr_buffer,
            arg2_rd_buffer,
            arg2_wr_buffer,
            arg3_rd_buffer,
            arg3_wr_buffer,
            arg4_rd_buffer,
            arg5_rd_buffer,
            arg6_rd_buffer,
            arg7_wr_buffer,
            arg8_wr_buffer,
            arg9_wr_buffer,
            arg10_rd_buffer,
            arg10_wr_buffer,
            arg11_rd_buffer,
            arg11_wr_buffer,
            arg12_rd_buffer,
            arg12_wr_buffer,

            dx,
            dy,
            dz,
            invdx,
            invdy,
            invdz,
            nx,
            ny,
            nz,
            pml_width,
            half_order,
            order
);

#ifdef DEBUG_LOG
    printf("[KERNEL_DEBUG]|%s| Ending stencil kernel PE\n", __func__);
#endif
} 
