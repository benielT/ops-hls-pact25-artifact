// Auto-generated at 2025-06-09 09:27:01.137338 by ops-translator

#pragma once
#include <ops_hls_kernel_support.h>
#include "common_config.hpp"

static constexpr unsigned short read_num_points_pw_advection_opt_kernel = 27;
static constexpr unsigned short read_stencil_size_pw_advection_opt_kernel = 3;
static constexpr unsigned short read_stencil_dim_pw_advection_opt_kernel = 3;

static constexpr unsigned short write_num_points_pw_advection_opt_kernel = 1;
static constexpr unsigned short write_stencil_size_pw_advection_opt_kernel = 1;
static constexpr unsigned short write_stencil_dim_pw_advection_opt_kernel = 3;

static constexpr unsigned short vector_factor_pw_advection_opt_kernel_0 = vector_factor * 1;
static constexpr unsigned short axis_data_width_l_pw_advection_opt_kernel_0 = vector_factor_pw_advection_opt_kernel_0 * data_width;
typedef ap_uint<axis_data_width_l_pw_advection_opt_kernel_0> widen_pw_advection_opt_kernel_0_dt;
static constexpr unsigned short vector_factor_pw_advection_opt_kernel_1 = vector_factor * 1;
static constexpr unsigned short axis_data_width_l_pw_advection_opt_kernel_1 = vector_factor_pw_advection_opt_kernel_1 * data_width;
typedef ap_uint<axis_data_width_l_pw_advection_opt_kernel_1> widen_pw_advection_opt_kernel_1_dt;
static constexpr unsigned short vector_factor_pw_advection_opt_kernel_2 = vector_factor * 1;
static constexpr unsigned short axis_data_width_l_pw_advection_opt_kernel_2 = vector_factor_pw_advection_opt_kernel_2 * data_width;
typedef ap_uint<axis_data_width_l_pw_advection_opt_kernel_2> widen_pw_advection_opt_kernel_2_dt;
static constexpr unsigned short vector_factor_pw_advection_opt_kernel_3 = vector_factor * 1;
static constexpr unsigned short axis_data_width_l_pw_advection_opt_kernel_3 = vector_factor_pw_advection_opt_kernel_3 * data_width;
typedef ap_uint<axis_data_width_l_pw_advection_opt_kernel_3> widen_pw_advection_opt_kernel_3_dt;
static constexpr unsigned short vector_factor_pw_advection_opt_kernel_4 = vector_factor * 1;
static constexpr unsigned short axis_data_width_l_pw_advection_opt_kernel_4 = vector_factor_pw_advection_opt_kernel_4 * data_width;
typedef ap_uint<axis_data_width_l_pw_advection_opt_kernel_4> widen_pw_advection_opt_kernel_4_dt;
static constexpr unsigned short vector_factor_pw_advection_opt_kernel_5 = vector_factor * 1;
static constexpr unsigned short axis_data_width_l_pw_advection_opt_kernel_5 = vector_factor_pw_advection_opt_kernel_5 * data_width;
typedef ap_uint<axis_data_width_l_pw_advection_opt_kernel_5> widen_pw_advection_opt_kernel_5_dt;
static constexpr unsigned short vector_factor_pw_advection_opt_kernel_6 = vector_factor * 1;
static constexpr unsigned short axis_data_width_l_pw_advection_opt_kernel_6 = vector_factor_pw_advection_opt_kernel_6 * data_width;
typedef ap_uint<axis_data_width_l_pw_advection_opt_kernel_6> widen_pw_advection_opt_kernel_6_dt;
static constexpr unsigned short vector_factor_pw_advection_opt_kernel_7 = vector_factor * 1;
static constexpr unsigned short axis_data_width_l_pw_advection_opt_kernel_7 = vector_factor_pw_advection_opt_kernel_7 * data_width;
typedef ap_uint<axis_data_width_l_pw_advection_opt_kernel_7> widen_pw_advection_opt_kernel_7_dt;
static constexpr unsigned short vector_factor_pw_advection_opt_kernel_8 = vector_factor * 1;
static constexpr unsigned short axis_data_width_l_pw_advection_opt_kernel_8 = vector_factor_pw_advection_opt_kernel_8 * data_width;
typedef ap_uint<axis_data_width_l_pw_advection_opt_kernel_8> widen_pw_advection_opt_kernel_8_dt;
static constexpr unsigned short vector_factor_pw_advection_opt_kernel_9 = vector_factor * 1;
static constexpr unsigned short axis_data_width_l_pw_advection_opt_kernel_9 = vector_factor_pw_advection_opt_kernel_9 * data_width;
typedef ap_uint<axis_data_width_l_pw_advection_opt_kernel_9> widen_pw_advection_opt_kernel_9_dt;

typedef ::hls::stream<widen_pw_advection_opt_kernel_0_dt> widen_stream_pw_advection_opt_kernel_0_dt;
typedef ::hls::stream<widen_pw_advection_opt_kernel_1_dt> widen_stream_pw_advection_opt_kernel_1_dt;
typedef ::hls::stream<widen_pw_advection_opt_kernel_2_dt> widen_stream_pw_advection_opt_kernel_2_dt;
typedef ::hls::stream<widen_pw_advection_opt_kernel_3_dt> widen_stream_pw_advection_opt_kernel_3_dt;
typedef ::hls::stream<widen_pw_advection_opt_kernel_4_dt> widen_stream_pw_advection_opt_kernel_4_dt;
typedef ::hls::stream<widen_pw_advection_opt_kernel_5_dt> widen_stream_pw_advection_opt_kernel_5_dt;
typedef ::hls::stream<widen_pw_advection_opt_kernel_6_dt> widen_stream_pw_advection_opt_kernel_6_dt;
typedef ::hls::stream<widen_pw_advection_opt_kernel_7_dt> widen_stream_pw_advection_opt_kernel_7_dt;
typedef ::hls::stream<widen_pw_advection_opt_kernel_8_dt> widen_stream_pw_advection_opt_kernel_8_dt;
typedef ::hls::stream<widen_pw_advection_opt_kernel_9_dt> widen_stream_pw_advection_opt_kernel_9_dt;

/*
    ArgDat(id=0, loc=/home/x_thileeb/repos/OPS_mine_vck5000/apps/c/pw_advection_fpga_experimental/pw_advect.cpp/303:17, access_type=AccessType.OPS_READ, opt=True, dat_id=0, global_dat_id=0, stencil_id=S3D_27PT_STEN)
    ArgDat(id=1, loc=/home/x_thileeb/repos/OPS_mine_vck5000/apps/c/pw_advection_fpga_experimental/pw_advect.cpp/304:17, access_type=AccessType.OPS_READ, opt=True, dat_id=1, global_dat_id=1, stencil_id=S3D_27PT_STEN)
    ArgDat(id=2, loc=/home/x_thileeb/repos/OPS_mine_vck5000/apps/c/pw_advection_fpga_experimental/pw_advect.cpp/305:17, access_type=AccessType.OPS_READ, opt=True, dat_id=2, global_dat_id=2, stencil_id=S3D_27PT_STEN)
    ArgDat(id=3, loc=/home/x_thileeb/repos/OPS_mine_vck5000/apps/c/pw_advection_fpga_experimental/pw_advect.cpp/306:17, access_type=AccessType.OPS_WRITE, opt=True, dat_id=3, global_dat_id=3, stencil_id=S3D_000)
    ArgDat(id=4, loc=/home/x_thileeb/repos/OPS_mine_vck5000/apps/c/pw_advection_fpga_experimental/pw_advect.cpp/307:17, access_type=AccessType.OPS_WRITE, opt=True, dat_id=4, global_dat_id=4, stencil_id=S3D_000)
    ArgDat(id=5, loc=/home/x_thileeb/repos/OPS_mine_vck5000/apps/c/pw_advection_fpga_experimental/pw_advect.cpp/308:17, access_type=AccessType.OPS_WRITE, opt=True, dat_id=5, global_dat_id=5, stencil_id=S3D_000)
    ArgDat(id=6, loc=/home/x_thileeb/repos/OPS_mine_vck5000/apps/c/pw_advection_fpga_experimental/pw_advect.cpp/309:17, access_type=AccessType.OPS_RW, opt=True, dat_id=6, global_dat_id=6, stencil_id=S3D_000)
    ArgDat(id=7, loc=/home/x_thileeb/repos/OPS_mine_vck5000/apps/c/pw_advection_fpga_experimental/pw_advect.cpp/310:17, access_type=AccessType.OPS_RW, opt=True, dat_id=7, global_dat_id=7, stencil_id=S3D_000)
    ArgDat(id=8, loc=/home/x_thileeb/repos/OPS_mine_vck5000/apps/c/pw_advection_fpga_experimental/pw_advect.cpp/311:17, access_type=AccessType.OPS_RW, opt=True, dat_id=8, global_dat_id=8, stencil_id=S3D_000)
    ArgDat(id=9, loc=/home/x_thileeb/repos/OPS_mine_vck5000/apps/c/pw_advection_fpga_experimental/pw_advect.cpp/312:17, access_type=AccessType.OPS_RW, opt=True, dat_id=9, global_dat_id=9, stencil_id=S3D_000)
*/
inline void kernel_pw_advection_opt_kernel_core(
        const stencil_type& reg_0_0,
        const stencil_type& reg_0_1,
        const stencil_type& reg_0_2,
        const stencil_type& reg_0_3,
        const stencil_type& reg_0_4,
        const stencil_type& reg_0_5,
        const stencil_type& reg_0_6,
        const stencil_type& reg_0_7,
        const stencil_type& reg_0_8,
        const stencil_type& reg_0_9,
        const stencil_type& reg_0_10,
        const stencil_type& reg_0_11,
        const stencil_type& reg_0_12,
        const stencil_type& reg_0_13,
        const stencil_type& reg_0_14,
        const stencil_type& reg_0_15,
        const stencil_type& reg_0_16,
        const stencil_type& reg_0_17,
        const stencil_type& reg_0_18,
        const stencil_type& reg_0_19,
        const stencil_type& reg_0_20,
        const stencil_type& reg_0_21,
        const stencil_type& reg_0_22,
        const stencil_type& reg_0_23,
        const stencil_type& reg_0_24,
        const stencil_type& reg_0_25,
        const stencil_type& reg_0_26,
        const stencil_type& reg_1_0,
        const stencil_type& reg_1_1,
        const stencil_type& reg_1_2,
        const stencil_type& reg_1_3,
        const stencil_type& reg_1_4,
        const stencil_type& reg_1_5,
        const stencil_type& reg_1_6,
        const stencil_type& reg_1_7,
        const stencil_type& reg_1_8,
        const stencil_type& reg_1_9,
        const stencil_type& reg_1_10,
        const stencil_type& reg_1_11,
        const stencil_type& reg_1_12,
        const stencil_type& reg_1_13,
        const stencil_type& reg_1_14,
        const stencil_type& reg_1_15,
        const stencil_type& reg_1_16,
        const stencil_type& reg_1_17,
        const stencil_type& reg_1_18,
        const stencil_type& reg_1_19,
        const stencil_type& reg_1_20,
        const stencil_type& reg_1_21,
        const stencil_type& reg_1_22,
        const stencil_type& reg_1_23,
        const stencil_type& reg_1_24,
        const stencil_type& reg_1_25,
        const stencil_type& reg_1_26,
        const stencil_type& reg_2_0,
        const stencil_type& reg_2_1,
        const stencil_type& reg_2_2,
        const stencil_type& reg_2_3,
        const stencil_type& reg_2_4,
        const stencil_type& reg_2_5,
        const stencil_type& reg_2_6,
        const stencil_type& reg_2_7,
        const stencil_type& reg_2_8,
        const stencil_type& reg_2_9,
        const stencil_type& reg_2_10,
        const stencil_type& reg_2_11,
        const stencil_type& reg_2_12,
        const stencil_type& reg_2_13,
        const stencil_type& reg_2_14,
        const stencil_type& reg_2_15,
        const stencil_type& reg_2_16,
        const stencil_type& reg_2_17,
        const stencil_type& reg_2_18,
        const stencil_type& reg_2_19,
        const stencil_type& reg_2_20,
        const stencil_type& reg_2_21,
        const stencil_type& reg_2_22,
        const stencil_type& reg_2_23,
        const stencil_type& reg_2_24,
        const stencil_type& reg_2_25,
        const stencil_type& reg_2_26,
        stencil_type& reg_3_0,
        stencil_type& reg_4_0,
        stencil_type& reg_5_0,
        stencil_type& reg_6_0,
        stencil_type& reg_7_0,
        stencil_type& reg_8_0,
        stencil_type& reg_9_0
)
{
#ifdef DEBUG_LOG
    printf("[KERNEL_INTERNAL_CORE]|%s| starting kernel core: kernel_pw_advection_opt_kernel_core\n",__func__);
#endif

    float su_tmp0 = reg_0_12 * (reg_0_13 + reg_0_12);
    float su_tmp1 = reg_0_14 * (reg_0_13 + reg_0_14);
    float su_tmp2 = 2.0f * (su_tmp0 - su_tmp1);
    float su_tmp3 = reg_0_10 * (reg_1_10 + reg_1_11);
    float su_tmp4 = reg_0_16 * (reg_1_13 + reg_1_14);
    float su_tmp5 = 1.0f * (su_tmp3 - su_tmp4);
    float su_tmp6 = reg_0_4 * (reg_2_4 + reg_2_5);
    float su_tmp7 = reg_6_0 * su_tmp6;
    float su_tmp8 = reg_0_22 * (reg_2_13 + reg_2_14);
    float su_tmp9 = reg_7_0 * su_tmp8;
    float su_tmp10 = su_tmp7 - su_tmp9;
    float su_tmp11 = su_tmp2 + su_tmp5;
    reg_3_0 = su_tmp10 + su_tmp11;

    float sv_tmp0 = reg_1_10 * (reg_1_13 + reg_1_10);
    float sv_tmp1 = reg_1_16 * (reg_1_13 + reg_1_16);
    float sv_tmp2 = 2.0f * (sv_tmp0 - sv_tmp1);
    float sv_tmp3 = reg_1_12 * (reg_0_12 + reg_0_15);
    float sv_tmp4 = reg_1_14 * (reg_0_13 + reg_0_16);
    float sv_tmp5 = 2.0f * (sv_tmp3 - sv_tmp4);
    float sv_tmp6 = reg_1_4 * (reg_2_4 + reg_2_7);
    float sv_tmp7 = reg_6_0 * sv_tmp6;
    float sv_tmp8 = reg_1_22 * (reg_2_13 + reg_2_16);
    float sv_tmp9 = reg_7_0  * sv_tmp8;
    float sv_tmp10 = sv_tmp8 - sv_tmp9;
    float sv_tmp11 = sv_tmp2 + sv_tmp5;
    reg_4_0 = sv_tmp10 + sv_tmp11;

    float sw_tmp0 = reg_2_4 * (reg_2_13 + reg_2_4);
    float sw_tmp1 = reg_8_0 * sw_tmp0;
    float sw_tmp2 = reg_2_22 * (reg_2_13 + reg_2_22);
    float sw_tmp3 = reg_9_0 * sw_tmp2;
    float sw_tmp4 = sw_tmp1 - sw_tmp3;
    float sw_tmp5 = reg_2_12 * (reg_0_12 + reg_0_21);
    float sw_tmp6 = reg_2_14 * (reg_0_13 + reg_0_22);
    float sw_tmp7 = 2.0f * (sw_tmp5 - sw_tmp6);
    float sw_tmp8 = reg_2_10 * (reg_1_10 + reg_1_19);
    float sw_tmp9 = reg_2_16 * (reg_1_13 + reg_1_22);
    float sw_tmp10 = 2.0f * (sw_tmp8 - sw_tmp9);
    float sw_tmp11 = sw_tmp7 + sw_tmp10;
    reg_5_0 = sw_tmp4 + sw_tmp11;

#ifdef DEBUG_LOG
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_0: %f \n", __func__, reg_0_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_1: %f \n", __func__, reg_0_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_2: %f \n", __func__, reg_0_2);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_3: %f \n", __func__, reg_0_3);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_4: %f \n", __func__, reg_0_4);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_5: %f \n", __func__, reg_0_5);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_6: %f \n", __func__, reg_0_6);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_7: %f \n", __func__, reg_0_7);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_8: %f \n", __func__, reg_0_8);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_9: %f \n", __func__, reg_0_9);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_10: %f \n", __func__, reg_0_10);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_11: %f \n", __func__, reg_0_11);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_12: %f \n", __func__, reg_0_12);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_13: %f \n", __func__, reg_0_13);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_14: %f \n", __func__, reg_0_14);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_15: %f \n", __func__, reg_0_15);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_16: %f \n", __func__, reg_0_16);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_17: %f \n", __func__, reg_0_17);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_18: %f \n", __func__, reg_0_18);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_19: %f \n", __func__, reg_0_19);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_20: %f \n", __func__, reg_0_20);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_21: %f \n", __func__, reg_0_21);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_22: %f \n", __func__, reg_0_22);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_23: %f \n", __func__, reg_0_23);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_24: %f \n", __func__, reg_0_24);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_25: %f \n", __func__, reg_0_25);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_0_26: %f \n", __func__, reg_0_26);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_0: %f \n", __func__, reg_1_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_1: %f \n", __func__, reg_1_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_2: %f \n", __func__, reg_1_2);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_3: %f \n", __func__, reg_1_3);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_4: %f \n", __func__, reg_1_4);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_5: %f \n", __func__, reg_1_5);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_6: %f \n", __func__, reg_1_6);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_7: %f \n", __func__, reg_1_7);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_8: %f \n", __func__, reg_1_8);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_9: %f \n", __func__, reg_1_9);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_10: %f \n", __func__, reg_1_10);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_11: %f \n", __func__, reg_1_11);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_12: %f \n", __func__, reg_1_12);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_13: %f \n", __func__, reg_1_13);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_14: %f \n", __func__, reg_1_14);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_15: %f \n", __func__, reg_1_15);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_16: %f \n", __func__, reg_1_16);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_17: %f \n", __func__, reg_1_17);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_18: %f \n", __func__, reg_1_18);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_19: %f \n", __func__, reg_1_19);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_20: %f \n", __func__, reg_1_20);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_21: %f \n", __func__, reg_1_21);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_22: %f \n", __func__, reg_1_22);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_23: %f \n", __func__, reg_1_23);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_24: %f \n", __func__, reg_1_24);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_25: %f \n", __func__, reg_1_25);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_26: %f \n", __func__, reg_1_26);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_0: %f \n", __func__, reg_2_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_1: %f \n", __func__, reg_2_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_2: %f \n", __func__, reg_2_2);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_3: %f \n", __func__, reg_2_3);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_4: %f \n", __func__, reg_2_4);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_5: %f \n", __func__, reg_2_5);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_6: %f \n", __func__, reg_2_6);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_7: %f \n", __func__, reg_2_7);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_8: %f \n", __func__, reg_2_8);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_9: %f \n", __func__, reg_2_9);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_10: %f \n", __func__, reg_2_10);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_11: %f \n", __func__, reg_2_11);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_12: %f \n", __func__, reg_2_12);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_13: %f \n", __func__, reg_2_13);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_14: %f \n", __func__, reg_2_14);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_15: %f \n", __func__, reg_2_15);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_16: %f \n", __func__, reg_2_16);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_17: %f \n", __func__, reg_2_17);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_18: %f \n", __func__, reg_2_18);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_19: %f \n", __func__, reg_2_19);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_20: %f \n", __func__, reg_2_20);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_21: %f \n", __func__, reg_2_21);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_22: %f \n", __func__, reg_2_22);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_23: %f \n", __func__, reg_2_23);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_24: %f \n", __func__, reg_2_24);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_25: %f \n", __func__, reg_2_25);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_2_26: %f \n", __func__, reg_2_26);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_0: %f \n", __func__, reg_3_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_4_0: %f \n", __func__, reg_4_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_5_0: %f \n", __func__, reg_5_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_6_0: %f \n", __func__, reg_6_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_7_0: %f \n", __func__, reg_7_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_8_0: %f \n", __func__, reg_8_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_9_0: %f \n", __func__, reg_9_0);
#endif

