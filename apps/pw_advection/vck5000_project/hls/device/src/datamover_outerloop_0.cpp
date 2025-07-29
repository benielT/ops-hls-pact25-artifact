// Auto-generated at 2025-06-09 09:27:01.314368 by ops-translator
#include <datamover_outerloop_0.hpp>
static void datamover_outerloop_0_dataflow_region_read(
        const unsigned int num_pkts,
        const ops::hls::MemConfig& memconfig,
        ap_uint<mem_data_width>* arg0,
        ap_uint<mem_data_width>* arg1,
        ap_uint<mem_data_width>* arg2,
        ap_uint<mem_data_width>* arg3,
        ap_uint<mem_data_width>* arg4,
        ap_uint<mem_data_width>* arg5,
        ap_uint<mem_data_width>* arg6,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg0_axis_out,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg1_axis_out,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg2_axis_out,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg3_axis_out,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg4_axis_out,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg5_axis_out,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg6_axis_out)
{
#pragma HLS DATAFLOW
    static ::hls::stream<ap_uint<mem_data_width>> arg0_read_mem_strm;
    #pragma HLS STREAM variable = arg0_read_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg0_read_reduced_mem_strm;
    #pragma HLS STREAM variable = arg0_read_reduced_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg1_read_mem_strm;
    #pragma HLS STREAM variable = arg1_read_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg1_read_reduced_mem_strm;
    #pragma HLS STREAM variable = arg1_read_reduced_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg2_read_mem_strm;
    #pragma HLS STREAM variable = arg2_read_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg2_read_reduced_mem_strm;
    #pragma HLS STREAM variable = arg2_read_reduced_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg3_read_mem_strm;
    #pragma HLS STREAM variable = arg3_read_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg3_read_reduced_mem_strm;
    #pragma HLS STREAM variable = arg3_read_reduced_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg4_read_mem_strm;
    #pragma HLS STREAM variable = arg4_read_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg4_read_reduced_mem_strm;
    #pragma HLS STREAM variable = arg4_read_reduced_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg5_read_mem_strm;
    #pragma HLS STREAM variable = arg5_read_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg5_read_reduced_mem_strm;
    #pragma HLS STREAM variable = arg5_read_reduced_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg6_read_mem_strm;
    #pragma HLS STREAM variable = arg6_read_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg6_read_reduced_mem_strm;
    #pragma HLS STREAM variable = arg6_read_reduced_mem_strm
    ops::hls::mem2stream<mem_data_width, 32, 2>(arg0, arg0_read_mem_strm, memconfig.total_xblocks);
    ops::hls::mem2stream<mem_data_width, 32, 2>(arg1, arg1_read_mem_strm, memconfig.total_xblocks);
    ops::hls::mem2stream<mem_data_width, 32, 2>(arg2, arg2_read_mem_strm, memconfig.total_xblocks);
    ops::hls::mem2stream<mem_data_width, 32, 2>(arg3, arg3_read_mem_strm, memconfig.total_xblocks);
    ops::hls::mem2stream<mem_data_width, 32, 2>(arg4, arg4_read_mem_strm, memconfig.total_xblocks);
    ops::hls::mem2stream<mem_data_width, 32, 2>(arg5, arg5_read_mem_strm, memconfig.total_xblocks);
    ops::hls::mem2stream<mem_data_width, 32, 2>(arg6, arg6_read_mem_strm, memconfig.total_xblocks);
    
    ops::hls::stream2streamStepdown<mem_data_width, axis_data_width>(arg0_read_mem_strm, arg0_read_reduced_mem_strm, memconfig.total_xblocks);
    ops::hls::stream2streamStepdown<mem_data_width, axis_data_width>(arg1_read_mem_strm, arg1_read_reduced_mem_strm, memconfig.total_xblocks);
    ops::hls::stream2streamStepdown<mem_data_width, axis_data_width>(arg2_read_mem_strm, arg2_read_reduced_mem_strm, memconfig.total_xblocks);
    ops::hls::stream2streamStepdown<mem_data_width, axis_data_width>(arg3_read_mem_strm, arg3_read_reduced_mem_strm, memconfig.total_xblocks);
    ops::hls::stream2streamStepdown<mem_data_width, axis_data_width>(arg4_read_mem_strm, arg4_read_reduced_mem_strm, memconfig.total_xblocks);
    ops::hls::stream2streamStepdown<mem_data_width, axis_data_width>(arg5_read_mem_strm, arg5_read_reduced_mem_strm, memconfig.total_xblocks);
    ops::hls::stream2streamStepdown<mem_data_width, axis_data_width>(arg6_read_mem_strm, arg6_read_reduced_mem_strm, memconfig.total_xblocks);
    ops::hls::stream2axis<axis_data_width>(arg0_read_reduced_mem_strm, arg0_axis_out, num_pkts);
    ops::hls::stream2axis<axis_data_width>(arg1_read_reduced_mem_strm, arg1_axis_out, num_pkts);
    ops::hls::stream2axis<axis_data_width>(arg2_read_reduced_mem_strm, arg2_axis_out, num_pkts);
    ops::hls::stream2axis<axis_data_width>(arg3_read_reduced_mem_strm, arg3_axis_out, num_pkts);
    ops::hls::stream2axis<axis_data_width>(arg4_read_reduced_mem_strm, arg4_axis_out, num_pkts);
    ops::hls::stream2axis<axis_data_width>(arg5_read_reduced_mem_strm, arg5_axis_out, num_pkts);
    ops::hls::stream2axis<axis_data_width>(arg6_read_reduced_mem_strm, arg6_axis_out, num_pkts);
}

