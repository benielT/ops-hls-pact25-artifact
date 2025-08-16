// Auto-generated at 2025-08-16 01:02:52.140989 by ops-translator

#pragma once

#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include <ops_hls_rt_support.h>

typedef float stencil_type;
constexpr unsigned short vector_factor = 8;
constexpr unsigned short mem_vector_factor = 16;
constexpr unsigned int iter_par_factor = 16;

// user kernel files
#include "ops_krnl_zero_init_kernel.hpp"
#include "ops_krnl_interior_init_kernel.hpp"
#include "ops_krnl_copy_kernel.hpp"
#include "outerloop_0.hpp"