#ifdef DEBUG_LOG
    printf("[KERNEL_INTERNAL_CORE]|%s| exiting: kernel_pw_advection_opt_kernel_core\n",__func__);
#endif
}

class Stencil_pw_advection_opt_kernel : public ops::hls::StencilCoreV2<stencil_type, read_num_points_pw_advection_opt_kernel, vector_factor, ops::hls::CoefTypes::CONST_COEF,
        read_stencil_size_pw_advection_opt_kernel, read_stencil_dim_pw_advection_opt_kernel>
{
    using ops::hls::StencilCoreV2<stencil_type, read_num_points_pw_advection_opt_kernel, vector_factor, ops::hls::CoefTypes::CONST_COEF,
            read_stencil_size_pw_advection_opt_kernel, read_stencil_dim_pw_advection_opt_kernel>::m_stencilConfig;
public:

    void stencilRun(
            widen_stream_pw_advection_opt_kernel_0_dt& arg0_rd_buffer,
            widen_stream_pw_advection_opt_kernel_1_dt& arg1_rd_buffer,
            widen_stream_pw_advection_opt_kernel_2_dt& arg2_rd_buffer,
            widen_stream_pw_advection_opt_kernel_3_dt& arg3_wr_buffer,
            widen_stream_pw_advection_opt_kernel_4_dt& arg4_wr_buffer,
            widen_stream_pw_advection_opt_kernel_5_dt& arg5_wr_buffer,
            widen_stream_pw_advection_opt_kernel_6_dt& arg6_rd_buffer,
            widen_stream_pw_advection_opt_kernel_6_dt& arg6_wr_buffer,
            widen_stream_pw_advection_opt_kernel_7_dt& arg7_rd_buffer,
            widen_stream_pw_advection_opt_kernel_7_dt& arg7_wr_buffer,
            widen_stream_pw_advection_opt_kernel_8_dt& arg8_rd_buffer,
            widen_stream_pw_advection_opt_kernel_8_dt& arg8_wr_buffer,
            widen_stream_pw_advection_opt_kernel_9_dt& arg9_rd_buffer,
            widen_stream_pw_advection_opt_kernel_9_dt& arg9_wr_buffer
        )
    {
        const unsigned short span_x = 2;
        const unsigned short half_span_x = 1;

        ::ops::hls::StencilConfigCore stencilConfig = m_stencilConfig;
    //read_origin_wide_diff_x: 1, read_origin_wide_diff: (1,1,1)

    //  *** counters definitions ****
        short i = -2;
        short j = -1; 
        short k = -1;
        unsigned short plane_diff = stencilConfig.grid_size[0] * stencilConfig.grid_size[1] - 1;

    //  *** stencil description and read & write point definitions  ****
        /*
        WindowBufferDiscriptor(widen_stencil=Stencil(id=-1, dim=3, stencil_ptr='read_stencil_widen', num_points=27, points=[Point(x=0, y=0, z=0), Point(x=1, y=0, z=0), Point(x=2, y=0, z=0), Point(x=0, y=1, z=0), Point(x=1, y=1, z=0), Point(x=2, y=1, z=0), Point(x=0, y=2, z=0), Point(x=1, y=2, z=0), Point(x=2, y=2, z=0), Point(x=0, y=0, z=1), Point(x=1, y=0, z=1), Point(x=2, y=0, z=1), Point(x=0, y=1, z=1), Point(x=1, y=1, z=1), Point(x=2, y=1, z=1), Point(x=0, y=2, z=1), Point(x=1, y=2, z=1), Point(x=2, y=2, z=1), Point(x=0, y=0, z=2), Point(x=1, y=0, z=2), Point(x=2, y=0, z=2), Point(x=0, y=1, z=2), Point(x=1, y=1, z=2), Point(x=2, y=1, z=2), Point(x=0, y=2, z=2), Point(x=1, y=2, z=2), Point(x=2, y=2, z=2)], base_point=Point(x=1, y=1, z=1), stencil_size=Point(x=3, y=3, z=3), d_m=Point(x=-0.75, y=1, z=1), d_p=Point(x=1.0, y=1, z=1), row_discriptors=[StencilRowDiscriptor(row_id=(0, 0), base_point=Point(x=1, y=1, z=1), row_points=[Point(x=0, y=0, z=0), Point(x=1, y=0, z=0), Point(x=2, y=0, z=0)]), StencilRowDiscriptor(row_id=(1, 0), base_point=Point(x=1, y=1, z=1), row_points=[Point(x=0, y=1, z=0), Point(x=1, y=1, z=0), Point(x=2, y=1, z=0)]), StencilRowDiscriptor(row_id=(2, 0), base_point=Point(x=1, y=1, z=1), row_points=[Point(x=0, y=2, z=0), Point(x=1, y=2, z=0), Point(x=2, y=2, z=0)]), StencilRowDiscriptor(row_id=(0, 1), base_point=Point(x=1, y=1, z=1), row_points=[Point(x=0, y=0, z=1), Point(x=1, y=0, z=1), Point(x=2, y=0, z=1)]), StencilRowDiscriptor(row_id=(1, 1), base_point=Point(x=1, y=1, z=1), row_points=[Point(x=0, y=1, z=1), Point(x=1, y=1, z=1), Point(x=2, y=1, z=1)]), StencilRowDiscriptor(row_id=(2, 1), base_point=Point(x=1, y=1, z=1), row_points=[Point(x=0, y=2, z=1), Point(x=1, y=2, z=1), Point(x=2, y=2, z=1)]), StencilRowDiscriptor(row_id=(0, 2), base_point=Point(x=1, y=1, z=1), row_points=[Point(x=0, y=0, z=2), Point(x=1, y=0, z=2), Point(x=2, y=0, z=2)]), StencilRowDiscriptor(row_id=(1, 2), base_point=Point(x=1, y=1, z=1), row_points=[Point(x=0, y=1, z=2), Point(x=1, y=1, z=2), Point(x=2, y=1, z=2)]), StencilRowDiscriptor(row_id=(2, 2), base_point=Point(x=1, y=1, z=1), row_points=[Point(x=0, y=2, z=2), Point(x=1, y=2, z=2), Point(x=2, y=2, z=2)])], stride=[], read_origin_diff=Point(x=1, y=1, z=1)), window_buffers=[WindowBuffer(name='buf_r0_1_p0', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=1, z=0), write_point=Point(x=2, y=0, z=0), is_read_write_aligned=False), WindowBuffer(name='buf_r1_2_p0', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=2, z=0), write_point=Point(x=2, y=1, z=0), is_read_write_aligned=False), WindowBuffer(name='buf_p0_1', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=0, y=0, z=1), write_point=Point(x=2, y=2, z=0), is_read_write_aligned=False), WindowBuffer(name='buf_r0_1_p1', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=1, z=1), write_point=Point(x=2, y=0, z=1), is_read_write_aligned=False), WindowBuffer(name='buf_r1_2_p1', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=2, z=1), write_point=Point(x=2, y=1, z=1), is_read_write_aligned=False), WindowBuffer(name='buf_p1_2', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=0, y=0, z=2), write_point=Point(x=2, y=2, z=1), is_read_write_aligned=False), WindowBuffer(name='buf_r0_1_p2', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=1, z=2), write_point=Point(x=2, y=0, z=2), is_read_write_aligned=False), WindowBuffer(name='buf_r1_2_p2', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=2, z=2), write_point=Point(x=2, y=1, z=2), is_read_write_aligned=False)], chains=[(0, 1), (1, 2), (2, WindowBuffer(name='buf_r0_1_p0', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=1, z=0), write_point=Point(x=2, y=0, z=0), is_read_write_aligned=False)), (3, 4), (4, 5), (5, WindowBuffer(name='buf_r1_2_p0', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=2, z=0), write_point=Point(x=2, y=1, z=0), is_read_write_aligned=False)), (WindowBuffer(name='buf_r0_1_p0', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=1, z=0), write_point=Point(x=2, y=0, z=0), is_read_write_aligned=False), 3), (6, 7), (7, 8), (8, WindowBuffer(name='buf_p0_1', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=0, y=0, z=1), write_point=Point(x=2, y=2, z=0), is_read_write_aligned=False)), (WindowBuffer(name='buf_r1_2_p0', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=2, z=0), write_point=Point(x=2, y=1, z=0), is_read_write_aligned=False), 6), (9, 10), (10, 11), (11, WindowBuffer(name='buf_r0_1_p1', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=1, z=1), write_point=Point(x=2, y=0, z=1), is_read_write_aligned=False)), (WindowBuffer(name='buf_p0_1', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=0, y=0, z=1), write_point=Point(x=2, y=2, z=0), is_read_write_aligned=False), 9), (12, 13), (13, 14), (14, WindowBuffer(name='buf_r1_2_p1', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=2, z=1), write_point=Point(x=2, y=1, z=1), is_read_write_aligned=False)), (WindowBuffer(name='buf_r0_1_p1', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=1, z=1), write_point=Point(x=2, y=0, z=1), is_read_write_aligned=False), 12), (15, 16), (16, 17), (17, WindowBuffer(name='buf_p1_2', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=0, y=0, z=2), write_point=Point(x=2, y=2, z=1), is_read_write_aligned=False)), (WindowBuffer(name='buf_r1_2_p1', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=2, z=1), write_point=Point(x=2, y=1, z=1), is_read_write_aligned=False), 15), (18, 19), (19, 20), (20, WindowBuffer(name='buf_r0_1_p2', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=1, z=2), write_point=Point(x=2, y=0, z=2), is_read_write_aligned=False)), (WindowBuffer(name='buf_p1_2', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=0, y=0, z=2), write_point=Point(x=2, y=2, z=1), is_read_write_aligned=False), 18), (21, 22), (22, 23), (23, WindowBuffer(name='buf_r1_2_p2', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=2, z=2), write_point=Point(x=2, y=1, z=2), is_read_write_aligned=False)), (WindowBuffer(name='buf_r0_1_p2', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=1, z=2), write_point=Point(x=2, y=0, z=2), is_read_write_aligned=False), 21), (24, 25), (25, 26), (26, 'read_val'), (WindowBuffer(name='buf_r1_2_p2', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=2, z=2), write_point=Point(x=2, y=1, z=2), is_read_write_aligned=False), 24)], point_to_widen_map={Point(x=0, y=0, z=0): Point(x=0, y=0, z=0), Point(x=1, y=0, z=0): Point(x=1, y=0, z=0), Point(x=2, y=0, z=0): Point(x=2, y=0, z=0), Point(x=0, y=1, z=0): Point(x=0, y=1, z=0), Point(x=1, y=1, z=0): Point(x=1, y=1, z=0), Point(x=2, y=1, z=0): Point(x=2, y=1, z=0), Point(x=0, y=2, z=0): Point(x=0, y=2, z=0), Point(x=1, y=2, z=0): Point(x=1, y=2, z=0), Point(x=2, y=2, z=0): Point(x=2, y=2, z=0), Point(x=0, y=0, z=1): Point(x=0, y=0, z=1), Point(x=1, y=0, z=1): Point(x=1, y=0, z=1), Point(x=2, y=0, z=1): Point(x=2, y=0, z=1), Point(x=0, y=1, z=1): Point(x=0, y=1, z=1), Point(x=1, y=1, z=1): Point(x=1, y=1, z=1), Point(x=2, y=1, z=1): Point(x=2, y=1, z=1), Point(x=0, y=2, z=1): Point(x=0, y=2, z=1), Point(x=1, y=2, z=1): Point(x=1, y=2, z=1), Point(x=2, y=2, z=1): Point(x=2, y=2, z=1), Point(x=0, y=0, z=2): Point(x=0, y=0, z=2), Point(x=1, y=0, z=2): Point(x=1, y=0, z=2), Point(x=2, y=0, z=2): Point(x=2, y=0, z=2), Point(x=0, y=1, z=2): Point(x=0, y=1, z=2), Point(x=1, y=1, z=2): Point(x=1, y=1, z=2), Point(x=2, y=1, z=2): Point(x=2, y=1, z=2), Point(x=0, y=2, z=2): Point(x=0, y=2, z=2), Point(x=1, y=2, z=2): Point(x=1, y=2, z=2), Point(x=2, y=2, z=2): Point(x=2, y=2, z=2)})
        */
        // Stencil: S3D_27PT_STEN
        //      |- point: (0,0,0)
        //      |- point: (1,0,0)
        //      |- point: (2,0,0)
        //      |- point: (0,1,0)
        //      |- point: (1,1,0)
        //      |- point: (2,1,0)
        //      |- point: (0,2,0)
        //      |- point: (1,2,0)
        //      |- point: (2,2,0)
        //      |- point: (0,0,1)
        //      |- point: (1,0,1)
        //      |- point: (2,0,1)
        //      |- point: (0,1,1)
        //      |- point: (1,1,1)
        //      |- point: (2,1,1)
        //      |- point: (0,2,1)
        //      |- point: (1,2,1)
        //      |- point: (2,2,1)
        //      |- point: (0,0,2)
        //      |- point: (1,0,2)
        //      |- point: (2,0,2)
        //      |- point: (0,1,2)
        //      |- point: (1,1,2)
        //      |- point: (2,1,2)
        //      |- point: (0,2,2)
        //      |- point: (1,2,2)
        //      `- point: (2,2,2)
        // read point: (0,1,0), write point: (2,0,0)
        unsigned short S3D_27PT_STEN_buf_r0_1_p0_rd = 0;
        unsigned short S3D_27PT_STEN_buf_r0_1_p0_wr = 2;
        // read point: (0,2,0), write point: (2,1,0)
        unsigned short S3D_27PT_STEN_buf_r1_2_p0_rd = 0;
        unsigned short S3D_27PT_STEN_buf_r1_2_p0_wr = 2;
        unsigned short S3D_27PT_STEN_buf_p0_1_rd;

        if (-2 * stencilConfig.grid_size[0] + -2 > 0)
            S3D_27PT_STEN_buf_p0_1_rd = -2 * stencilConfig.grid_size[0] + -2;
        else
            S3D_27PT_STEN_buf_p0_1_rd = 0;

        unsigned short S3D_27PT_STEN_buf_p0_1_wr;

        if (2 * stencilConfig.grid_size[0] + 2 > 0)
            S3D_27PT_STEN_buf_p0_1_wr = 2 * stencilConfig.grid_size[0] + 2;
        else
            S3D_27PT_STEN_buf_p0_1_wr = 0;
        // read point: (0,1,1), write point: (2,0,1)
        unsigned short S3D_27PT_STEN_buf_r0_1_p1_rd = 0;
        unsigned short S3D_27PT_STEN_buf_r0_1_p1_wr = 2;
        // read point: (0,2,1), write point: (2,1,1)
        unsigned short S3D_27PT_STEN_buf_r1_2_p1_rd = 0;
        unsigned short S3D_27PT_STEN_buf_r1_2_p1_wr = 2;
        unsigned short S3D_27PT_STEN_buf_p1_2_rd;

        if (-2 * stencilConfig.grid_size[0] + -2 > 0)
            S3D_27PT_STEN_buf_p1_2_rd = -2 * stencilConfig.grid_size[0] + -2;
        else
            S3D_27PT_STEN_buf_p1_2_rd = 0;

        unsigned short S3D_27PT_STEN_buf_p1_2_wr;

        if (2 * stencilConfig.grid_size[0] + 2 > 0)
            S3D_27PT_STEN_buf_p1_2_wr = 2 * stencilConfig.grid_size[0] + 2;
        else
            S3D_27PT_STEN_buf_p1_2_wr = 0;
        // read point: (0,1,2), write point: (2,0,2)
        unsigned short S3D_27PT_STEN_buf_r0_1_p2_rd = 0;
        unsigned short S3D_27PT_STEN_buf_r0_1_p2_wr = 2;
        // read point: (0,2,2), write point: (2,1,2)
        unsigned short S3D_27PT_STEN_buf_r1_2_p2_rd = 0;
        unsigned short S3D_27PT_STEN_buf_r1_2_p2_wr = 2;
        // Stencil: S3D_000
        //      `- point: (0,0,0)

        #pragma HLS ARRAY_PARTITION variable = stencilConfig.lower_limit dim = 1 complete
        #pragma HLS ARRAY_PARTITION variable = stencilConfig.upper_limit dim = 1 complete

    //  *** iteration limit definition ****
        unsigned int iter_limit = stencilConfig.outer_loop_limit * 
                stencilConfig.grid_size[1] * stencilConfig.grid_size[0] + 1 * stencilConfig.grid_size[0] + 1;

    //  *** data read write boundary definitions ****
    /*        unsigned int arg0_read_lb_itr = 0 * stencilConfig.grid_size[0] * stencilConfig.grid_size[1];
        unsigned int arg0_read_ub_itr = (0 + stencilConfig.grid_size[2]) * stencilConfig.grid_size[1] * stencilConfig.grid_size[0];
        unsigned int arg1_read_lb_itr = 0 * stencilConfig.grid_size[0] * stencilConfig.grid_size[1];
        unsigned int arg1_read_ub_itr = (0 + stencilConfig.grid_size[2]) * stencilConfig.grid_size[1] * stencilConfig.grid_size[0];
        unsigned int arg2_read_lb_itr = 0 * stencilConfig.grid_size[0] * stencilConfig.grid_size[1];
        unsigned int arg2_read_ub_itr = (0 + stencilConfig.grid_size[2]) * stencilConfig.grid_size[1] * stencilConfig.grid_size[0];
        unsigned int arg6_read_lb_itr = 1 * stencilConfig.grid_size[0] * stencilConfig.grid_size[1];
        unsigned int arg6_read_ub_itr = (1 + stencilConfig.grid_size[2]) * stencilConfig.grid_size[1] * stencilConfig.grid_size[0];
        unsigned int arg7_read_lb_itr = 1 * stencilConfig.grid_size[0] * stencilConfig.grid_size[1];
        unsigned int arg7_read_ub_itr = (1 + stencilConfig.grid_size[2]) * stencilConfig.grid_size[1] * stencilConfig.grid_size[0];
        unsigned int arg8_read_lb_itr = 1 * stencilConfig.grid_size[0] * stencilConfig.grid_size[1];
        unsigned int arg8_read_ub_itr = (1 + stencilConfig.grid_size[2]) * stencilConfig.grid_size[1] * stencilConfig.grid_size[0];
        unsigned int arg9_read_lb_itr = 1 * stencilConfig.grid_size[0] * stencilConfig.grid_size[1];
        unsigned int arg9_read_ub_itr = (1 + stencilConfig.grid_size[2]) * stencilConfig.grid_size[1] * stencilConfig.grid_size[0];
*/

        unsigned int read_lb_itr = 0;
        unsigned int read_ub_itr = stencilConfig.grid_size[2] * stencilConfig.grid_size[1] * stencilConfig.grid_size[0];

    //  *** Read & write widen temporaries ****
    // arg0(u)
        widen_pw_advection_opt_kernel_0_dt arg0_read_val = 0;
    // arg1(v)
        widen_pw_advection_opt_kernel_1_dt arg1_read_val = 0;
    // arg2(w)
        widen_pw_advection_opt_kernel_2_dt arg2_read_val = 0;
    // arg3(u2)
        widen_pw_advection_opt_kernel_3_dt arg3_update_val;
    // arg4(v2)
        widen_pw_advection_opt_kernel_4_dt arg4_update_val;
    // arg5(w2)
        widen_pw_advection_opt_kernel_5_dt arg5_update_val;
    // arg6(tzc1)
        widen_pw_advection_opt_kernel_6_dt arg6_read_val = 0;
        widen_pw_advection_opt_kernel_6_dt arg6_update_val;
    // arg7(tzc2)
        widen_pw_advection_opt_kernel_7_dt arg7_read_val = 0;
        widen_pw_advection_opt_kernel_7_dt arg7_update_val;
    // arg8(tzd1)
        widen_pw_advection_opt_kernel_8_dt arg8_read_val = 0;
        widen_pw_advection_opt_kernel_8_dt arg8_update_val;
    // arg9(tzd2)
        widen_pw_advection_opt_kernel_9_dt arg9_read_val = 0;
        widen_pw_advection_opt_kernel_9_dt arg9_update_val;
    //  *** widen stencil values holder & window buffers ****

        // arg0(u)
        widen_pw_advection_opt_kernel_0_dt arg0_widenStencilValues[read_num_points_pw_advection_opt_kernel];
        #pragma HLS ARRAY_PARTITION variable = arg0_widenStencilValues dim = 1 complete

        widen_pw_advection_opt_kernel_0_dt arg0_buf_r0_1_p0[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_r0_1_p0 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_0_dt arg0_buf_r1_2_p0[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_r1_2_p0 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_0_dt arg0_buf_p0_1[max_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_p0_1 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_0_dt arg0_buf_r0_1_p1[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_r0_1_p1 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_0_dt arg0_buf_r1_2_p1[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_r1_2_p1 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_0_dt arg0_buf_p1_2[max_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_p1_2 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_0_dt arg0_buf_r0_1_p2[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_r0_1_p2 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_0_dt arg0_buf_r1_2_p2[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg0_buf_r1_2_p2 type = ram_s2p latency=2

        stencil_type arg0_rowArr_0_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_rowArr_0_0 dim=1 complete
        stencil_type arg0_rowArr_1_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_rowArr_1_0 dim=1 complete
        stencil_type arg0_rowArr_2_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_rowArr_2_0 dim=1 complete
        stencil_type arg0_rowArr_0_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_rowArr_0_1 dim=1 complete
        stencil_type arg0_rowArr_1_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_rowArr_1_1 dim=1 complete
        stencil_type arg0_rowArr_2_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_rowArr_2_1 dim=1 complete
        stencil_type arg0_rowArr_0_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_rowArr_0_2 dim=1 complete
        stencil_type arg0_rowArr_1_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_rowArr_1_2 dim=1 complete
        stencil_type arg0_rowArr_2_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg0_rowArr_2_2 dim=1 complete

        // arg1(v)
        widen_pw_advection_opt_kernel_1_dt arg1_widenStencilValues[read_num_points_pw_advection_opt_kernel];
        #pragma HLS ARRAY_PARTITION variable = arg1_widenStencilValues dim = 1 complete

        widen_pw_advection_opt_kernel_1_dt arg1_buf_r0_1_p0[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_r0_1_p0 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_1_dt arg1_buf_r1_2_p0[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_r1_2_p0 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_1_dt arg1_buf_p0_1[max_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_p0_1 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_1_dt arg1_buf_r0_1_p1[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_r0_1_p1 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_1_dt arg1_buf_r1_2_p1[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_r1_2_p1 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_1_dt arg1_buf_p1_2[max_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_p1_2 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_1_dt arg1_buf_r0_1_p2[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_r0_1_p2 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_1_dt arg1_buf_r1_2_p2[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg1_buf_r1_2_p2 type = ram_s2p latency=2

        stencil_type arg1_rowArr_0_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_rowArr_0_0 dim=1 complete
        stencil_type arg1_rowArr_1_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_rowArr_1_0 dim=1 complete
        stencil_type arg1_rowArr_2_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_rowArr_2_0 dim=1 complete
        stencil_type arg1_rowArr_0_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_rowArr_0_1 dim=1 complete
        stencil_type arg1_rowArr_1_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_rowArr_1_1 dim=1 complete
        stencil_type arg1_rowArr_2_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_rowArr_2_1 dim=1 complete
        stencil_type arg1_rowArr_0_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_rowArr_0_2 dim=1 complete
        stencil_type arg1_rowArr_1_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_rowArr_1_2 dim=1 complete
        stencil_type arg1_rowArr_2_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_rowArr_2_2 dim=1 complete

        // arg2(w)
        widen_pw_advection_opt_kernel_2_dt arg2_widenStencilValues[read_num_points_pw_advection_opt_kernel];
        #pragma HLS ARRAY_PARTITION variable = arg2_widenStencilValues dim = 1 complete

        widen_pw_advection_opt_kernel_2_dt arg2_buf_r0_1_p0[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_r0_1_p0 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_2_dt arg2_buf_r1_2_p0[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_r1_2_p0 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_2_dt arg2_buf_p0_1[max_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_p0_1 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_2_dt arg2_buf_r0_1_p1[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_r0_1_p1 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_2_dt arg2_buf_r1_2_p1[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_r1_2_p1 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_2_dt arg2_buf_p1_2[max_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_p1_2 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_2_dt arg2_buf_r0_1_p2[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_r0_1_p2 type = ram_s2p latency=2
        widen_pw_advection_opt_kernel_2_dt arg2_buf_r1_2_p2[line_buff_3d_depth];
        #pragma HLS BIND_STORAGE variable = arg2_buf_r1_2_p2 type = ram_s2p latency=2

        stencil_type arg2_rowArr_0_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_rowArr_0_0 dim=1 complete
        stencil_type arg2_rowArr_1_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_rowArr_1_0 dim=1 complete
        stencil_type arg2_rowArr_2_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_rowArr_2_0 dim=1 complete
        stencil_type arg2_rowArr_0_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_rowArr_0_1 dim=1 complete
        stencil_type arg2_rowArr_1_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_rowArr_1_1 dim=1 complete
        stencil_type arg2_rowArr_2_1[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_rowArr_2_1 dim=1 complete
        stencil_type arg2_rowArr_0_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_rowArr_0_2 dim=1 complete
        stencil_type arg2_rowArr_1_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_rowArr_1_2 dim=1 complete
        stencil_type arg2_rowArr_2_2[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_rowArr_2_2 dim=1 complete

        // arg6(tzc1)
        widen_pw_advection_opt_kernel_6_dt arg6_widenStencilValues[read_num_points_pw_advection_opt_kernel];
        #pragma HLS ARRAY_PARTITION variable = arg6_widenStencilValues dim = 1 complete

        stencil_type arg6_rowArr_0_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg6_rowArr_0_0 dim=1 complete

        // arg7(tzc2)
        widen_pw_advection_opt_kernel_7_dt arg7_widenStencilValues[read_num_points_pw_advection_opt_kernel];
        #pragma HLS ARRAY_PARTITION variable = arg7_widenStencilValues dim = 1 complete

        stencil_type arg7_rowArr_0_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg7_rowArr_0_0 dim=1 complete

        // arg8(tzd1)
        widen_pw_advection_opt_kernel_8_dt arg8_widenStencilValues[read_num_points_pw_advection_opt_kernel];
        #pragma HLS ARRAY_PARTITION variable = arg8_widenStencilValues dim = 1 complete

        stencil_type arg8_rowArr_0_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg8_rowArr_0_0 dim=1 complete

        // arg9(tzd2)
        widen_pw_advection_opt_kernel_9_dt arg9_widenStencilValues[read_num_points_pw_advection_opt_kernel];
        #pragma HLS ARRAY_PARTITION variable = arg9_widenStencilValues dim = 1 complete

        stencil_type arg9_rowArr_0_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg9_rowArr_0_0 dim=1 complete

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
                printf("[DEBUG][INTERNAL][pw_advection_opt_kernel_PE_%d] loop params before update i(%d), "\
                    "j(%d), "\
                    "k(%d), "\
                    "S3D_27PT_STEN_buf_r0_1_p0_rd: %d, "\
                    "S3D_27PT_STEN_buf_r0_1_p0_wr: %d, "\
                    "S3D_27PT_STEN_buf_r1_2_p0_rd: %d, "\
                    "S3D_27PT_STEN_buf_r1_2_p0_wr: %d, "\
                    "S3D_27PT_STEN_buf_p0_1_rd: %d, "\
                    "S3D_27PT_STEN_buf_p0_1_wr: %d, "\
                    "S3D_27PT_STEN_buf_r0_1_p1_rd: %d, "\
                    "S3D_27PT_STEN_buf_r0_1_p1_wr: %d, "\
                    "S3D_27PT_STEN_buf_r1_2_p1_rd: %d, "\
                    "S3D_27PT_STEN_buf_r1_2_p1_wr: %d, "\
                    "S3D_27PT_STEN_buf_p1_2_rd: %d, "\
                    "S3D_27PT_STEN_buf_p1_2_wr: %d, "\
                    "S3D_27PT_STEN_buf_r0_1_p2_rd: %d, "\
                    "S3D_27PT_STEN_buf_r0_1_p2_wr: %d, "\
                    "S3D_27PT_STEN_buf_r1_2_p2_rd: %d, "\
                    "S3D_27PT_STEN_buf_r1_2_p2_wr: %d, "\
                    "reg_itr(%d)\n", m_PEId, i, 
                    j,
                    k,
                    S3D_27PT_STEN_buf_r0_1_p0_rd, 
                    S3D_27PT_STEN_buf_r0_1_p0_wr, 
                    S3D_27PT_STEN_buf_r1_2_p0_rd, 
                    S3D_27PT_STEN_buf_r1_2_p0_wr, 
                    S3D_27PT_STEN_buf_p0_1_rd, 
                    S3D_27PT_STEN_buf_p0_1_wr, 
                    S3D_27PT_STEN_buf_r0_1_p1_rd, 
                    S3D_27PT_STEN_buf_r0_1_p1_wr, 
                    S3D_27PT_STEN_buf_r1_2_p1_rd, 
                    S3D_27PT_STEN_buf_r1_2_p1_wr, 
                    S3D_27PT_STEN_buf_p1_2_rd, 
                    S3D_27PT_STEN_buf_p1_2_wr, 
                    S3D_27PT_STEN_buf_r0_1_p2_rd, 
                    S3D_27PT_STEN_buf_r0_1_p2_wr, 
                    S3D_27PT_STEN_buf_r1_2_p2_rd, 
                    S3D_27PT_STEN_buf_r1_2_p2_wr, 
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

    /*                bool arg0_read_cond = (reg_itr < arg0_read_ub_itr) and (reg_itr >= arg0_read_lb_itr);
                bool arg1_read_cond = (reg_itr < arg1_read_ub_itr) and (reg_itr >= arg1_read_lb_itr);
                bool arg2_read_cond = (reg_itr < arg2_read_ub_itr) and (reg_itr >= arg2_read_lb_itr);
                bool arg6_read_cond = (reg_itr < arg6_read_ub_itr) and (reg_itr >= arg6_read_lb_itr);
                bool arg7_read_cond = (reg_itr < arg7_read_ub_itr) and (reg_itr >= arg7_read_lb_itr);
                bool arg8_read_cond = (reg_itr < arg8_read_ub_itr) and (reg_itr >= arg8_read_lb_itr);
                bool arg9_read_cond = (reg_itr < arg9_read_ub_itr) and (reg_itr >= arg9_read_lb_itr);
*/
                bool read_cond  =  (reg_itr < read_ub_itr) and (reg_itr >= read_lb_itr);

                if (read_cond)
                {

                    arg0_read_val = arg0_rd_buffer.read();

                    arg1_read_val = arg1_rd_buffer.read();

                    arg2_read_val = arg2_rd_buffer.read();

                    arg6_read_val = arg6_rd_buffer.read();

                    arg7_read_val = arg7_rd_buffer.read();

                    arg8_read_val = arg8_rd_buffer.read();

                    arg9_read_val = arg9_rd_buffer.read();
                }

                arg0_widenStencilValues[0] = arg0_widenStencilValues[1];                
                arg0_widenStencilValues[1] = arg0_widenStencilValues[2];                
                arg0_widenStencilValues[2] = arg0_buf_r0_1_p0[S3D_27PT_STEN_buf_r0_1_p0_wr];                
                arg0_widenStencilValues[3] = arg0_widenStencilValues[4];                
                arg0_widenStencilValues[4] = arg0_widenStencilValues[5];                
                arg0_widenStencilValues[5] = arg0_buf_r1_2_p0[S3D_27PT_STEN_buf_r1_2_p0_wr];                
                arg0_buf_r0_1_p0[S3D_27PT_STEN_buf_r0_1_p0_rd] = arg0_widenStencilValues[3];                
                arg0_widenStencilValues[6] = arg0_widenStencilValues[7];                
                arg0_widenStencilValues[7] = arg0_widenStencilValues[8];                
                arg0_widenStencilValues[8] = arg0_buf_p0_1[S3D_27PT_STEN_buf_p0_1_wr];                
                arg0_buf_r1_2_p0[S3D_27PT_STEN_buf_r1_2_p0_rd] = arg0_widenStencilValues[6];                
                arg0_widenStencilValues[9] = arg0_widenStencilValues[10];                
                arg0_widenStencilValues[10] = arg0_widenStencilValues[11];                
                arg0_widenStencilValues[11] = arg0_buf_r0_1_p1[S3D_27PT_STEN_buf_r0_1_p1_wr];                
                arg0_buf_p0_1[S3D_27PT_STEN_buf_p0_1_rd] = arg0_widenStencilValues[9];                
                arg0_widenStencilValues[12] = arg0_widenStencilValues[13];                
                arg0_widenStencilValues[13] = arg0_widenStencilValues[14];                
                arg0_widenStencilValues[14] = arg0_buf_r1_2_p1[S3D_27PT_STEN_buf_r1_2_p1_wr];                
                arg0_buf_r0_1_p1[S3D_27PT_STEN_buf_r0_1_p1_rd] = arg0_widenStencilValues[12];                
                arg0_widenStencilValues[15] = arg0_widenStencilValues[16];                
                arg0_widenStencilValues[16] = arg0_widenStencilValues[17];                
                arg0_widenStencilValues[17] = arg0_buf_p1_2[S3D_27PT_STEN_buf_p1_2_wr];                
                arg0_buf_r1_2_p1[S3D_27PT_STEN_buf_r1_2_p1_rd] = arg0_widenStencilValues[15];                
                arg0_widenStencilValues[18] = arg0_widenStencilValues[19];                
                arg0_widenStencilValues[19] = arg0_widenStencilValues[20];                
                arg0_widenStencilValues[20] = arg0_buf_r0_1_p2[S3D_27PT_STEN_buf_r0_1_p2_wr];                
                arg0_buf_p1_2[S3D_27PT_STEN_buf_p1_2_rd] = arg0_widenStencilValues[18];                
                arg0_widenStencilValues[21] = arg0_widenStencilValues[22];                
                arg0_widenStencilValues[22] = arg0_widenStencilValues[23];                
                arg0_widenStencilValues[23] = arg0_buf_r1_2_p2[S3D_27PT_STEN_buf_r1_2_p2_wr];                
                arg0_buf_r0_1_p2[S3D_27PT_STEN_buf_r0_1_p2_rd] = arg0_widenStencilValues[21];                
                arg0_widenStencilValues[24] = arg0_widenStencilValues[25];                
                arg0_widenStencilValues[25] = arg0_widenStencilValues[26];                
                arg0_widenStencilValues[26] = arg0_read_val;                
                arg0_buf_r1_2_p2[S3D_27PT_STEN_buf_r1_2_p2_rd] = arg0_widenStencilValues[24];                
                arg1_widenStencilValues[0] = arg1_widenStencilValues[1];                
                arg1_widenStencilValues[1] = arg1_widenStencilValues[2];                
                arg1_widenStencilValues[2] = arg1_buf_r0_1_p0[S3D_27PT_STEN_buf_r0_1_p0_wr];                
                arg1_widenStencilValues[3] = arg1_widenStencilValues[4];                
                arg1_widenStencilValues[4] = arg1_widenStencilValues[5];                
                arg1_widenStencilValues[5] = arg1_buf_r1_2_p0[S3D_27PT_STEN_buf_r1_2_p0_wr];                
                arg1_buf_r0_1_p0[S3D_27PT_STEN_buf_r0_1_p0_rd] = arg1_widenStencilValues[3];                
                arg1_widenStencilValues[6] = arg1_widenStencilValues[7];                
                arg1_widenStencilValues[7] = arg1_widenStencilValues[8];                
                arg1_widenStencilValues[8] = arg1_buf_p0_1[S3D_27PT_STEN_buf_p0_1_wr];                
                arg1_buf_r1_2_p0[S3D_27PT_STEN_buf_r1_2_p0_rd] = arg1_widenStencilValues[6];                
                arg1_widenStencilValues[9] = arg1_widenStencilValues[10];                
                arg1_widenStencilValues[10] = arg1_widenStencilValues[11];                
                arg1_widenStencilValues[11] = arg1_buf_r0_1_p1[S3D_27PT_STEN_buf_r0_1_p1_wr];                
                arg1_buf_p0_1[S3D_27PT_STEN_buf_p0_1_rd] = arg1_widenStencilValues[9];                
                arg1_widenStencilValues[12] = arg1_widenStencilValues[13];                
                arg1_widenStencilValues[13] = arg1_widenStencilValues[14];                
                arg1_widenStencilValues[14] = arg1_buf_r1_2_p1[S3D_27PT_STEN_buf_r1_2_p1_wr];                
                arg1_buf_r0_1_p1[S3D_27PT_STEN_buf_r0_1_p1_rd] = arg1_widenStencilValues[12];                
                arg1_widenStencilValues[15] = arg1_widenStencilValues[16];                
                arg1_widenStencilValues[16] = arg1_widenStencilValues[17];                
                arg1_widenStencilValues[17] = arg1_buf_p1_2[S3D_27PT_STEN_buf_p1_2_wr];                
                arg1_buf_r1_2_p1[S3D_27PT_STEN_buf_r1_2_p1_rd] = arg1_widenStencilValues[15];                
                arg1_widenStencilValues[18] = arg1_widenStencilValues[19];                
                arg1_widenStencilValues[19] = arg1_widenStencilValues[20];                
                arg1_widenStencilValues[20] = arg1_buf_r0_1_p2[S3D_27PT_STEN_buf_r0_1_p2_wr];                
                arg1_buf_p1_2[S3D_27PT_STEN_buf_p1_2_rd] = arg1_widenStencilValues[18];                
                arg1_widenStencilValues[21] = arg1_widenStencilValues[22];                
                arg1_widenStencilValues[22] = arg1_widenStencilValues[23];                
                arg1_widenStencilValues[23] = arg1_buf_r1_2_p2[S3D_27PT_STEN_buf_r1_2_p2_wr];                
                arg1_buf_r0_1_p2[S3D_27PT_STEN_buf_r0_1_p2_rd] = arg1_widenStencilValues[21];                
                arg1_widenStencilValues[24] = arg1_widenStencilValues[25];                
                arg1_widenStencilValues[25] = arg1_widenStencilValues[26];                
                arg1_widenStencilValues[26] = arg1_read_val;                
                arg1_buf_r1_2_p2[S3D_27PT_STEN_buf_r1_2_p2_rd] = arg1_widenStencilValues[24];                
                arg2_widenStencilValues[0] = arg2_widenStencilValues[1];                
                arg2_widenStencilValues[1] = arg2_widenStencilValues[2];                
                arg2_widenStencilValues[2] = arg2_buf_r0_1_p0[S3D_27PT_STEN_buf_r0_1_p0_wr];                
                arg2_widenStencilValues[3] = arg2_widenStencilValues[4];                
                arg2_widenStencilValues[4] = arg2_widenStencilValues[5];                
                arg2_widenStencilValues[5] = arg2_buf_r1_2_p0[S3D_27PT_STEN_buf_r1_2_p0_wr];                
                arg2_buf_r0_1_p0[S3D_27PT_STEN_buf_r0_1_p0_rd] = arg2_widenStencilValues[3];                
                arg2_widenStencilValues[6] = arg2_widenStencilValues[7];                
                arg2_widenStencilValues[7] = arg2_widenStencilValues[8];                
                arg2_widenStencilValues[8] = arg2_buf_p0_1[S3D_27PT_STEN_buf_p0_1_wr];                
                arg2_buf_r1_2_p0[S3D_27PT_STEN_buf_r1_2_p0_rd] = arg2_widenStencilValues[6];                
                arg2_widenStencilValues[9] = arg2_widenStencilValues[10];                
                arg2_widenStencilValues[10] = arg2_widenStencilValues[11];                
                arg2_widenStencilValues[11] = arg2_buf_r0_1_p1[S3D_27PT_STEN_buf_r0_1_p1_wr];                
                arg2_buf_p0_1[S3D_27PT_STEN_buf_p0_1_rd] = arg2_widenStencilValues[9];                
                arg2_widenStencilValues[12] = arg2_widenStencilValues[13];                
                arg2_widenStencilValues[13] = arg2_widenStencilValues[14];                
                arg2_widenStencilValues[14] = arg2_buf_r1_2_p1[S3D_27PT_STEN_buf_r1_2_p1_wr];                
                arg2_buf_r0_1_p1[S3D_27PT_STEN_buf_r0_1_p1_rd] = arg2_widenStencilValues[12];                
                arg2_widenStencilValues[15] = arg2_widenStencilValues[16];                
                arg2_widenStencilValues[16] = arg2_widenStencilValues[17];                
                arg2_widenStencilValues[17] = arg2_buf_p1_2[S3D_27PT_STEN_buf_p1_2_wr];                
                arg2_buf_r1_2_p1[S3D_27PT_STEN_buf_r1_2_p1_rd] = arg2_widenStencilValues[15];                
                arg2_widenStencilValues[18] = arg2_widenStencilValues[19];                
                arg2_widenStencilValues[19] = arg2_widenStencilValues[20];                
                arg2_widenStencilValues[20] = arg2_buf_r0_1_p2[S3D_27PT_STEN_buf_r0_1_p2_wr];                
                arg2_buf_p1_2[S3D_27PT_STEN_buf_p1_2_rd] = arg2_widenStencilValues[18];                
                arg2_widenStencilValues[21] = arg2_widenStencilValues[22];                
                arg2_widenStencilValues[22] = arg2_widenStencilValues[23];                
                arg2_widenStencilValues[23] = arg2_buf_r1_2_p2[S3D_27PT_STEN_buf_r1_2_p2_wr];                
                arg2_buf_r0_1_p2[S3D_27PT_STEN_buf_r0_1_p2_rd] = arg2_widenStencilValues[21];                
                arg2_widenStencilValues[24] = arg2_widenStencilValues[25];                
                arg2_widenStencilValues[25] = arg2_widenStencilValues[26];                
                arg2_widenStencilValues[26] = arg2_read_val;                
                arg2_buf_r1_2_p2[S3D_27PT_STEN_buf_r1_2_p2_rd] = arg2_widenStencilValues[24];                
                arg6_widenStencilValues[0] = arg6_read_val;                
                arg7_widenStencilValues[0] = arg7_read_val;                
                arg8_widenStencilValues[0] = arg8_read_val;                
                arg9_widenStencilValues[0] = arg9_read_val;

                bool cond_end_of_line_buff_S3D_27PT_STEN_buf_r0_1_p0_rd = S3D_27PT_STEN_buf_r0_1_p0_rd >= (stencilConfig.grid_size[0] - 1);
                bool cond_end_of_line_buff_S3D_27PT_STEN_buf_r0_1_p0_wr = S3D_27PT_STEN_buf_r0_1_p0_wr >= (stencilConfig.grid_size[0] - 1);

                if (cond_end_of_line_buff_S3D_27PT_STEN_buf_r0_1_p0_rd)
                    S3D_27PT_STEN_buf_r0_1_p0_rd = 0;
                else
                    S3D_27PT_STEN_buf_r0_1_p0_rd++;

                if (cond_end_of_line_buff_S3D_27PT_STEN_buf_r0_1_p0_wr)
                    S3D_27PT_STEN_buf_r0_1_p0_wr = 0;
                else
                    S3D_27PT_STEN_buf_r0_1_p0_wr++;
                bool cond_end_of_line_buff_S3D_27PT_STEN_buf_r1_2_p0_rd = S3D_27PT_STEN_buf_r1_2_p0_rd >= (stencilConfig.grid_size[0] - 1);
                bool cond_end_of_line_buff_S3D_27PT_STEN_buf_r1_2_p0_wr = S3D_27PT_STEN_buf_r1_2_p0_wr >= (stencilConfig.grid_size[0] - 1);

                if (cond_end_of_line_buff_S3D_27PT_STEN_buf_r1_2_p0_rd)
                    S3D_27PT_STEN_buf_r1_2_p0_rd = 0;
                else
                    S3D_27PT_STEN_buf_r1_2_p0_rd++;

                if (cond_end_of_line_buff_S3D_27PT_STEN_buf_r1_2_p0_wr)
                    S3D_27PT_STEN_buf_r1_2_p0_wr = 0;
                else
                    S3D_27PT_STEN_buf_r1_2_p0_wr++;
                bool cond_end_of_line_buff_S3D_27PT_STEN_buf_p0_1_rd = S3D_27PT_STEN_buf_p0_1_rd >= (plane_diff);
                bool cond_end_of_line_buff_S3D_27PT_STEN_buf_p0_1_wr = S3D_27PT_STEN_buf_p0_1_wr >= (plane_diff);

                if (cond_end_of_line_buff_S3D_27PT_STEN_buf_p0_1_rd)
                    S3D_27PT_STEN_buf_p0_1_rd = 0;
                else
                    S3D_27PT_STEN_buf_p0_1_rd++;

                if (cond_end_of_line_buff_S3D_27PT_STEN_buf_p0_1_wr)
                    S3D_27PT_STEN_buf_p0_1_wr = 0;
                else
                    S3D_27PT_STEN_buf_p0_1_wr++;
                bool cond_end_of_line_buff_S3D_27PT_STEN_buf_r0_1_p1_rd = S3D_27PT_STEN_buf_r0_1_p1_rd >= (stencilConfig.grid_size[0] - 1);
                bool cond_end_of_line_buff_S3D_27PT_STEN_buf_r0_1_p1_wr = S3D_27PT_STEN_buf_r0_1_p1_wr >= (stencilConfig.grid_size[0] - 1);

                if (cond_end_of_line_buff_S3D_27PT_STEN_buf_r0_1_p1_rd)
                    S3D_27PT_STEN_buf_r0_1_p1_rd = 0;
                else
                    S3D_27PT_STEN_buf_r0_1_p1_rd++;

                if (cond_end_of_line_buff_S3D_27PT_STEN_buf_r0_1_p1_wr)
                    S3D_27PT_STEN_buf_r0_1_p1_wr = 0;
                else
                    S3D_27PT_STEN_buf_r0_1_p1_wr++;
                bool cond_end_of_line_buff_S3D_27PT_STEN_buf_r1_2_p1_rd = S3D_27PT_STEN_buf_r1_2_p1_rd >= (stencilConfig.grid_size[0] - 1);
                bool cond_end_of_line_buff_S3D_27PT_STEN_buf_r1_2_p1_wr = S3D_27PT_STEN_buf_r1_2_p1_wr >= (stencilConfig.grid_size[0] - 1);

                if (cond_end_of_line_buff_S3D_27PT_STEN_buf_r1_2_p1_rd)
                    S3D_27PT_STEN_buf_r1_2_p1_rd = 0;
                else
                    S3D_27PT_STEN_buf_r1_2_p1_rd++;

                if (cond_end_of_line_buff_S3D_27PT_STEN_buf_r1_2_p1_wr)
                    S3D_27PT_STEN_buf_r1_2_p1_wr = 0;
                else
                    S3D_27PT_STEN_buf_r1_2_p1_wr++;
                bool cond_end_of_line_buff_S3D_27PT_STEN_buf_p1_2_rd = S3D_27PT_STEN_buf_p1_2_rd >= (plane_diff);
                bool cond_end_of_line_buff_S3D_27PT_STEN_buf_p1_2_wr = S3D_27PT_STEN_buf_p1_2_wr >= (plane_diff);

                if (cond_end_of_line_buff_S3D_27PT_STEN_buf_p1_2_rd)
                    S3D_27PT_STEN_buf_p1_2_rd = 0;
                else
                    S3D_27PT_STEN_buf_p1_2_rd++;

                if (cond_end_of_line_buff_S3D_27PT_STEN_buf_p1_2_wr)
                    S3D_27PT_STEN_buf_p1_2_wr = 0;
                else
                    S3D_27PT_STEN_buf_p1_2_wr++;
                bool cond_end_of_line_buff_S3D_27PT_STEN_buf_r0_1_p2_rd = S3D_27PT_STEN_buf_r0_1_p2_rd >= (stencilConfig.grid_size[0] - 1);
                bool cond_end_of_line_buff_S3D_27PT_STEN_buf_r0_1_p2_wr = S3D_27PT_STEN_buf_r0_1_p2_wr >= (stencilConfig.grid_size[0] - 1);

                if (cond_end_of_line_buff_S3D_27PT_STEN_buf_r0_1_p2_rd)
                    S3D_27PT_STEN_buf_r0_1_p2_rd = 0;
                else
                    S3D_27PT_STEN_buf_r0_1_p2_rd++;

                if (cond_end_of_line_buff_S3D_27PT_STEN_buf_r0_1_p2_wr)
                    S3D_27PT_STEN_buf_r0_1_p2_wr = 0;
                else
                    S3D_27PT_STEN_buf_r0_1_p2_wr++;
                bool cond_end_of_line_buff_S3D_27PT_STEN_buf_r1_2_p2_rd = S3D_27PT_STEN_buf_r1_2_p2_rd >= (stencilConfig.grid_size[0] - 1);
                bool cond_end_of_line_buff_S3D_27PT_STEN_buf_r1_2_p2_wr = S3D_27PT_STEN_buf_r1_2_p2_wr >= (stencilConfig.grid_size[0] - 1);

                if (cond_end_of_line_buff_S3D_27PT_STEN_buf_r1_2_p2_rd)
                    S3D_27PT_STEN_buf_r1_2_p2_rd = 0;
                else
                    S3D_27PT_STEN_buf_r1_2_p2_rd++;

                if (cond_end_of_line_buff_S3D_27PT_STEN_buf_r1_2_p2_wr)
                    S3D_27PT_STEN_buf_r1_2_p2_wr = 0;
                else
                    S3D_27PT_STEN_buf_r1_2_p2_wr++;

#ifdef DEBUG_LOG
                printf("[DEBUG][INTERNAL][pw_advection_opt_kernel_PE_%d] loop params after update i(%d), "\
                                "j(%d), "\
                                "k(%d), "\
                                "S3D_27PT_STEN_buf_r0_1_p0_rd(%d), "\
                                "S3D_27PT_STEN_buf_r0_1_p0_wr(%d), "\
                                "S3D_27PT_STEN_buf_r1_2_p0_rd(%d), "\
                                "S3D_27PT_STEN_buf_r1_2_p0_wr(%d), "\
                                "S3D_27PT_STEN_buf_p0_1_rd(%d), "\
                                "S3D_27PT_STEN_buf_p0_1_wr(%d), "\
                                "S3D_27PT_STEN_buf_r0_1_p1_rd(%d), "\
                                "S3D_27PT_STEN_buf_r0_1_p1_wr(%d), "\
                                "S3D_27PT_STEN_buf_r1_2_p1_rd(%d), "\
                                "S3D_27PT_STEN_buf_r1_2_p1_wr(%d), "\
                                "S3D_27PT_STEN_buf_p1_2_rd(%d), "\
                                "S3D_27PT_STEN_buf_p1_2_wr(%d), "\
                                "S3D_27PT_STEN_buf_r0_1_p2_rd(%d), "\
                                "S3D_27PT_STEN_buf_r0_1_p2_wr(%d), "\
                                "S3D_27PT_STEN_buf_r1_2_p2_rd(%d), "\
                                "S3D_27PT_STEN_buf_r1_2_p2_wr(%d), "\
                                "reg_itr(%d)\n", m_PEId, i, 
                                j,
                                k,
                                S3D_27PT_STEN_buf_r0_1_p0_rd, 
                                S3D_27PT_STEN_buf_r0_1_p0_wr, 
                                S3D_27PT_STEN_buf_r1_2_p0_rd, 
                                S3D_27PT_STEN_buf_r1_2_p0_wr, 
                                S3D_27PT_STEN_buf_p0_1_rd, 
                                S3D_27PT_STEN_buf_p0_1_wr, 
                                S3D_27PT_STEN_buf_r0_1_p1_rd, 
                                S3D_27PT_STEN_buf_r0_1_p1_wr, 
                                S3D_27PT_STEN_buf_r1_2_p1_rd, 
                                S3D_27PT_STEN_buf_r1_2_p1_wr, 
                                S3D_27PT_STEN_buf_p1_2_rd, 
                                S3D_27PT_STEN_buf_p1_2_wr, 
                                S3D_27PT_STEN_buf_r0_1_p2_rd, 
                                S3D_27PT_STEN_buf_r0_1_p2_wr, 
                                S3D_27PT_STEN_buf_r1_2_p2_rd, 
                                S3D_27PT_STEN_buf_r1_2_p2_wr, 
                                reg_itr);

                printf("[DEBUG][INTERNAL][pw_advection_opt_kernel_PE_%d] --------------------------------------------------------\n\n", m_PEId);

                printf("[DEBUG][INTERNAL][pw_advection_opt_kernel_PE_%d] read values arg0: (", m_PEId);
                for (int ri = 0; ri < vector_factor; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg0_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
                printf("[DEBUG][INTERNAL][pw_advection_opt_kernel_PE_%d] read values arg1: (", m_PEId);
                for (int ri = 0; ri < vector_factor; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg1_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
                printf("[DEBUG][INTERNAL][pw_advection_opt_kernel_PE_%d] read values arg2: (", m_PEId);
                for (int ri = 0; ri < vector_factor; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg2_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
                printf("[DEBUG][INTERNAL][pw_advection_opt_kernel_PE_%d] read values arg6: (", m_PEId);
                for (int ri = 0; ri < vector_factor; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg6_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
                printf("[DEBUG][INTERNAL][pw_advection_opt_kernel_PE_%d] read values arg7: (", m_PEId);
                for (int ri = 0; ri < vector_factor; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg7_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
                printf("[DEBUG][INTERNAL][pw_advection_opt_kernel_PE_%d] read values arg8: (", m_PEId);
                for (int ri = 0; ri < vector_factor; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg8_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
                printf("[DEBUG][INTERNAL][pw_advection_opt_kernel_PE_%d] read values arg9: (", m_PEId);
                for (int ri = 0; ri < vector_factor; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg9_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
#endif      
            }

            vec2arr: for (unsigned short x = 0; x < vector_factor; x++)
            {
#pragma HLS UNROLL factor=vector_factor
                ops::hls::DataConv arg0_tmpConverter_0_0;
                arg0_tmpConverter_0_0.i = arg0_widenStencilValues[1].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg0_rowArr_0_0[x + half_span_x] = arg0_tmpConverter_0_0.f; 
                ops::hls::DataConv arg0_tmpConverter_1_0;
                arg0_tmpConverter_1_0.i = arg0_widenStencilValues[4].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg0_rowArr_1_0[x + half_span_x] = arg0_tmpConverter_1_0.f; 
                ops::hls::DataConv arg0_tmpConverter_2_0;
                arg0_tmpConverter_2_0.i = arg0_widenStencilValues[7].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg0_rowArr_2_0[x + half_span_x] = arg0_tmpConverter_2_0.f; 
                ops::hls::DataConv arg0_tmpConverter_0_1;
                arg0_tmpConverter_0_1.i = arg0_widenStencilValues[10].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg0_rowArr_0_1[x + half_span_x] = arg0_tmpConverter_0_1.f; 
                ops::hls::DataConv arg0_tmpConverter_1_1;
                arg0_tmpConverter_1_1.i = arg0_widenStencilValues[13].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg0_rowArr_1_1[x + half_span_x] = arg0_tmpConverter_1_1.f; 
                ops::hls::DataConv arg0_tmpConverter_2_1;
                arg0_tmpConverter_2_1.i = arg0_widenStencilValues[16].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg0_rowArr_2_1[x + half_span_x] = arg0_tmpConverter_2_1.f; 
                ops::hls::DataConv arg0_tmpConverter_0_2;
                arg0_tmpConverter_0_2.i = arg0_widenStencilValues[19].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg0_rowArr_0_2[x + half_span_x] = arg0_tmpConverter_0_2.f; 
                ops::hls::DataConv arg0_tmpConverter_1_2;
                arg0_tmpConverter_1_2.i = arg0_widenStencilValues[22].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg0_rowArr_1_2[x + half_span_x] = arg0_tmpConverter_1_2.f; 
                ops::hls::DataConv arg0_tmpConverter_2_2;
                arg0_tmpConverter_2_2.i = arg0_widenStencilValues[25].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg0_rowArr_2_2[x + half_span_x] = arg0_tmpConverter_2_2.f; 
                ops::hls::DataConv arg1_tmpConverter_0_0;
                arg1_tmpConverter_0_0.i = arg1_widenStencilValues[1].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg1_rowArr_0_0[x + half_span_x] = arg1_tmpConverter_0_0.f; 
                ops::hls::DataConv arg1_tmpConverter_1_0;
                arg1_tmpConverter_1_0.i = arg1_widenStencilValues[4].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg1_rowArr_1_0[x + half_span_x] = arg1_tmpConverter_1_0.f; 
                ops::hls::DataConv arg1_tmpConverter_2_0;
                arg1_tmpConverter_2_0.i = arg1_widenStencilValues[7].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg1_rowArr_2_0[x + half_span_x] = arg1_tmpConverter_2_0.f; 
                ops::hls::DataConv arg1_tmpConverter_0_1;
                arg1_tmpConverter_0_1.i = arg1_widenStencilValues[10].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg1_rowArr_0_1[x + half_span_x] = arg1_tmpConverter_0_1.f; 
                ops::hls::DataConv arg1_tmpConverter_1_1;
                arg1_tmpConverter_1_1.i = arg1_widenStencilValues[13].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg1_rowArr_1_1[x + half_span_x] = arg1_tmpConverter_1_1.f; 
                ops::hls::DataConv arg1_tmpConverter_2_1;
                arg1_tmpConverter_2_1.i = arg1_widenStencilValues[16].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg1_rowArr_2_1[x + half_span_x] = arg1_tmpConverter_2_1.f; 
                ops::hls::DataConv arg1_tmpConverter_0_2;
                arg1_tmpConverter_0_2.i = arg1_widenStencilValues[19].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg1_rowArr_0_2[x + half_span_x] = arg1_tmpConverter_0_2.f; 
                ops::hls::DataConv arg1_tmpConverter_1_2;
                arg1_tmpConverter_1_2.i = arg1_widenStencilValues[22].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg1_rowArr_1_2[x + half_span_x] = arg1_tmpConverter_1_2.f; 
                ops::hls::DataConv arg1_tmpConverter_2_2;
                arg1_tmpConverter_2_2.i = arg1_widenStencilValues[25].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg1_rowArr_2_2[x + half_span_x] = arg1_tmpConverter_2_2.f; 
                ops::hls::DataConv arg2_tmpConverter_0_0;
                arg2_tmpConverter_0_0.i = arg2_widenStencilValues[1].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg2_rowArr_0_0[x + half_span_x] = arg2_tmpConverter_0_0.f; 
                ops::hls::DataConv arg2_tmpConverter_1_0;
                arg2_tmpConverter_1_0.i = arg2_widenStencilValues[4].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg2_rowArr_1_0[x + half_span_x] = arg2_tmpConverter_1_0.f; 
                ops::hls::DataConv arg2_tmpConverter_2_0;
                arg2_tmpConverter_2_0.i = arg2_widenStencilValues[7].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg2_rowArr_2_0[x + half_span_x] = arg2_tmpConverter_2_0.f; 
                ops::hls::DataConv arg2_tmpConverter_0_1;
                arg2_tmpConverter_0_1.i = arg2_widenStencilValues[10].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg2_rowArr_0_1[x + half_span_x] = arg2_tmpConverter_0_1.f; 
                ops::hls::DataConv arg2_tmpConverter_1_1;
                arg2_tmpConverter_1_1.i = arg2_widenStencilValues[13].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg2_rowArr_1_1[x + half_span_x] = arg2_tmpConverter_1_1.f; 
                ops::hls::DataConv arg2_tmpConverter_2_1;
                arg2_tmpConverter_2_1.i = arg2_widenStencilValues[16].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg2_rowArr_2_1[x + half_span_x] = arg2_tmpConverter_2_1.f; 
                ops::hls::DataConv arg2_tmpConverter_0_2;
                arg2_tmpConverter_0_2.i = arg2_widenStencilValues[19].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg2_rowArr_0_2[x + half_span_x] = arg2_tmpConverter_0_2.f; 
                ops::hls::DataConv arg2_tmpConverter_1_2;
                arg2_tmpConverter_1_2.i = arg2_widenStencilValues[22].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg2_rowArr_1_2[x + half_span_x] = arg2_tmpConverter_1_2.f; 
                ops::hls::DataConv arg2_tmpConverter_2_2;
                arg2_tmpConverter_2_2.i = arg2_widenStencilValues[25].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg2_rowArr_2_2[x + half_span_x] = arg2_tmpConverter_2_2.f; 
                ops::hls::DataConv arg6_tmpConverter_0_0;
                arg6_tmpConverter_0_0.i = arg6_widenStencilValues[0].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg6_rowArr_0_0[x + half_span_x] = arg6_tmpConverter_0_0.f; 
                ops::hls::DataConv arg7_tmpConverter_0_0;
                arg7_tmpConverter_0_0.i = arg7_widenStencilValues[0].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg7_rowArr_0_0[x + half_span_x] = arg7_tmpConverter_0_0.f; 
                ops::hls::DataConv arg8_tmpConverter_0_0;
                arg8_tmpConverter_0_0.i = arg8_widenStencilValues[0].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg8_rowArr_0_0[x + half_span_x] = arg8_tmpConverter_0_0.f; 
                ops::hls::DataConv arg9_tmpConverter_0_0;
                arg9_tmpConverter_0_0.i = arg9_widenStencilValues[0].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg9_rowArr_0_0[x + half_span_x] = arg9_tmpConverter_0_0.f; 

            }
            vec2arr_rest:
            {
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg0_tmpConverter_0_0_0_7;
                arg0_tmpConverter_0_0_0_7.i = arg0_widenStencilValues[0].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg0_rowArr_0_0[0] = arg0_tmpConverter_0_0_0_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg0_tmpConverter_2_0_0_0;
                arg0_tmpConverter_2_0_0_0.i = arg0_widenStencilValues[2].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg0_rowArr_0_0[9] = arg0_tmpConverter_2_0_0_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg0_tmpConverter_0_1_0_7;
                arg0_tmpConverter_0_1_0_7.i = arg0_widenStencilValues[3].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg0_rowArr_1_0[0] = arg0_tmpConverter_0_1_0_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg0_tmpConverter_2_1_0_0;
                arg0_tmpConverter_2_1_0_0.i = arg0_widenStencilValues[5].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg0_rowArr_1_0[9] = arg0_tmpConverter_2_1_0_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg0_tmpConverter_0_2_0_7;
                arg0_tmpConverter_0_2_0_7.i = arg0_widenStencilValues[6].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg0_rowArr_2_0[0] = arg0_tmpConverter_0_2_0_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg0_tmpConverter_2_2_0_0;
                arg0_tmpConverter_2_2_0_0.i = arg0_widenStencilValues[8].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg0_rowArr_2_0[9] = arg0_tmpConverter_2_2_0_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg0_tmpConverter_0_0_1_7;
                arg0_tmpConverter_0_0_1_7.i = arg0_widenStencilValues[9].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg0_rowArr_0_1[0] = arg0_tmpConverter_0_0_1_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg0_tmpConverter_2_0_1_0;
                arg0_tmpConverter_2_0_1_0.i = arg0_widenStencilValues[11].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg0_rowArr_0_1[9] = arg0_tmpConverter_2_0_1_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg0_tmpConverter_0_1_1_7;
                arg0_tmpConverter_0_1_1_7.i = arg0_widenStencilValues[12].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg0_rowArr_1_1[0] = arg0_tmpConverter_0_1_1_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg0_tmpConverter_2_1_1_0;
                arg0_tmpConverter_2_1_1_0.i = arg0_widenStencilValues[14].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg0_rowArr_1_1[9] = arg0_tmpConverter_2_1_1_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg0_tmpConverter_0_2_1_7;
                arg0_tmpConverter_0_2_1_7.i = arg0_widenStencilValues[15].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg0_rowArr_2_1[0] = arg0_tmpConverter_0_2_1_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg0_tmpConverter_2_2_1_0;
                arg0_tmpConverter_2_2_1_0.i = arg0_widenStencilValues[17].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg0_rowArr_2_1[9] = arg0_tmpConverter_2_2_1_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg0_tmpConverter_0_0_2_7;
                arg0_tmpConverter_0_0_2_7.i = arg0_widenStencilValues[18].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg0_rowArr_0_2[0] = arg0_tmpConverter_0_0_2_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg0_tmpConverter_2_0_2_0;
                arg0_tmpConverter_2_0_2_0.i = arg0_widenStencilValues[20].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg0_rowArr_0_2[9] = arg0_tmpConverter_2_0_2_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg0_tmpConverter_0_1_2_7;
                arg0_tmpConverter_0_1_2_7.i = arg0_widenStencilValues[21].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg0_rowArr_1_2[0] = arg0_tmpConverter_0_1_2_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg0_tmpConverter_2_1_2_0;
                arg0_tmpConverter_2_1_2_0.i = arg0_widenStencilValues[23].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg0_rowArr_1_2[9] = arg0_tmpConverter_2_1_2_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg0_tmpConverter_0_2_2_7;
                arg0_tmpConverter_0_2_2_7.i = arg0_widenStencilValues[24].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg0_rowArr_2_2[0] = arg0_tmpConverter_0_2_2_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg0_tmpConverter_2_2_2_0;
                arg0_tmpConverter_2_2_2_0.i = arg0_widenStencilValues[26].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg0_rowArr_2_2[9] = arg0_tmpConverter_2_2_2_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg1_tmpConverter_0_0_0_7;
                arg1_tmpConverter_0_0_0_7.i = arg1_widenStencilValues[0].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg1_rowArr_0_0[0] = arg1_tmpConverter_0_0_0_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg1_tmpConverter_2_0_0_0;
                arg1_tmpConverter_2_0_0_0.i = arg1_widenStencilValues[2].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg1_rowArr_0_0[9] = arg1_tmpConverter_2_0_0_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg1_tmpConverter_0_1_0_7;
                arg1_tmpConverter_0_1_0_7.i = arg1_widenStencilValues[3].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg1_rowArr_1_0[0] = arg1_tmpConverter_0_1_0_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg1_tmpConverter_2_1_0_0;
                arg1_tmpConverter_2_1_0_0.i = arg1_widenStencilValues[5].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg1_rowArr_1_0[9] = arg1_tmpConverter_2_1_0_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg1_tmpConverter_0_2_0_7;
                arg1_tmpConverter_0_2_0_7.i = arg1_widenStencilValues[6].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg1_rowArr_2_0[0] = arg1_tmpConverter_0_2_0_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg1_tmpConverter_2_2_0_0;
                arg1_tmpConverter_2_2_0_0.i = arg1_widenStencilValues[8].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg1_rowArr_2_0[9] = arg1_tmpConverter_2_2_0_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg1_tmpConverter_0_0_1_7;
                arg1_tmpConverter_0_0_1_7.i = arg1_widenStencilValues[9].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg1_rowArr_0_1[0] = arg1_tmpConverter_0_0_1_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg1_tmpConverter_2_0_1_0;
                arg1_tmpConverter_2_0_1_0.i = arg1_widenStencilValues[11].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg1_rowArr_0_1[9] = arg1_tmpConverter_2_0_1_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg1_tmpConverter_0_1_1_7;
                arg1_tmpConverter_0_1_1_7.i = arg1_widenStencilValues[12].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg1_rowArr_1_1[0] = arg1_tmpConverter_0_1_1_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg1_tmpConverter_2_1_1_0;
                arg1_tmpConverter_2_1_1_0.i = arg1_widenStencilValues[14].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg1_rowArr_1_1[9] = arg1_tmpConverter_2_1_1_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg1_tmpConverter_0_2_1_7;
                arg1_tmpConverter_0_2_1_7.i = arg1_widenStencilValues[15].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg1_rowArr_2_1[0] = arg1_tmpConverter_0_2_1_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg1_tmpConverter_2_2_1_0;
                arg1_tmpConverter_2_2_1_0.i = arg1_widenStencilValues[17].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg1_rowArr_2_1[9] = arg1_tmpConverter_2_2_1_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg1_tmpConverter_0_0_2_7;
                arg1_tmpConverter_0_0_2_7.i = arg1_widenStencilValues[18].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg1_rowArr_0_2[0] = arg1_tmpConverter_0_0_2_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg1_tmpConverter_2_0_2_0;
                arg1_tmpConverter_2_0_2_0.i = arg1_widenStencilValues[20].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg1_rowArr_0_2[9] = arg1_tmpConverter_2_0_2_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg1_tmpConverter_0_1_2_7;
                arg1_tmpConverter_0_1_2_7.i = arg1_widenStencilValues[21].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg1_rowArr_1_2[0] = arg1_tmpConverter_0_1_2_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg1_tmpConverter_2_1_2_0;
                arg1_tmpConverter_2_1_2_0.i = arg1_widenStencilValues[23].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg1_rowArr_1_2[9] = arg1_tmpConverter_2_1_2_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg1_tmpConverter_0_2_2_7;
                arg1_tmpConverter_0_2_2_7.i = arg1_widenStencilValues[24].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg1_rowArr_2_2[0] = arg1_tmpConverter_0_2_2_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg1_tmpConverter_2_2_2_0;
                arg1_tmpConverter_2_2_2_0.i = arg1_widenStencilValues[26].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg1_rowArr_2_2[9] = arg1_tmpConverter_2_2_2_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg2_tmpConverter_0_0_0_7;
                arg2_tmpConverter_0_0_0_7.i = arg2_widenStencilValues[0].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg2_rowArr_0_0[0] = arg2_tmpConverter_0_0_0_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg2_tmpConverter_2_0_0_0;
                arg2_tmpConverter_2_0_0_0.i = arg2_widenStencilValues[2].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg2_rowArr_0_0[9] = arg2_tmpConverter_2_0_0_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg2_tmpConverter_0_1_0_7;
                arg2_tmpConverter_0_1_0_7.i = arg2_widenStencilValues[3].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg2_rowArr_1_0[0] = arg2_tmpConverter_0_1_0_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg2_tmpConverter_2_1_0_0;
                arg2_tmpConverter_2_1_0_0.i = arg2_widenStencilValues[5].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg2_rowArr_1_0[9] = arg2_tmpConverter_2_1_0_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg2_tmpConverter_0_2_0_7;
                arg2_tmpConverter_0_2_0_7.i = arg2_widenStencilValues[6].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg2_rowArr_2_0[0] = arg2_tmpConverter_0_2_0_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg2_tmpConverter_2_2_0_0;
                arg2_tmpConverter_2_2_0_0.i = arg2_widenStencilValues[8].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg2_rowArr_2_0[9] = arg2_tmpConverter_2_2_0_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg2_tmpConverter_0_0_1_7;
                arg2_tmpConverter_0_0_1_7.i = arg2_widenStencilValues[9].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg2_rowArr_0_1[0] = arg2_tmpConverter_0_0_1_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg2_tmpConverter_2_0_1_0;
                arg2_tmpConverter_2_0_1_0.i = arg2_widenStencilValues[11].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg2_rowArr_0_1[9] = arg2_tmpConverter_2_0_1_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg2_tmpConverter_0_1_1_7;
                arg2_tmpConverter_0_1_1_7.i = arg2_widenStencilValues[12].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg2_rowArr_1_1[0] = arg2_tmpConverter_0_1_1_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg2_tmpConverter_2_1_1_0;
                arg2_tmpConverter_2_1_1_0.i = arg2_widenStencilValues[14].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg2_rowArr_1_1[9] = arg2_tmpConverter_2_1_1_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg2_tmpConverter_0_2_1_7;
                arg2_tmpConverter_0_2_1_7.i = arg2_widenStencilValues[15].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg2_rowArr_2_1[0] = arg2_tmpConverter_0_2_1_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg2_tmpConverter_2_2_1_0;
                arg2_tmpConverter_2_2_1_0.i = arg2_widenStencilValues[17].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg2_rowArr_2_1[9] = arg2_tmpConverter_2_2_1_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg2_tmpConverter_0_0_2_7;
                arg2_tmpConverter_0_0_2_7.i = arg2_widenStencilValues[18].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg2_rowArr_0_2[0] = arg2_tmpConverter_0_0_2_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg2_tmpConverter_2_0_2_0;
                arg2_tmpConverter_2_0_2_0.i = arg2_widenStencilValues[20].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg2_rowArr_0_2[9] = arg2_tmpConverter_2_0_2_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg2_tmpConverter_0_1_2_7;
                arg2_tmpConverter_0_1_2_7.i = arg2_widenStencilValues[21].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg2_rowArr_1_2[0] = arg2_tmpConverter_0_1_2_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg2_tmpConverter_2_1_2_0;
                arg2_tmpConverter_2_1_2_0.i = arg2_widenStencilValues[23].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg2_rowArr_1_2[9] = arg2_tmpConverter_2_1_2_0.f;
                //diff = -1
                // access_idx = 0
                ops::hls::DataConv arg2_tmpConverter_0_2_2_7;
                arg2_tmpConverter_0_2_2_7.i = arg2_widenStencilValues[24].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                arg2_rowArr_2_2[0] = arg2_tmpConverter_0_2_2_7.f;
                //diff = 1
                // access_idx = 9
                ops::hls::DataConv arg2_tmpConverter_2_2_2_0;
                arg2_tmpConverter_2_2_2_0.i = arg2_widenStencilValues[26].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                arg2_rowArr_2_2[9] = arg2_tmpConverter_2_2_2_0.f;
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
                printf("[DEBUG][INTERNAL][pw_advection_opt_kernel_PE_%d] index=(%d, %d, %d), lowerbound=(%d, %d, %d), upperbound=(%d, %d, %d), neg_cond=%d\n", m_PEId, index, j, k,
                            stencilConfig.lower_limit[0], stencilConfig.lower_limit[1], stencilConfig.lower_limit[2], 
                            stencilConfig.upper_limit[0], stencilConfig.upper_limit[1], stencilConfig.upper_limit[2], neg_cond);

#endif

                stencil_type arg3_result;

                stencil_type arg4_result;

                stencil_type arg5_result;

                kernel_pw_advection_opt_kernel_core(
                        arg0_rowArr_0_0[x + 0],
                        arg0_rowArr_0_0[x + 1],
                        arg0_rowArr_0_0[x + 2],
                        arg0_rowArr_1_0[x + 0],
                        arg0_rowArr_1_0[x + 1],
                        arg0_rowArr_1_0[x + 2],
                        arg0_rowArr_2_0[x + 0],
                        arg0_rowArr_2_0[x + 1],
                        arg0_rowArr_2_0[x + 2],
                        arg0_rowArr_0_1[x + 0],
                        arg0_rowArr_0_1[x + 1],
                        arg0_rowArr_0_1[x + 2],
                        arg0_rowArr_1_1[x + 0],
                        arg0_rowArr_1_1[x + 1],
                        arg0_rowArr_1_1[x + 2],
                        arg0_rowArr_2_1[x + 0],
                        arg0_rowArr_2_1[x + 1],
                        arg0_rowArr_2_1[x + 2],
                        arg0_rowArr_0_2[x + 0],
                        arg0_rowArr_0_2[x + 1],
                        arg0_rowArr_0_2[x + 2],
                        arg0_rowArr_1_2[x + 0],
                        arg0_rowArr_1_2[x + 1],
                        arg0_rowArr_1_2[x + 2],
                        arg0_rowArr_2_2[x + 0],
                        arg0_rowArr_2_2[x + 1],
                        arg0_rowArr_2_2[x + 2],
                        arg1_rowArr_0_0[x + 0],
                        arg1_rowArr_0_0[x + 1],
                        arg1_rowArr_0_0[x + 2],
                        arg1_rowArr_1_0[x + 0],
                        arg1_rowArr_1_0[x + 1],
                        arg1_rowArr_1_0[x + 2],
                        arg1_rowArr_2_0[x + 0],
                        arg1_rowArr_2_0[x + 1],
                        arg1_rowArr_2_0[x + 2],
                        arg1_rowArr_0_1[x + 0],
                        arg1_rowArr_0_1[x + 1],
                        arg1_rowArr_0_1[x + 2],
                        arg1_rowArr_1_1[x + 0],
                        arg1_rowArr_1_1[x + 1],
                        arg1_rowArr_1_1[x + 2],
                        arg1_rowArr_2_1[x + 0],
                        arg1_rowArr_2_1[x + 1],
                        arg1_rowArr_2_1[x + 2],
                        arg1_rowArr_0_2[x + 0],
                        arg1_rowArr_0_2[x + 1],
                        arg1_rowArr_0_2[x + 2],
                        arg1_rowArr_1_2[x + 0],
                        arg1_rowArr_1_2[x + 1],
                        arg1_rowArr_1_2[x + 2],
                        arg1_rowArr_2_2[x + 0],
                        arg1_rowArr_2_2[x + 1],
                        arg1_rowArr_2_2[x + 2],
                        arg2_rowArr_0_0[x + 0],
                        arg2_rowArr_0_0[x + 1],
                        arg2_rowArr_0_0[x + 2],
                        arg2_rowArr_1_0[x + 0],
                        arg2_rowArr_1_0[x + 1],
                        arg2_rowArr_1_0[x + 2],
                        arg2_rowArr_2_0[x + 0],
                        arg2_rowArr_2_0[x + 1],
                        arg2_rowArr_2_0[x + 2],
                        arg2_rowArr_0_1[x + 0],
                        arg2_rowArr_0_1[x + 1],
                        arg2_rowArr_0_1[x + 2],
                        arg2_rowArr_1_1[x + 0],
                        arg2_rowArr_1_1[x + 1],
                        arg2_rowArr_1_1[x + 2],
                        arg2_rowArr_2_1[x + 0],
                        arg2_rowArr_2_1[x + 1],
                        arg2_rowArr_2_1[x + 2],
                        arg2_rowArr_0_2[x + 0],
                        arg2_rowArr_0_2[x + 1],
                        arg2_rowArr_0_2[x + 2],
                        arg2_rowArr_1_2[x + 0],
                        arg2_rowArr_1_2[x + 1],
                        arg2_rowArr_1_2[x + 2],
                        arg2_rowArr_2_2[x + 0],
                        arg2_rowArr_2_2[x + 1],
                        arg2_rowArr_2_2[x + 2],
                        arg3_result,
                        arg4_result,
                        arg5_result,
                        arg6_rowArr_0_0[x + 1],
                        arg7_rowArr_0_0[x + 1],
                        arg8_rowArr_0_0[x + 1],
                        arg9_rowArr_0_0[x + 1]
                );

                ops::hls::DataConv arg3_tmpConvWrite;
                ops::hls::DataConv arg4_tmpConvWrite;
                ops::hls::DataConv arg5_tmpConvWrite;
                ops::hls::DataConv arg6_tmpConvWrite;
                ops::hls::DataConv arg7_tmpConvWrite;
                ops::hls::DataConv arg8_tmpConvWrite;
                ops::hls::DataConv arg9_tmpConvWrite;

                if (not neg_cond)
                {
                    arg3_tmpConvWrite.f = arg3_result;
                    arg4_tmpConvWrite.f = arg4_result;
                    arg5_tmpConvWrite.f = arg5_result;
                }
                else
                {

    // [3, 4, 5, 0, 1, 2, 6, 7, 8, 9]
            //dat_id: 3, dat: u2, swap_id: 0, swap_dat: u
                    arg3_tmpConvWrite.f = arg0_rowArr_1_1[x + 1];
            //dat_id: 4, dat: v2, swap_id: 1, swap_dat: v
                    arg4_tmpConvWrite.f = arg1_rowArr_1_1[x + 1];
            //dat_id: 5, dat: w2, swap_id: 2, swap_dat: w
                    arg5_tmpConvWrite.f = arg2_rowArr_1_1[x + 1];
                }
            // *** rw convertions ***
                arg6_tmpConvWrite.f = arg6_rowArr_0_0[x + 1];
                arg7_tmpConvWrite.f = arg7_rowArr_0_0[x + 1];
                arg8_tmpConvWrite.f = arg8_rowArr_0_0[x + 1];
                arg9_tmpConvWrite.f = arg9_rowArr_0_0[x + 1];

                arg3_update_val.range(s_datatype_size * (x + 1) - 1, x * s_datatype_size) = arg3_tmpConvWrite.i;
                arg4_update_val.range(s_datatype_size * (x + 1) - 1, x * s_datatype_size) = arg4_tmpConvWrite.i;
                arg5_update_val.range(s_datatype_size * (x + 1) - 1, x * s_datatype_size) = arg5_tmpConvWrite.i;
                arg6_update_val.range(s_datatype_size * (x + 1) - 1, x * s_datatype_size) = arg6_tmpConvWrite.i;
                arg7_update_val.range(s_datatype_size * (x + 1) - 1, x * s_datatype_size) = arg7_tmpConvWrite.i;
                arg8_update_val.range(s_datatype_size * (x + 1) - 1, x * s_datatype_size) = arg8_tmpConvWrite.i;
                arg9_update_val.range(s_datatype_size * (x + 1) - 1, x * s_datatype_size) = arg9_tmpConvWrite.i;

            }

            write:
            {
                bool cond_write = (k >= 0);

                if (cond_write)
                {
#ifdef DEBUG_LOG
                    printf("[DEBUG][INTERNAL][pw_advection_opt_kernel_PE_%d] --------------------------------------------------------\n\n", m_PEId);

                    printf("[DEBUG][INTERNAL][pw_advection_opt_kernel_PE_%d] wirte values arg3: (", m_PEId);
                    for (int ri = 0; ri < vector_factor; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg3_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
                    printf("[DEBUG][INTERNAL][pw_advection_opt_kernel_PE_%d] wirte values arg4: (", m_PEId);
                    for (int ri = 0; ri < vector_factor; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg4_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
                    printf("[DEBUG][INTERNAL][pw_advection_opt_kernel_PE_%d] wirte values arg5: (", m_PEId);
                    for (int ri = 0; ri < vector_factor; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg5_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
                    printf("[DEBUG][INTERNAL][pw_advection_opt_kernel_PE_%d] wirte values arg6: (", m_PEId);
                    for (int ri = 0; ri < vector_factor; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg6_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
                    printf("[DEBUG][INTERNAL][pw_advection_opt_kernel_PE_%d] wirte values arg7: (", m_PEId);
                    for (int ri = 0; ri < vector_factor; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg7_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
                    printf("[DEBUG][INTERNAL][pw_advection_opt_kernel_PE_%d] wirte values arg8: (", m_PEId);
                    for (int ri = 0; ri < vector_factor; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg8_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
                    printf("[DEBUG][INTERNAL][pw_advection_opt_kernel_PE_%d] wirte values arg9: (", m_PEId);
                    for (int ri = 0; ri < vector_factor; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg9_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
#endif
                    arg3_wr_buffer <<  arg3_update_val;
                    arg4_wr_buffer <<  arg4_update_val;
                    arg5_wr_buffer <<  arg5_update_val;
                    arg6_wr_buffer <<  arg6_update_val;
                    arg7_wr_buffer <<  arg7_update_val;
                    arg8_wr_buffer <<  arg8_update_val;
                    arg9_wr_buffer <<  arg9_update_val;
                }
            }
        }
    } 
};

void kernel_pw_advection_opt_kernel_PE(const short& PEId, const ops::hls::StencilConfigCore& stencilConfig,
            //u
    widen_stream_pw_advection_opt_kernel_0_dt& arg0_rd_buffer,
            //v
    widen_stream_pw_advection_opt_kernel_1_dt& arg1_rd_buffer,
            //w
    widen_stream_pw_advection_opt_kernel_2_dt& arg2_rd_buffer,
            //u2
    widen_stream_pw_advection_opt_kernel_3_dt& arg3_wr_buffer,        
            //v2
    widen_stream_pw_advection_opt_kernel_4_dt& arg4_wr_buffer,        
            //w2
    widen_stream_pw_advection_opt_kernel_5_dt& arg5_wr_buffer,        
            //tzc1
    widen_stream_pw_advection_opt_kernel_6_dt& arg6_rd_buffer,
    widen_stream_pw_advection_opt_kernel_6_dt& arg6_wr_buffer,
            //tzc2
    widen_stream_pw_advection_opt_kernel_7_dt& arg7_rd_buffer,
    widen_stream_pw_advection_opt_kernel_7_dt& arg7_wr_buffer,
            //tzd1
    widen_stream_pw_advection_opt_kernel_8_dt& arg8_rd_buffer,
    widen_stream_pw_advection_opt_kernel_8_dt& arg8_wr_buffer,
            //tzd2
    widen_stream_pw_advection_opt_kernel_9_dt& arg9_rd_buffer,
    widen_stream_pw_advection_opt_kernel_9_dt& arg9_wr_buffer
)
{
    Stencil_pw_advection_opt_kernel stencil;

#ifdef DEBUG_LOG
    printf("[KERNEL_DEBUG]|%s| stencil config gridSize: %d (xblocks), %d, %d\n", __func__, stencilConfig.grid_size[0], stencilConfig.grid_size[1], stencilConfig.grid_size[2]);
#endif
    stencil.setConfig(PEId, stencilConfig);

#ifdef DEBUG_LOG
    printf("[KERNEL_DEBUG]|%s| starting stencil kernel PE\n", __func__);
#endif

    stencil.stencilRun(
            arg0_rd_buffer,
            arg1_rd_buffer,
            arg2_rd_buffer,
            arg3_wr_buffer,
            arg4_wr_buffer,
            arg5_wr_buffer,
            arg6_rd_buffer,
            arg6_wr_buffer,
            arg7_rd_buffer,
            arg7_wr_buffer,
            arg8_rd_buffer,
            arg8_wr_buffer,
            arg9_rd_buffer,
            arg9_wr_buffer

);

#ifdef DEBUG_LOG
    printf("[KERNEL_DEBUG]|%s| Ending stencil kernel PE\n", __func__);
#endif
} 