static void datamover_outerloop_0_dataflow_region_write(
        const unsigned int num_pkts,
        const ops::hls::MemConfig& memconfig,
        ap_uint<mem_data_width>* arg1,
        ap_uint<mem_data_width>* arg2,
        ap_uint<mem_data_width>* arg3,
        ap_uint<mem_data_width>* arg4,
        ap_uint<mem_data_width>* arg7,
        ap_uint<mem_data_width>* arg8,
        ap_uint<mem_data_width>* arg9,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg1_axis_in,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg2_axis_in,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg3_axis_in,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg4_axis_in,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg7_axis_in,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg8_axis_in,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg9_axis_in)
{
    static ::hls::stream<ap_uint<mem_data_width>> arg7_write_mem_strm;
    #pragma HLS STREAM variable = arg7_write_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg7_write_reduced_mem_strm;
    #pragma HLS STREAM variable = arg7_write_reduced_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg8_write_mem_strm;
    #pragma HLS STREAM variable = arg8_write_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg8_write_reduced_mem_strm;
    #pragma HLS STREAM variable = arg8_write_reduced_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg9_write_mem_strm;
    #pragma HLS STREAM variable = arg9_write_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg9_write_reduced_mem_strm;
    #pragma HLS STREAM variable = arg9_write_reduced_mem_strm

#pragma HLS DATAFLOW
    ops::hls::axisTerminate<axis_data_width>(arg1_axis_in, num_pkts);
    
    ops::hls::axisTerminate<axis_data_width>(arg2_axis_in, num_pkts);
    
    ops::hls::axisTerminate<axis_data_width>(arg3_axis_in, num_pkts);
    
    ops::hls::axisTerminate<axis_data_width>(arg4_axis_in, num_pkts);
    
    ops::hls::axis2stream<axis_data_width>(arg7_axis_in, arg7_write_reduced_mem_strm, num_pkts);
    
    ops::hls::axis2stream<axis_data_width>(arg8_axis_in, arg8_write_reduced_mem_strm, num_pkts);
    
    ops::hls::axis2stream<axis_data_width>(arg9_axis_in, arg9_write_reduced_mem_strm, num_pkts);
    
    ops::hls::stream2streamStepup<axis_data_width, mem_data_width>(arg7_write_reduced_mem_strm, arg7_write_mem_strm, memconfig.total_xblocks);
    ops::hls::stream2streamStepup<axis_data_width, mem_data_width>(arg8_write_reduced_mem_strm, arg8_write_mem_strm, memconfig.total_xblocks);
    ops::hls::stream2streamStepup<axis_data_width, mem_data_width>(arg9_write_reduced_mem_strm, arg9_write_mem_strm, memconfig.total_xblocks);
    ops::hls::stream2mem<mem_data_width, 32, 2>(arg7, arg7_write_mem_strm, memconfig.total_xblocks);
    ops::hls::stream2mem<mem_data_width, 32, 2>(arg8, arg8_write_mem_strm, memconfig.total_xblocks);
    ops::hls::stream2mem<mem_data_width, 32, 2>(arg9, arg9_write_mem_strm, memconfig.total_xblocks);
}

