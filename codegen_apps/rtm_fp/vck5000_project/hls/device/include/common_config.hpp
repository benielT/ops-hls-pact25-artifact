// Auto-generated at 2025-08-21 21:06:10.982396 by ops-translator
#pragma once

typedef float stencil_type;
constexpr unsigned short data_width = sizeof(stencil_type) * 8;
constexpr unsigned short max_depth = max_depth_bytes / data_width;
constexpr unsigned short line_buff_2d_depth = max_depth;
constexpr unsigned short line_buff_3d_depth = max_depth / 2;
constexpr unsigned short vector_factor = 1;
constexpr unsigned short mem_vector_factor = 2;
constexpr unsigned short iter_par_factor = 2;
constexpr unsigned short mem_data_width = data_width * mem_vector_factor;
constexpr unsigned short shift_bits = 0; 
constexpr unsigned short axis_data_width = data_width * vector_factor;

#ifdef DEBUG_LOG
    #include <stdio.h>
#endif
