// Auto-generated at 2025-07-29 03:19:41.441803 by ops-translator
#include <datamover_outerloop_0.hpp>
static void datamover_outerloop_0_dataflow_region_read(
        const unsigned int num_pkts,
        const ops::hls::MemConfig& memconfig,
        const ops::hls::MemConfig& memconfig_d2,
        ap_uint<mem_data_width>* arg0,
        ap_uint<mem_data_width>* arg1,
        ap_uint<mem_data_width>* arg2,
        ap_uint<mem_data_width>* arg3,
        hls::stream<ap_axiu<multidim_axis_data_width_0_yy_0_1, 0, 0, 0>>& arg0_axis_out,
        hls::stream<ap_axiu<multidim_axis_data_width_0_rho_mu, 0, 0, 0>>& arg1_axis_out,
        hls::stream<ap_axiu<multidim_axis_data_width_0_yy_4_5, 0, 0, 0>>& arg2_axis_out,
        hls::stream<ap_axiu<multidim_axis_data_width_0_yy_2_3, 0, 0, 0>>& arg3_axis_out)
{
#pragma HLS DATAFLOW
    static ::hls::stream<ap_uint<mem_data_width>> arg0_read_mem_strm;
    #pragma HLS STREAM variable = arg0_read_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg1_read_mem_strm;
    #pragma HLS STREAM variable = arg1_read_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg2_read_mem_strm;
    #pragma HLS STREAM variable = arg2_read_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg3_read_mem_strm;
    #pragma HLS STREAM variable = arg3_read_mem_strm
    ops::hls::mem2stream<mem_data_width, 32, 1>(arg0, arg0_read_mem_strm, memconfig_d2.total_xblocks);
    ops::hls::mem2stream<mem_data_width, 32, 1>(arg1, arg1_read_mem_strm, memconfig_d2.total_xblocks);
    ops::hls::mem2stream<mem_data_width, 32, 1>(arg2, arg2_read_mem_strm, memconfig_d2.total_xblocks);
    ops::hls::mem2stream<mem_data_width, 32, 1>(arg3, arg3_read_mem_strm, memconfig_d2.total_xblocks);
    
    ops::hls::stream2axis<multidim_axis_data_width_0_yy_0_1>(arg0_read_mem_strm, arg0_axis_out, num_pkts);
    ops::hls::stream2axis<multidim_axis_data_width_0_rho_mu>(arg1_read_mem_strm, arg1_axis_out, num_pkts);
    ops::hls::stream2axis<multidim_axis_data_width_0_yy_4_5>(arg2_read_mem_strm, arg2_axis_out, num_pkts);
    ops::hls::stream2axis<multidim_axis_data_width_0_yy_2_3>(arg3_read_mem_strm, arg3_axis_out, num_pkts);
}

static void datamover_outerloop_0_dataflow_region_write(
        const unsigned int num_pkts,
        const ops::hls::MemConfig& memconfig,
        const ops::hls::MemConfig& memconfig_d2,
        ap_uint<mem_data_width>* arg1,
        ap_uint<mem_data_width>* arg4,
        ap_uint<mem_data_width>* arg5,
        ap_uint<mem_data_width>* arg6,
        hls::stream<ap_axiu<multidim_axis_data_width_0_rho_mu, 0, 0, 0>>& arg1_axis_in,
        hls::stream<ap_axiu<multidim_axis_data_width_0_ytemp2_0_1, 0, 0, 0>>& arg4_axis_in,
        hls::stream<ap_axiu<multidim_axis_data_width_0_ytemp2_2_3, 0, 0, 0>>& arg5_axis_in,
        hls::stream<ap_axiu<multidim_axis_data_width_0_ytemp2_4_5, 0, 0, 0>>& arg6_axis_in)
{
    static ::hls::stream<ap_uint<mem_data_width>> arg4_write_mem_strm;
    #pragma HLS STREAM variable = arg4_write_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg5_write_mem_strm;
    #pragma HLS STREAM variable = arg5_write_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg6_write_mem_strm;
    #pragma HLS STREAM variable = arg6_write_mem_strm

#pragma HLS DATAFLOW
    ops::hls::axisTerminate<multidim_axis_data_width_0_rho_mu>(arg1_axis_in, num_pkts);
    
    ops::hls::axis2stream<multidim_axis_data_width_0_ytemp2_0_1>(arg4_axis_in, arg4_write_mem_strm, num_pkts);
    
    ops::hls::axis2stream<multidim_axis_data_width_0_ytemp2_2_3>(arg5_axis_in, arg5_write_mem_strm, num_pkts);
    
    ops::hls::axis2stream<multidim_axis_data_width_0_ytemp2_4_5>(arg6_axis_in, arg6_write_mem_strm, num_pkts);
    
    ops::hls::stream2mem<mem_data_width, 32, 1>(arg4, arg4_write_mem_strm, memconfig_d2.total_xblocks);
    ops::hls::stream2mem<mem_data_width, 32, 1>(arg5, arg5_write_mem_strm, memconfig_d2.total_xblocks);
    ops::hls::stream2mem<mem_data_width, 32, 1>(arg6, arg6_write_mem_strm, memconfig_d2.total_xblocks);
}