static void datamover_outerloop_0_dataflow_read_write_dataflow_region(
        const unsigned int num_pkts,
        const ops::hls::MemConfig& memconfig,
        ap_uint<mem_data_width>* arg0,
        ap_uint<mem_data_width>* arg1,
        ap_uint<mem_data_width>* arg2,
        ap_uint<mem_data_width>* arg3,
        ap_uint<mem_data_width>* arg4,
        ap_uint<mem_data_width>* arg5,
        ap_uint<mem_data_width>* arg6,
        ap_uint<mem_data_width>* arg7,
        ap_uint<mem_data_width>* arg8,
        ap_uint<mem_data_width>* arg9,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg0_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg1_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg1_axis_in,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg2_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg2_axis_in,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg3_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg3_axis_in,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg4_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg4_axis_in,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg5_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg6_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg7_axis_in,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg8_axis_in,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg9_axis_in
)    
{
    static ::hls::stream<ap_uint<mem_data_width>> arg0_read_mem_strm;
    #pragma HLS STREAM variable = arg0_read_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg0_read_reduced_mem_strm;
    #pragma HLS STREAM variable = arg0_read_reduced_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg1_read_mem_strm;
    #pragma HLS STREAM variable = arg1_read_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg1_read_reduced_mem_strm;
    #pragma HLS STREAM variable = arg1_read_reduced_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg2_read_mem_strm;
    #pragma HLS STREAM variable = arg2_read_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg2_read_reduced_mem_strm;
    #pragma HLS STREAM variable = arg2_read_reduced_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg3_read_mem_strm;
    #pragma HLS STREAM variable = arg3_read_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg3_read_reduced_mem_strm;
    #pragma HLS STREAM variable = arg3_read_reduced_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg4_read_mem_strm;
    #pragma HLS STREAM variable = arg4_read_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg4_read_reduced_mem_strm;
    #pragma HLS STREAM variable = arg4_read_reduced_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg5_read_mem_strm;
    #pragma HLS STREAM variable = arg5_read_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg5_read_reduced_mem_strm;
    #pragma HLS STREAM variable = arg5_read_reduced_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg6_read_mem_strm;
    #pragma HLS STREAM variable = arg6_read_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg6_read_reduced_mem_strm;
    #pragma HLS STREAM variable = arg6_read_reduced_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg7_write_mem_strm;
    #pragma HLS STREAM variable = arg7_write_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg7_write_reduced_mem_strm;
    #pragma HLS STREAM variable = arg7_write_reduced_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg8_write_mem_strm;
    #pragma HLS STREAM variable = arg8_write_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg8_write_reduced_mem_strm;
    #pragma HLS STREAM variable = arg8_write_reduced_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg9_write_mem_strm;
    #pragma HLS STREAM variable = arg9_write_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg9_write_reduced_mem_strm;
    #pragma HLS STREAM variable = arg9_write_reduced_mem_strm

#pragma HLS DATAFLOW
        ops::hls::mem2stream<mem_data_width, 32, 2>(arg0, arg0_read_mem_strm, memconfig.total_xblocks);
        ops::hls::mem2stream<mem_data_width, 32, 2>(arg1, arg1_read_mem_strm, memconfig.total_xblocks);
        ops::hls::mem2stream<mem_data_width, 32, 2>(arg2, arg2_read_mem_strm, memconfig.total_xblocks);
        ops::hls::mem2stream<mem_data_width, 32, 2>(arg3, arg3_read_mem_strm, memconfig.total_xblocks);
        ops::hls::mem2stream<mem_data_width, 32, 2>(arg4, arg4_read_mem_strm, memconfig.total_xblocks);
        ops::hls::mem2stream<mem_data_width, 32, 2>(arg5, arg5_read_mem_strm, memconfig.total_xblocks);
        ops::hls::mem2stream<mem_data_width, 32, 2>(arg6, arg6_read_mem_strm, memconfig.total_xblocks);
        ops::hls::stream2streamStepdown<mem_data_width, axis_data_width>(arg0_read_mem_strm, arg0_read_reduced_mem_strm, memconfig.total_xblocks);
        ops::hls::stream2streamStepdown<mem_data_width, axis_data_width>(arg1_read_mem_strm, arg1_read_reduced_mem_strm, memconfig.total_xblocks);
        ops::hls::stream2streamStepdown<mem_data_width, axis_data_width>(arg2_read_mem_strm, arg2_read_reduced_mem_strm, memconfig.total_xblocks);
        ops::hls::stream2streamStepdown<mem_data_width, axis_data_width>(arg3_read_mem_strm, arg3_read_reduced_mem_strm, memconfig.total_xblocks);
        ops::hls::stream2streamStepdown<mem_data_width, axis_data_width>(arg4_read_mem_strm, arg4_read_reduced_mem_strm, memconfig.total_xblocks);
        ops::hls::stream2streamStepdown<mem_data_width, axis_data_width>(arg5_read_mem_strm, arg5_read_reduced_mem_strm, memconfig.total_xblocks);
        ops::hls::stream2streamStepdown<mem_data_width, axis_data_width>(arg6_read_mem_strm, arg6_read_reduced_mem_strm, memconfig.total_xblocks);
        ops::hls::stream2axis<axis_data_width>(arg0_read_reduced_mem_strm, arg0_axis_out, num_pkts);
        ops::hls::stream2axis<axis_data_width>(arg1_read_reduced_mem_strm, arg1_axis_out, num_pkts);
        ops::hls::stream2axis<axis_data_width>(arg2_read_reduced_mem_strm, arg2_axis_out, num_pkts);
        ops::hls::stream2axis<axis_data_width>(arg3_read_reduced_mem_strm, arg3_axis_out, num_pkts);
        ops::hls::stream2axis<axis_data_width>(arg4_read_reduced_mem_strm, arg4_axis_out, num_pkts);
        ops::hls::stream2axis<axis_data_width>(arg5_read_reduced_mem_strm, arg5_axis_out, num_pkts);
        ops::hls::stream2axis<axis_data_width>(arg6_read_reduced_mem_strm, arg6_axis_out, num_pkts);
        ops::hls::axisTerminate<axis_data_width>(arg1_axis_in, num_pkts);
    
        ops::hls::axisTerminate<axis_data_width>(arg2_axis_in, num_pkts);
    
        ops::hls::axisTerminate<axis_data_width>(arg3_axis_in, num_pkts);
    
        ops::hls::axisTerminate<axis_data_width>(arg4_axis_in, num_pkts);
    
        ops::hls::axis2stream<axis_data_width>(arg7_axis_in, arg7_write_reduced_mem_strm, num_pkts);
    
        ops::hls::axis2stream<axis_data_width>(arg8_axis_in, arg8_write_reduced_mem_strm, num_pkts);
    
        ops::hls::axis2stream<axis_data_width>(arg9_axis_in, arg9_write_reduced_mem_strm, num_pkts);
    
        ops::hls::stream2streamStepup<axis_data_width, mem_data_width>(arg7_write_reduced_mem_strm, arg7_write_mem_strm, memconfig.total_xblocks);
        ops::hls::stream2streamStepup<axis_data_width, mem_data_width>(arg8_write_reduced_mem_strm, arg8_write_mem_strm, memconfig.total_xblocks);
        ops::hls::stream2streamStepup<axis_data_width, mem_data_width>(arg9_write_reduced_mem_strm, arg9_write_mem_strm, memconfig.total_xblocks);
        ops::hls::stream2mem<mem_data_width, 32, 2>(arg7, arg7_write_mem_strm, memconfig.total_xblocks);
        ops::hls::stream2mem<mem_data_width, 32, 2>(arg8, arg8_write_mem_strm, memconfig.total_xblocks);
        ops::hls::stream2mem<mem_data_width, 32, 2>(arg9, arg9_write_mem_strm, memconfig.total_xblocks);
}

