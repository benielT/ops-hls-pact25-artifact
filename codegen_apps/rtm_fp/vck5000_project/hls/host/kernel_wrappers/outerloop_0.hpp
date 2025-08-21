// Auto-generated at 2025-08-21 21:06:10.967111 by ops-translator

#pragma once 
#include <ops_hls_rt_support.h>

class KernelWrapper_outerloop_0 : public ops::hls::Kernel
{
public:
    KernelWrapper_outerloop_0():
            Kernel("isl0"),
            m_kernelName("kernel_outerloop_0"),
            m_datamoverName("datamover_outerloop_0")
    {
        cl_int err;
        OCL_CHECK(err, m_kernel_0 = cl::Kernel(m_fpga->getProgram(), m_kernelName.c_str(), &err));
        OCL_CHECK(err, m_datamover = cl::Kernel(m_fpga->getProgram(), m_datamoverName.c_str(), &err));    
    }

    void run(ops::hls::AccessRange& range, unsigned int outer_iter,
            ops::hls::Grid<float>& arg0,
            ops::hls::Grid<float>& arg1,
            ops::hls::Grid<float>& arg2,
            ops::hls::Grid<float>& arg3,
            ops::hls::Grid<float>& arg4,
            ops::hls::Grid<float>& arg5,
            ops::hls::Grid<float>& arg6,
            const int* disps0,
            const int* disps1,
            const int* disps2,
            const float* dt,
            const float* scale1_der1,
            const float* scale2_der1,
            const float* scale1_der2_1,
            const float* scale2_der2_1,
            const float* scale1_der2_2,
            const float* scale2_der2_2,
            const float* scale1_der3,
            const float* scale2_der3,
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
            const int order
    )
    {
        cl_int err;
    
        ops::hls::SizeType read_stencil_d_m = { 4, 4, 4 };
        ops::hls::SizeType read_stencil_d_p = { 4, 4, 4 };
        ops::hls::SizeType write_stencil_d_m = {0,0,0};
        ops::hls::SizeType write_stencil_d_p = {0,0,0};
        auto read_stencilConfig = getStencilConfig(arg0.originalProperty, range, vector_factor, mem_vector_factor, read_stencil_d_m, read_stencil_d_p);
        ops::hls::AccessRange read_range;
        getAdjustedRange(arg0.originalProperty, range, read_range, read_stencil_d_m, read_stencil_d_p);

#ifdef DEBUG_LOG
        printAccessRange(range, "common access range");
        printGridProp(arg0.originalProperty, "arg0_originalGridProp");
        printStencilConfig(read_stencilConfig, "read_stencilConfig");
#endif

		unsigned int total_iter_par_factor = iter_par_factor * 1;
		unsigned int adjusted_outer_iter = (outer_iter + total_iter_par_factor - 1) / total_iter_par_factor;

        int narg = 0;
         
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, (unsigned short)0));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, adjusted_outer_iter));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, read_stencilConfig.grid_size[0]));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, read_stencilConfig.grid_size[1]));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, read_stencilConfig.grid_size[2]));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, read_stencilConfig.dim));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, read_stencilConfig.total_itr));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, read_stencilConfig.lower_limit[0]));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, read_stencilConfig.lower_limit[1]));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, read_stencilConfig.lower_limit[2]));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, read_stencilConfig.upper_limit[0]));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, read_stencilConfig.upper_limit[1]));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, read_stencilConfig.upper_limit[2]));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, read_stencilConfig.outer_loop_limit));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, *disps0));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, *disps1));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, *disps2));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, *dt));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, *scale1_der1));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, *scale2_der1));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, *scale1_der2_1));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, *scale2_der2_1));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, *scale1_der2_2));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, *scale2_der2_2));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, *scale1_der3));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, *scale2_der3));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, dx));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, dy));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, dz));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, invdx));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, invdy));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, invdz));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, nx));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, ny));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, nz));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, pml_width));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, half_order));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, order));

#ifndef OPS_HLS_NO_LOOPBACK
        bool loopback_enbl = true;
#else
        bool loopback_enbl = false;