static void datamover_outerloop_0_dataflow_read_write_dataflow_region(
        const unsigned int num_pkts,
        const ops::hls::MemConfig& memconfig,
        const ops::hls::MemConfig& memconfig_d2,
        ap_uint<mem_data_width>* arg0,
        ap_uint<mem_data_width>* arg1,
        ap_uint<mem_data_width>* arg2,
        ap_uint<mem_data_width>* arg3,
        ap_uint<mem_data_width>* arg4,
        ap_uint<mem_data_width>* arg5,
        ap_uint<mem_data_width>* arg6,
        hls::stream <ap_axiu<multidim_axis_data_width_0_yy_0_1,0,0,0>>& arg0_axis_out,
        hls::stream <ap_axiu<multidim_axis_data_width_0_rho_mu,0,0,0>>& arg1_axis_out,
        hls::stream <ap_axiu<multidim_axis_data_width_0_rho_mu,0,0,0>>& arg1_axis_in,
        hls::stream <ap_axiu<multidim_axis_data_width_0_yy_4_5,0,0,0>>& arg2_axis_out,
        hls::stream <ap_axiu<multidim_axis_data_width_0_yy_2_3,0,0,0>>& arg3_axis_out,
        hls::stream <ap_axiu<multidim_axis_data_width_0_ytemp2_0_1,0,0,0>>& arg4_axis_in,
        hls::stream <ap_axiu<multidim_axis_data_width_0_ytemp2_2_3,0,0,0>>& arg5_axis_in,
        hls::stream <ap_axiu<multidim_axis_data_width_0_ytemp2_4_5,0,0,0>>& arg6_axis_in
)    
{
    static ::hls::stream<ap_uint<mem_data_width>> arg0_read_mem_strm;
    #pragma HLS STREAM variable = arg0_read_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg1_read_mem_strm;
    #pragma HLS STREAM variable = arg1_read_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg2_read_mem_strm;
    #pragma HLS STREAM variable = arg2_read_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg3_read_mem_strm;
    #pragma HLS STREAM variable = arg3_read_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg4_write_mem_strm;
    #pragma HLS STREAM variable = arg4_write_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg5_write_mem_strm;
    #pragma HLS STREAM variable = arg5_write_mem_strm
    static ::hls::stream<ap_uint<mem_data_width>> arg6_write_mem_strm;
    #pragma HLS STREAM variable = arg6_write_mem_strm

#pragma HLS DATAFLOW
        ops::hls::mem2stream<mem_data_width, 32, 1>(arg0, arg0_read_mem_strm, memconfig_d2.total_xblocks);
        ops::hls::mem2stream<mem_data_width, 32, 1>(arg1, arg1_read_mem_strm, memconfig_d2.total_xblocks);
        ops::hls::mem2stream<mem_data_width, 32, 1>(arg2, arg2_read_mem_strm, memconfig_d2.total_xblocks);
        ops::hls::mem2stream<mem_data_width, 32, 1>(arg3, arg3_read_mem_strm, memconfig_d2.total_xblocks);
        ops::hls::stream2axis<multidim_axis_data_width_0_yy_0_1>(arg0_read_mem_strm, arg0_axis_out, num_pkts);
        ops::hls::stream2axis<multidim_axis_data_width_0_rho_mu>(arg1_read_mem_strm, arg1_axis_out, num_pkts);
        ops::hls::stream2axis<multidim_axis_data_width_0_yy_4_5>(arg2_read_mem_strm, arg2_axis_out, num_pkts);
        ops::hls::stream2axis<multidim_axis_data_width_0_yy_2_3>(arg3_read_mem_strm, arg3_axis_out, num_pkts);
        ops::hls::axisTerminate<multidim_axis_data_width_0_rho_mu>(arg1_axis_in, num_pkts);
    
        ops::hls::axis2stream<multidim_axis_data_width_0_ytemp2_0_1>(arg4_axis_in, arg4_write_mem_strm, num_pkts);
    
        ops::hls::axis2stream<multidim_axis_data_width_0_ytemp2_2_3>(arg5_axis_in, arg5_write_mem_strm, num_pkts);
    
        ops::hls::axis2stream<multidim_axis_data_width_0_ytemp2_4_5>(arg6_axis_in, arg6_write_mem_strm, num_pkts);
    
        ops::hls::stream2mem<mem_data_width, 32, 1>(arg4, arg4_write_mem_strm, memconfig_d2.total_xblocks);
        ops::hls::stream2mem<mem_data_width, 32, 1>(arg5, arg5_write_mem_strm, memconfig_d2.total_xblocks);
        ops::hls::stream2mem<mem_data_width, 32, 1>(arg6, arg6_write_mem_strm, memconfig_d2.total_xblocks);
}

