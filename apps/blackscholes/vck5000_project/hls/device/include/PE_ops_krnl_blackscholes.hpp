// Auto-generated at 2025-07-28 21:56:24.296000 by ops-translator

#pragma once
#include <ops_hls_kernel_support.h>
#include "common_config.hpp"

static constexpr unsigned short read_num_points_ops_krnl_blackscholes = 3;
static constexpr unsigned short read_stencil_size_ops_krnl_blackscholes = 3;
static constexpr unsigned short read_stencil_dim_ops_krnl_blackscholes = 1;

static constexpr unsigned short write_num_points_ops_krnl_blackscholes = 1;
static constexpr unsigned short write_stencil_size_ops_krnl_blackscholes = 1;
static constexpr unsigned short write_stencil_dim_ops_krnl_blackscholes = 1;

static constexpr unsigned short vector_factor_ops_krnl_blackscholes_0 = vector_factor * 1;
static constexpr unsigned short axis_data_width_l_ops_krnl_blackscholes_0 = vector_factor_ops_krnl_blackscholes_0 * data_width;
typedef ap_uint<axis_data_width_l_ops_krnl_blackscholes_0> widen_ops_krnl_blackscholes_0_dt;
static constexpr unsigned short vector_factor_ops_krnl_blackscholes_1 = vector_factor * 1;
static constexpr unsigned short axis_data_width_l_ops_krnl_blackscholes_1 = vector_factor_ops_krnl_blackscholes_1 * data_width;
typedef ap_uint<axis_data_width_l_ops_krnl_blackscholes_1> widen_ops_krnl_blackscholes_1_dt;
static constexpr unsigned short vector_factor_ops_krnl_blackscholes_2 = vector_factor * 1;
static constexpr unsigned short axis_data_width_l_ops_krnl_blackscholes_2 = vector_factor_ops_krnl_blackscholes_2 * data_width;
typedef ap_uint<axis_data_width_l_ops_krnl_blackscholes_2> widen_ops_krnl_blackscholes_2_dt;
static constexpr unsigned short vector_factor_ops_krnl_blackscholes_3 = vector_factor * 1;
static constexpr unsigned short axis_data_width_l_ops_krnl_blackscholes_3 = vector_factor_ops_krnl_blackscholes_3 * data_width;
typedef ap_uint<axis_data_width_l_ops_krnl_blackscholes_3> widen_ops_krnl_blackscholes_3_dt;
static constexpr unsigned short vector_factor_ops_krnl_blackscholes_4 = vector_factor * 1;
static constexpr unsigned short axis_data_width_l_ops_krnl_blackscholes_4 = vector_factor_ops_krnl_blackscholes_4 * data_width;
typedef ap_uint<axis_data_width_l_ops_krnl_blackscholes_4> widen_ops_krnl_blackscholes_4_dt;

typedef ::hls::stream<widen_ops_krnl_blackscholes_0_dt> widen_stream_ops_krnl_blackscholes_0_dt;
typedef ::hls::stream<widen_ops_krnl_blackscholes_1_dt> widen_stream_ops_krnl_blackscholes_1_dt;
typedef ::hls::stream<widen_ops_krnl_blackscholes_2_dt> widen_stream_ops_krnl_blackscholes_2_dt;
typedef ::hls::stream<widen_ops_krnl_blackscholes_3_dt> widen_stream_ops_krnl_blackscholes_3_dt;
typedef ::hls::stream<widen_ops_krnl_blackscholes_4_dt> widen_stream_ops_krnl_blackscholes_4_dt;