#endif 
        narg = 0;
        OCL_CHECK(err, err = m_datamover.setArg(narg++, loopback_enbl));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, read_range.start[0]));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, read_range.end[0]));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, read_range.start[1]));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, read_range.end[1]));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, read_range.start[2]));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, read_range.end[2]));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, arg0.originalProperty.grid_size[0]));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, arg0.originalProperty.grid_size[1]));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, arg0.originalProperty.grid_size[2]));
 
        OCL_CHECK(err, err = m_datamover.setArg(narg++, adjusted_outer_iter));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, arg0.deviceBuffer));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, arg1.deviceBuffer));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, arg2.deviceBuffer));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, arg3.deviceBuffer));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, arg4.deviceBuffer));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, arg5.deviceBuffer));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, arg6.deviceBuffer));

#ifdef PROFILE
    startHtoDTimer();
#endif
        arg0.set_as_arg();
        arg1.set_as_arg();
        arg2.set_as_arg();
        arg3.set_as_arg();
        arg4.set_as_arg();
        arg5.set_as_arg();
        arg6.set_as_arg();
#ifdef PROFILE
    endHtoDTimer();
#endif

        cl::Event event_kernel_0;
        cl::Event event_datamover;

        std::vector<cl::Event> activeEvents;
        activeEvents.insert(activeEvents.end(), arg0.activeEvents.begin(), arg0.activeEvents.end());
        activeEvents.insert(activeEvents.end(), arg1.activeEvents.begin(), arg1.activeEvents.end());
        activeEvents.insert(activeEvents.end(), arg2.activeEvents.begin(), arg2.activeEvents.end());
        activeEvents.insert(activeEvents.end(), arg3.activeEvents.begin(), arg3.activeEvents.end());
        activeEvents.insert(activeEvents.end(), arg4.activeEvents.begin(), arg4.activeEvents.end());
        activeEvents.insert(activeEvents.end(), arg5.activeEvents.begin(), arg5.activeEvents.end());
        activeEvents.insert(activeEvents.end(), arg6.activeEvents.begin(), arg6.activeEvents.end());

#ifdef PROFILE
    startExecTimer();
#endif
        OCL_CHECK(err, err = m_fpga->getCommandQueue().enqueueTask(m_datamover, &activeEvents, &event_datamover));
        OCL_CHECK(err, err = m_fpga->getCommandQueue().enqueueTask(m_kernel_0, &activeEvents, &event_kernel_0));

        arg0.isDevBufDirty = true;
        arg0.activeEvents.resize(0);
        arg0.activeEvents.push_back(event_datamover);
        arg0.activeEvents.push_back(event_kernel_0);
        arg1.isDevBufDirty = true;
        arg1.activeEvents.resize(0);
        arg1.activeEvents.push_back(event_datamover);
        arg1.activeEvents.push_back(event_kernel_0);
        arg2.isDevBufDirty = true;
        arg2.activeEvents.resize(0);
        arg2.activeEvents.push_back(event_datamover);
        arg2.activeEvents.push_back(event_kernel_0);
        arg3.isDevBufDirty = true;
        arg3.activeEvents.resize(0);
        arg3.activeEvents.push_back(event_datamover);
        arg3.activeEvents.push_back(event_kernel_0);
        arg4.isDevBufDirty = true;
        arg4.activeEvents.resize(0);
        arg4.activeEvents.push_back(event_datamover);
        arg4.activeEvents.push_back(event_kernel_0);
        arg5.isDevBufDirty = true;
        arg5.activeEvents.resize(0);
        arg5.activeEvents.push_back(event_datamover);
        arg5.activeEvents.push_back(event_kernel_0);
        arg6.isDevBufDirty = true;
        arg6.activeEvents.resize(0);
        arg6.activeEvents.push_back(event_datamover);
        arg6.activeEvents.push_back(event_kernel_0);

#ifndef ASYNC_DISPATCH
        event_datamover.wait();
        event_kernel_0.wait();
#endif
#ifdef PROFILE
    endExecTimer();
    registerProfileTime();
#endif