static void datamover_outerloop_0_dataflow_read_write(
        const unsigned int iter,
        const unsigned int num_pkts,
        const ops::hls::MemConfig& memconfig,
        const ops::hls::MemConfig& memconfig_d2,
        ap_uint<mem_data_width>* arg0,
        ap_uint<mem_data_width>* arg1,
        ap_uint<mem_data_width>* arg2,
        ap_uint<mem_data_width>* arg3,
        ap_uint<mem_data_width>* arg4,
        ap_uint<mem_data_width>* arg5,
        ap_uint<mem_data_width>* arg6,
        hls::stream <ap_axiu<multidim_axis_data_width_0_yy_0_1,0,0,0>>& arg0_axis_out,
        hls::stream <ap_axiu<multidim_axis_data_width_0_rho_mu,0,0,0>>& arg1_axis_out,
        hls::stream <ap_axiu<multidim_axis_data_width_0_rho_mu,0,0,0>>& arg1_axis_in,
        hls::stream <ap_axiu<multidim_axis_data_width_0_yy_4_5,0,0,0>>& arg2_axis_out,
        hls::stream <ap_axiu<multidim_axis_data_width_0_yy_2_3,0,0,0>>& arg3_axis_out,
        hls::stream <ap_axiu<multidim_axis_data_width_0_ytemp2_0_1,0,0,0>>& arg4_axis_in,
        hls::stream <ap_axiu<multidim_axis_data_width_0_ytemp2_2_3,0,0,0>>& arg5_axis_in,
        hls::stream <ap_axiu<multidim_axis_data_width_0_ytemp2_4_5,0,0,0>>& arg6_axis_in
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
                memconfig_d2,
                arg0,
                arg1,
                arg2,
                arg3,
                arg4,
                arg5,
                arg6,
                arg0_axis_out,
                arg1_axis_out,
                arg1_axis_in,
                arg2_axis_out,
                arg3_axis_out,
                arg4_axis_in,
                arg5_axis_in,
                arg6_axis_in
        );
        datamover_outerloop_0_dataflow_read_write_dataflow_region(
                num_pkts,
                memconfig,
                memconfig_d2,
                arg4,
                arg1,
                arg6,
                arg5,
                arg0,
                arg3,
                arg2,
                arg0_axis_out,
                arg1_axis_out,
                arg1_axis_in,
                arg2_axis_out,
                arg3_axis_out,
                arg4_axis_in,
                arg5_axis_in,
                arg6_axis_in
);
    }
}

