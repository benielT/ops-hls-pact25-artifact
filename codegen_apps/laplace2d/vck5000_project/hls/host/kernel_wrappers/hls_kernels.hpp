// Auto-generated at 2025-07-29 02:44:01.775940 by ops-translator

#pragma once

#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include <ops_hls_rt_support.h>

extern int imax;
extern int jmax;
extern float pi;

typedef float stencil_type;
constexpr unsigned short vector_factor = 8;
constexpr unsigned short mem_vector_factor = 16;
constexpr unsigned int iter_par_factor = 56;

// user kernel files
#include "set_zero_kernel.hpp"
#include "left_bndcon_kernel.hpp"
#include "right_bndcon_kernel.hpp"
#include "outerloop_0.hpp"

