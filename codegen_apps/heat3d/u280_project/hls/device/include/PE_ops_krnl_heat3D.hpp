// Auto-generated at 2025-08-16 01:02:52.341298 by ops-translator

#pragma once
#include <ops_hls_kernel_support.h>
#include "common_config.hpp"

static constexpr unsigned short read_num_points_ops_krnl_heat3D = 7;
static constexpr unsigned short read_stencil_size_ops_krnl_heat3D = 3;
static constexpr unsigned short read_stencil_dim_ops_krnl_heat3D = 3;

static constexpr unsigned short write_num_points_ops_krnl_heat3D = 1;
static constexpr unsigned short write_stencil_size_ops_krnl_heat3D = 1;
static constexpr unsigned short write_stencil_dim_ops_krnl_heat3D = 3;

static constexpr unsigned short vector_factor_ops_krnl_heat3D_0 = vector_factor * 1;
static constexpr unsigned short axis_data_width_l_ops_krnl_heat3D_0 = vector_factor_ops_krnl_heat3D_0 * data_width;
typedef ap_uint<axis_data_width_l_ops_krnl_heat3D_0> widen_ops_krnl_heat3D_0_dt;
static constexpr unsigned short vector_factor_ops_krnl_heat3D_1 = vector_factor * 1;
static constexpr unsigned short axis_data_width_l_ops_krnl_heat3D_1 = vector_factor_ops_krnl_heat3D_1 * data_width;
typedef ap_uint<axis_data_width_l_ops_krnl_heat3D_1> widen_ops_krnl_heat3D_1_dt;

typedef ::hls::stream<widen_ops_krnl_heat3D_0_dt> widen_stream_ops_krnl_heat3D_0_dt;
typedef ::hls::stream<widen_ops_krnl_heat3D_1_dt> widen_stream_ops_krnl_heat3D_1_dt;

/*
    ArgDat(id=0, loc=/home/x_thileeb/repos/ops-hls-pact25-artifact/codegen_apps/heat3d/u280_project/heat3d.cpp/347:21, access_type=AccessType.OPS_WRITE, opt=True, dat_id=0, global_dat_id=-1, stencil_id=stencil3D_1pt)
    ArgDat(id=1, loc=/home/x_thileeb/repos/ops-hls-pact25-artifact/codegen_apps/heat3d/u280_project/heat3d.cpp/348:21, access_type=AccessType.OPS_READ, opt=True, dat_id=1, global_dat_id=-1, stencil_id=stencil3D_7pt)
    ArgGbl(id=2, loc=/home/x_thileeb/repos/ops-hls-pact25-artifact/codegen_apps/heat3d/u280_project/heat3d.cpp/349:21, access_type=AccessType.OPS_READ,ptr=&param_k, dim=1, type=float)
    ArgIdx(id=3, loc=/home/x_thileeb/repos/ops-hls-pact25-artifact/codegen_apps/heat3d/u280_project/heat3d.cpp/350:21)
*/
inline void kernel_ops_krnl_heat3D_core(
        stencil_type& reg_0_0,
        const stencil_type& reg_1_0,
        const stencil_type& reg_1_1,
        const stencil_type& reg_1_2,
        const stencil_type& reg_1_3,
        const stencil_type& reg_1_4,
        const stencil_type& reg_1_5,
        const stencil_type& reg_1_6,
        const float* K,
        const short idx[3]
)
{
#ifdef DEBUG_LOG
    printf("[KERNEL_INTERNAL_CORE]|%s| starting kernel core: kernel_ops_krnl_heat3D_core\n",__func__);
#endif

    const float reg0 = (1 - 6 * (*K));
    const float reg1 = reg_1_4 + reg_1_2;
    const float reg2 = reg_1_5 + reg_1_1;
    const float reg3 = reg_1_6 + reg_1_0;
    const float reg4 = reg1 + reg2;
    const float reg5 = reg0 * reg_1_3;
    const float reg6 = reg4 + reg3;
    const float reg7 = (*K) * reg6;
    reg_0_0 =  reg7 + reg6;

#ifdef DEBUG_LOG
    printf("[KERNEL_INTERNAL_CORE]|%s| write_val - reg_0_0: %f \n", __func__, reg_0_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_0: %f \n", __func__, reg_1_0);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_1: %f \n", __func__, reg_1_1);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_2: %f \n", __func__, reg_1_2);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_3: %f \n", __func__, reg_1_3);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_4: %f \n", __func__, reg_1_4);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_5: %f \n", __func__, reg_1_5);
    printf("[KERNEL_INTERNAL_CORE]|%s| read_val - reg_1_6: %f \n", __func__, reg_1_6);
    printf("[KERNEL_INTERNAL_CORE]|%s| index_val: (%d, %d, %d) \n", __func__, idx[0], idx[1], idx[2]);