static void datamover_outerloop_0_loopback_dataflow_region(
        const unsigned int num_pkts
,
        hls::stream<ap_axiu<multidim_axis_data_width_0_yy_0_1, 0, 0, 0>>& arg0_axis_out,
        hls::stream<ap_axiu<multidim_axis_data_width_0_rho_mu, 0, 0, 0>>& arg1_axis_out,
           hls::stream<ap_axiu<multidim_axis_data_width_0_rho_mu, 0, 0, 0>>& arg1_axis_in,
        hls::stream<ap_axiu<multidim_axis_data_width_0_yy_4_5, 0, 0, 0>>& arg2_axis_out,
        hls::stream<ap_axiu<multidim_axis_data_width_0_yy_2_3, 0, 0, 0>>& arg3_axis_out,
        hls::stream<ap_axiu<multidim_axis_data_width_0_ytemp2_0_1, 0, 0, 0>>& arg4_axis_in,
        hls::stream<ap_axiu<multidim_axis_data_width_0_ytemp2_2_3, 0, 0, 0>>& arg5_axis_in,
        hls::stream<ap_axiu<multidim_axis_data_width_0_ytemp2_4_5, 0, 0, 0>>& arg6_axis_in)
{
    static ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_0_1>> arg0_mem_strm;
    #pragma HLS STREAM variable = arg0_mem_strm
    static ::hls::stream<ap_uint<multidim_axis_data_width_0_rho_mu>> arg1_mem_strm;
    #pragma HLS STREAM variable = arg1_mem_strm
    static ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_4_5>> arg2_mem_strm;
    #pragma HLS STREAM variable = arg2_mem_strm
    static ::hls::stream<ap_uint<multidim_axis_data_width_0_yy_2_3>> arg3_mem_strm;
    #pragma HLS STREAM variable = arg3_mem_strm
#pragma HLS DATAFLOW
    ops::hls::axis2stream<multidim_axis_data_width_0_yy_0_1>(arg4_axis_in, arg0_mem_strm, num_pkts);
    ops::hls::axis2stream<multidim_axis_data_width_0_rho_mu>(arg1_axis_in, arg1_mem_strm, num_pkts);
    ops::hls::axis2stream<multidim_axis_data_width_0_yy_4_5>(arg6_axis_in, arg2_mem_strm, num_pkts);
    ops::hls::axis2stream<multidim_axis_data_width_0_yy_2_3>(arg5_axis_in, arg3_mem_strm, num_pkts);
    ops::hls::stream2axis<multidim_axis_data_width_0_yy_0_1>(arg0_mem_strm, arg0_axis_out, num_pkts);
    ops::hls::stream2axis<multidim_axis_data_width_0_rho_mu>(arg1_mem_strm, arg1_axis_out, num_pkts);
    ops::hls::stream2axis<multidim_axis_data_width_0_yy_4_5>(arg2_mem_strm, arg2_axis_out, num_pkts);
    ops::hls::stream2axis<multidim_axis_data_width_0_yy_2_3>(arg3_mem_strm, arg3_axis_out, num_pkts);
}