/*
    ArgDat(id=0, loc=/home/x_thileeb/repos/ops-hls-pact25-artifact/apps/blackscholes/vck5000_project/blackscholes.cpp/364:6, access_type=AccessType.OPS_WRITE, opt=True, dat_id=0, global_dat_id=0, stencil_id=S1D_1pt)
    ArgDat(id=1, loc=/home/x_thileeb/repos/ops-hls-pact25-artifact/apps/blackscholes/vck5000_project/blackscholes.cpp/365:6, access_type=AccessType.OPS_READ, opt=True, dat_id=1, global_dat_id=1, stencil_id=S1D_3pt)
    ArgDat(id=2, loc=/home/x_thileeb/repos/ops-hls-pact25-artifact/apps/blackscholes/vck5000_project/blackscholes.cpp/366:6, access_type=AccessType.OPS_RW, opt=True, dat_id=2, global_dat_id=2, stencil_id=S1D_1pt)
    ArgDat(id=3, loc=/home/x_thileeb/repos/ops-hls-pact25-artifact/apps/blackscholes/vck5000_project/blackscholes.cpp/367:6, access_type=AccessType.OPS_RW, opt=True, dat_id=3, global_dat_id=3, stencil_id=S1D_1pt)
    ArgDat(id=4, loc=/home/x_thileeb/repos/ops-hls-pact25-artifact/apps/blackscholes/vck5000_project/blackscholes.cpp/368:6, access_type=AccessType.OPS_RW, opt=True, dat_id=4, global_dat_id=4, stencil_id=S1D_1pt)
*/
inline void kernel_ops_krnl_blackscholes_core(
        stencil_type& reg_0_0,
        const stencil_type& reg_1_0,
        const stencil_type& reg_1_1,
        const stencil_type& reg_1_2,
        stencil_type& reg_2_0,
        stencil_type& reg_3_0,
        stencil_type& reg_4_0
)
{
#ifdef DEBUG_LOG
    printf("[KERNEL_INTERNAL_CORE]|%s| starting kernel core: kernel_ops_krnl_blackscholes_core\n",__func__);
#endif

	reg_0_0 = reg_2_0 * reg_1_0 + reg_3_0 * reg_1_1 + reg_4_0 * reg_1_2;

#ifdef DEBUG_LOG
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_0: %f \n", __func__, reg_0_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_0: %f \n", __func__, reg_1_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_1: %f \n", __func__, reg_1_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_2: %f \n", __func__, reg_1_2);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_2_0: %f \n", __func__, reg_2_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_3_0: %f \n", __func__, reg_3_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_4_0: %f \n", __func__, reg_4_0);
#endif

#ifdef DEBUG_LOG
    printf("[KERNEL_INTERNAL_CORE]|%s| exiting: kernel_ops_krnl_blackscholes_core\n",__func__);
#endif
}

