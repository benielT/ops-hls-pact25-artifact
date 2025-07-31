// Auto-generated at 2025-06-09 09:27:00.908093 by ops-translator

#pragma once 
#include <ops_hls_rt_support.h>

class KernelWrapper_outerloop_0 : public ops::hls::Kernel
{
public:
    KernelWrapper_outerloop_0():
            Kernel("isl_0"),
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
            ops::hls::Grid<float>& arg7,
            ops::hls::Grid<float>& arg8,
            ops::hls::Grid<float>& arg9
    )
    {
        cl_int err;
    
        ops::hls::SizeType read_stencil_d_m = { 1, 1, 1 };
        ops::hls::SizeType read_stencil_d_p = { 1, 1, 1 };
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
        OCL_CHECK(err, err = m_datamover.setArg(narg++, arg7.deviceBuffer));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, arg8.deviceBuffer));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, arg9.deviceBuffer));

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
        arg7.set_as_arg();
        arg8.set_as_arg();
        arg9.set_as_arg();
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
        activeEvents.insert(activeEvents.end(), arg7.activeEvents.begin(), arg7.activeEvents.end());
        activeEvents.insert(activeEvents.end(), arg8.activeEvents.begin(), arg8.activeEvents.end());
        activeEvents.insert(activeEvents.end(), arg9.activeEvents.begin(), arg9.activeEvents.end());

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
        arg7.isDevBufDirty = true;
        arg7.activeEvents.resize(0);
        arg7.activeEvents.push_back(event_datamover);
        arg7.activeEvents.push_back(event_kernel_0);
        arg8.isDevBufDirty = true;
        arg8.activeEvents.resize(0);
        arg8.activeEvents.push_back(event_datamover);
        arg8.activeEvents.push_back(event_kernel_0);
        arg9.isDevBufDirty = true;
        arg9.activeEvents.resize(0);
        arg9.activeEvents.push_back(event_datamover);
        arg9.activeEvents.push_back(event_kernel_0);

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
        activeEvents.insert(activeEvents.end(), arg7.activeEvents.begin(), arg7.activeEvents.end());
        activeEvents.insert(activeEvents.end(), arg8.activeEvents.begin(), arg8.activeEvents.end());
        activeEvents.insert(activeEvents.end(), arg9.activeEvents.begin(), arg9.activeEvents.end());

        cl::Event event_arg0_arg7_bufCpy;
        size_t arg0_total_bytes = arg0.originalProperty.grid_size[0] * arg0.originalProperty.grid_size[1] * arg0.originalProperty.grid_size[2] * sizeof(stencil_type);
        cl::Event event_arg6_arg8_bufCpy;
        size_t arg6_total_bytes = arg6.originalProperty.grid_size[0] * arg6.originalProperty.grid_size[1] * arg6.originalProperty.grid_size[2] * sizeof(stencil_type);
        cl::Event event_arg5_arg9_bufCpy;
        size_t arg5_total_bytes = arg5.originalProperty.grid_size[0] * arg5.originalProperty.grid_size[1] * arg5.originalProperty.grid_size[2] * sizeof(stencil_type);

        if (adjusted_outer_iter %2 != 0)
        {
            OCL_CHECK(err, err = m_fpga->getCommandQueue().enqueueCopyBuffer(arg0.deviceBuffer, arg7.deviceBuffer, 0, 0, arg0_total_bytes, &activeEvents, &event_arg0_arg7_bufCpy));
            OCL_CHECK(err, err = m_fpga->getCommandQueue().enqueueCopyBuffer(arg6.deviceBuffer, arg8.deviceBuffer, 0, 0, arg6_total_bytes, &activeEvents, &event_arg6_arg8_bufCpy));
            OCL_CHECK(err, err = m_fpga->getCommandQueue().enqueueCopyBuffer(arg5.deviceBuffer, arg9.deviceBuffer, 0, 0, arg5_total_bytes, &activeEvents, &event_arg5_arg9_bufCpy));
        }
        else
        {
            OCL_CHECK(err, err = m_fpga->getCommandQueue().enqueueCopyBuffer(arg7.deviceBuffer, arg0.deviceBuffer, 0, 0, arg0_total_bytes, &activeEvents, &event_arg0_arg7_bufCpy));
            OCL_CHECK(err, err = m_fpga->getCommandQueue().enqueueCopyBuffer(arg8.deviceBuffer, arg6.deviceBuffer, 0, 0, arg6_total_bytes, &activeEvents, &event_arg6_arg8_bufCpy));
            OCL_CHECK(err, err = m_fpga->getCommandQueue().enqueueCopyBuffer(arg9.deviceBuffer, arg5.deviceBuffer, 0, 0, arg5_total_bytes, &activeEvents, &event_arg5_arg9_bufCpy));
        }
#ifndef ASYNC_DISPATCH
        event_arg0_arg7_bufCpy.wait();
        event_arg6_arg8_bufCpy.wait();
        event_arg5_arg9_bufCpy.wait();
#endif
*/
    }
private:
    std::string m_kernelName;
    std::string m_datamoverName;
    cl::Kernel m_kernel_0;
    cl::Kernel m_datamover;
};

void isl_0(int outer_iter, int* ops_range,
            ops::hls::Grid<float>& arg0,
            ops::hls::Grid<float>& arg1,
            ops::hls::Grid<float>& arg2,
            ops::hls::Grid<float>& arg3,
            ops::hls::Grid<float>& arg4,
            ops::hls::Grid<float>& arg5,
            ops::hls::Grid<float>& arg6,
            ops::hls::Grid<float>& arg7,
            ops::hls::Grid<float>& arg8,
            ops::hls::Grid<float>& arg9
)
{
    static  KernelWrapper_outerloop_0 kernelWrapper_inst;
    ops::hls::AccessRange range;
    opsRange2hlsRange(3, ops_range, range, arg0.originalProperty);
    sendGrid(arg0);
    sendGrid(arg5);
    sendGrid(arg6);
    
    kernelWrapper_inst.run(range, outer_iter,
            arg0,
            arg1,
            arg2,
            arg3,
            arg4,
            arg5,
            arg6,
            arg7,
            arg8,
            arg9
    );
}