static void datamover_outerloop_0_dataflow_read_write(
        const unsigned int iter,
        const unsigned int num_pkts,
        const ops::hls::MemConfig& memconfig,
        ap_uint<mem_data_width>* arg0,
        ap_uint<mem_data_width>* arg1,
        ap_uint<mem_data_width>* arg2,
        ap_uint<mem_data_width>* arg3,
        ap_uint<mem_data_width>* arg4,
        ap_uint<mem_data_width>* arg5,
        ap_uint<mem_data_width>* arg6,
        ap_uint<mem_data_width>* arg7,
        ap_uint<mem_data_width>* arg8,
        ap_uint<mem_data_width>* arg9,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg0_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg1_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg1_axis_in,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg2_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg2_axis_in,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg3_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg3_axis_in,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg4_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg4_axis_in,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg5_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg6_axis_out,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg7_axis_in,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg8_axis_in,
        hls::stream <ap_axiu<axis_data_width,0,0,0>>& arg9_axis_in
)    
{
    for (unsigned int i = 0; i < iter/2; i++)
    {
    //#pragma HLS PIPELINE REWIND
    #ifdef DEBUG_LOG
        printf("[KERNEL_DEBUG]|%s| Calling datamover. i:%d\n", __func__, i);
    #endif
        datamover_outerloop_0_dataflow_read_write_dataflow_region(
                num_pkts,
                memconfig,
                arg0,
                arg1,
                arg2,
                arg3,
                arg4,
                arg5,
                arg6,
                arg7,
                arg8,
                arg9,
                arg0_axis_out,
                arg1_axis_out,
                arg1_axis_in,
                arg2_axis_out,
                arg2_axis_in,
                arg3_axis_out,
                arg3_axis_in,
                arg4_axis_out,
                arg4_axis_in,
                arg5_axis_out,
                arg6_axis_out,
                arg7_axis_in,
                arg8_axis_in,
                arg9_axis_in
        );
        datamover_outerloop_0_dataflow_read_write_dataflow_region(
                num_pkts,
                memconfig,
                arg7,
                arg1,
                arg2,
                arg3,
                arg4,
                arg9,
                arg8,
                arg0,
                arg6,
                arg5,
                arg0_axis_out,
                arg1_axis_out,
                arg1_axis_in,
                arg2_axis_out,
                arg2_axis_in,
                arg3_axis_out,
                arg3_axis_in,
                arg4_axis_out,
                arg4_axis_in,
                arg5_axis_out,
                arg6_axis_out,
                arg7_axis_in,
                arg8_axis_in,
                arg9_axis_in
);
    }
}

