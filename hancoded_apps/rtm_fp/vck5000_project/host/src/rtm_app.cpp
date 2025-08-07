/*
* Open source copyright declaration based on BSD open source template:
* http://www.opensource.org/licenses/bsd-license.php
*
* This file is part of the OPS distribution.
*
* Copyright (c) 2013, Mike Giles and others. Please see the AUTHORS file in
* the main source directory for a full list of copyright holders.
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
* * Redistributions of source code must retain the above copyright
* notice, this list of conditions and the following disclaimer.
* * Redistributions in binary form must reproduce the above copyright
* notice, this list of conditions and the following disclaimer in the
* documentation and/or other materials provided with the distribution.
* * The name of Mike Giles may not be used to endorse or promote products
* derived from this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY Mike Giles ''AS IS'' AND ANY
* EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL Mike Giles BE LIABLE FOR ANY
* DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/** @Test application for multi-block functionality
  * @author Gihan Mudalige, Istvan Reguly
  */

// standard headers
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "xcl2.hpp"
#include <chrono>
#include "omp.h"
#include <unistd.h>


#include "rtm.h"
#define SLR_COUNT_2
#define RW_MODULE

// // OPS header file
// #define OPS_2D
// #include "ops_seq_v2.h"
// #include "user_types.h"
// #include "poisson_kernel.h"