#endif

#ifdef DEBUG_LOG
    printf("[KERNEL_INTERNAL_CORE]|%s| exiting: kernel_ops_krnl_heat3D_core\n",__func__);
#endif
}

class Stencil_ops_krnl_heat3D : public ops::hls::StencilCoreV2<stencil_type, read_num_points_ops_krnl_heat3D, vector_factor, ops::hls::CoefTypes::CONST_COEF,
        read_stencil_size_ops_krnl_heat3D, read_stencil_dim_ops_krnl_heat3D>
{
    using ops::hls::StencilCoreV2<stencil_type, read_num_points_ops_krnl_heat3D, vector_factor, ops::hls::CoefTypes::CONST_COEF,
            read_stencil_size_ops_krnl_heat3D, read_stencil_dim_ops_krnl_heat3D>::m_stencilConfig;
public:

    void stencilRun(
            widen_stream_ops_krnl_heat3D_0_dt& arg0_wr_buffer,
            widen_stream_ops_krnl_heat3D_1_dt& arg1_rd_buffer,
            const float& param_k
        )
    {
        const unsigned short span_x = 2;
        const unsigned short half_span_x = 1;

        ::ops::hls::StencilConfigCore stencilConfig = m_stencilConfig;

        for (unsigned bat = 0; bat < stencilConfig.batch_size; bat++)
        {
        //read_origin_wide_diff_x: 0, read_origin_wide_diff: (0,0,1)

        //  *** counters definitions ****
            short i = -1;
            short j = 0; 
            short k = -1;
            unsigned short plane_diff = stencilConfig.grid_size[0] * stencilConfig.grid_size[1] - 1;

        //  *** stencil description and read & write point definitions  ****
            /*
            WindowBufferDiscriptor(widen_stencil=Stencil(id=-1, dim=3, stencil_ptr='read_stencil_widen', num_points=7, points=[Point(x=1, y=1, z=0), Point(x=1, y=0, z=1), Point(x=0, y=1, z=1), Point(x=1, y=1, z=1), Point(x=2, y=1, z=1), Point(x=1, y=2, z=1), Point(x=1, y=1, z=2)], base_point=Point(x=1, y=1, z=1), stencil_size=Point(x=3, y=3, z=3), d_m=Point(x=-0.75, y=1, z=1), d_p=Point(x=1.0, y=1, z=1), row_discriptors=[StencilRowDiscriptor(row_id=(1, 0), base_point=Point(x=1, y=1, z=1), row_points=[Point(x=1, y=1, z=0)]), StencilRowDiscriptor(row_id=(0, 1), base_point=Point(x=1, y=1, z=1), row_points=[Point(x=1, y=0, z=1)]), StencilRowDiscriptor(row_id=(1, 1), base_point=Point(x=1, y=1, z=1), row_points=[Point(x=0, y=1, z=1), Point(x=1, y=1, z=1), Point(x=2, y=1, z=1)]), StencilRowDiscriptor(row_id=(2, 1), base_point=Point(x=1, y=1, z=1), row_points=[Point(x=1, y=2, z=1)]), StencilRowDiscriptor(row_id=(1, 2), base_point=Point(x=1, y=1, z=1), row_points=[Point(x=1, y=1, z=2)])], stride=[], read_origin_diff=Point(x=0, y=0, z=1)), window_buffers=[WindowBuffer(name='buf_p0_1', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=1, y=0, z=1), write_point=Point(x=1, y=1, z=0), is_read_write_aligned=False), WindowBuffer(name='buf_r0_1_p1', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=1, z=1), write_point=Point(x=1, y=0, z=1), is_read_write_aligned=False), WindowBuffer(name='buf_r1_2_p1', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=1, y=2, z=1), write_point=Point(x=2, y=1, z=1), is_read_write_aligned=False), WindowBuffer(name='buf_p1_2', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=1, y=1, z=2), write_point=Point(x=1, y=2, z=1), is_read_write_aligned=False)], chains=[(0, WindowBuffer(name='buf_p0_1', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=1, y=0, z=1), write_point=Point(x=1, y=1, z=0), is_read_write_aligned=False)), (1, WindowBuffer(name='buf_r0_1_p1', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=1, z=1), write_point=Point(x=1, y=0, z=1), is_read_write_aligned=False)), (WindowBuffer(name='buf_p0_1', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=1, y=0, z=1), write_point=Point(x=1, y=1, z=0), is_read_write_aligned=False), 1), (2, 3), (3, 4), (4, WindowBuffer(name='buf_r1_2_p1', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=1, y=2, z=1), write_point=Point(x=2, y=1, z=1), is_read_write_aligned=False)), (WindowBuffer(name='buf_r0_1_p1', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=0, y=1, z=1), write_point=Point(x=1, y=0, z=1), is_read_write_aligned=False), 2), (5, WindowBuffer(name='buf_p1_2', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=1, y=1, z=2), write_point=Point(x=1, y=2, z=1), is_read_write_aligned=False)), (WindowBuffer(name='buf_r1_2_p1', buffer_type=<BufferType.LINE_BUFF: 0>, read_point=Point(x=1, y=2, z=1), write_point=Point(x=2, y=1, z=1), is_read_write_aligned=False), 5), (6, 'read_val'), (WindowBuffer(name='buf_p1_2', buffer_type=<BufferType.PLANE_BUFF: 1>, read_point=Point(x=1, y=1, z=2), write_point=Point(x=1, y=2, z=1), is_read_write_aligned=False), 6)], point_to_widen_map={Point(x=1, y=1, z=0): Point(x=1, y=1, z=0), Point(x=1, y=0, z=1): Point(x=1, y=0, z=1), Point(x=0, y=1, z=1): Point(x=0, y=1, z=1), Point(x=1, y=1, z=1): Point(x=1, y=1, z=1), Point(x=2, y=1, z=1): Point(x=2, y=1, z=1), Point(x=1, y=2, z=1): Point(x=1, y=2, z=1), Point(x=1, y=1, z=2): Point(x=1, y=1, z=2)})
            */
            // Stencil: stencil3D_7pt
            //      |- point: (1,1,0)
            //      |- point: (1,0,1)
            //      |- point: (0,1,1)
            //      |- point: (1,1,1)
            //      |- point: (2,1,1)
            //      |- point: (1,2,1)
            //      `- point: (1,1,2)
            unsigned short stencil3D_7pt_buf_p0_1_rd;

            if (-1 * stencilConfig.grid_size[0] + 0 > 0)
                stencil3D_7pt_buf_p0_1_rd = -1 * stencilConfig.grid_size[0] + 0;
            else
                stencil3D_7pt_buf_p0_1_rd = 0;

            unsigned short stencil3D_7pt_buf_p0_1_wr;

            if (1 * stencilConfig.grid_size[0] + 0 > 0)
                stencil3D_7pt_buf_p0_1_wr = 1 * stencilConfig.grid_size[0] + 0;
            else
                stencil3D_7pt_buf_p0_1_wr = 0;
            // read point: (0,1,1), write point: (1,0,1)
            unsigned short stencil3D_7pt_buf_r0_1_p1_rd = 0;
            unsigned short stencil3D_7pt_buf_r0_1_p1_wr = 1;
            // read point: (1,2,1), write point: (2,1,1)
            unsigned short stencil3D_7pt_buf_r1_2_p1_rd = 0;
            unsigned short stencil3D_7pt_buf_r1_2_p1_wr = 1;
            unsigned short stencil3D_7pt_buf_p1_2_rd;

            if (-1 * stencilConfig.grid_size[0] + 0 > 0)
                stencil3D_7pt_buf_p1_2_rd = -1 * stencilConfig.grid_size[0] + 0;
            else
                stencil3D_7pt_buf_p1_2_rd = 0;

            unsigned short stencil3D_7pt_buf_p1_2_wr;

            if (1 * stencilConfig.grid_size[0] + 0 > 0)
                stencil3D_7pt_buf_p1_2_wr = 1 * stencilConfig.grid_size[0] + 0;
            else
                stencil3D_7pt_buf_p1_2_wr = 0;

            #pragma HLS ARRAY_PARTITION variable = stencilConfig.lower_limit dim = 1 complete
            #pragma HLS ARRAY_PARTITION variable = stencilConfig.upper_limit dim = 1 complete

        //  *** iteration limit definition ****
            unsigned int iter_limit = stencilConfig.outer_loop_limit * 
                    stencilConfig.grid_size[1] * stencilConfig.grid_size[0] ;

        //  *** data read write boundary definitions ****
            unsigned int stencil3D_7pt_read_lb_itr = 0 * stencilConfig.grid_size[0] * stencilConfig.grid_size[1];
            unsigned int stencil3D_7pt_read_ub_itr = (0 + stencilConfig.grid_size[2]) * stencilConfig.grid_size[1] * stencilConfig.grid_size[0];

        /*
            unsigned int read_lb_itr = 0;
            unsigned int read_ub_itr = stencilConfig.grid_size[2] * stencilConfig.grid_size[1] * stencilConfig.grid_size[0];
        */
        //  *** Read & write widen temporaries ****
        // arg0(u2)
            widen_ops_krnl_heat3D_0_dt arg0_update_val;
        // arg1(u)
            widen_ops_krnl_heat3D_1_dt arg1_read_val = 0;
        //  *** widen stencil values holder & window buffers ****

            // arg1(u)
            widen_ops_krnl_heat3D_1_dt arg1_widenStencilValues[read_num_points_ops_krnl_heat3D];
            #pragma HLS ARRAY_PARTITION variable = arg1_widenStencilValues dim = 1 complete

            widen_ops_krnl_heat3D_1_dt arg1_buf_p0_1[max_depth];
            #pragma HLS BIND_STORAGE variable = arg1_buf_p0_1 type = ram_s2p latency=2
            widen_ops_krnl_heat3D_1_dt arg1_buf_r0_1_p1[line_buff_3d_depth];
            #pragma HLS BIND_STORAGE variable = arg1_buf_r0_1_p1 type = ram_s2p latency=2
            widen_ops_krnl_heat3D_1_dt arg1_buf_r1_2_p1[line_buff_3d_depth];
            #pragma HLS BIND_STORAGE variable = arg1_buf_r1_2_p1 type = ram_s2p latency=2
            widen_ops_krnl_heat3D_1_dt arg1_buf_p1_2[max_depth];
            #pragma HLS BIND_STORAGE variable = arg1_buf_p1_2 type = ram_s2p latency=2

            stencil_type arg1_rowArr_1_0[vector_factor + span_x];
            #pragma HLS ARRAY_PARTITION variable = arg1_rowArr_1_0 dim=1 complete
            stencil_type arg1_rowArr_0_1[vector_factor + span_x];
            #pragma HLS ARRAY_PARTITION variable = arg1_rowArr_0_1 dim=1 complete
            stencil_type arg1_rowArr_1_1[vector_factor + span_x];
            #pragma HLS ARRAY_PARTITION variable = arg1_rowArr_1_1 dim=1 complete
            stencil_type arg1_rowArr_2_1[vector_factor + span_x];
            #pragma HLS ARRAY_PARTITION variable = arg1_rowArr_2_1 dim=1 complete
            stencil_type arg1_rowArr_1_2[vector_factor + span_x];
            #pragma HLS ARRAY_PARTITION variable = arg1_rowArr_1_2 dim=1 complete

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
                    printf("[DEBUG][INTERNAL][ops_krnl_heat3D_PE_%d] loop params before update i(%d), "\
                        "j(%d), "\
                        "k(%d), "\
                        "stencil3D_7pt_buf_p0_1_rd: %d, "\
                        "stencil3D_7pt_buf_p0_1_wr: %d, "\
                        "stencil3D_7pt_buf_r0_1_p1_rd: %d, "\
                        "stencil3D_7pt_buf_r0_1_p1_wr: %d, "\
                        "stencil3D_7pt_buf_r1_2_p1_rd: %d, "\
                        "stencil3D_7pt_buf_r1_2_p1_wr: %d, "\
                        "stencil3D_7pt_buf_p1_2_rd: %d, "\
                        "stencil3D_7pt_buf_p1_2_wr: %d, "\
                        "reg_itr(%d)\n", m_PEId, i, 
                        j,
                        k,
                        stencil3D_7pt_buf_p0_1_rd, 
                        stencil3D_7pt_buf_p0_1_wr, 
                        stencil3D_7pt_buf_r0_1_p1_rd, 
                        stencil3D_7pt_buf_r0_1_p1_wr, 
                        stencil3D_7pt_buf_r1_2_p1_rd, 
                        stencil3D_7pt_buf_r1_2_p1_wr, 
                        stencil3D_7pt_buf_p1_2_rd, 
                        stencil3D_7pt_buf_p1_2_wr, 
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

                    bool stencil3D_7pt_read_cond = (reg_itr < stencil3D_7pt_read_ub_itr) and (reg_itr >= stencil3D_7pt_read_lb_itr);
                /*    bool read_cond  =  (reg_itr < read_ub_itr) and (reg_itr >= read_lb_itr); */

                    if (stencil3D_7pt_read_cond)
                    {
                        arg1_read_val = arg1_rd_buffer.read();
                    }

                    /*if (read_cond)
                    {

                        arg1_read_val = arg1_rd_buffer.read();
                    }*/

                    arg1_widenStencilValues[0] = arg1_buf_p0_1[stencil3D_7pt_buf_p0_1_wr];                
                    arg1_widenStencilValues[1] = arg1_buf_r0_1_p1[stencil3D_7pt_buf_r0_1_p1_wr];                
                    arg1_buf_p0_1[stencil3D_7pt_buf_p0_1_rd] = arg1_widenStencilValues[1];                
                    arg1_widenStencilValues[2] = arg1_widenStencilValues[3];                
                    arg1_widenStencilValues[3] = arg1_widenStencilValues[4];                
                    arg1_widenStencilValues[4] = arg1_buf_r1_2_p1[stencil3D_7pt_buf_r1_2_p1_wr];                
                    arg1_buf_r0_1_p1[stencil3D_7pt_buf_r0_1_p1_rd] = arg1_widenStencilValues[2];                
                    arg1_widenStencilValues[5] = arg1_buf_p1_2[stencil3D_7pt_buf_p1_2_wr];                
                    arg1_buf_r1_2_p1[stencil3D_7pt_buf_r1_2_p1_rd] = arg1_widenStencilValues[5];                
                    arg1_widenStencilValues[6] = arg1_read_val;                
                    arg1_buf_p1_2[stencil3D_7pt_buf_p1_2_rd] = arg1_widenStencilValues[6];

                    bool cond_end_of_line_buff_stencil3D_7pt_buf_p0_1_rd = stencil3D_7pt_buf_p0_1_rd >= (plane_diff);
                    bool cond_end_of_line_buff_stencil3D_7pt_buf_p0_1_wr = stencil3D_7pt_buf_p0_1_wr >= (plane_diff);

                    if (cond_end_of_line_buff_stencil3D_7pt_buf_p0_1_rd)
                        stencil3D_7pt_buf_p0_1_rd = 0;
                    else
                        stencil3D_7pt_buf_p0_1_rd++;

                    if (cond_end_of_line_buff_stencil3D_7pt_buf_p0_1_wr)
                        stencil3D_7pt_buf_p0_1_wr = 0;
                    else
                        stencil3D_7pt_buf_p0_1_wr++;
                    bool cond_end_of_line_buff_stencil3D_7pt_buf_r0_1_p1_rd = stencil3D_7pt_buf_r0_1_p1_rd >= (stencilConfig.grid_size[0] - 1);
                    bool cond_end_of_line_buff_stencil3D_7pt_buf_r0_1_p1_wr = stencil3D_7pt_buf_r0_1_p1_wr >= (stencilConfig.grid_size[0] - 1);

                    if (cond_end_of_line_buff_stencil3D_7pt_buf_r0_1_p1_rd)
                        stencil3D_7pt_buf_r0_1_p1_rd = 0;
                    else
                        stencil3D_7pt_buf_r0_1_p1_rd++;

                    if (cond_end_of_line_buff_stencil3D_7pt_buf_r0_1_p1_wr)
                        stencil3D_7pt_buf_r0_1_p1_wr = 0;
                    else
                        stencil3D_7pt_buf_r0_1_p1_wr++;
                    bool cond_end_of_line_buff_stencil3D_7pt_buf_r1_2_p1_rd = stencil3D_7pt_buf_r1_2_p1_rd >= (stencilConfig.grid_size[0] - 1);
                    bool cond_end_of_line_buff_stencil3D_7pt_buf_r1_2_p1_wr = stencil3D_7pt_buf_r1_2_p1_wr >= (stencilConfig.grid_size[0] - 1);

                    if (cond_end_of_line_buff_stencil3D_7pt_buf_r1_2_p1_rd)
                        stencil3D_7pt_buf_r1_2_p1_rd = 0;
                    else
                        stencil3D_7pt_buf_r1_2_p1_rd++;

                    if (cond_end_of_line_buff_stencil3D_7pt_buf_r1_2_p1_wr)
                        stencil3D_7pt_buf_r1_2_p1_wr = 0;
                    else
                        stencil3D_7pt_buf_r1_2_p1_wr++;
                    bool cond_end_of_line_buff_stencil3D_7pt_buf_p1_2_rd = stencil3D_7pt_buf_p1_2_rd >= (plane_diff);
                    bool cond_end_of_line_buff_stencil3D_7pt_buf_p1_2_wr = stencil3D_7pt_buf_p1_2_wr >= (plane_diff);

                    if (cond_end_of_line_buff_stencil3D_7pt_buf_p1_2_rd)
                        stencil3D_7pt_buf_p1_2_rd = 0;
                    else
                        stencil3D_7pt_buf_p1_2_rd++;

                    if (cond_end_of_line_buff_stencil3D_7pt_buf_p1_2_wr)
                        stencil3D_7pt_buf_p1_2_wr = 0;
                    else
                        stencil3D_7pt_buf_p1_2_wr++;

    #ifdef DEBUG_LOG
                    printf("[DEBUG][INTERNAL][ops_krnl_heat3D_PE_%d] loop params after update i(%d), "\
                                    "j(%d), "\
                                    "k(%d), "\
                                    "stencil3D_7pt_buf_p0_1_rd(%d), "\
                                    "stencil3D_7pt_buf_p0_1_wr(%d), "\
                                    "stencil3D_7pt_buf_r0_1_p1_rd(%d), "\
                                    "stencil3D_7pt_buf_r0_1_p1_wr(%d), "\
                                    "stencil3D_7pt_buf_r1_2_p1_rd(%d), "\
                                    "stencil3D_7pt_buf_r1_2_p1_wr(%d), "\
                                    "stencil3D_7pt_buf_p1_2_rd(%d), "\
                                    "stencil3D_7pt_buf_p1_2_wr(%d), "\
                                    "reg_itr(%d)\n", m_PEId, i, 
                                    j,
                                    k,
                                    stencil3D_7pt_buf_p0_1_rd, 
                                    stencil3D_7pt_buf_p0_1_wr, 
                                    stencil3D_7pt_buf_r0_1_p1_rd, 
                                    stencil3D_7pt_buf_r0_1_p1_wr, 
                                    stencil3D_7pt_buf_r1_2_p1_rd, 
                                    stencil3D_7pt_buf_r1_2_p1_wr, 
                                    stencil3D_7pt_buf_p1_2_rd, 
                                    stencil3D_7pt_buf_p1_2_wr, 
                                    reg_itr);

                    printf("[DEBUG][INTERNAL][ops_krnl_heat3D_PE_%d] --------------------------------------------------------\n\n", m_PEId);

                    printf("[DEBUG][INTERNAL][ops_krnl_heat3D_PE_%d] read values arg1: (", m_PEId);
                    for (int ri = 0; ri < vector_factor; ri++)
                    {
                        ops::hls::DataConv tmpConverter;
                        tmpConverter.i = arg1_read_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);

                        printf("%f ", tmpConverter.f);
                    }
                    printf(")\n");
    #endif      
                }

                vec2arr: for (unsigned short x = 0; x < vector_factor; x++)
                {
    #pragma HLS UNROLL factor=vector_factor
                    ops::hls::DataConv arg1_tmpConverter_1_0;
                    arg1_tmpConverter_1_0.i = arg1_widenStencilValues[0].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                    arg1_rowArr_1_0[x + half_span_x] = arg1_tmpConverter_1_0.f; 
                    ops::hls::DataConv arg1_tmpConverter_0_1;
                    arg1_tmpConverter_0_1.i = arg1_widenStencilValues[1].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                    arg1_rowArr_0_1[x + half_span_x] = arg1_tmpConverter_0_1.f; 
                    ops::hls::DataConv arg1_tmpConverter_1_1;
                    arg1_tmpConverter_1_1.i = arg1_widenStencilValues[3].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                    arg1_rowArr_1_1[x + half_span_x] = arg1_tmpConverter_1_1.f; 
                    ops::hls::DataConv arg1_tmpConverter_2_1;
                    arg1_tmpConverter_2_1.i = arg1_widenStencilValues[5].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                    arg1_rowArr_2_1[x + half_span_x] = arg1_tmpConverter_2_1.f; 
                    ops::hls::DataConv arg1_tmpConverter_1_2;
                    arg1_tmpConverter_1_2.i = arg1_widenStencilValues[6].range(s_datatype_size * (x + 1) - 1, x * s_datatype_size);
                    arg1_rowArr_1_2[x + half_span_x] = arg1_tmpConverter_1_2.f; 

                }
                vec2arr_rest:
                {
                    //diff = -1
                    // access_idx = 0
                    ops::hls::DataConv arg1_tmpConverter_0_1_1_7;
                    arg1_tmpConverter_0_1_1_7.i = arg1_widenStencilValues[2].range(s_datatype_size * (7 + 1) - 1, s_datatype_size * 7);
                    arg1_rowArr_1_1[0] = arg1_tmpConverter_0_1_1_7.f;
                    //diff = 1
                    // access_idx = 9
                    ops::hls::DataConv arg1_tmpConverter_2_1_1_0;
                    arg1_tmpConverter_2_1_1_0.i = arg1_widenStencilValues[4].range(s_datatype_size * (0 + 1) - 1, s_datatype_size * 0);
                    arg1_rowArr_1_1[9] = arg1_tmpConverter_2_1_1_0.f;
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
                    printf("[DEBUG][INTERNAL][ops_krnl_heat3D_PE_%d] index=(%d, %d, %d), lowerbound=(%d, %d, %d), upperbound=(%d, %d, %d), neg_cond=%d\n", m_PEId, index, j, k,
                                stencilConfig.lower_limit[0], stencilConfig.lower_limit[1], stencilConfig.lower_limit[2], 
                                stencilConfig.upper_limit[0], stencilConfig.upper_limit[1], stencilConfig.upper_limit[2], neg_cond);

    #endif
                    stencil_type arg0_result;

                    short idx[] = {index, j, k};

                    kernel_ops_krnl_heat3D_core(
                            arg0_result,
                            arg1_rowArr_1_0[x + 1],
                            arg1_rowArr_0_1[x + 1],
                            arg1_rowArr_1_1[x + 0],
                            arg1_rowArr_1_1[x + 1],
                            arg1_rowArr_1_1[x + 2],
                            arg1_rowArr_2_1[x + 1],
                            arg1_rowArr_1_2[x + 1],
                            &param_k,
                            idx
                    );

                    ops::hls::DataConv arg0_tmpConvWrite;

                    if (not neg_cond)
                    {
                        arg0_tmpConvWrite.f = arg0_result;
                    }
                    else
                    {

        // [1, 0]
                //dat_id: 0, dat: u2, swap_id: 1, swap_dat: u
                        arg0_tmpConvWrite.f = arg1_rowArr_1_1[x + 1];
                    }
                // *** rw convertions ***

                    arg0_update_val.range(s_datatype_size * (x + 1) - 1, x * s_datatype_size) = arg0_tmpConvWrite.i;

                }

                write:
                {
                    bool cond_write = (k >= 0);

                    if (cond_write)
                    {
    #ifdef DEBUG_LOG
                        printf("[DEBUG][INTERNAL][ops_krnl_heat3D_PE_%d] --------------------------------------------------------\n\n", m_PEId);

                        printf("[DEBUG][INTERNAL][ops_krnl_heat3D_PE_%d] wirte values arg0: (", m_PEId);
                        for (int ri = 0; ri < vector_factor; ri++)
                        {
                            ops::hls::DataConv tmpConverter;
                            tmpConverter.i = arg0_update_val.range((ri + 1)*s_datatype_size - 1, ri * s_datatype_size);
                            printf("%f ", tmpConverter.f);
                        }
                        printf(")\n");
    #endif
                        arg0_wr_buffer <<  arg0_update_val;
                    }
                }
            }
        }
    } 
};

void kernel_ops_krnl_heat3D_PE(const short& PEId, const ops::hls::StencilConfigCore& stencilConfig,
            //u2
    widen_stream_ops_krnl_heat3D_0_dt& arg0_wr_buffer,        
            //u
    widen_stream_ops_krnl_heat3D_1_dt& arg1_rd_buffer,
    const float& param_k
)
{
    Stencil_ops_krnl_heat3D stencil;

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
            param_k

);

#ifdef DEBUG_LOG
    printf("[KERNEL_DEBUG]|%s| Ending stencil kernel PE\n", __func__);
#endif
} 
