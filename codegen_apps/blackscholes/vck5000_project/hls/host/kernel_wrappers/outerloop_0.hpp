// Auto-generated at 2025-07-28 21:56:24.087630 by ops-translator

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
            ops::hls::Grid<float>& arg4
    )
    {
        cl_int err;
    
        ops::hls::SizeType read_stencil_d_m = { 1, 0, 0 };
        ops::hls::SizeType read_stencil_d_p = { 1, 0, 0 };
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
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, read_stencilConfig.dim));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, read_stencilConfig.total_itr));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, read_stencilConfig.lower_limit[0]));
        OCL_CHECK(err, err = m_kernel_0.setArg(narg++, read_stencilConfig.upper_limit[0]));
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
        OCL_CHECK(err, err = m_datamover.setArg(narg++, arg0.originalProperty.grid_size[0]));
 
        OCL_CHECK(err, err = m_datamover.setArg(narg++, adjusted_outer_iter));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, arg0.deviceBuffer));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, arg1.deviceBuffer));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, arg2.deviceBuffer));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, arg3.deviceBuffer));
        OCL_CHECK(err, err = m_datamover.setArg(narg++, arg4.deviceBuffer));

#ifdef PROFILE
    startHtoDTimer();
#endif
        arg0.set_as_arg();
        arg1.set_as_arg();
        arg2.set_as_arg();
        arg3.set_as_arg();
        arg4.set_as_arg();
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

        cl::Event event_arg4_arg0_bufCpy;
        size_t arg4_total_bytes = arg4.originalProperty.grid_size[0] * arg4.originalProperty.grid_size[1] * arg4.originalProperty.grid_size[2] * sizeof(stencil_type);

        if (adjusted_outer_iter %2 != 0)
        {
            OCL_CHECK(err, err = m_fpga->getCommandQueue().enqueueCopyBuffer(arg4.deviceBuffer, arg0.deviceBuffer, 0, 0, arg4_total_bytes, &activeEvents, &event_arg4_arg0_bufCpy));
        }
        else
        {
            OCL_CHECK(err, err = m_fpga->getCommandQueue().enqueueCopyBuffer(arg0.deviceBuffer, arg4.deviceBuffer, 0, 0, arg4_total_bytes, &activeEvents, &event_arg4_arg0_bufCpy));
        }
#ifndef ASYNC_DISPATCH
        event_arg4_arg0_bufCpy.wait();
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
            ops::hls::Grid<float>& arg4
)
{
    static  KernelWrapper_outerloop_0 kernelWrapper_inst;
    ops::hls::AccessRange range;
    opsRange2hlsRange(1, ops_range, range, arg0.originalProperty);
    sendGrid(arg0);
    
    kernelWrapper_inst.run(range, outer_iter,
            arg0,
            arg1,
            arg2,
            arg3,
            arg4
    );
}