/******************************************************************************
* Main program
*******************************************************************************/
int main(int argc, char **argv)
{
  /**-------------------------- Initialisation --------------------------**/

  // OPS initialisation
  // ops_init(argc,argv,1);


  //Mesh
  int logical_size_x = 16;
  int logical_size_y = 16;
  int logical_size_z = 16;
  int ngrid_x = 1;
  int ngrid_y = 1;
  int num_iter = 1;
  int n_iter = 1;
  int itertile = n_iter;
  int non_copy = 0;
  int batch = 1;

  const char* pch;
  for ( int n = 1; n < argc; n++ ) {
    pch = strstr(argv[n], "-sizex=");
    if(pch != NULL) {
      logical_size_x = atoi ( argv[n] + 7 ); continue;
    }
    pch = strstr(argv[n], "-sizey=");
    if(pch != NULL) {
      logical_size_y = atoi ( argv[n] + 7 ); continue;
    }
    pch = strstr(argv[n], "-sizez=");
    if(pch != NULL) {
      logical_size_z = atoi ( argv[n] + 7 ); continue;
    }
    pch = strstr(argv[n], "-iters=");
    if(pch != NULL) {
      num_iter = atoi ( argv[n] + 7 ); continue;
    }
    pch = strstr(argv[n], "-itert=");
    if(pch != NULL) {
      itertile = atoi ( argv[n] + 7 ); continue;
    }
    pch = strstr(argv[n], "-batch=");
	if(pch != NULL) {
	  batch = atoi ( argv[n] + 7 ); continue;
	}
    pch = strstr(argv[n], "-non-copy");
    if(pch != NULL) {
      non_copy = 1; continue;
    }
  }

  n_iter = num_iter / (2 * 2);
#ifdef PROFILE
    std::string profile_filename = "perf_profile.csv";

    std::ofstream fstream;
    fstream.open(profile_filename, std::ios::out | std::ios::trunc);

    if (!fstream.is_open()) {
        std::cerr << "Error: Could not open the file " << profile_filename << std::endl;
        return 1; // Indicate an error occurred
    }
#endif

  printf("Grid: %dx%dx%d in %dx%d blocks, %d iterations (n_iter: %d), %d batch, %d tile height\n",logical_size_x,logical_size_y,logical_size_z, ngrid_x,ngrid_y,num_iter, n_iter,batch, itertile);

  struct Grid_d grid_d;

  grid_d.logical_size_x = logical_size_x;
  grid_d.logical_size_y = logical_size_y;
  grid_d.logical_size_z = logical_size_z;


  grid_d.act_sizex = logical_size_x + ORDER*2;
  grid_d.act_sizey = logical_size_y + ORDER*2;
  grid_d.act_sizez = logical_size_z + ORDER*2;

  // No vectorisation at the moment
  grid_d.grid_size_x = grid_d.act_sizex;
  grid_d.grid_size_y = grid_d.act_sizey;
  grid_d.grid_size_z = grid_d.act_sizez;

  // sizes for scalar grids and vector grids
  grid_d.data_size_bytes_dim1 = 1*grid_d.grid_size_x * grid_d.grid_size_y * grid_d.grid_size_z* sizeof(float) * batch;
  grid_d.data_size_bytes_dim6 = 6*grid_d.grid_size_x * grid_d.grid_size_y * grid_d.grid_size_z* sizeof(float) * batch;
  grid_d.data_size_bytes_dim8 = 8*grid_d.grid_size_x * grid_d.grid_size_y * grid_d.grid_size_z* sizeof(float) * batch;
  grid_d.dims = 8*grid_d.grid_size_x * grid_d.grid_size_y * grid_d.grid_size_z;



  // allocating storage for the grids on host
  // float * grid_rho    = (float*)aligned_alloc(4096, grid_d.data_size_bytes_dim1);
  // float * grid_mu     = (float*)aligned_alloc(4096, grid_d.data_size_bytes_dim1);
  float * grid_yy_rho_mu              = (float*)aligned_alloc(4096, grid_d.data_size_bytes_dim8);
  float * grid_yy_rho_mu_temp         = (float*)aligned_alloc(4096, grid_d.data_size_bytes_dim8);
  float * grid_k1                     = (float*)aligned_alloc(4096, grid_d.data_size_bytes_dim8);
  float * grid_k2                     = (float*)aligned_alloc(4096, grid_d.data_size_bytes_dim8);
  float * grid_k3                     = (float*)aligned_alloc(4096, grid_d.data_size_bytes_dim8);
  float * grid_k4                     = (float*)aligned_alloc(4096, grid_d.data_size_bytes_dim8);

  // storage for device transfers
  // float * grid_rho_d    = (float*)aligned_alloc(4096, grid_d.data_size_bytes_dim1);
  // float * grid_mu_d     = (float*)aligned_alloc(4096, grid_d.data_size_bytes_dim1);
  float * grid_yy_rho_mu_d     = (float*)aligned_alloc(4096, grid_d.data_size_bytes_dim8);
  float * grid_yy_rho_mu_temp_d  = (float*)aligned_alloc(4096, grid_d.data_size_bytes_dim8);

  for(int i = 0; i < batch; i++){
	  populate_rho_mu_yy(&grid_yy_rho_mu[grid_d.dims * i], grid_d);
  }
  copy_grid(grid_yy_rho_mu, grid_yy_rho_mu_d, grid_d.data_size_bytes_dim8);
  // stencil computation

  //OPENCL HOST CODE AREA START

    auto binaryFile = argv[1];
    cl_int err;
    cl::Event event;

    auto devices = xcl::get_xil_devices();
    auto device = devices[0];

    OCL_CHECK(err, cl::Context context(device, NULL, NULL, NULL, &err));
    OCL_CHECK(
        err,
        cl::CommandQueue q(context, device, CL_QUEUE_PROFILING_ENABLE | CL_QUEUE_OUT_OF_ORDER_EXEC_MODE_ENABLE, &err));
    OCL_CHECK(err,
              std::string device_name = device.getInfo<CL_DEVICE_NAME>(&err));



    //Create Program and Kernel
    auto fileBuf = xcl::read_binary_file(binaryFile);
    cl::Program::Binaries bins{{fileBuf.data(), fileBuf.size()}};
    devices.resize(1);

    auto start_p = std::chrono::high_resolution_clock::now();
    OCL_CHECK(err, cl::Program program(context, devices, bins, NULL, &err));
    auto end_p = std::chrono::high_resolution_clock::now();
#ifndef RW_MODULE
    OCL_CHECK(err, cl::Kernel krnl_rtm_SLR0(program, "kernel_SLR0", &err));
#else
    OCL_CHECK(err, cl::Kernel krnl_read_write(program, "kernel_Read_Write", &err));
#endif
#ifndef SLR_COUNT_2
    OCL_CHECK(err, cl::Kernel krnl_rtm_SLR1(program, "rtm_SLR1", &err));
#endif

#ifndef RW_MODULE
    OCL_CHECK(err, cl::Kernel krnl_rtm_SLR2(program, "rtm_SLR2", &err));
#else
    OCL_CHECK(err, cl::Kernel krnl_rtm_SLR2_1(program, "kernel_SLR2", &err));
    OCL_CHECK(err, cl::Kernel krnl_rtm_SLR2_2(program, "kernel_SLR2", &err));
#endif
    std::chrono::duration<double> p_time = end_p - start_p;
    printf("time to program FPGA is : %f\n ", p_time.count());



    //Allocate Buffer in Global Memory
    OCL_CHECK(err,
              cl::Buffer buffer_input(context,
                                      CL_MEM_USE_HOST_PTR | CL_MEM_READ_WRITE,
                                      grid_d.data_size_bytes_dim8,
                                      grid_yy_rho_mu_d,
                                      &err));
    OCL_CHECK(err,
              cl::Buffer buffer_output(context,
                                       CL_MEM_USE_HOST_PTR | CL_MEM_READ_WRITE,
                                       grid_d.data_size_bytes_dim8,
                                       grid_yy_rho_mu_temp_d,
                                       &err));

    //Set the Kernel Arguments
    int narg = 0;
#ifndef RW_MODULE
    OCL_CHECK(err, err = krnl_rtm_SLR0.setArg(narg++, buffer_input));
    OCL_CHECK(err, err = krnl_rtm_SLR0.setArg(narg++, buffer_output));
    OCL_CHECK(err, err = krnl_rtm_SLR0.setArg(narg++, grid_d.logical_size_x));
    OCL_CHECK(err, err = krnl_rtm_SLR0.setArg(narg++, grid_d.logical_size_y));
    OCL_CHECK(err, err = krnl_rtm_SLR0.setArg(narg++, grid_d.logical_size_z));
    OCL_CHECK(err, err = krnl_rtm_SLR0.setArg(narg++, grid_d.grid_size_x));
    OCL_CHECK(err, err = krnl_rtm_SLR0.setArg(narg++, n_iter));
    OCL_CHECK(err, err = krnl_rtm_SLR0.setArg(narg++, batch));
#else
    OCL_CHECK(err, err = krnl_read_write.setArg(narg++, buffer_input));
    OCL_CHECK(err, err = krnl_read_write.setArg(narg++, buffer_output));
    OCL_CHECK(err, err = krnl_read_write.setArg(narg++, grid_d.logical_size_x));
    OCL_CHECK(err, err = krnl_read_write.setArg(narg++, grid_d.logical_size_y));
    OCL_CHECK(err, err = krnl_read_write.setArg(narg++, grid_d.logical_size_z));
    OCL_CHECK(err, err = krnl_read_write.setArg(narg++, grid_d.grid_size_x));
    OCL_CHECK(err, err = krnl_read_write.setArg(narg++, n_iter));
    OCL_CHECK(err, err = krnl_read_write.setArg(narg++, batch));
#endif

#ifndef SLR_COUNT_2
    narg = 0;
    OCL_CHECK(err, err = krnl_rtm_SLR1.setArg(narg++, grid_d.logical_size_x));
    OCL_CHECK(err, err = krnl_rtm_SLR1.setArg(narg++, grid_d.logical_size_y));
    OCL_CHECK(err, err = krnl_rtm_SLR1.setArg(narg++, grid_d.logical_size_z));
    OCL_CHECK(err, err = krnl_rtm_SLR1.setArg(narg++, grid_d.grid_size_x));
    OCL_CHECK(err, err = krnl_rtm_SLR1.setArg(narg++, n_iter));
    OCL_CHECK(err, err = krnl_rtm_SLR1.setArg(narg++, batch));
#endif

#ifndef RW_MODULE
    narg = 0;
    OCL_CHECK(err, err = krnl_rtm_SLR2.setArg(narg++, grid_d.logical_size_x));
    OCL_CHECK(err, err = krnl_rtm_SLR2.setArg(narg++, grid_d.logical_size_y));
    OCL_CHECK(err, err = krnl_rtm_SLR2.setArg(narg++, grid_d.logical_size_z));
    OCL_CHECK(err, err = krnl_rtm_SLR2.setArg(narg++, grid_d.grid_size_x));
    OCL_CHECK(err, err = krnl_rtm_SLR2.setArg(narg++, n_iter));
    OCL_CHECK(err, err = krnl_rtm_SLR2.setArg(narg++, batch));
#else
    narg = 0;
    OCL_CHECK(err, err = krnl_rtm_SLR2_1.setArg(narg++, grid_d.logical_size_x));
    OCL_CHECK(err, err = krnl_rtm_SLR2_1.setArg(narg++, grid_d.logical_size_y));
    OCL_CHECK(err, err = krnl_rtm_SLR2_1.setArg(narg++, grid_d.logical_size_z));
    OCL_CHECK(err, err = krnl_rtm_SLR2_1.setArg(narg++, grid_d.grid_size_x));
    OCL_CHECK(err, err = krnl_rtm_SLR2_1.setArg(narg++, n_iter));
    OCL_CHECK(err, err = krnl_rtm_SLR2_1.setArg(narg++, batch));

    narg = 0;
    OCL_CHECK(err, err = krnl_rtm_SLR2_2.setArg(narg++, grid_d.logical_size_x));
    OCL_CHECK(err, err = krnl_rtm_SLR2_2.setArg(narg++, grid_d.logical_size_y));
    OCL_CHECK(err, err = krnl_rtm_SLR2_2.setArg(narg++, grid_d.logical_size_z));
    OCL_CHECK(err, err = krnl_rtm_SLR2_2.setArg(narg++, grid_d.grid_size_x));
    OCL_CHECK(err, err = krnl_rtm_SLR2_2.setArg(narg++, n_iter));
    OCL_CHECK(err, err = krnl_rtm_SLR2_2.setArg(narg++, batch));
#endif

    //Copy input data to device global memory
    OCL_CHECK(err,
              err = q.enqueueMigrateMemObjects({buffer_input},
                                               0 /* 0 means from host*/));
    q.finish();
    usleep(100000);
    uint64_t wtime = 0;
    uint64_t nstimestart, nstimeend;
    auto start = std::chrono::high_resolution_clock::now();

#ifndef RW_MODULE
	OCL_CHECK(err, err = q.enqueueTask(krnl_rtm_SLR0));
#else
	OCL_CHECK(err, err = q.enqueueTask(krnl_read_write));
#endif
#ifndef SLR_COUNT_2
	OCL_CHECK(err, err = q.enqueueTask(krnl_rtm_SLR1));
#endif
#ifndef RW_MODULE
	OCL_CHECK(err, err = q.enqueueTask(krnl_rtm_SLR2));
#else
	OCL_CHECK(err, err = q.enqueueTask(krnl_rtm_SLR2_1));
	OCL_CHECK(err, err = q.enqueueTask(krnl_rtm_SLR2_2));
#endif
	q.finish();

    auto finish = std::chrono::high_resolution_clock::now();
    //Copy Result from Device Global Memory to Host Local Memory
    OCL_CHECK(err,
              err = q.enqueueMigrateMemObjects({buffer_input},
                                               CL_MIGRATE_MEM_OBJECT_HOST));
    q.finish();

    OCL_CHECK(err,
                 err = q.enqueueMigrateMemObjects({buffer_output},
                                                  CL_MIGRATE_MEM_OBJECT_HOST));

    q.finish();


#ifdef VERIFICATION
   dump_rho_mu_yy(grid_yy_rho_mu_temp_d, grid_d, (char*)"rho_d.txt", (char*)"mu_d.txt", (char*)"yy_d.txt");
   float dt = 0.1;
   for(int i = 0; i < batch; i++){
	   for(int itr = 0; itr < n_iter*6; itr++){
		   fd3d_pml_kernel(&grid_yy_rho_mu[grid_d.dims * i], &grid_k1[grid_d.dims * i], grid_d);
		   calc_ytemp_kernel(&grid_yy_rho_mu[grid_d.dims * i], &grid_k1[grid_d.dims * i], dt, &grid_yy_rho_mu_temp[grid_d.dims * i], 0.5, grid_d);


	//
		   fd3d_pml_kernel(&grid_yy_rho_mu_temp[grid_d.dims * i], &grid_k2[grid_d.dims * i], grid_d);
		   calc_ytemp_kernel(&grid_yy_rho_mu[grid_d.dims * i], &grid_k2[grid_d.dims * i], dt, &grid_yy_rho_mu_temp[grid_d.dims * i], 0.5, grid_d);

		   fd3d_pml_kernel(&grid_yy_rho_mu_temp[grid_d.dims * i], &grid_k3[grid_d.dims * i], grid_d);
		   calc_ytemp_kernel(&grid_yy_rho_mu[grid_d.dims * i], &grid_k3[grid_d.dims * i], dt, &grid_yy_rho_mu_temp[grid_d.dims * i], 1.0, grid_d);
	//
	//
	//
	//
		   fd3d_pml_kernel(&grid_yy_rho_mu_temp[grid_d.dims * i], &grid_k4[grid_d.dims * i], grid_d);
		   final_update_kernel(&grid_yy_rho_mu[grid_d.dims * i], &grid_k1[grid_d.dims * i], &grid_k2[grid_d.dims * i], &grid_k3[grid_d.dims * i], &grid_k4[grid_d.dims * i], dt, grid_d);



	//       fd3d_pml_kernel(grid_yy_rho_mu_temp, grid_yy_rho_mu, grid_d);
	   }
   }
   dump_rho_mu_yy(grid_yy_rho_mu, grid_d, (char*)"rho.txt", (char*)"mu.txt", (char*)"yy.txt");
#endif
	
  std::chrono::duration<double> elapsed = finish - start;
  std::chrono::duration<double, std::micro> elapsed_us = finish - start;

  printf("Runtime on FPGA is %f us\n", elapsed_us.count());
#ifdef VERIFICATION
  double error = 0;
  for(int i = 0; i < batch; i++){
	  error = square_error(&grid_yy_rho_mu[grid_d.dims * i], &grid_yy_rho_mu_d[grid_d.dims * i] , grid_d);
	  printf("batch:%d, Square error is  %f\n", batch, error);
  }
#endif
  float bandwidth = (grid_d.data_size_bytes_dim8/1000.0 * 4.0 * n_iter)/(elapsed.count() * 1000 * 1000);
  printf("\nBandwidth is %f, data_size_byte_dim8: %d\n", bandwidth, grid_d.data_size_bytes_dim8);
#ifndef SLR_COUNT_2
  double syn_bandwidth = ((27.0*grid_d.data_size_bytes_dim6 + 8.0 *grid_d.data_size_bytes_dim1)/1000.0 * 2.0 * n_iter * 3)/(elapsed.count() * 1000 * 1000);
  printf("synthetic bandwidth is %f\n", syn_bandwidth);
#else
  double syn_bandwidth = ((27.0*grid_d.data_size_bytes_dim6 + 8.0 *grid_d.data_size_bytes_dim1)/1000.0 * 2.0 * n_iter * 2)/(elapsed.count() * 1000 * 1000);
  printf("synthetic bandwidth is %f\n", syn_bandwidth);
#endif
#ifdef PROFILE
    fstream << "grid_x," << "grid_y," << "grid_z," << "iters," << "batch_id," << "init_time," << "main_time," << "total_time" << std::endl; 
    fstream << grid_d.logical_size_x << "," << grid_d.logical_size_y << "," << grid_d.logical_size_z << "," << num_iter << "," << 1 << "," << 0.0 \
                << "," << elapsed_us.count() << "," << elapsed_us.count() << std::endl;
    fstream.close();

    if (fstream.good()) { // Check if operations were successful after closing
        std::cout << "Successfully wrote data to " << profile_filename << std::endl;
    } else {
            std::cerr << "Error occurred during writing to " << profile_filename << std::endl;
            return 1; // Indicate an error occurred
    }
#endif
  return 0;
}
