// Auto-generated at 2025-07-29 02:54:46.249952 by ops-translator

#pragma once

#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include <ops_hls_rt_support.h>

extern float dx;
extern float dy;
extern float dy_2;
extern float dx_2;
extern float dx_2_plus_dy_2_mult_2;
extern float dx_2_dy_2;

typedef float stencil_type;
constexpr unsigned short vector_factor = 8;
constexpr unsigned short mem_vector_factor = 16;
constexpr unsigned int iter_par_factor = 55;

// user kernel files
#include "poisson_kernel_populate_kernel.hpp"
#include "poisson_kernel_update_kernel.hpp"
#include "poisson_kernel_initialguess_kernel.hpp"
#include "outerloop_0.hpp"

