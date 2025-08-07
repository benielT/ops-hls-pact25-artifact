#pragma once

void ops_krnl_interior_init(ACC<float> & data, const int *idx, const float *deltaS, const float *strikePrice)
{
// #ifndef BATCH_MODE
// 	float tmpVal = (idx[0] + 1)*(*deltaS) - (*strikePrice);
// 	data(0) = tmpVal > 0.0 ? tmpVal : 0.0;
// #else
    float tmpVal = (idx[0] + 1)*(*deltaS) - (*strikePrice);
    data(0,0) = tmpVal > 0.0 ? tmpVal : 0.0;
// #endif
}

void ops_krnl_zero_init(ACC<float> &data)
{
// #ifndef BATCH_MODE
// 	data(0) = 0.0;
// #else
    data(0,0) = 0.0;
// #endif
}

void ops_krnl_const_init(ACC<float> &data, const float * val)
{
// #ifndef BATCH_MODE
// 	data(0) = *constant;
// #else
    data(0,0) = *val;
// #endif
}

void ops_krnl_copy(const ACC<float> &data, ACC<float>& data_new)
{
// #ifndef BATCH_MODE
// 	data_new(0) = data(0);
// #else
    data_new(0,0) = data(0,0);
// #endif
}

void ops_krnl_blackscholes(ACC<float> & current, const ACC<float> & next, const ACC<float> & a, const ACC<float> & b, const ACC<float> & c)
{
// #ifndef BATCH_MODE
// 	current(0) = a(0) * next (-1) + b(0) * next(0) + c(0) * next(1);
// #else
    current(0,0) = a(0,0) * next(-1,0) + b(0,0) * next(0,0) + c(0,0) * next(1,0);
// #endif
}

void ops_krnl_calc_coefficient(ACC<float> & a, ACC<float> & b, ACC<float> & c, const float * alpha, const float * beta, const int * idx)
{
// #ifndef BATCH_MODE
// 	a(0) = 0.5 * ((*alpha) * (idx[0] + 1) * (idx[0] + 1) - (*beta) * (idx[0] + 1));
// 	b(0) = 1 - (*alpha) * (idx[0] + 1) * (idx[0] + 1) - (*beta);
// 	c(0) = 0.5 * ((*alpha) * (idx[0] + 1) * (idx[0] + 1) + (*beta) * (idx[0] + 1));
// #else
    a(0,0) = 0.5 * ((*alpha) * (idx[0] + 1) * (idx[0] + 1) - (*beta) * (idx[0] + 1));
	b(0,0) = 1 - (*alpha) * (idx[0] + 1) * (idx[0] + 1) - (*beta);
	c(0,0) = 0.5 * ((*alpha) * (idx[0] + 1) * (idx[0] + 1) + (*beta) * (idx[0] + 1));
// #endif
}