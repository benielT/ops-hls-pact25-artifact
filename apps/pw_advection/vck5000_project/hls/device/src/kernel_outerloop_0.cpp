// Auto-generated at 2025-06-09 09:27:01.318088 by ops-translator
#include <ops_hls_kernel_support.h>
#include <kernel_outerloop_0.hpp>

static void joint_PE_outerloop_0(const unsigned short PEId, const ops::hls::StencilConfigCore& stencilConfig, 
        ::hls::stream<ap_uint<axis_data_width>>& arg0_hls_stream_in, 
        ::hls::stream<ap_uint<axis_data_width>>& arg1_hls_stream_in, 
        ::hls::stream<ap_uint<axis_data_width>>& arg1_hls_stream_out, 
        ::hls::stream<ap_uint<axis_data_width>>& arg2_hls_stream_in, 
        ::hls::stream<ap_uint<axis_data_width>>& arg2_hls_stream_out, 
        ::hls::stream<ap_uint<axis_data_width>>& arg3_hls_stream_in, 
        ::hls::stream<ap_uint<axis_data_width>>& arg3_hls_stream_out, 
        ::hls::stream<ap_uint<axis_data_width>>& arg4_hls_stream_in, 
        ::hls::stream<ap_uint<axis_data_width>>& arg4_hls_stream_out, 
        ::hls::stream<ap_uint<axis_data_width>>& arg5_hls_stream_in, 
        ::hls::stream<ap_uint<axis_data_width>>& arg6_hls_stream_in, 
        ::hls::stream<ap_uint<axis_data_width>>& arg7_hls_stream_out, 
        ::hls::stream<ap_uint<axis_data_width>>& arg8_hls_stream_out, 
        ::hls::stream<ap_uint<axis_data_width>>& arg9_hls_stream_out
)
{
    ::hls::stream<ap_uint<axis_data_width>> node2_3_to_node3_0;
    #pragma HLS STREAM variable = node2_3_to_node3_0 depth = 10
    ::hls::stream<ap_uint<axis_data_width>> node2_4_to_node3_1;
    #pragma HLS STREAM variable = node2_4_to_node3_1 depth = 10
    ::hls::stream<ap_uint<axis_data_width>> node2_5_to_node3_2;
    #pragma HLS STREAM variable = node2_5_to_node3_2 depth = 10

    kernel_pw_advection_opt_kernel_PE(PEId, stencilConfig,
            arg0_hls_stream_in,
            arg6_hls_stream_in,
            arg5_hls_stream_in,
            arg7_hls_stream_out,
            arg8_hls_stream_out,
            arg9_hls_stream_out,
            arg1_hls_stream_in,
            arg1_hls_stream_out,
            arg2_hls_stream_in,
            arg2_hls_stream_out,
            arg3_hls_stream_in,
            arg3_hls_stream_out,
            arg4_hls_stream_in,
            arg4_hls_stream_out
    );
}