static void datamover_outerloop_0_loopback_dataflow_region(
        const unsigned int num_pkts
,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg0_axis_out,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg1_axis_out,
           hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg1_axis_in,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg2_axis_out,
           hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg2_axis_in,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg3_axis_out,
           hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg3_axis_in,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg4_axis_out,
           hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg4_axis_in,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg5_axis_out,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg6_axis_out,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg7_axis_in,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg8_axis_in,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg9_axis_in)
{
    static ::hls::stream<ap_uint<axis_data_width>> arg0_mem_strm;
    #pragma HLS STREAM variable = arg0_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg1_mem_strm;
    #pragma HLS STREAM variable = arg1_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg2_mem_strm;
    #pragma HLS STREAM variable = arg2_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg3_mem_strm;
    #pragma HLS STREAM variable = arg3_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg4_mem_strm;
    #pragma HLS STREAM variable = arg4_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg5_mem_strm;
    #pragma HLS STREAM variable = arg5_mem_strm
    static ::hls::stream<ap_uint<axis_data_width>> arg6_mem_strm;
    #pragma HLS STREAM variable = arg6_mem_strm
#pragma HLS DATAFLOW
    ops::hls::axis2stream<axis_data_width>(arg7_axis_in, arg0_mem_strm, num_pkts);
    ops::hls::axis2stream<axis_data_width>(arg1_axis_in, arg1_mem_strm, num_pkts);
    ops::hls::axis2stream<axis_data_width>(arg2_axis_in, arg2_mem_strm, num_pkts);
    ops::hls::axis2stream<axis_data_width>(arg3_axis_in, arg3_mem_strm, num_pkts);
    ops::hls::axis2stream<axis_data_width>(arg4_axis_in, arg4_mem_strm, num_pkts);
    ops::hls::axis2stream<axis_data_width>(arg9_axis_in, arg5_mem_strm, num_pkts);
    ops::hls::axis2stream<axis_data_width>(arg8_axis_in, arg6_mem_strm, num_pkts);
    ops::hls::stream2axis<axis_data_width>(arg0_mem_strm, arg0_axis_out, num_pkts);
    ops::hls::stream2axis<axis_data_width>(arg1_mem_strm, arg1_axis_out, num_pkts);
    ops::hls::stream2axis<axis_data_width>(arg2_mem_strm, arg2_axis_out, num_pkts);
    ops::hls::stream2axis<axis_data_width>(arg3_mem_strm, arg3_axis_out, num_pkts);
    ops::hls::stream2axis<axis_data_width>(arg4_mem_strm, arg4_axis_out, num_pkts);
    ops::hls::stream2axis<axis_data_width>(arg5_mem_strm, arg5_axis_out, num_pkts);
    ops::hls::stream2axis<axis_data_width>(arg6_mem_strm, arg6_axis_out, num_pkts);
}