/*
        //Sync maped dats
        activeEvents.resize(0);
        activeEvents.insert(activeEvents.end(), arg0.activeEvents.begin(), arg0.activeEvents.end());
        activeEvents.insert(activeEvents.end(), arg1.activeEvents.begin(), arg1.activeEvents.end());
        activeEvents.insert(activeEvents.end(), arg2.activeEvents.begin(), arg2.activeEvents.end());
        activeEvents.insert(activeEvents.end(), arg3.activeEvents.begin(), arg3.activeEvents.end());
        activeEvents.insert(activeEvents.end(), arg4.activeEvents.begin(), arg4.activeEvents.end());
        activeEvents.insert(activeEvents.end(), arg5.activeEvents.begin(), arg5.activeEvents.end());
        activeEvents.insert(activeEvents.end(), arg6.activeEvents.begin(), arg6.activeEvents.end());

        cl::Event event_arg0_arg4_bufCpy;
        size_t arg0_total_bytes = arg0.originalProperty.grid_size[0] * arg0.originalProperty.grid_size[1] * arg0.originalProperty.grid_size[2] * sizeof(stencil_type);
        cl::Event event_arg3_arg5_bufCpy;
        size_t arg3_total_bytes = arg3.originalProperty.grid_size[0] * arg3.originalProperty.grid_size[1] * arg3.originalProperty.grid_size[2] * sizeof(stencil_type);
        cl::Event event_arg2_arg6_bufCpy;
        size_t arg2_total_bytes = arg2.originalProperty.grid_size[0] * arg2.originalProperty.grid_size[1] * arg2.originalProperty.grid_size[2] * sizeof(stencil_type);

        if (adjusted_outer_iter %2 != 0)
        {
            OCL_CHECK(err, err = m_fpga->getCommandQueue().enqueueCopyBuffer(arg0.deviceBuffer, arg4.deviceBuffer, 0, 0, arg0_total_bytes, &activeEvents, &event_arg0_arg4_bufCpy));
            OCL_CHECK(err, err = m_fpga->getCommandQueue().enqueueCopyBuffer(arg3.deviceBuffer, arg5.deviceBuffer, 0, 0, arg3_total_bytes, &activeEvents, &event_arg3_arg5_bufCpy));
            OCL_CHECK(err, err = m_fpga->getCommandQueue().enqueueCopyBuffer(arg2.deviceBuffer, arg6.deviceBuffer, 0, 0, arg2_total_bytes, &activeEvents, &event_arg2_arg6_bufCpy));
        }
        else
        {
            OCL_CHECK(err, err = m_fpga->getCommandQueue().enqueueCopyBuffer(arg4.deviceBuffer, arg0.deviceBuffer, 0, 0, arg0_total_bytes, &activeEvents, &event_arg0_arg4_bufCpy));
            OCL_CHECK(err, err = m_fpga->getCommandQueue().enqueueCopyBuffer(arg5.deviceBuffer, arg3.deviceBuffer, 0, 0, arg3_total_bytes, &activeEvents, &event_arg3_arg5_bufCpy));
            OCL_CHECK(err, err = m_fpga->getCommandQueue().enqueueCopyBuffer(arg6.deviceBuffer, arg2.deviceBuffer, 0, 0, arg2_total_bytes, &activeEvents, &event_arg2_arg6_bufCpy));
        }
#ifndef ASYNC_DISPATCH
        event_arg0_arg4_bufCpy.wait();
        event_arg3_arg5_bufCpy.wait();
        event_arg2_arg6_bufCpy.wait();
#endif
*/
    }
private:
    std::string m_kernelName;
    std::string m_datamoverName;
    cl::Kernel m_kernel_0;
    cl::Kernel m_datamover;
};

void isl0(int outer_iter, int* ops_range,
            ops::hls::Grid<float>& arg0,
            ops::hls::Grid<float>& arg1,
            ops::hls::Grid<float>& arg2,
            ops::hls::Grid<float>& arg3,
            ops::hls::Grid<float>& arg4,
            ops::hls::Grid<float>& arg5,
            ops::hls::Grid<float>& arg6,
            const int* disps0,
            const int* disps1,
            const int* disps2,
            const float* dt,
            const float* scale1_der1,
            const float* scale2_der1,
            const float* scale1_der2_1,
            const float* scale2_der2_1,
            const float* scale1_der2_2,
            const float* scale2_der2_2,
            const float* scale1_der3,
            const float* scale2_der3
)
{
    static  KernelWrapper_outerloop_0 kernelWrapper_inst;
    ops::hls::AccessRange range;
    opsRange2hlsRange(3, ops_range, range, arg0.originalProperty);
    sendGrid(arg0);
    sendGrid(arg2);
    sendGrid(arg3);
    
    kernelWrapper_inst.run(range, outer_iter,
            arg0,
            arg1,
            arg2,
            arg3,
            arg4,
            arg5,
            arg6,
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