static void kernel_outerloop_0_dataflow_region_cascaded(const unsigned short& slr_region, const ops::hls::StencilConfigCore& stencilConfig,
    ::hls::stream<ap_uint<axis_data_width>> arg0_arg3_streams[iter_par_factor + 1], 
    ::hls::stream<ap_uint<axis_data_width>> arg1_arg4_streams[iter_par_factor + 1], 
    ::hls::stream<ap_uint<axis_data_width>> arg2_arg5_streams[iter_par_factor + 1], 
    ::hls::stream<ap_uint<axis_data_width>> arg6_arg6_streams[iter_par_factor + 1], 
    ::hls::stream<ap_uint<axis_data_width>> arg7_arg7_streams[iter_par_factor + 1], 
    ::hls::stream<ap_uint<axis_data_width>> arg8_arg8_streams[iter_par_factor + 1], 
    ::hls::stream<ap_uint<axis_data_width>> arg9_arg9_streams[iter_par_factor + 1]
)
{
#pragma HLS INLINE 

    const unsigned short PEId_offset = slr_region * iter_par_factor;

    for (int i = 0; i < iter_par_factor; i++)
    {
#pragma HLS UNROLL factor=iter_par_factor
        joint_PE_outerloop_0(PEId_offset + i, stencilConfig,
                arg0_arg3_streams[i],
                arg6_arg6_streams[i], arg6_arg6_streams[i+1],
                arg7_arg7_streams[i], arg7_arg7_streams[i+1],
                arg8_arg8_streams[i], arg8_arg8_streams[i+1],
                arg9_arg9_streams[i], arg9_arg9_streams[i+1],
                arg2_arg5_streams[i],
                arg1_arg4_streams[i],
                arg0_arg3_streams[i+1],
                arg1_arg4_streams[i+1],
                arg2_arg5_streams[i+1]
        );
    }
}
static void kernel_outerloop_0_dataflow_region(const unsigned short& slr_region, const ops::hls::StencilConfigCore& stencilConfig, const unsigned int total_bytes,
hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg0_axis_in,  hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg1_axis_in, hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg1_axis_out,  hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg2_axis_in, hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg2_axis_out,  hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg3_axis_in, hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg3_axis_out,  hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg4_axis_in, hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg4_axis_out, hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg5_axis_in, hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg6_axis_in, hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg7_axis_out, hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg8_axis_out, hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg9_axis_out)
{
#pragma HLS DATAFLOW
::hls::stream<ap_uint<axis_data_width>> arg0_arg3_streams[iter_par_factor + 1];
    #pragma HLS STREAM variable = arg0_arg3_streams depth = 10
::hls::stream<ap_uint<axis_data_width>> arg1_arg4_streams[iter_par_factor + 1];
    #pragma HLS STREAM variable = arg1_arg4_streams depth = 10
::hls::stream<ap_uint<axis_data_width>> arg2_arg5_streams[iter_par_factor + 1];
    #pragma HLS STREAM variable = arg2_arg5_streams depth = 10
::hls::stream<ap_uint<axis_data_width>> arg6_arg6_streams[iter_par_factor + 1];
    #pragma HLS STREAM variable = arg6_arg6_streams depth = 10
::hls::stream<ap_uint<axis_data_width>> arg7_arg7_streams[iter_par_factor + 1];
    #pragma HLS STREAM variable = arg7_arg7_streams depth = 10
::hls::stream<ap_uint<axis_data_width>> arg8_arg8_streams[iter_par_factor + 1];
    #pragma HLS STREAM variable = arg8_arg8_streams depth = 10
::hls::stream<ap_uint<axis_data_width>> arg9_arg9_streams[iter_par_factor + 1];
    #pragma HLS STREAM variable = arg9_arg9_streams depth = 10
    
        ops::hls::axis2stream<axis_data_width, axis_data_width>(arg0_axis_in, arg0_arg3_streams[0], total_bytes);
        ops::hls::axis2stream<axis_data_width, axis_data_width>(arg1_axis_in, arg6_arg6_streams[0], total_bytes);
        ops::hls::axis2stream<axis_data_width, axis_data_width>(arg2_axis_in, arg7_arg7_streams[0], total_bytes);
        ops::hls::axis2stream<axis_data_width, axis_data_width>(arg3_axis_in, arg8_arg8_streams[0], total_bytes);
        ops::hls::axis2stream<axis_data_width, axis_data_width>(arg4_axis_in, arg9_arg9_streams[0], total_bytes);
        ops::hls::axis2stream<axis_data_width, axis_data_width>(arg5_axis_in, arg2_arg5_streams[0], total_bytes);
        ops::hls::axis2stream<axis_data_width, axis_data_width>(arg6_axis_in, arg1_arg4_streams[0], total_bytes);

        kernel_outerloop_0_dataflow_region_cascaded(slr_region, stencilConfig, arg0_arg3_streams, arg1_arg4_streams, arg2_arg5_streams, arg6_arg6_streams, arg7_arg7_streams, arg8_arg8_streams, arg9_arg9_streams);

        ops::hls::stream2axis<axis_data_width, axis_data_width>(arg1_axis_out, arg6_arg6_streams[iter_par_factor], total_bytes);
        ops::hls::stream2axis<axis_data_width, axis_data_width>(arg2_axis_out, arg7_arg7_streams[iter_par_factor], total_bytes);
        ops::hls::stream2axis<axis_data_width, axis_data_width>(arg3_axis_out, arg8_arg8_streams[iter_par_factor], total_bytes);
        ops::hls::stream2axis<axis_data_width, axis_data_width>(arg4_axis_out, arg9_arg9_streams[iter_par_factor], total_bytes);
        ops::hls::stream2axis<axis_data_width, axis_data_width>(arg7_axis_out, arg0_arg3_streams[iter_par_factor], total_bytes);
        ops::hls::stream2axis<axis_data_width, axis_data_width>(arg8_axis_out, arg1_arg4_streams[iter_par_factor], total_bytes);
        ops::hls::stream2axis<axis_data_width, axis_data_width>(arg9_axis_out, arg2_arg5_streams[iter_par_factor], total_bytes);

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
    //u
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg0_axis_in,
    //tzc1
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg1_axis_in,
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg1_axis_out,
    //tzc2
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg2_axis_in,
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg2_axis_out,
    //tzd1
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg3_axis_in,
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg3_axis_out,
    //tzd2
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg4_axis_in,
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg4_axis_out,
    //w
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg5_axis_in,
    //v
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg6_axis_in,
    //u2
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg7_axis_out,
    //v2
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg8_axis_out,
    //w2
        hls::stream <ap_axiu<axis_data_width, 0, 0, 0>>& arg9_axis_out
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

    

    #pragma HLS INTERFACE axis port = arg0_axis_in register
    #pragma HLS INTERFACE axis port = arg1_axis_in register
    #pragma HLS INTERFACE axis port = arg1_axis_out register
    #pragma HLS INTERFACE axis port = arg2_axis_in register
    #pragma HLS INTERFACE axis port = arg2_axis_out register
    #pragma HLS INTERFACE axis port = arg3_axis_in register
    #pragma HLS INTERFACE axis port = arg3_axis_out register
    #pragma HLS INTERFACE axis port = arg4_axis_in register
    #pragma HLS INTERFACE axis port = arg4_axis_out register
    #pragma HLS INTERFACE axis port = arg5_axis_in register
    #pragma HLS INTERFACE axis port = arg6_axis_in register
    #pragma HLS INTERFACE axis port = arg7_axis_out register
    #pragma HLS INTERFACE axis port = arg8_axis_out register
    #pragma HLS INTERFACE axis port = arg9_axis_out register

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

#ifdef DEBUG_LOG
    printf("[KERNEL_DEBUG]|%s| Starting outerloop_0 kernel TOP \n", __func__);
#endif

    for (unsigned int i = 0; i < outer_itr; i++)
    {
        kernel_outerloop_0_dataflow_region(slr_region, stencilConfig, total_bytes, arg0_axis_in, arg1_axis_in, arg1_axis_out, arg2_axis_in, arg2_axis_out, arg3_axis_in, arg3_axis_out, arg4_axis_in, arg4_axis_out, arg5_axis_in, arg6_axis_in, arg7_axis_out, arg8_axis_out, arg9_axis_out);
    }

#ifdef DEBUG_LOG
    printf("[KERNEL_DEBUG]|%s| Ending outerloop_0 kernel TOP \n", __func__);
#endif
}
