// Auto-generated at 2025-07-29 03:19:39.813451 by ops-translator

#pragma once

#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include <ops_hls_rt_support.h>

extern float dx;
extern float dy;
extern float dz;
extern float invdx;
extern float invdy;
extern float invdz;
extern int nx;
extern int ny;
extern int nz;
extern int pml_width;
extern int half_order;
extern int order;
extern int grid_size_x;
extern int grid_size_y;
extern int grid_size_z;

typedef float stencil_type;
constexpr unsigned short vector_factor = 1;
constexpr unsigned short mem_vector_factor = 2;
constexpr unsigned int iter_par_factor = 2;

// user kernel files
#include "rtm_kernel_populate_kernel.hpp"
#include "kernel_copy_d2_kernel.hpp"
#include "outerloop_0.hpp"