static void datamover_outerloop_0_loopback(
        const unsigned int iter,
        const unsigned int num_pkts
,
        hls::stream<ap_axiu<multidim_axis_data_width_0_yy_0_1, 0, 0, 0>>& arg0_axis_out,
        hls::stream<ap_axiu<multidim_axis_data_width_0_rho_mu, 0, 0, 0>>& arg1_axis_out,
            hls::stream<ap_axiu<multidim_axis_data_width_0_rho_mu, 0, 0, 0>>& arg1_axis_in,
        hls::stream<ap_axiu<multidim_axis_data_width_0_yy_4_5, 0, 0, 0>>& arg2_axis_out,
        hls::stream<ap_axiu<multidim_axis_data_width_0_yy_2_3, 0, 0, 0>>& arg3_axis_out,
        hls::stream<ap_axiu<multidim_axis_data_width_0_ytemp2_0_1, 0, 0, 0>>& arg4_axis_in,
        hls::stream<ap_axiu<multidim_axis_data_width_0_ytemp2_2_3, 0, 0, 0>>& arg5_axis_in,
        hls::stream<ap_axiu<multidim_axis_data_width_0_ytemp2_4_5, 0, 0, 0>>& arg6_axis_in)
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
        arg2_axis_out,
        arg3_axis_out,
        arg4_axis_in,
        arg5_axis_in,
        arg6_axis_in);
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
 
    #pragma HLS INTERFACE mode=m_axi bundle=gmem0 depth=16 max_read_burst_length=16 max_write_burst_length=16 \
            num_read_outstanding=4 num_write_outstanding=4 \
            port=arg0 offset=slave
    #pragma HLS INTERFACE s_axilite port = arg0 bundle = control
 
    #pragma HLS INTERFACE mode=m_axi bundle=gmem1 depth=16 max_read_burst_length=16 max_write_burst_length=16 \
            num_read_outstanding=4 num_write_outstanding=4 \
            port=arg1 offset=slave
    #pragma HLS INTERFACE s_axilite port = arg1 bundle = control
 
    #pragma HLS INTERFACE mode=m_axi bundle=gmem2 depth=16 max_read_burst_length=16 max_write_burst_length=16 \
            num_read_outstanding=4 num_write_outstanding=4 \
            port=arg2 offset=slave
    #pragma HLS INTERFACE s_axilite port = arg2 bundle = control
 
    #pragma HLS INTERFACE mode=m_axi bundle=gmem3 depth=16 max_read_burst_length=16 max_write_burst_length=16 \
            num_read_outstanding=4 num_write_outstanding=4 \
            port=arg3 offset=slave
    #pragma HLS INTERFACE s_axilite port = arg3 bundle = control
 
    #pragma HLS INTERFACE mode=m_axi bundle=gmem4 depth=16 max_read_burst_length=16 max_write_burst_length=16 \
            num_read_outstanding=4 num_write_outstanding=4 \
            port=arg4 offset=slave
    #pragma HLS INTERFACE s_axilite port = arg4 bundle = control
 
    #pragma HLS INTERFACE mode=m_axi bundle=gmem5 depth=16 max_read_burst_length=16 max_write_burst_length=16 \
            num_read_outstanding=4 num_write_outstanding=4 \
            port=arg5 offset=slave
    #pragma HLS INTERFACE s_axilite port = arg5 bundle = control
 
    #pragma HLS INTERFACE mode=m_axi bundle=gmem6 depth=16 max_read_burst_length=16 max_write_burst_length=16 \
            num_read_outstanding=4 num_write_outstanding=4 \
            port=arg6 offset=slave
    #pragma HLS INTERFACE s_axilite port = arg6 bundle = control
    #pragma HLS INTERFACE mode=axis port=arg0_axis_out register
    #pragma HLS INTERFACE mode=axis port=arg1_axis_out register
    #pragma HLS INTERFACE mode=axis port=arg1_axis_in register
    #pragma HLS INTERFACE mode=axis port=arg2_axis_out register
    #pragma HLS INTERFACE mode=axis port=arg3_axis_out register
    #pragma HLS INTERFACE mode=axis port=arg4_axis_in register
    #pragma HLS INTERFACE mode=axis port=arg5_axis_in register
    #pragma HLS INTERFACE mode=axis port=arg6_axis_in register

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
    ops::hls::MemConfig config_d2;
    ops::hls::genMemConfig<mem_data_width, axis_data_width, data_width>(read_gridSize, range, config);
    ops::hls::multidimConfigConverter<2>(config, config_d2);
    const unsigned int num_beats = config.total_xblocks;
    const unsigned int num_pkts = num_of_pkts_per_bytes * config.total_xblocks;
        datamover_outerloop_0_dataflow_read_write(
                outer_itr,
                num_pkts,
                config,
                config_d2,
                arg0,
                arg1,
                arg2,
                arg3,
                arg4,
                arg5,
                arg6,
            arg0_axis_out,
                arg1_axis_out,
                arg1_axis_in,
            arg2_axis_out,
            arg3_axis_out,
            arg4_axis_in,
            arg5_axis_in,
            arg6_axis_in
            );
}


