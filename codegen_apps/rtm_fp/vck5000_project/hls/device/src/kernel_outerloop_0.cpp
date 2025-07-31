// Auto-generated at 2025-07-29 03:19:41.445595 by ops-translator
#include <ops_hls_kernel_support.h>
#include <kernel_outerloop_0.hpp>

static void joint_PE_outerloop_0(const unsigned short PEId, const ops::hls::StencilConfigCore& stencilConfig, 
        ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_0_1>>& arg0_hls_stream_in, 
        ::hls::stream<ap_uint<multidim_axis_data_width_0_rho_mu>>& arg1_hls_stream_in, 
        ::hls::stream<ap_uint<multidim_axis_data_width_0_rho_mu>>& arg1_hls_stream_out, 
        ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_4_5>>& arg2_hls_stream_in, 
        ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_2_3>>& arg3_hls_stream_in, 
        ::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp2_0_1>>& arg4_hls_stream_out, 
        ::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp2_2_3>>& arg5_hls_stream_out, 
        ::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp2_4_5>>& arg6_hls_stream_out, 
        const int& disps0, 
        const int& disps1, 
        const int& disps2, 
        const float& dt, 
        const float& scale1_der1, 
        const float& scale2_der1, 
        const float& scale1_der2_1, 
        const float& scale2_der2_1, 
        const float& scale1_der2_2, 
        const float& scale2_der2_2, 
        const float& scale1_der3, 
        const float& scale2_der3, 
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
#pragma HLS DATAFLOW
    ::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp1_0_1>> node2_4_to_node3_4;
    #pragma HLS STREAM variable = node2_4_to_node3_4 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp1_2_3>> node2_5_to_node3_5;
    #pragma HLS STREAM variable = node2_5_to_node3_5 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp1_4_5>> node2_6_to_node3_6;
    #pragma HLS STREAM variable = node2_6_to_node3_6 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_sum_0_1>> node2_7_to_node3_10;
    #pragma HLS STREAM variable = node2_7_to_node3_10 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_sum_2_3>> node2_8_to_node3_11;
    #pragma HLS STREAM variable = node2_8_to_node3_11 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_sum_4_5>> node2_9_to_node3_12;
    #pragma HLS STREAM variable = node2_9_to_node3_12 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp2_0_1>> node3_7_to_node4_4;
    #pragma HLS STREAM variable = node3_7_to_node4_4 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp2_2_3>> node3_8_to_node4_5;
    #pragma HLS STREAM variable = node3_8_to_node4_5 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp2_4_5>> node3_9_to_node4_6;
    #pragma HLS STREAM variable = node3_9_to_node4_6 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_sum_0_1>> node3_10_to_node4_10;
    #pragma HLS STREAM variable = node3_10_to_node4_10 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_sum_2_3>> node3_11_to_node4_11;
    #pragma HLS STREAM variable = node3_11_to_node4_11 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_sum_4_5>> node3_12_to_node4_12;
    #pragma HLS STREAM variable = node3_12_to_node4_12 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp1_0_1>> node4_7_to_node5_4;
    #pragma HLS STREAM variable = node4_7_to_node5_4 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp1_2_3>> node4_8_to_node5_5;
    #pragma HLS STREAM variable = node4_8_to_node5_5 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp1_4_5>> node4_9_to_node5_6;
    #pragma HLS STREAM variable = node4_9_to_node5_6 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_sum_0_1>> node4_10_to_node5_10;
    #pragma HLS STREAM variable = node4_10_to_node5_10 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_sum_2_3>> node4_11_to_node5_11;
    #pragma HLS STREAM variable = node4_11_to_node5_11 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_sum_4_5>> node4_12_to_node5_12;
    #pragma HLS STREAM variable = node4_12_to_node5_12 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp2_0_1>> node5_7_to_node6_0;
    #pragma HLS STREAM variable = node5_7_to_node6_0 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp2_2_3>> node5_8_to_node6_1;
    #pragma HLS STREAM variable = node5_8_to_node6_1 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp2_4_5>> node5_9_to_node6_2;
    #pragma HLS STREAM variable = node5_9_to_node6_2 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_rho_mu>> node2_0_to_node3_0;
    #pragma HLS STREAM variable = node2_0_to_node3_0 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_0_1>> node2_1_to_node3_1;
    #pragma HLS STREAM variable = node2_1_to_node3_1 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_2_3>> node2_2_to_node3_2;
    #pragma HLS STREAM variable = node2_2_to_node3_2 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_4_5>> node2_3_to_node3_3;
    #pragma HLS STREAM variable = node2_3_to_node3_3 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_rho_mu>> node3_0_to_node4_0;
    #pragma HLS STREAM variable = node3_0_to_node4_0 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_0_1>> node3_1_to_node4_1;
    #pragma HLS STREAM variable = node3_1_to_node4_1 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_2_3>> node3_2_to_node4_2;
    #pragma HLS STREAM variable = node3_2_to_node4_2 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_4_5>> node3_3_to_node4_3;
    #pragma HLS STREAM variable = node3_3_to_node4_3 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_rho_mu>> node4_0_to_node5_0;
    #pragma HLS STREAM variable = node4_0_to_node5_0 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_0_1>> node4_1_to_node5_1;
    #pragma HLS STREAM variable = node4_1_to_node5_1 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_2_3>> node4_2_to_node5_2;
    #pragma HLS STREAM variable = node4_2_to_node5_2 depth = 10
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_4_5>> node4_3_to_node5_3;
    #pragma HLS STREAM variable = node4_3_to_node5_3 depth = 10

    kernel_fd3d_pml_kernel1_PE(PEId, stencilConfig,
            arg1_hls_stream_in,
            node2_0_to_node3_0,
            arg0_hls_stream_in,
            node2_1_to_node3_1,
            arg3_hls_stream_in,
            node2_2_to_node3_2,
            arg2_hls_stream_in,
            node2_3_to_node3_3,
            node2_4_to_node3_4,
            node2_5_to_node3_5,
            node2_6_to_node3_6,
            node2_7_to_node3_10,
            node2_8_to_node3_11,
            node2_9_to_node3_12,
            disps0,
            disps1,
            disps2,
            dt,
            scale1_der1,
            scale2_der1,
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
    kernel_fd3d_pml_kernel2_PE(PEId, stencilConfig,
            node2_0_to_node3_0,
            node3_0_to_node4_0,
            node2_1_to_node3_1,
            node3_1_to_node4_1,
            node2_2_to_node3_2,
            node3_2_to_node4_2,
            node2_3_to_node3_3,
            node3_3_to_node4_3,
            node2_4_to_node3_4,
            node2_5_to_node3_5,
            node2_6_to_node3_6,
            node3_7_to_node4_4,
            node3_8_to_node4_5,
            node3_9_to_node4_6,
            node2_7_to_node3_10,
            node3_10_to_node4_10,
            node2_8_to_node3_11,
            node3_11_to_node4_11,
            node2_9_to_node3_12,
            node3_12_to_node4_12,
            disps0,
            disps1,
            disps2,
            dt,
            scale1_der2_1,
            scale2_der2_1,
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
    kernel_fd3d_pml_kernel2_PE(PEId, stencilConfig,
            node3_0_to_node4_0,
            node4_0_to_node5_0,
            node3_1_to_node4_1,
            node4_1_to_node5_1,
            node3_2_to_node4_2,
            node4_2_to_node5_2,
            node3_3_to_node4_3,
            node4_3_to_node5_3,
            node3_7_to_node4_4,
            node3_8_to_node4_5,
            node3_9_to_node4_6,
            node4_7_to_node5_4,
            node4_8_to_node5_5,
            node4_9_to_node5_6,
            node3_10_to_node4_10,
            node4_10_to_node5_10,
            node3_11_to_node4_11,
            node4_11_to_node5_11,
            node3_12_to_node4_12,
            node4_12_to_node5_12,
            disps0,
            disps1,
            disps2,
            dt,
            scale1_der2_2,
            scale2_der2_2,
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
    kernel_fd3d_pml_kernel3_PE(PEId, stencilConfig,
            node4_0_to_node5_0,
            arg1_hls_stream_out,
            node4_1_to_node5_1,
            node4_2_to_node5_2,
            node4_3_to_node5_3,
            node4_7_to_node5_4,
            node4_8_to_node5_5,
            node4_9_to_node5_6,
            arg4_hls_stream_out,
            arg5_hls_stream_out,
            arg6_hls_stream_out,
            node4_10_to_node5_10,
            node4_11_to_node5_11,
            node4_12_to_node5_12,
            disps0,
            disps1,
            disps2,
            dt,
            scale1_der3,
            scale2_der3,
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
}



static void kernel_outerloop_0_dataflow_region_cascaded(const unsigned short& slr_region, const ops::hls::StencilConfigCore& stencilConfig,
    ::hls::stream<ap_uint<multidim_axis_data_width_0_rho_mu>> arg0_arg0_streams[iter_par_factor + 1], 
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_0_1>> arg1_arg10_streams[iter_par_factor + 1], 
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_2_3>> arg2_arg11_streams[iter_par_factor + 1], 
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_4_5>> arg3_arg12_streams[iter_par_factor + 1], 
    ::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp1_0_1>> arg4_arg4_streams[iter_par_factor + 1], 
    ::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp1_2_3>> arg5_arg5_streams[iter_par_factor + 1], 
    ::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp1_4_5>> arg6_arg6_streams[iter_par_factor + 1], 
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_sum_0_1>> arg7_arg7_streams[iter_par_factor + 1], 
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_sum_2_3>> arg8_arg8_streams[iter_par_factor + 1], 
    ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_sum_4_5>> arg9_arg9_streams[iter_par_factor + 1], 
    const int& disps0, 
    const int& disps1, 
    const int& disps2, 
    const float& dt, 
    const float& scale1_der1, 
    const float& scale2_der1, 
    const float& scale1_der2_1, 
    const float& scale2_der2_1, 
    const float& scale1_der2_2, 
    const float& scale2_der2_2, 
    const float& scale1_der3, 
    const float& scale2_der3, 
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
#pragma HLS INLINE 

    const unsigned short PEId_offset = slr_region * iter_par_factor;

    for (int i = 0; i < iter_par_factor; i++)
    {
#pragma HLS UNROLL factor=iter_par_factor
        joint_PE_outerloop_0(PEId_offset + i, stencilConfig,
                arg1_arg10_streams[i],
                arg0_arg0_streams[i], arg0_arg0_streams[i+1],
                arg3_arg12_streams[i],
                arg2_arg11_streams[i],
                arg1_arg10_streams[i+1],
                arg2_arg11_streams[i+1],
                arg3_arg12_streams[i+1],
                disps0, 
                disps1, 
                disps2, 
                dt, 
                scale1_der1, 
                scale2_der1, 
                scale1_der2_1, 
                scale2_der2_1, 
                scale1_der2_2, 
                scale2_der2_2, 
                scale1_der3, 
                scale2_der3, 
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
    }
}
static void kernel_outerloop_0_dataflow_region(const unsigned short& slr_region, const ops::hls::StencilConfigCore& stencilConfig, const unsigned int total_bytes,
    const unsigned int total_bytes_d2,
hls::stream <ap_axiu<multidim_axis_data_width_0_yy_0_1, 0, 0, 0>>& arg0_axis_in,  hls::stream <ap_axiu<multidim_axis_data_width_0_rho_mu, 0, 0, 0>>& arg1_axis_in, hls::stream <ap_axiu<multidim_axis_data_width_0_rho_mu, 0, 0, 0>>& arg1_axis_out, hls::stream <ap_axiu<multidim_axis_data_width_0_yy_4_5, 0, 0, 0>>& arg2_axis_in, hls::stream <ap_axiu<multidim_axis_data_width_0_yy_2_3, 0, 0, 0>>& arg3_axis_in, hls::stream <ap_axiu<multidim_axis_data_width_0_ytemp2_0_1, 0, 0, 0>>& arg4_axis_out, hls::stream <ap_axiu<multidim_axis_data_width_0_ytemp2_2_3, 0, 0, 0>>& arg5_axis_out, hls::stream <ap_axiu<multidim_axis_data_width_0_ytemp2_4_5, 0, 0, 0>>& arg6_axis_out, const int& disps0, const int& disps1, const int& disps2, const float& dt, const float& scale1_der1, const float& scale2_der1, const float& scale1_der2_1, const float& scale2_der2_1, const float& scale1_der2_2, const float& scale2_der2_2, const float& scale1_der3, const float& scale2_der3, const float& dx, const float& dy, const float& dz, const float& invdx, const float& invdy, const float& invdz, const int& nx, const int& ny, const int& nz, const int& pml_width, const int& half_order, const int& order)
{
#pragma HLS DATAFLOW
::hls::stream<ap_uint<multidim_axis_data_width_0_rho_mu>> arg0_arg0_streams[iter_par_factor + 1];
    #pragma HLS STREAM variable = arg0_arg0_streams depth = 10
::hls::stream<ap_uint<multidim_axis_data_width_0_yy_0_1>> arg1_arg10_streams[iter_par_factor + 1];
    #pragma HLS STREAM variable = arg1_arg10_streams depth = 10
::hls::stream<ap_uint<multidim_axis_data_width_0_yy_2_3>> arg2_arg11_streams[iter_par_factor + 1];
    #pragma HLS STREAM variable = arg2_arg11_streams depth = 10
::hls::stream<ap_uint<multidim_axis_data_width_0_yy_4_5>> arg3_arg12_streams[iter_par_factor + 1];
    #pragma HLS STREAM variable = arg3_arg12_streams depth = 10
::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp1_0_1>> arg4_arg4_streams[iter_par_factor + 1];
    #pragma HLS STREAM variable = arg4_arg4_streams depth = 10
::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp1_2_3>> arg5_arg5_streams[iter_par_factor + 1];
    #pragma HLS STREAM variable = arg5_arg5_streams depth = 10
::hls::stream<ap_uint<multidim_axis_data_width_0_ytemp1_4_5>> arg6_arg6_streams[iter_par_factor + 1];
    #pragma HLS STREAM variable = arg6_arg6_streams depth = 10
::hls::stream<ap_uint<multidim_axis_data_width_0_yy_sum_0_1>> arg7_arg7_streams[iter_par_factor + 1];
    #pragma HLS STREAM variable = arg7_arg7_streams depth = 10
::hls::stream<ap_uint<multidim_axis_data_width_0_yy_sum_2_3>> arg8_arg8_streams[iter_par_factor + 1];
    #pragma HLS STREAM variable = arg8_arg8_streams depth = 10
::hls::stream<ap_uint<multidim_axis_data_width_0_yy_sum_4_5>> arg9_arg9_streams[iter_par_factor + 1];
    #pragma HLS STREAM variable = arg9_arg9_streams depth = 10
    
        ops::hls::axis2stream<multidim_axis_data_width_0_yy_0_1, multidim_axis_data_width_0_yy_0_1>(arg0_axis_in, arg1_arg10_streams[0], total_bytes_d2);
        ops::hls::axis2stream<multidim_axis_data_width_0_rho_mu, multidim_axis_data_width_0_rho_mu>(arg1_axis_in, arg0_arg0_streams[0], total_bytes_d2);
        ops::hls::axis2stream<multidim_axis_data_width_0_yy_4_5, multidim_axis_data_width_0_yy_4_5>(arg2_axis_in, arg3_arg12_streams[0], total_bytes_d2);
        ops::hls::axis2stream<multidim_axis_data_width_0_yy_2_3, multidim_axis_data_width_0_yy_2_3>(arg3_axis_in, arg2_arg11_streams[0], total_bytes_d2);

        kernel_outerloop_0_dataflow_region_cascaded(slr_region, stencilConfig, arg0_arg0_streams, arg1_arg10_streams, arg2_arg11_streams, arg3_arg12_streams, arg4_arg4_streams, arg5_arg5_streams, arg6_arg6_streams, arg7_arg7_streams, arg8_arg8_streams, arg9_arg9_streams,disps0, disps1, disps2, dt, scale1_der1, scale2_der1, scale1_der2_1, scale2_der2_1, scale1_der2_2, scale2_der2_2, scale1_der3, scale2_der3, dx, dy, dz, invdx, invdy, invdz, nx, ny, nz, pml_width, half_order, order);

        ops::hls::stream2axis<multidim_axis_data_width_0_rho_mu, multidim_axis_data_width_0_rho_mu>(arg1_axis_out, arg0_arg0_streams[iter_par_factor], total_bytes_d2);
        ops::hls::stream2axis<multidim_axis_data_width_0_ytemp2_0_1, multidim_axis_data_width_0_ytemp2_0_1>(arg4_axis_out, arg1_arg10_streams[iter_par_factor], total_bytes_d2);
        ops::hls::stream2axis<multidim_axis_data_width_0_ytemp2_2_3, multidim_axis_data_width_0_ytemp2_2_3>(arg5_axis_out, arg2_arg11_streams[iter_par_factor], total_bytes_d2);
        ops::hls::stream2axis<multidim_axis_data_width_0_ytemp2_4_5, multidim_axis_data_width_0_ytemp2_4_5>(arg6_axis_out, arg3_arg12_streams[iter_par_factor], total_bytes_d2);

}

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

{
    #pragma HLS INTERFACE s_axilite port = slr_region bundle = control
    #pragma HLS INTERFACE s_axilite port = outer_itr bundle = control
    #pragma HLS INTERFACE s_axilite port = stencilConfig_grid_size_0 bundle = control
    #pragma HLS INTERFACE s_axilite port = stencilConfig_grid_size_1 bundle = control
    #pragma HLS INTERFACE s_axilite port = stencilConfig_grid_size_2 bundle = control
    #pragma HLS INTERFACE s_axilite port = stencilConfig_dim bundle = control
    #pragma HLS INTERFACE s_axilite port = stencilConfig_total_itr bundle = control
    #pragma HLS INTERFACE s_axilite port = stencilConfig_lower_limit_0 bundle = control
    #pragma HLS INTERFACE s_axilite port = stencilConfig_lower_limit_1 bundle = control
    #pragma HLS INTERFACE s_axilite port = stencilConfig_lower_limit_2 bundle = control
    #pragma HLS INTERFACE s_axilite port = stencilConfig_upper_limit_0 bundle = control
    #pragma HLS INTERFACE s_axilite port = stencilConfig_upper_limit_1 bundle = control
    #pragma HLS INTERFACE s_axilite port = stencilConfig_upper_limit_2 bundle = control
    #pragma HLS INTERFACE s_axilite port = stencilConfig_outer_loop_limit bundle = control

    #pragma HLS INTERFACE s_axilite port = disps0 bundle = control
    #pragma HLS INTERFACE s_axilite port = disps1 bundle = control
    #pragma HLS INTERFACE s_axilite port = disps2 bundle = control
    #pragma HLS INTERFACE s_axilite port = dt bundle = control
    #pragma HLS INTERFACE s_axilite port = scale1_der1 bundle = control
    #pragma HLS INTERFACE s_axilite port = scale2_der1 bundle = control
    #pragma HLS INTERFACE s_axilite port = scale1_der2_1 bundle = control
    #pragma HLS INTERFACE s_axilite port = scale2_der2_1 bundle = control
    #pragma HLS INTERFACE s_axilite port = scale1_der2_2 bundle = control
    #pragma HLS INTERFACE s_axilite port = scale2_der2_2 bundle = control
    #pragma HLS INTERFACE s_axilite port = scale1_der3 bundle = control
    #pragma HLS INTERFACE s_axilite port = scale2_der3 bundle = control
    
    #pragma HLS INTERFACE s_axilite port = dx bundle = control
    #pragma HLS INTERFACE s_axilite port = dy bundle = control
    #pragma HLS INTERFACE s_axilite port = dz bundle = control
    #pragma HLS INTERFACE s_axilite port = invdx bundle = control
    #pragma HLS INTERFACE s_axilite port = invdy bundle = control
    #pragma HLS INTERFACE s_axilite port = invdz bundle = control
    #pragma HLS INTERFACE s_axilite port = nx bundle = control
    #pragma HLS INTERFACE s_axilite port = ny bundle = control
    #pragma HLS INTERFACE s_axilite port = nz bundle = control
    #pragma HLS INTERFACE s_axilite port = pml_width bundle = control
    #pragma HLS INTERFACE s_axilite port = half_order bundle = control
    #pragma HLS INTERFACE s_axilite port = order bundle = control

    #pragma HLS INTERFACE axis port = arg0_axis_in register
    #pragma HLS INTERFACE axis port = arg1_axis_in register
    #pragma HLS INTERFACE axis port = arg1_axis_out register
    #pragma HLS INTERFACE axis port = arg2_axis_in register
    #pragma HLS INTERFACE axis port = arg3_axis_in register
    #pragma HLS INTERFACE axis port = arg4_axis_out register
    #pragma HLS INTERFACE axis port = arg5_axis_out register
    #pragma HLS INTERFACE axis port = arg6_axis_out register

    #pragma HLS INTERFACE ap_ctrl_chain port = return
    #pragma HLS INTERFACE s_axilite port = return bundle = control   


    ops::hls::StencilConfigCore stencilConfig;

    stencilConfig.dim = stencilConfig_dim;
    stencilConfig.grid_size[0] = stencilConfig_grid_size_0;
    stencilConfig.grid_size[1] = stencilConfig_grid_size_1;
    stencilConfig.grid_size[2] = stencilConfig_grid_size_2;
    stencilConfig.lower_limit[0] = stencilConfig_lower_limit_0;
    stencilConfig.lower_limit[1] = stencilConfig_lower_limit_1;
    stencilConfig.lower_limit[2] = stencilConfig_lower_limit_2;
    stencilConfig.upper_limit[0] = stencilConfig_upper_limit_0;
    stencilConfig.upper_limit[1] = stencilConfig_upper_limit_1;
    stencilConfig.upper_limit[2] = stencilConfig_upper_limit_2;
    stencilConfig.total_itr = stencilConfig_total_itr;
    stencilConfig.outer_loop_limit = stencilConfig_outer_loop_limit;

    unsigned int total_bytes = stencilConfig_total_itr * vector_factor * sizeof(stencil_type);
    unsigned int total_bytes_d2 = total_bytes * 2;

#ifdef DEBUG_LOG
    printf("[KERNEL_DEBUG]|%s| Starting outerloop_0 kernel TOP \n", __func__);
#endif

    for (unsigned int i = 0; i < outer_itr; i++)
    {
        kernel_outerloop_0_dataflow_region(slr_region, stencilConfig, total_bytes, total_bytes_d2, arg0_axis_in, arg1_axis_in, arg1_axis_out, arg2_axis_in, arg3_axis_in, arg4_axis_out, arg5_axis_out, arg6_axis_out, disps0, disps1, disps2, dt, scale1_der1, scale2_der1, scale1_der2_1, scale2_der2_1, scale1_der2_2, scale2_der2_2, scale1_der3, scale2_der3, dx, dy, dz, invdx, invdy, invdz, nx, ny, nz, pml_width, half_order, order);
    }

#ifdef DEBUG_LOG
    printf("[KERNEL_DEBUG]|%s| Ending outerloop_0 kernel TOP \n", __func__);
#endif
}