static void datamover_outerloop_0_loopback(
        const unsigned int iter,
        const unsigned int num_pkts
,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg0_axis_out,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg1_axis_out,
            hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg1_axis_in,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg2_axis_out,
            hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg2_axis_in,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg3_axis_out,
            hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg3_axis_in,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg4_axis_out,
            hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg4_axis_in,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg5_axis_out,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg6_axis_out,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg7_axis_in,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg8_axis_in,
        hls::stream<ap_axiu<axis_data_width, 0, 0, 0>>& arg9_axis_in)
{
    for (unsigned int i = 0; i < iter; i++)
    {
     //   pragma HLS PIPELINE REWIND
    #ifdef DEBUG_LOG
        printf("[KERNEL_DEBUG]|%s| Calling loopback. i:%d\n", __func__, i);
    #endif
        datamover_outerloop_0_loopback_dataflow_region(num_pkts
,
        arg0_axis_out,
        arg1_axis_out, arg1_axis_in,
        arg2_axis_out, arg2_axis_in,
        arg3_axis_out, arg3_axis_in,
        arg4_axis_out, arg4_axis_in,
        arg5_axis_out,
        arg6_axis_out,
        arg7_axis_in,
        arg8_axis_in,
        arg9_axis_in);
    } 
}
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

{
    #pragma HLS INTERFACE s_axilite port = is_loopback bundle = control
    #pragma HLS INTERFACE s_axilite port = range_start_0 bundle = control
    #pragma HLS INTERFACE s_axilite port = range_end_0 bundle = control
    #pragma HLS INTERFACE s_axilite port = range_start_1 bundle = control
    #pragma HLS INTERFACE s_axilite port = range_end_1 bundle = control
    #pragma HLS INTERFACE s_axilite port = range_start_2 bundle = control
    #pragma HLS INTERFACE s_axilite port = range_end_2 bundle = control
 
    #pragma HLS INTERFACE s_axilite port = gridSize_0 bundle = control
    #pragma HLS INTERFACE s_axilite port = gridSize_1 bundle = control
    #pragma HLS INTERFACE s_axilite port = gridSize_2 bundle = control
    #pragma HLS INTERFACE s_axilite port = outer_itr bundle = control
 
    #pragma HLS INTERFACE mode=m_axi bundle=gmem0 depth=4096 max_read_burst_length=16 max_write_burst_length=16 \
            num_read_outstanding=4 num_write_outstanding=4 \
            port=arg0 offset=slave
    #pragma HLS INTERFACE s_axilite port = arg0 bundle = control
 
    #pragma HLS INTERFACE mode=m_axi bundle=gmem1 depth=4096 max_read_burst_length=16 max_write_burst_length=16 \
            num_read_outstanding=4 num_write_outstanding=4 \
            port=arg1 offset=slave
    #pragma HLS INTERFACE s_axilite port = arg1 bundle = control
 
    #pragma HLS INTERFACE mode=m_axi bundle=gmem2 depth=4096 max_read_burst_length=16 max_write_burst_length=16 \
            num_read_outstanding=4 num_write_outstanding=4 \
            port=arg2 offset=slave
    #pragma HLS INTERFACE s_axilite port = arg2 bundle = control
 
    #pragma HLS INTERFACE mode=m_axi bundle=gmem3 depth=4096 max_read_burst_length=16 max_write_burst_length=16 \
            num_read_outstanding=4 num_write_outstanding=4 \
            port=arg3 offset=slave
    #pragma HLS INTERFACE s_axilite port = arg3 bundle = control
 
    #pragma HLS INTERFACE mode=m_axi bundle=gmem4 depth=4096 max_read_burst_length=16 max_write_burst_length=16 \
            num_read_outstanding=4 num_write_outstanding=4 \
            port=arg4 offset=slave
    #pragma HLS INTERFACE s_axilite port = arg4 bundle = control
 
    #pragma HLS INTERFACE mode=m_axi bundle=gmem5 depth=4096 max_read_burst_length=16 max_write_burst_length=16 \
            num_read_outstanding=4 num_write_outstanding=4 \
            port=arg5 offset=slave
    #pragma HLS INTERFACE s_axilite port = arg5 bundle = control
 
    #pragma HLS INTERFACE mode=m_axi bundle=gmem6 depth=4096 max_read_burst_length=16 max_write_burst_length=16 \
            num_read_outstanding=4 num_write_outstanding=4 \
            port=arg6 offset=slave
    #pragma HLS INTERFACE s_axilite port = arg6 bundle = control
 
    #pragma HLS INTERFACE mode=m_axi bundle=gmem7 depth=4096 max_read_burst_length=16 max_write_burst_length=16 \
            num_read_outstanding=4 num_write_outstanding=4 \
            port=arg7 offset=slave
    #pragma HLS INTERFACE s_axilite port = arg7 bundle = control
 
    #pragma HLS INTERFACE mode=m_axi bundle=gmem8 depth=4096 max_read_burst_length=16 max_write_burst_length=16 \
            num_read_outstanding=4 num_write_outstanding=4 \
            port=arg8 offset=slave
    #pragma HLS INTERFACE s_axilite port = arg8 bundle = control
 
    #pragma HLS INTERFACE mode=m_axi bundle=gmem9 depth=4096 max_read_burst_length=16 max_write_burst_length=16 \
            num_read_outstanding=4 num_write_outstanding=4 \
            port=arg9 offset=slave
    #pragma HLS INTERFACE s_axilite port = arg9 bundle = control
    #pragma HLS INTERFACE mode=axis port=arg0_axis_out register
    #pragma HLS INTERFACE mode=axis port=arg1_axis_out register
    #pragma HLS INTERFACE mode=axis port=arg1_axis_in register
    #pragma HLS INTERFACE mode=axis port=arg2_axis_out register
    #pragma HLS INTERFACE mode=axis port=arg2_axis_in register
    #pragma HLS INTERFACE mode=axis port=arg3_axis_out register
    #pragma HLS INTERFACE mode=axis port=arg3_axis_in register
    #pragma HLS INTERFACE mode=axis port=arg4_axis_out register
    #pragma HLS INTERFACE mode=axis port=arg4_axis_in register
    #pragma HLS INTERFACE mode=axis port=arg5_axis_out register
    #pragma HLS INTERFACE mode=axis port=arg6_axis_out register
    #pragma HLS INTERFACE mode=axis port=arg7_axis_in register
    #pragma HLS INTERFACE mode=axis port=arg8_axis_in register
    #pragma HLS INTERFACE mode=axis port=arg9_axis_in register

    #pragma HLS INTERFACE mode=s_axilite port=return bundle = control
    #pragma HLS INTERFACE mode=ap_ctrl_chain port=return

    ops::hls::AccessRange range;
    range.start[0] = range_start_0;
    range.end[0] = range_end_0;
    range.start[1] = range_start_1;
    range.end[1] = range_end_1;
    range.start[2] = range_start_2;
    range.end[2] = range_end_2;
    range.dim = 3;

    ops::hls::SizeType read_gridSize = { gridSize_0, gridSize_1, gridSize_2 };
    unsigned int loopback_itr = outer_itr - 1 >= 0 ? outer_itr - 1 : 0;

#ifdef DEBUG_LOG
    printf("[KERNEL_DEBUG]|%s| starting datamover TOP range:(%d,%d,%d) ---> (%d,%d,%d)\n", __func__,
            range.start[0], range.start[1], range.start[2], range.end[0], range.end[1], range.end[2]);
    printf("[KERNEL_DEBUG]|%s| read_gridSize: (%d, %d, %d), \n", __func__,
            read_gridSize[0], read_gridSize[1], read_gridSize[2]);
#endif 

    constexpr unsigned int num_of_pkts_per_bytes = mem_data_width / axis_data_width;
    ops::hls::MemConfig config;
    ops::hls::genMemConfig<mem_data_width, axis_data_width, data_width>(read_gridSize, range, config);
    const unsigned int num_beats = config.total_xblocks;
    const unsigned int num_pkts = num_of_pkts_per_bytes * config.total_xblocks;
        datamover_outerloop_0_dataflow_read_write(
                outer_itr,
                num_pkts,
                config,
                arg0,
                arg1,
                arg2,
                arg3,
                arg4,
                arg5,
                arg6,
                arg7,
                arg8,
                arg9,
            arg0_axis_out,
                arg1_axis_out,
                arg1_axis_in,
                arg2_axis_out,
                arg2_axis_in,
                arg3_axis_out,
                arg3_axis_in,
                arg4_axis_out,
                arg4_axis_in,
            arg5_axis_out,
            arg6_axis_out,
            arg7_axis_in,
            arg8_axis_in,
            arg9_axis_in
            );
}


