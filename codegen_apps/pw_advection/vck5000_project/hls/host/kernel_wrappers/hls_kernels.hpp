// Auto-generated at 2025-06-09 09:27:00.919897 by ops-translator

#pragma once

#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include <ops_hls_rt_support.h>

extern int grid_size_x;
extern int grid_size_y;
extern int grid_size_z;

typedef float stencil_type;
constexpr unsigned short vector_factor = 8;
constexpr unsigned short mem_vector_factor = 16;
constexpr unsigned int iter_par_factor = 4;

// user kernel files
#include "pw_initialize_kernel.hpp"
#include "pw_copy_all_kernel.hpp"
#include "outerloop_0.hpp"