class Stencil_ops_krnl_blackscholes : public ops::hls::StencilCoreV2<stencil_type, read_num_points_ops_krnl_blackscholes, vector_factor, ops::hls::CoefTypes::CONST_COEF,
        read_stencil_size_ops_krnl_blackscholes, read_stencil_dim_ops_krnl_blackscholes>
{
    using ops::hls::StencilCoreV2<stencil_type, read_num_points_ops_krnl_blackscholes, vector_factor, ops::hls::CoefTypes::CONST_COEF,
            read_stencil_size_ops_krnl_blackscholes, read_stencil_dim_ops_krnl_blackscholes>::m_stencilConfig;
public:

    void stencilRun(
            widen_stream_ops_krnl_blackscholes_0_dt& arg0_wr_buffer,
            widen_stream_ops_krnl_blackscholes_1_dt& arg1_rd_buffer,
            widen_stream_ops_krnl_blackscholes_2_dt& arg2_rd_buffer,
            widen_stream_ops_krnl_blackscholes_2_dt& arg2_wr_buffer,
            widen_stream_ops_krnl_blackscholes_3_dt& arg3_rd_buffer,
            widen_stream_ops_krnl_blackscholes_3_dt& arg3_wr_buffer,
            widen_stream_ops_krnl_blackscholes_4_dt& arg4_rd_buffer,
            widen_stream_ops_krnl_blackscholes_4_dt& arg4_wr_buffer
        )
    {
        const unsigned short span_x = 2;
        const unsigned short half_span_x = 1;

        ::ops::hls::StencilConfigCore stencilConfig = m_stencilConfig;
    //read_origin_wide_diff_x: 1, read_origin_wide_diff: (1,0,0)

    //  *** counters definitions ****
        short i = -2;

    //  *** stencil description and read & write point definitions  ****
        /*
        WindowBufferDiscriptor(widen_stencil=Stencil(id=-1, dim=1, stencil_ptr='read_stencil_widen', num_points=3, points=[Point(x=0, y=0, z=0), Point(x=1, y=0, z=0), Point(x=2, y=0, z=0)], base_point=Point(x=1, y=0, z=0), stencil_size=Point(x=3, y=1, z=1), d_m=Point(x=-0.75, y=0, z=0), d_p=Point(x=1.0, y=0, z=0), row_discriptors=[StencilRowDiscriptor(row_id=(0, 0), base_point=Point(x=1, y=0, z=0), row_points=[Point(x=0, y=0, z=0), Point(x=1, y=0, z=0), Point(x=2, y=0, z=0)])], stride=[], read_origin_diff=Point(x=1, y=0, z=0)), window_buffers=[], chains=[(0, 1), (1, 2), (2, 'read_val')], point_to_widen_map={Point(x=0, y=0, z=0): Point(x=0, y=0, z=0), Point(x=1, y=0, z=0): Point(x=1, y=0, z=0), Point(x=2, y=0, z=0): Point(x=2, y=0, z=0)})
        */
        // Stencil: S1D_3pt
        //      |- point: (0,0,0)
        //      |- point: (1,0,0)
        //      `- point: (2,0,0)
        // Stencil: S1D_1pt
        //      `- point: (0,0,0)

        #pragma HLS ARRAY_PARTITION variable = stencilConfig.lower_limit dim = 1 complete
        #pragma HLS ARRAY_PARTITION variable = stencilConfig.upper_limit dim = 1 complete

    //  *** iteration limit definition ****
        unsigned int iter_limit = stencilConfig.outer_loop_limit;

    //  *** data read write boundary definitions ****
            unsigned int S1D_3pt_read_lb_itr = 0;
            unsigned int S1D_3pt_read_ub_itr = 0 + stencilConfig.grid_size[0];
            unsigned int S1D_1pt_read_lb_itr = 1;
            unsigned int S1D_1pt_read_ub_itr = 1 + stencilConfig.grid_size[0];

        /*

        unsigned int read_lb_itr = 0;
        unsigned int read_ub_itr = stencilConfig.grid_size[0];
    */
    //  *** Read & write widen temporaries ****
    // arg0(dat_next)
        widen_ops_krnl_blackscholes_0_dt arg0_update_val;
    // arg1(dat_current)
        widen_ops_krnl_blackscholes_1_dt arg1_read_val = 0;
    // arg2(dat_a)
        widen_ops_krnl_blackscholes_2_dt arg2_read_val = 0;
        widen_ops_krnl_blackscholes_2_dt arg2_update_val;
    // arg3(dat_b)
        widen_ops_krnl_blackscholes_3_dt arg3_read_val = 0;
        widen_ops_krnl_blackscholes_3_dt arg3_update_val;
    // arg4(dat_c)
        widen_ops_krnl_blackscholes_4_dt arg4_read_val = 0;
        widen_ops_krnl_blackscholes_4_dt arg4_update_val;
    //  *** widen stencil values holder & window buffers ****

        // arg1(dat_current)
        widen_ops_krnl_blackscholes_1_dt arg1_widenStencilValues[read_num_points_ops_krnl_blackscholes];
        #pragma HLS ARRAY_PARTITION variable = arg1_widenStencilValues dim = 1 complete

        stencil_type arg1_rowArr_0_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg1_rowArr_0_0 dim=1 complete

        // arg2(dat_a)
        widen_ops_krnl_blackscholes_2_dt arg2_widenStencilValues[read_num_points_ops_krnl_blackscholes];
        #pragma HLS ARRAY_PARTITION variable = arg2_widenStencilValues dim = 1 complete

        stencil_type arg2_rowArr_0_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg2_rowArr_0_0 dim=1 complete

        // arg3(dat_b)
        widen_ops_krnl_blackscholes_3_dt arg3_widenStencilValues[read_num_points_ops_krnl_blackscholes];
        #pragma HLS ARRAY_PARTITION variable = arg3_widenStencilValues dim = 1 complete

        stencil_type arg3_rowArr_0_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg3_rowArr_0_0 dim=1 complete

        // arg4(dat_c)
        widen_ops_krnl_blackscholes_4_dt arg4_widenStencilValues[read_num_points_ops_krnl_blackscholes];
        #pragma HLS ARRAY_PARTITION variable = arg4_widenStencilValues dim = 1 complete

        stencil_type arg4_rowArr_0_0[vector_factor + span_x];
        #pragma HLS ARRAY_PARTITION variable = arg4_rowArr_0_0 dim=1 complete

        const short cond_x_val = stencilConfig.grid_size[0] - 1; 

        for (unsigned int itr = 0; itr < iter_limit; itr++)
        {
        #pragma HLS PIPELINE II=1
            unsigned int reg_itr = register_it(itr);

            spc_temp_blocking_read:
            {
                bool cond_x_terminate = (i == cond_x_val ? true : false); 

#ifdef DEBUG_LOG
                printf("[DEBUG][INTERNAL][ops_krnl_blackscholes_PE_%d] loop params before update i(%d), "\
                    "reg_itr(%d)\n", m_PEId, i, 
                    reg_itr);
#endif
                if (cond_x_terminate)
                    i = 0;
                else
                    i++;
                    bool S1D_3pt_read_cond = (reg_itr < S1D_3pt_read_ub_itr) and (reg_itr >= S1D_3pt_read_lb_itr);
                    bool S1D_1pt_read_cond = (reg_itr < S1D_1pt_read_ub_itr) and (reg_itr >= S1D_1pt_read_lb_itr);
                /*    bool read_cond  =  (reg_itr < read_ub_itr) and (reg_itr >= read_lb_itr); */

                    if (S1D_3pt_read_cond)
                    {
                        arg1_read_val = arg1_rd_buffer.read();
                    }

                    if (S1D_1pt_read_cond)
                    {
                        arg2_read_val = arg2_rd_buffer.read();
                        arg3_read_val = arg3_rd_buffer.read();
                        arg4_read_val = arg4_rd_buffer.read();
                    }

                    /*if (read_cond)
                    {
                        arg1_read_val = arg1_rd_buffer.read();
                        arg2_read_val = arg2_rd_buffer.read();
                        arg3_read_val = arg3_rd_buffer.read();
                        arg4_read_val = arg4_rd_buffer.read();
                    }*/

                arg1_widenStencilValues[0] = arg1_widenStencilValues[1];                
                arg1_widenStencilValues[1] = arg1_widenStencilValues[2];                
                arg1_widenStencilValues[2] = arg1_read_val;                
                arg2_widenStencilValues[0] = arg2_read_val;                
                arg3_widenStencilValues[0] = arg3_read_val;                
                arg4_widenStencilValues[0] = arg4_read_val;

#ifdef DEBUG_LOG
                printf("[DEBUG][INTERNAL][ops_krnl_blackscholes_PE_%d] loop params after update i(%d), "\
                                "reg_itr(%d)\n", m_PEId, i, 
                                reg_itr);

                printf("[DEBUG][INTERNAL][ops_krnl_blackscholes_PE_%d] --------------------------------------------------------\n\n", m_PEId);

                printf("[DEBUG][INTERNAL][ops_krnl_blackscholes_PE_%d] read values arg1: (", m_PEId);
                for (int ri = 0; ri < vector_factor; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg1_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
                printf("[DEBUG][INTERNAL][ops_krnl_blackscholes_PE_%d] read values arg2: (", m_PEId);
                for (int ri = 0; ri < vector_factor; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg2_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
                printf("[DEBUG][INTERNAL][ops_krnl_blackscholes_PE_%d] read values arg3: (", m_PEId);
                for (int ri = 0; ri < vector_factor; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg3_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
                printf("[DEBUG][INTERNAL][ops_krnl_blackscholes_PE_%d] read values arg4: (", m_PEId);
                for (int ri = 0; ri < vector_factor; ri++)
                {
                    ops::hls::DataConv tmpConverter;
                    tmpConverter.i = arg4_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                    printf("%f ", tmpConverter.f);
                }
                printf(")\n");
#endif      
            }

            vec2arr: for (unsigned short x = 0; x < vector_factor; x++)
            {
#pragma HLS UNROLL factor=vector_factor
                ops::hls::DataConv arg1_tmpConverter_0_0;
                arg1_tmpConverter_0_0.i = arg1_widenStencilValues[1].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg1_rowArr_0_0[x + half_span_x] = arg1_tmpConverter_0_0.f; 
                ops::hls::DataConv arg2_tmpConverter_0_0;
                arg2_tmpConverter_0_0.i = arg2_widenStencilValues[0].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg2_rowArr_0_0[x + half_span_x] = arg2_tmpConverter_0_0.f; 
                ops::hls::DataConv arg3_tmpConverter_0_0;
                arg3_tmpConverter_0_0.i = arg3_widenStencilValues[0].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg3_rowArr_0_0[x + half_span_x] = arg3_tmpConverter_0_0.f; 
                ops::hls::DataConv arg4_tmpConverter_0_0;
                arg4_tmpConverter_0_0.i = arg4_widenStencilValues[0].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                arg4_rowArr_0_0[x + half_span_x] = arg4_tmpConverter_0_0.f; 

            }
            vec2arr_rest:
            {
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
            }

            process: for (unsigned short x = 0; x < vector_factor; x++)
            {
#pragma HLS UNROLL factor=vector_factor
                short index = (i << shift_bits) + x;
                bool neg_cond = register_it(             
                        (index < stencilConfig.lower_limit[0]) 
                        || (index >= stencilConfig.upper_limit[0])
                );

#ifdef DEBUG_LOG
                printf("[DEBUG][INTERNAL][ops_krnl_blackscholes_PE_%d] index=(%d), lowerbound=(%d), upperbound=(%d), neg_cond=%d\n", m_PEId, index,
                            stencilConfig.lower_limit[0], stencilConfig.upper_limit[0], neg_cond);

#endif
                stencil_type arg0_result;

                kernel_ops_krnl_blackscholes_core(
                        arg0_result,
                        arg1_rowArr_0_0[x + 0],
                        arg1_rowArr_0_0[x + 1],
                        arg1_rowArr_0_0[x + 2],
                        arg2_rowArr_0_0[x + 1],
                        arg3_rowArr_0_0[x + 1],
                        arg4_rowArr_0_0[x + 1]
                );

                ops::hls::DataConv arg0_tmpConvWrite;
                ops::hls::DataConv arg2_tmpConvWrite;
                ops::hls::DataConv arg3_tmpConvWrite;
                ops::hls::DataConv arg4_tmpConvWrite;

                if (not neg_cond)
                {
                    arg0_tmpConvWrite.f = arg0_result;
                }
                else
                {

    // [1, 0, 2, 3, 4]
            //dat_id: 0, dat: dat_next, swap_id: 1, swap_dat: dat_current
                    arg0_tmpConvWrite.f = arg1_rowArr_0_0[x + 1];
                }
            // *** rw convertions ***
                arg2_tmpConvWrite.f = arg2_rowArr_0_0[x + 1];
                arg3_tmpConvWrite.f = arg3_rowArr_0_0[x + 1];
                arg4_tmpConvWrite.f = arg4_rowArr_0_0[x + 1];

                arg0_update_val.range(s_datatype_size * (x + 1) - 1, x * s_datatype_size) = arg0_tmpConvWrite.i;
                arg2_update_val.range(s_datatype_size * (x + 1) - 1, x * s_datatype_size) = arg2_tmpConvWrite.i;
                arg3_update_val.range(s_datatype_size * (x + 1) - 1, x * s_datatype_size) = arg3_tmpConvWrite.i;
                arg4_update_val.range(s_datatype_size * (x + 1) - 1, x * s_datatype_size) = arg4_tmpConvWrite.i;

            }

            write:
            {
                bool cond_write = (i >= 0);

                if (cond_write)
                {
#ifdef DEBUG_LOG
                    printf("[DEBUG][INTERNAL][ops_krnl_blackscholes_PE_%d] --------------------------------------------------------\n\n", m_PEId);

                    printf("[DEBUG][INTERNAL][ops_krnl_blackscholes_PE_%d] wirte values arg0: (", m_PEId);
                    for (int ri = 0; ri < vector_factor; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg0_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
                    printf("[DEBUG][INTERNAL][ops_krnl_blackscholes_PE_%d] wirte values arg2: (", m_PEId);
                    for (int ri = 0; ri < vector_factor; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg2_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
                    printf("[DEBUG][INTERNAL][ops_krnl_blackscholes_PE_%d] wirte values arg3: (", m_PEId);
                    for (int ri = 0; ri < vector_factor; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg3_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
                    printf("[DEBUG][INTERNAL][ops_krnl_blackscholes_PE_%d] wirte values arg4: (", m_PEId);
                    for (int ri = 0; ri < vector_factor; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg4_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
#endif
                    arg0_wr_buffer <<  arg0_update_val;
                    arg2_wr_buffer <<  arg2_update_val;
                    arg3_wr_buffer <<  arg3_update_val;
                    arg4_wr_buffer <<  arg4_update_val;
                }
            }
        }
    } 
};

void kernel_ops_krnl_blackscholes_PE(const short& PEId, const ops::hls::StencilConfigCore& stencilConfig,
            //dat_next
    widen_stream_ops_krnl_blackscholes_0_dt& arg0_wr_buffer,        
            //dat_current
    widen_stream_ops_krnl_blackscholes_1_dt& arg1_rd_buffer,
            //dat_a
    widen_stream_ops_krnl_blackscholes_2_dt& arg2_rd_buffer,
    widen_stream_ops_krnl_blackscholes_2_dt& arg2_wr_buffer,
            //dat_b
    widen_stream_ops_krnl_blackscholes_3_dt& arg3_rd_buffer,
    widen_stream_ops_krnl_blackscholes_3_dt& arg3_wr_buffer,
            //dat_c
    widen_stream_ops_krnl_blackscholes_4_dt& arg4_rd_buffer,
    widen_stream_ops_krnl_blackscholes_4_dt& arg4_wr_buffer
)
{
    Stencil_ops_krnl_blackscholes stencil;

#ifdef DEBUG_LOG
    printf("[KERNEL_DEBUG]|%s| stencil config gridSize: %d (xblocks), %d, %d\n", __func__, stencilConfig.grid_size[0], stencilConfig.grid_size[1], stencilConfig.grid_size[2]);
#endif
    stencil.setConfig(PEId, stencilConfig);

#ifdef DEBUG_LOG
    printf("[KERNEL_DEBUG]|%s| starting stencil kernel PE\n", __func__);
#endif

    stencil.stencilRun(
            arg0_wr_buffer,
            arg1_rd_buffer,
            arg2_rd_buffer,
            arg2_wr_buffer,
            arg3_rd_buffer,
            arg3_wr_buffer,
            arg4_rd_buffer,
            arg4_wr_buffer

);

#ifdef DEBUG_LOG
    printf("[KERNEL_DEBUG]|%s| Ending stencil kernel PE\n", __func__);
#endif
} 
