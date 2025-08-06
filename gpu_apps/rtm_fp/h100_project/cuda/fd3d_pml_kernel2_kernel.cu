// Auto-generated at 2025-08-06 23:23:48.342388 by ops-translator

__constant__ int dims_fd3d_pml_kernel2[33][2];
static int dims_fd3d_pml_kernel2_h[33][2] = {{0}};

//  =============
//  User function
//  =============
__device__ void fd3d_pml_kernel2_gpu(const int *dispx, const int *dispy, const int *dispz, const int *idx, const float *dt, const float *scale1, const float *scale2, const ACC<float> &rho, const ACC<float> &mu, const ACC<float> &yy_0, const ACC<float> &yy_1, const ACC<float> &yy_2, const ACC<float> &yy_3, const ACC<float> &yy_4, const ACC<float> &yy_5, const ACC<float> &dyyIn_0, const ACC<float> &dyyIn_1, const ACC<float> &dyyIn_2, const ACC<float> &dyyIn_3, const ACC<float> &dyyIn_4, const ACC<float> &dyyIn_5, ACC<float> &dyyOut_0, ACC<float> &dyyOut_1, ACC<float> &dyyOut_2, ACC<float> &dyyOut_3, ACC<float> &dyyOut_4, ACC<float> &dyyOut_5, ACC<float> &sum_0, ACC<float> &sum_1, ACC<float> &sum_2, ACC<float> &sum_3, ACC<float> &sum_4, ACC<float> &sum_5) {

    const float c[9] = {0.0035714285714285713,-0.0380952380952381,0.2,-0.8,0.0,0.8,-0.2,0.0380952380952381,-0.0035714285714285713};

    int xbeg=half_order;
    int xend=nx-half_order;
    int ybeg=half_order;
    int yend=ny-half_order;
    int zbeg=half_order;
    int zend=nz-half_order;
    int xpmlbeg=xbeg+pml_width;
    int ypmlbeg=ybeg+pml_width;
    int zpmlbeg=zbeg+pml_width;
    int xpmlend=xend-pml_width;
    int ypmlend=yend-pml_width;
    int zpmlend=zend-pml_width;

    float sigma = mu(0,0,0)/rho(0,0,0);
    float sigmax=0.0;
    float sigmay=0.0;
    float sigmaz=0.0;
    if(idx[0]<=xbeg+pml_width){
        sigmax = (xbeg+pml_width-idx[0])*sigma * 0.1f;
    }
    if(idx[0]>=xend-pml_width){
        sigmax=(idx[0]-(xend-pml_width))*sigma * 0.1f;
    }
    if(idx[1]<=ybeg+pml_width){
        sigmay=(ybeg+pml_width-idx[1])*sigma * 0.1f;
    }
    if(idx[1]>=yend-pml_width){
        sigmay=(idx[1]-(yend-pml_width))*sigma * 0.1f;
    }
    if(idx[2]<=zbeg+pml_width){
        sigmaz=(zbeg+pml_width-idx[2])*sigma * 0.1f;
    }
    if(idx[2]>=zend-pml_width){
        sigmaz=(idx[2]-(zend-pml_width))*sigma * 0.1f;
    }

    float px = dyyIn_0(0,0,0);
    float py = dyyIn_1(0,0,0);
    float pz = dyyIn_2(0,0,0);

    float vx = dyyIn_3(0,0,0);
    float vy = dyyIn_4(0,0,0);
    float vz = dyyIn_5(0,0,0);

    float vxx=0.0;
    float vxy=0.0;
    float vxz=0.0;

    float vyx=0.0;
    float vyy=0.0;
    float vyz=0.0;

    float vzx=0.0;
    float vzy=0.0;
    float vzz=0.0;

    float pxx=0.0;
    float pxy=0.0;
    float pxz=0.0;

    float pyx=0.0;
    float pyy=0.0;
    float pyz=0.0;

    float pzx=0.0;
    float pzy=0.0;
    float pzz=0.0;

    pxx += dyyIn_0(-4,0,0)*c[-4+half_order];
    pyx += dyyIn_1(-4,0,0)*c[-4+half_order];
    pzx += dyyIn_2(-4,0,0)*c[-4+half_order];

    vxx += dyyIn_3(-4,0,0)*c[-4+half_order];
    vyx += dyyIn_4(-4,0,0)*c[-4+half_order];
    vzx += dyyIn_5(-4,0,0)*c[-4+half_order];

    pxy += dyyIn_0(0,-4,0)*c[-4+half_order];
    pyy += dyyIn_1(0,-4,0)*c[-4+half_order];
    pzy += dyyIn_2(0,-4,0)*c[-4+half_order];

    vxy += dyyIn_3(0,-4,0)*c[-4+half_order];
    vyy += dyyIn_4(0,-4,0)*c[-4+half_order];
    vzy += dyyIn_5(0,-4,0)*c[-4+half_order];

    pxz += dyyIn_0(0,0,-4)*c[-4+half_order];
    pyz += dyyIn_1(0,0,-4)*c[-4+half_order];
    pzz += dyyIn_2(0,0,-4)*c[-4+half_order];

    vxz += dyyIn_3(0,0,-4)*c[-4+half_order];
    vyz += dyyIn_4(0,0,-4)*c[-4+half_order];
    vzz += dyyIn_5(0,0,-4)*c[-4+half_order];

    pxx += dyyIn_0(-3,0,0)*c[-3+half_order];
    pyx += dyyIn_1(-3,0,0)*c[-3+half_order];
    pzx += dyyIn_2(-3,0,0)*c[-3+half_order];

    vxx += dyyIn_3(-3,0,0)*c[-3+half_order];
    vyx += dyyIn_4(-3,0,0)*c[-3+half_order];
    vzx += dyyIn_5(-3,0,0)*c[-3+half_order];

    pxy += dyyIn_0(0,-3,0)*c[-3+half_order];
    pyy += dyyIn_1(0,-3,0)*c[-3+half_order];
    pzy += dyyIn_2(0,-3,0)*c[-3+half_order];

    vxy += dyyIn_3(0,-3,0)*c[-3+half_order];
    vyy += dyyIn_4(0,-3,0)*c[-3+half_order];
    vzy += dyyIn_5(0,-3,0)*c[-3+half_order];

    pxz += dyyIn_0(0,0,-3)*c[-3+half_order];
    pyz += dyyIn_1(0,0,-3)*c[-3+half_order];
    pzz += dyyIn_2(0,0,-3)*c[-3+half_order];

    vxz += dyyIn_3(0,0,-3)*c[-3+half_order];
    vyz += dyyIn_4(0,0,-3)*c[-3+half_order];
    vzz += dyyIn_5(0,0,-3)*c[-3+half_order];

    pxx += dyyIn_0(-2,0,0)*c[-2+half_order];
    pyx += dyyIn_1(-2,0,0)*c[-2+half_order];
    pzx += dyyIn_2(-2,0,0)*c[-2+half_order];

    vxx += dyyIn_3(-2,0,0)*c[-2+half_order];
    vyx += dyyIn_4(-2,0,0)*c[-2+half_order];
    vzx += dyyIn_5(-2,0,0)*c[-2+half_order];

    pxy += dyyIn_0(0,-2,0)*c[-2+half_order];
    pyy += dyyIn_1(0,-2,0)*c[-2+half_order];
    pzy += dyyIn_2(0,-2,0)*c[-2+half_order];

    vxy += dyyIn_3(0,-2,0)*c[-2+half_order];
    vyy += dyyIn_4(0,-2,0)*c[-2+half_order];
    vzy += dyyIn_5(0,-2,0)*c[-2+half_order];

    pxz += dyyIn_0(0,0,-2)*c[-2+half_order];
    pyz += dyyIn_1(0,0,-2)*c[-2+half_order];
    pzz += dyyIn_2(0,0,-2)*c[-2+half_order];

    vxz += dyyIn_3(0,0,-2)*c[-2+half_order];
    vyz += dyyIn_4(0,0,-2)*c[-2+half_order];
    vzz += dyyIn_5(0,0,-2)*c[-2+half_order];

    pxx += dyyIn_0(-1,0,0)*c[-1+half_order];
    pyx += dyyIn_1(-1,0,0)*c[-1+half_order];
    pzx += dyyIn_2(-1,0,0)*c[-1+half_order];

    vxx += dyyIn_3(-1,0,0)*c[-1+half_order];
    vyx += dyyIn_4(-1,0,0)*c[-1+half_order];
    vzx += dyyIn_5(-1,0,0)*c[-1+half_order];

    pxy += dyyIn_0(0,-1,0)*c[-1+half_order];
    pyy += dyyIn_1(0,-1,0)*c[-1+half_order];
    pzy += dyyIn_2(0,-1,0)*c[-1+half_order];

    vxy += dyyIn_3(0,-1,0)*c[-1+half_order];
    vyy += dyyIn_4(0,-1,0)*c[-1+half_order];
    vzy += dyyIn_5(0,-1,0)*c[-1+half_order];

    pxz += dyyIn_0(0,0,-1)*c[-1+half_order];
    pyz += dyyIn_1(0,0,-1)*c[-1+half_order];
    pzz += dyyIn_2(0,0,-1)*c[-1+half_order];

    vxz += dyyIn_3(0,0,-1)*c[-1+half_order];
    vyz += dyyIn_4(0,0,-1)*c[-1+half_order];
    vzz += dyyIn_5(0,0,-1)*c[-1+half_order];

    pxx += dyyIn_0(0,0,0)*c[half_order];
    pyx += dyyIn_1(0,0,0)*c[half_order];
    pzx += dyyIn_2(0,0,0)*c[half_order];

    vxx += dyyIn_3(0,0,0)*c[half_order];
    vyx += dyyIn_4(0,0,0)*c[half_order];
    vzx += dyyIn_5(0,0,0)*c[half_order];

    pxy += dyyIn_0(0,0,0)*c[half_order];
    pyy += dyyIn_1(0,0,0)*c[half_order];
    pzy += dyyIn_2(0,0,0)*c[half_order];

    vxy += dyyIn_3(0,0,0)*c[half_order];
    vyy += dyyIn_4(0,0,0)*c[half_order];
    vzy += dyyIn_5(0,0,0)*c[half_order];

    pxz += dyyIn_0(0,0,0)*c[half_order];
    pyz += dyyIn_1(0,0,0)*c[half_order];
    pzz += dyyIn_2(0,0,0)*c[half_order];

    vxz += dyyIn_3(0,0,0)*c[half_order];
    vyz += dyyIn_4(0,0,0)*c[half_order];
    vzz += dyyIn_5(0,0,0)*c[half_order];

    pxx += dyyIn_0(1,0,0)*c[1+half_order];
    pyx += dyyIn_1(1,0,0)*c[1+half_order];
    pzx += dyyIn_2(1,0,0)*c[1+half_order];

    vxx += dyyIn_3(1,0,0)*c[1+half_order];
    vyx += dyyIn_4(1,0,0)*c[1+half_order];
    vzx += dyyIn_5(1,0,0)*c[1+half_order];

    pxy += dyyIn_0(0,1,0)*c[1+half_order];
    pyy += dyyIn_1(0,1,0)*c[1+half_order];
    pzy += dyyIn_2(0,1,0)*c[1+half_order];

    vxy += dyyIn_3(0,1,0)*c[1+half_order];
    vyy += dyyIn_4(0,1,0)*c[1+half_order];
    vzy += dyyIn_5(0,1,0)*c[1+half_order];

    pxz += dyyIn_0(0,0,1)*c[1+half_order];
    pyz += dyyIn_1(0,0,1)*c[1+half_order];
    pzz += dyyIn_2(0,0,1)*c[1+half_order];

    vxz += dyyIn_3(0,0,1)*c[1+half_order];
    vyz += dyyIn_4(0,0,1)*c[1+half_order];
    vzz += dyyIn_5(0,0,1)*c[1+half_order];

    pxx += dyyIn_0(2,0,0)*c[2+half_order];
    pyx += dyyIn_1(2,0,0)*c[2+half_order];
    pzx += dyyIn_2(2,0,0)*c[2+half_order];

    vxx += dyyIn_3(2,0,0)*c[2+half_order];
    vyx += dyyIn_4(2,0,0)*c[2+half_order];
    vzx += dyyIn_5(2,0,0)*c[2+half_order];

    pxy += dyyIn_0(0,2,0)*c[2+half_order];
    pyy += dyyIn_1(0,2,0)*c[2+half_order];
    pzy += dyyIn_2(0,2,0)*c[2+half_order];

    vxy += dyyIn_3(0,2,0)*c[2+half_order];
    vyy += dyyIn_4(0,2,0)*c[2+half_order];
    vzy += dyyIn_5(0,2,0)*c[2+half_order];

    pxz += dyyIn_0(0,0,2)*c[2+half_order];
    pyz += dyyIn_1(0,0,2)*c[2+half_order];
    pzz += dyyIn_2(0,0,2)*c[2+half_order];

    vxz += dyyIn_3(0,0,2)*c[2+half_order];
    vyz += dyyIn_4(0,0,2)*c[2+half_order];
    vzz += dyyIn_5(0,0,2)*c[2+half_order];

    pxx += dyyIn_0(3,0,0)*c[3+half_order];
    pyx += dyyIn_1(3,0,0)*c[3+half_order];
    pzx += dyyIn_2(3,0,0)*c[3+half_order];

    vxx += dyyIn_3(3,0,0)*c[3+half_order];
    vyx += dyyIn_4(3,0,0)*c[3+half_order];
    vzx += dyyIn_5(3,0,0)*c[3+half_order];

    pxy += dyyIn_0(0,3,0)*c[3+half_order];
    pyy += dyyIn_1(0,3,0)*c[3+half_order];
    pzy += dyyIn_2(0,3,0)*c[3+half_order];

    vxy += dyyIn_3(0,3,0)*c[3+half_order];
    vyy += dyyIn_4(0,3,0)*c[3+half_order];
    vzy += dyyIn_5(0,3,0)*c[3+half_order];

    pxz += dyyIn_0(0,0,3)*c[3+half_order];
    pyz += dyyIn_1(0,0,3)*c[3+half_order];
    pzz += dyyIn_2(0,0,3)*c[3+half_order];

    vxz += dyyIn_3(0,0,3)*c[3+half_order];
    vyz += dyyIn_4(0,0,3)*c[3+half_order];
    vzz += dyyIn_5(0,0,3)*c[3+half_order];

    pxx += dyyIn_0(4,0,0)*c[4+half_order];
    pyx += dyyIn_1(4,0,0)*c[4+half_order];
    pzx += dyyIn_2(4,0,0)*c[4+half_order];

    vxx += dyyIn_3(4,0,0)*c[4+half_order];
    vyx += dyyIn_4(4,0,0)*c[4+half_order];
    vzx += dyyIn_5(4,0,0)*c[4+half_order];

    pxy += dyyIn_0(0,4,0)*c[4+half_order];
    pyy += dyyIn_1(0,4,0)*c[4+half_order];
    pzy += dyyIn_2(0,4,0)*c[4+half_order];

    vxy += dyyIn_3(0,4,0)*c[4+half_order];
    vyy += dyyIn_4(0,4,0)*c[4+half_order];
    vzy += dyyIn_5(0,4,0)*c[4+half_order];

    pxz += dyyIn_0(0,0,4)*c[4+half_order];
    pyz += dyyIn_1(0,0,4)*c[4+half_order];
    pzz += dyyIn_2(0,0,4)*c[4+half_order];

    vxz += dyyIn_3(0,0,4)*c[4+half_order];
    vyz += dyyIn_4(0,0,4)*c[4+half_order];
    vzz += dyyIn_5(0,0,4)*c[4+half_order];

    pxx *= invdx;
    pyx *= invdx;
    pzx *= invdx;

    vxx *= invdx;
    vyx *= invdx;
    vzx *= invdx;

    pxy *= invdy;
    pyy *= invdy;
    pzy *= invdy;

    vxy *= invdy;
    vyy *= invdy;
    vzy *= invdy;

    pxz *= invdz;
    pyz *= invdz;
    pzz *= invdz;

    vxz *= invdz;
    vyz *= invdz;
    vzz *= invdz;

    float ytemp0 =(vxx/rho(0,0,0) - sigmax*px) * *dt;
    float ytemp3 =((pxx+pyx+pxz)*mu(0,0,0) - sigmax*vx)* *dt;

    float ytemp1 =(vyy/rho(0,0,0) - sigmay*py)* *dt;
    float ytemp4 =((pxy+pyy+pyz)*mu(0,0,0) - sigmay*vy)* *dt;

    float ytemp2 =(vzz/rho(0,0,0) - sigmaz*pz)* *dt;
    float ytemp5 =((pxz+pyz+pzz)*mu(0,0,0) - sigmaz*vz)* *dt;

    dyyOut_0(0,0,0) = yy_0(0,0,0) + ytemp0* *scale1;
    dyyOut_3(0,0,0) = yy_3(0,0,0) + ytemp3* *scale1;
    dyyOut_1(0,0,0) = yy_1(0,0,0) + ytemp1* *scale1;
    dyyOut_4(0,0,0) = yy_4(0,0,0) + ytemp4* *scale1;
    dyyOut_2(0,0,0) = yy_2(0,0,0) + ytemp2* *scale1;
    dyyOut_5(0,0,0) = yy_5(0,0,0) + ytemp5* *scale1;

    sum_0(0,0,0) += ytemp0 * *scale2;
    sum_3(0,0,0) += ytemp3 * *scale2;
    sum_1(0,0,0) += ytemp1 * *scale2;
    sum_4(0,0,0) += ytemp4 * *scale2;
    sum_2(0,0,0) += ytemp2 * *scale2;
    sum_5(0,0,0) += ytemp5 * *scale2;

}

//  ============================
//  Cuda kernel wrapper function
//  ============================
__global__ void ops_fd3d_pml_kernel2(const int arg0, 
const int arg1, 
const int arg2, 
int arg_idx0, int arg_idx1, int arg_idx2, 
const float arg4, 
const float arg5, 
const float arg6, 
float* __restrict arg7, int xstride_7, int ystride_7, int zstride_7, 
float* __restrict arg8, int xstride_8, int ystride_8, int zstride_8, 
float* __restrict arg9, int xstride_9, int ystride_9, int zstride_9, 
float* __restrict arg10, int xstride_10, int ystride_10, int zstride_10, 
float* __restrict arg11, int xstride_11, int ystride_11, int zstride_11, 
float* __restrict arg12, int xstride_12, int ystride_12, int zstride_12, 
float* __restrict arg13, int xstride_13, int ystride_13, int zstride_13, 
float* __restrict arg14, int xstride_14, int ystride_14, int zstride_14, 
float* __restrict arg15, int xstride_15, int ystride_15, int zstride_15, 
float* __restrict arg16, int xstride_16, int ystride_16, int zstride_16, 
float* __restrict arg17, int xstride_17, int ystride_17, int zstride_17, 
float* __restrict arg18, int xstride_18, int ystride_18, int zstride_18, 
float* __restrict arg19, int xstride_19, int ystride_19, int zstride_19, 
float* __restrict arg20, int xstride_20, int ystride_20, int zstride_20, 
float* __restrict arg21, int xstride_21, int ystride_21, int zstride_21, 
float* __restrict arg22, int xstride_22, int ystride_22, int zstride_22, 
float* __restrict arg23, int xstride_23, int ystride_23, int zstride_23, 
float* __restrict arg24, int xstride_24, int ystride_24, int zstride_24, 
float* __restrict arg25, int xstride_25, int ystride_25, int zstride_25, 
float* __restrict arg26, int xstride_26, int ystride_26, int zstride_26, 
float* __restrict arg27, int xstride_27, int ystride_27, int zstride_27, 
float* __restrict arg28, int xstride_28, int ystride_28, int zstride_28, 
float* __restrict arg29, int xstride_29, int ystride_29, int zstride_29, 
float* __restrict arg30, int xstride_30, int ystride_30, int zstride_30, 
float* __restrict arg31, int xstride_31, int ystride_31, int zstride_31, 
float* __restrict arg32, int xstride_32, int ystride_32, int zstride_32, 
int size0, int size1, int size2) {

    int idx_z = blockDim.z * blockIdx.z + threadIdx.z;
    int idx_y = blockDim.y * blockIdx.y + threadIdx.y;
    int idx_x = blockDim.x * blockIdx.x + threadIdx.x;

    int arg_idx[3];
    arg_idx[0] = arg_idx0+idx_x;
    arg_idx[1] = arg_idx1+idx_y;
    arg_idx[2] = arg_idx2+idx_z;

    arg7 += idx_x * xstride_7*1 + idx_y * ystride_7*1 * dims_fd3d_pml_kernel2[7][0] + idx_z * zstride_7*1 * dims_fd3d_pml_kernel2[7][0] * dims_fd3d_pml_kernel2[7][1];
    arg8 += idx_x * xstride_8*1 + idx_y * ystride_8*1 * dims_fd3d_pml_kernel2[8][0] + idx_z * zstride_8*1 * dims_fd3d_pml_kernel2[8][0] * dims_fd3d_pml_kernel2[8][1];
    arg9 += idx_x * xstride_9*1 + idx_y * ystride_9*1 * dims_fd3d_pml_kernel2[9][0] + idx_z * zstride_9*1 * dims_fd3d_pml_kernel2[9][0] * dims_fd3d_pml_kernel2[9][1];
    arg10 += idx_x * xstride_10*1 + idx_y * ystride_10*1 * dims_fd3d_pml_kernel2[10][0] + idx_z * zstride_10*1 * dims_fd3d_pml_kernel2[10][0] * dims_fd3d_pml_kernel2[10][1];
    arg11 += idx_x * xstride_11*1 + idx_y * ystride_11*1 * dims_fd3d_pml_kernel2[11][0] + idx_z * zstride_11*1 * dims_fd3d_pml_kernel2[11][0] * dims_fd3d_pml_kernel2[11][1];
    arg12 += idx_x * xstride_12*1 + idx_y * ystride_12*1 * dims_fd3d_pml_kernel2[12][0] + idx_z * zstride_12*1 * dims_fd3d_pml_kernel2[12][0] * dims_fd3d_pml_kernel2[12][1];
    arg13 += idx_x * xstride_13*1 + idx_y * ystride_13*1 * dims_fd3d_pml_kernel2[13][0] + idx_z * zstride_13*1 * dims_fd3d_pml_kernel2[13][0] * dims_fd3d_pml_kernel2[13][1];
    arg14 += idx_x * xstride_14*1 + idx_y * ystride_14*1 * dims_fd3d_pml_kernel2[14][0] + idx_z * zstride_14*1 * dims_fd3d_pml_kernel2[14][0] * dims_fd3d_pml_kernel2[14][1];
    arg15 += idx_x * xstride_15*1 + idx_y * ystride_15*1 * dims_fd3d_pml_kernel2[15][0] + idx_z * zstride_15*1 * dims_fd3d_pml_kernel2[15][0] * dims_fd3d_pml_kernel2[15][1];
    arg16 += idx_x * xstride_16*1 + idx_y * ystride_16*1 * dims_fd3d_pml_kernel2[16][0] + idx_z * zstride_16*1 * dims_fd3d_pml_kernel2[16][0] * dims_fd3d_pml_kernel2[16][1];
    arg17 += idx_x * xstride_17*1 + idx_y * ystride_17*1 * dims_fd3d_pml_kernel2[17][0] + idx_z * zstride_17*1 * dims_fd3d_pml_kernel2[17][0] * dims_fd3d_pml_kernel2[17][1];
    arg18 += idx_x * xstride_18*1 + idx_y * ystride_18*1 * dims_fd3d_pml_kernel2[18][0] + idx_z * zstride_18*1 * dims_fd3d_pml_kernel2[18][0] * dims_fd3d_pml_kernel2[18][1];
    arg19 += idx_x * xstride_19*1 + idx_y * ystride_19*1 * dims_fd3d_pml_kernel2[19][0] + idx_z * zstride_19*1 * dims_fd3d_pml_kernel2[19][0] * dims_fd3d_pml_kernel2[19][1];
    arg20 += idx_x * xstride_20*1 + idx_y * ystride_20*1 * dims_fd3d_pml_kernel2[20][0] + idx_z * zstride_20*1 * dims_fd3d_pml_kernel2[20][0] * dims_fd3d_pml_kernel2[20][1];
    arg21 += idx_x * xstride_21*1 + idx_y * ystride_21*1 * dims_fd3d_pml_kernel2[21][0] + idx_z * zstride_21*1 * dims_fd3d_pml_kernel2[21][0] * dims_fd3d_pml_kernel2[21][1];
    arg22 += idx_x * xstride_22*1 + idx_y * ystride_22*1 * dims_fd3d_pml_kernel2[22][0] + idx_z * zstride_22*1 * dims_fd3d_pml_kernel2[22][0] * dims_fd3d_pml_kernel2[22][1];
    arg23 += idx_x * xstride_23*1 + idx_y * ystride_23*1 * dims_fd3d_pml_kernel2[23][0] + idx_z * zstride_23*1 * dims_fd3d_pml_kernel2[23][0] * dims_fd3d_pml_kernel2[23][1];
    arg24 += idx_x * xstride_24*1 + idx_y * ystride_24*1 * dims_fd3d_pml_kernel2[24][0] + idx_z * zstride_24*1 * dims_fd3d_pml_kernel2[24][0] * dims_fd3d_pml_kernel2[24][1];
    arg25 += idx_x * xstride_25*1 + idx_y * ystride_25*1 * dims_fd3d_pml_kernel2[25][0] + idx_z * zstride_25*1 * dims_fd3d_pml_kernel2[25][0] * dims_fd3d_pml_kernel2[25][1];
    arg26 += idx_x * xstride_26*1 + idx_y * ystride_26*1 * dims_fd3d_pml_kernel2[26][0] + idx_z * zstride_26*1 * dims_fd3d_pml_kernel2[26][0] * dims_fd3d_pml_kernel2[26][1];
    arg27 += idx_x * xstride_27*1 + idx_y * ystride_27*1 * dims_fd3d_pml_kernel2[27][0] + idx_z * zstride_27*1 * dims_fd3d_pml_kernel2[27][0] * dims_fd3d_pml_kernel2[27][1];
    arg28 += idx_x * xstride_28*1 + idx_y * ystride_28*1 * dims_fd3d_pml_kernel2[28][0] + idx_z * zstride_28*1 * dims_fd3d_pml_kernel2[28][0] * dims_fd3d_pml_kernel2[28][1];
    arg29 += idx_x * xstride_29*1 + idx_y * ystride_29*1 * dims_fd3d_pml_kernel2[29][0] + idx_z * zstride_29*1 * dims_fd3d_pml_kernel2[29][0] * dims_fd3d_pml_kernel2[29][1];
    arg30 += idx_x * xstride_30*1 + idx_y * ystride_30*1 * dims_fd3d_pml_kernel2[30][0] + idx_z * zstride_30*1 * dims_fd3d_pml_kernel2[30][0] * dims_fd3d_pml_kernel2[30][1];
    arg31 += idx_x * xstride_31*1 + idx_y * ystride_31*1 * dims_fd3d_pml_kernel2[31][0] + idx_z * zstride_31*1 * dims_fd3d_pml_kernel2[31][0] * dims_fd3d_pml_kernel2[31][1];
    arg32 += idx_x * xstride_32*1 + idx_y * ystride_32*1 * dims_fd3d_pml_kernel2[32][0] + idx_z * zstride_32*1 * dims_fd3d_pml_kernel2[32][0] * dims_fd3d_pml_kernel2[32][1];

    if(idx_x < size0 && idx_y < size1 && idx_z < size2) {

        const ACC<float> argp7(dims_fd3d_pml_kernel2[7][0], dims_fd3d_pml_kernel2[7][1], arg7);
        const ACC<float> argp8(dims_fd3d_pml_kernel2[8][0], dims_fd3d_pml_kernel2[8][1], arg8);
        const ACC<float> argp9(dims_fd3d_pml_kernel2[9][0], dims_fd3d_pml_kernel2[9][1], arg9);
        const ACC<float> argp10(dims_fd3d_pml_kernel2[10][0], dims_fd3d_pml_kernel2[10][1], arg10);
        const ACC<float> argp11(dims_fd3d_pml_kernel2[11][0], dims_fd3d_pml_kernel2[11][1], arg11);
        const ACC<float> argp12(dims_fd3d_pml_kernel2[12][0], dims_fd3d_pml_kernel2[12][1], arg12);
        const ACC<float> argp13(dims_fd3d_pml_kernel2[13][0], dims_fd3d_pml_kernel2[13][1], arg13);
        const ACC<float> argp14(dims_fd3d_pml_kernel2[14][0], dims_fd3d_pml_kernel2[14][1], arg14);
        const ACC<float> argp15(dims_fd3d_pml_kernel2[15][0], dims_fd3d_pml_kernel2[15][1], arg15);
        const ACC<float> argp16(dims_fd3d_pml_kernel2[16][0], dims_fd3d_pml_kernel2[16][1], arg16);
        const ACC<float> argp17(dims_fd3d_pml_kernel2[17][0], dims_fd3d_pml_kernel2[17][1], arg17);
        const ACC<float> argp18(dims_fd3d_pml_kernel2[18][0], dims_fd3d_pml_kernel2[18][1], arg18);
        const ACC<float> argp19(dims_fd3d_pml_kernel2[19][0], dims_fd3d_pml_kernel2[19][1], arg19);
        const ACC<float> argp20(dims_fd3d_pml_kernel2[20][0], dims_fd3d_pml_kernel2[20][1], arg20);
        ACC<float> argp21(dims_fd3d_pml_kernel2[21][0], dims_fd3d_pml_kernel2[21][1], arg21);
        ACC<float> argp22(dims_fd3d_pml_kernel2[22][0], dims_fd3d_pml_kernel2[22][1], arg22);
        ACC<float> argp23(dims_fd3d_pml_kernel2[23][0], dims_fd3d_pml_kernel2[23][1], arg23);
        ACC<float> argp24(dims_fd3d_pml_kernel2[24][0], dims_fd3d_pml_kernel2[24][1], arg24);
        ACC<float> argp25(dims_fd3d_pml_kernel2[25][0], dims_fd3d_pml_kernel2[25][1], arg25);
        ACC<float> argp26(dims_fd3d_pml_kernel2[26][0], dims_fd3d_pml_kernel2[26][1], arg26);
        ACC<float> argp27(dims_fd3d_pml_kernel2[27][0], dims_fd3d_pml_kernel2[27][1], arg27);
        ACC<float> argp28(dims_fd3d_pml_kernel2[28][0], dims_fd3d_pml_kernel2[28][1], arg28);
        ACC<float> argp29(dims_fd3d_pml_kernel2[29][0], dims_fd3d_pml_kernel2[29][1], arg29);
        ACC<float> argp30(dims_fd3d_pml_kernel2[30][0], dims_fd3d_pml_kernel2[30][1], arg30);
        ACC<float> argp31(dims_fd3d_pml_kernel2[31][0], dims_fd3d_pml_kernel2[31][1], arg31);
        ACC<float> argp32(dims_fd3d_pml_kernel2[32][0], dims_fd3d_pml_kernel2[32][1], arg32);

        fd3d_pml_kernel2_gpu(&arg0, &arg1, &arg2, arg_idx, &arg4, &arg5, &arg6, argp7, argp8, argp9, argp10, argp11, argp12, argp13, argp14, argp15, argp16, argp17, argp18, argp19, argp20, argp21, argp22, argp23, argp24, argp25, argp26, argp27, argp28, argp29, argp30, argp31, argp32);

    }// End of cuda index in_range check

}// End of cuda kernel wrapper function

//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_fd3d_pml_kernel2(
    const char * name,
    ops_block block,
    int dim,
    int *range,
    ops_arg arg0,
    ops_arg arg1,
    ops_arg arg2,
    ops_arg arg3,
    ops_arg arg4,
    ops_arg arg5,
    ops_arg arg6,
    ops_arg arg7,
    ops_arg arg8,
    ops_arg arg9,
    ops_arg arg10,
    ops_arg arg11,
    ops_arg arg12,
    ops_arg arg13,
    ops_arg arg14,
    ops_arg arg15,
    ops_arg arg16,
    ops_arg arg17,
    ops_arg arg18,
    ops_arg arg19,
    ops_arg arg20,
    ops_arg arg21,
    ops_arg arg22,
    ops_arg arg23,
    ops_arg arg24,
    ops_arg arg25,
    ops_arg arg26,
    ops_arg arg27,
    ops_arg arg28,
    ops_arg arg29,
    ops_arg arg30,
    ops_arg arg31,
    ops_arg arg32
)
{ 
#else
void ops_par_loop_fd3d_pml_kernel2_execute(ops_kernel_descriptor *desc)
{
    ops_block block = desc->block;
    int dim = desc->dim;
    int *range = desc->range;
    ops_arg arg0 = desc->args[0];
    ops_arg arg1 = desc->args[1];
    ops_arg arg2 = desc->args[2];
    ops_arg arg3 = desc->args[3];
    ops_arg arg4 = desc->args[4];
    ops_arg arg5 = desc->args[5];
    ops_arg arg6 = desc->args[6];
    ops_arg arg7 = desc->args[7];
    ops_arg arg8 = desc->args[8];
    ops_arg arg9 = desc->args[9];
    ops_arg arg10 = desc->args[10];
    ops_arg arg11 = desc->args[11];
    ops_arg arg12 = desc->args[12];
    ops_arg arg13 = desc->args[13];
    ops_arg arg14 = desc->args[14];
    ops_arg arg15 = desc->args[15];
    ops_arg arg16 = desc->args[16];
    ops_arg arg17 = desc->args[17];
    ops_arg arg18 = desc->args[18];
    ops_arg arg19 = desc->args[19];
    ops_arg arg20 = desc->args[20];
    ops_arg arg21 = desc->args[21];
    ops_arg arg22 = desc->args[22];
    ops_arg arg23 = desc->args[23];
    ops_arg arg24 = desc->args[24];
    ops_arg arg25 = desc->args[25];
    ops_arg arg26 = desc->args[26];
    ops_arg arg27 = desc->args[27];
    ops_arg arg28 = desc->args[28];
    ops_arg arg29 = desc->args[29];
    ops_arg arg30 = desc->args[30];
    ops_arg arg31 = desc->args[31];
    ops_arg arg32 = desc->args[32];
#endif

//  ======
//  Timing
//  ======
    double __t1, __t2, __c1, __c2;

    ops_arg args[33];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;
    args[5] = arg5;
    args[6] = arg6;
    args[7] = arg7;
    args[8] = arg8;
    args[9] = arg9;
    args[10] = arg10;
    args[11] = arg11;
    args[12] = arg12;
    args[13] = arg13;
    args[14] = arg14;
    args[15] = arg15;
    args[16] = arg16;
    args[17] = arg17;
    args[18] = arg18;
    args[19] = arg19;
    args[20] = arg20;
    args[21] = arg21;
    args[22] = arg22;
    args[23] = arg23;
    args[24] = arg24;
    args[25] = arg25;
    args[26] = arg26;
    args[27] = arg27;
    args[28] = arg28;
    args[29] = arg29;
    args[30] = arg30;
    args[31] = arg31;
    args[32] = arg32;

#if defined(CHECKPOINTING) && !defined(OPS_LAZY)
    if (!ops_checkpointing_before(args, 33, range, 4)) return;
#endif

    if (block->instance->OPS_diags > 1)
    {
        ops_timing_realloc(block->instance, 4, "fd3d_pml_kernel2");
        block->instance->OPS_kernels[4].count++;
        ops_timers_core(&__c1, &__t1);
    }

//  =================================================
//  compute locally allocated range for the sub-block
//  =================================================
    int start_indx[3];
    int end_indx[3];
    int arg_idx[3];

#if defined(OPS_LAZY) || !defined(OPS_MPI)
    for (int n = 0; n < 3; n++) {
        start_indx[n] = range[2*n];
        end_indx[n]   = range[2*n+1];
    }
#else
    if (compute_ranges(args, 33, block, range, start_indx, end_indx, arg_idx) < 0) return;
#endif

#if defined(OPS_MPI)
#if defined(OPS_LAZY)
    sub_block_list sb = OPS_sub_block_list[block->index];
    arg_idx[0] = sb->decomp_disp[0]+start_indx[0];
    arg_idx[1] = sb->decomp_disp[1]+start_indx[1];
    arg_idx[2] = sb->decomp_disp[2]+start_indx[2];
#endif  // OPS_LAZY
#else   // OPS_MPI
    arg_idx[0] = start_indx[0];
    arg_idx[1] = start_indx[1];
    arg_idx[2] = start_indx[2];
#endif  // OPS_MPI

    int xdim7 = args[7].dat->size[0];
    int ydim7 = args[7].dat->size[1];
    int xdim8 = args[8].dat->size[0];
    int ydim8 = args[8].dat->size[1];
    int xdim9 = args[9].dat->size[0];
    int ydim9 = args[9].dat->size[1];
    int xdim10 = args[10].dat->size[0];
    int ydim10 = args[10].dat->size[1];
    int xdim11 = args[11].dat->size[0];
    int ydim11 = args[11].dat->size[1];
    int xdim12 = args[12].dat->size[0];
    int ydim12 = args[12].dat->size[1];
    int xdim13 = args[13].dat->size[0];
    int ydim13 = args[13].dat->size[1];
    int xdim14 = args[14].dat->size[0];
    int ydim14 = args[14].dat->size[1];
    int xdim15 = args[15].dat->size[0];
    int ydim15 = args[15].dat->size[1];
    int xdim16 = args[16].dat->size[0];
    int ydim16 = args[16].dat->size[1];
    int xdim17 = args[17].dat->size[0];
    int ydim17 = args[17].dat->size[1];
    int xdim18 = args[18].dat->size[0];
    int ydim18 = args[18].dat->size[1];
    int xdim19 = args[19].dat->size[0];
    int ydim19 = args[19].dat->size[1];
    int xdim20 = args[20].dat->size[0];
    int ydim20 = args[20].dat->size[1];
    int xdim21 = args[21].dat->size[0];
    int ydim21 = args[21].dat->size[1];
    int xdim22 = args[22].dat->size[0];
    int ydim22 = args[22].dat->size[1];
    int xdim23 = args[23].dat->size[0];
    int ydim23 = args[23].dat->size[1];
    int xdim24 = args[24].dat->size[0];
    int ydim24 = args[24].dat->size[1];
    int xdim25 = args[25].dat->size[0];
    int ydim25 = args[25].dat->size[1];
    int xdim26 = args[26].dat->size[0];
    int ydim26 = args[26].dat->size[1];
    int xdim27 = args[27].dat->size[0];
    int ydim27 = args[27].dat->size[1];
    int xdim28 = args[28].dat->size[0];
    int ydim28 = args[28].dat->size[1];
    int xdim29 = args[29].dat->size[0];
    int ydim29 = args[29].dat->size[1];
    int xdim30 = args[30].dat->size[0];
    int ydim30 = args[30].dat->size[1];
    int xdim31 = args[31].dat->size[0];
    int ydim31 = args[31].dat->size[1];
    int xdim32 = args[32].dat->size[0];
    int ydim32 = args[32].dat->size[1];

    if (xdim7 != dims_fd3d_pml_kernel2_h[7][0] || ydim7 != dims_fd3d_pml_kernel2_h[7][1] || xdim8 != dims_fd3d_pml_kernel2_h[8][0] || ydim8 != dims_fd3d_pml_kernel2_h[8][1] || xdim9 != dims_fd3d_pml_kernel2_h[9][0] || ydim9 != dims_fd3d_pml_kernel2_h[9][1] || xdim10 != dims_fd3d_pml_kernel2_h[10][0] || ydim10 != dims_fd3d_pml_kernel2_h[10][1] || xdim11 != dims_fd3d_pml_kernel2_h[11][0] || ydim11 != dims_fd3d_pml_kernel2_h[11][1] || xdim12 != dims_fd3d_pml_kernel2_h[12][0] || ydim12 != dims_fd3d_pml_kernel2_h[12][1] || xdim13 != dims_fd3d_pml_kernel2_h[13][0] || ydim13 != dims_fd3d_pml_kernel2_h[13][1] || xdim14 != dims_fd3d_pml_kernel2_h[14][0] || ydim14 != dims_fd3d_pml_kernel2_h[14][1] || xdim15 != dims_fd3d_pml_kernel2_h[15][0] || ydim15 != dims_fd3d_pml_kernel2_h[15][1] || xdim16 != dims_fd3d_pml_kernel2_h[16][0] || ydim16 != dims_fd3d_pml_kernel2_h[16][1] || xdim17 != dims_fd3d_pml_kernel2_h[17][0] || ydim17 != dims_fd3d_pml_kernel2_h[17][1] || xdim18 != dims_fd3d_pml_kernel2_h[18][0] || ydim18 != dims_fd3d_pml_kernel2_h[18][1] || xdim19 != dims_fd3d_pml_kernel2_h[19][0] || ydim19 != dims_fd3d_pml_kernel2_h[19][1] || xdim20 != dims_fd3d_pml_kernel2_h[20][0] || ydim20 != dims_fd3d_pml_kernel2_h[20][1] || xdim21 != dims_fd3d_pml_kernel2_h[21][0] || ydim21 != dims_fd3d_pml_kernel2_h[21][1] || xdim22 != dims_fd3d_pml_kernel2_h[22][0] || ydim22 != dims_fd3d_pml_kernel2_h[22][1] || xdim23 != dims_fd3d_pml_kernel2_h[23][0] || ydim23 != dims_fd3d_pml_kernel2_h[23][1] || xdim24 != dims_fd3d_pml_kernel2_h[24][0] || ydim24 != dims_fd3d_pml_kernel2_h[24][1] || xdim25 != dims_fd3d_pml_kernel2_h[25][0] || ydim25 != dims_fd3d_pml_kernel2_h[25][1] || xdim26 != dims_fd3d_pml_kernel2_h[26][0] || ydim26 != dims_fd3d_pml_kernel2_h[26][1] || xdim27 != dims_fd3d_pml_kernel2_h[27][0] || ydim27 != dims_fd3d_pml_kernel2_h[27][1] || xdim28 != dims_fd3d_pml_kernel2_h[28][0] || ydim28 != dims_fd3d_pml_kernel2_h[28][1] || xdim29 != dims_fd3d_pml_kernel2_h[29][0] || ydim29 != dims_fd3d_pml_kernel2_h[29][1] || xdim30 != dims_fd3d_pml_kernel2_h[30][0] || ydim30 != dims_fd3d_pml_kernel2_h[30][1] || xdim31 != dims_fd3d_pml_kernel2_h[31][0] || ydim31 != dims_fd3d_pml_kernel2_h[31][1] || xdim32 != dims_fd3d_pml_kernel2_h[32][0] || ydim32 != dims_fd3d_pml_kernel2_h[32][1]) {
        dims_fd3d_pml_kernel2_h[7][0] = xdim7;
        dims_fd3d_pml_kernel2_h[7][1] = ydim7;
        dims_fd3d_pml_kernel2_h[8][0] = xdim8;
        dims_fd3d_pml_kernel2_h[8][1] = ydim8;
        dims_fd3d_pml_kernel2_h[9][0] = xdim9;
        dims_fd3d_pml_kernel2_h[9][1] = ydim9;
        dims_fd3d_pml_kernel2_h[10][0] = xdim10;
        dims_fd3d_pml_kernel2_h[10][1] = ydim10;
        dims_fd3d_pml_kernel2_h[11][0] = xdim11;
        dims_fd3d_pml_kernel2_h[11][1] = ydim11;
        dims_fd3d_pml_kernel2_h[12][0] = xdim12;
        dims_fd3d_pml_kernel2_h[12][1] = ydim12;
        dims_fd3d_pml_kernel2_h[13][0] = xdim13;
        dims_fd3d_pml_kernel2_h[13][1] = ydim13;
        dims_fd3d_pml_kernel2_h[14][0] = xdim14;
        dims_fd3d_pml_kernel2_h[14][1] = ydim14;
        dims_fd3d_pml_kernel2_h[15][0] = xdim15;
        dims_fd3d_pml_kernel2_h[15][1] = ydim15;
        dims_fd3d_pml_kernel2_h[16][0] = xdim16;
        dims_fd3d_pml_kernel2_h[16][1] = ydim16;
        dims_fd3d_pml_kernel2_h[17][0] = xdim17;
        dims_fd3d_pml_kernel2_h[17][1] = ydim17;
        dims_fd3d_pml_kernel2_h[18][0] = xdim18;
        dims_fd3d_pml_kernel2_h[18][1] = ydim18;
        dims_fd3d_pml_kernel2_h[19][0] = xdim19;
        dims_fd3d_pml_kernel2_h[19][1] = ydim19;
        dims_fd3d_pml_kernel2_h[20][0] = xdim20;
        dims_fd3d_pml_kernel2_h[20][1] = ydim20;
        dims_fd3d_pml_kernel2_h[21][0] = xdim21;
        dims_fd3d_pml_kernel2_h[21][1] = ydim21;
        dims_fd3d_pml_kernel2_h[22][0] = xdim22;
        dims_fd3d_pml_kernel2_h[22][1] = ydim22;
        dims_fd3d_pml_kernel2_h[23][0] = xdim23;
        dims_fd3d_pml_kernel2_h[23][1] = ydim23;
        dims_fd3d_pml_kernel2_h[24][0] = xdim24;
        dims_fd3d_pml_kernel2_h[24][1] = ydim24;
        dims_fd3d_pml_kernel2_h[25][0] = xdim25;
        dims_fd3d_pml_kernel2_h[25][1] = ydim25;
        dims_fd3d_pml_kernel2_h[26][0] = xdim26;
        dims_fd3d_pml_kernel2_h[26][1] = ydim26;
        dims_fd3d_pml_kernel2_h[27][0] = xdim27;
        dims_fd3d_pml_kernel2_h[27][1] = ydim27;
        dims_fd3d_pml_kernel2_h[28][0] = xdim28;
        dims_fd3d_pml_kernel2_h[28][1] = ydim28;
        dims_fd3d_pml_kernel2_h[29][0] = xdim29;
        dims_fd3d_pml_kernel2_h[29][1] = ydim29;
        dims_fd3d_pml_kernel2_h[30][0] = xdim30;
        dims_fd3d_pml_kernel2_h[30][1] = ydim30;
        dims_fd3d_pml_kernel2_h[31][0] = xdim31;
        dims_fd3d_pml_kernel2_h[31][1] = ydim31;
        dims_fd3d_pml_kernel2_h[32][0] = xdim32;
        dims_fd3d_pml_kernel2_h[32][1] = ydim32;

        cutilSafeCall(block->instance->ostream(), cudaMemcpyToSymbol( dims_fd3d_pml_kernel2, dims_fd3d_pml_kernel2_h, sizeof(dims_fd3d_pml_kernel2)));
    }

    int x_size = MAX(0,end_indx[0]-start_indx[0]);
    int y_size = MAX(0,end_indx[1]-start_indx[1]);
    int z_size = MAX(0,end_indx[2]-start_indx[2]);

    dim3 grid( (x_size-1)/block->instance->OPS_block_size_x + 1, (y_size-1)/block->instance->OPS_block_size_y + 1, (z_size-1)/block->instance->OPS_block_size_z + 1);

    dim3 tblock(block->instance->OPS_block_size_x,block->instance->OPS_block_size_y,block->instance->OPS_block_size_z);

    long long int dat7 = (block->instance->OPS_soa ? args[7].dat->type_size : args[7].dat->elem_size);
    long long int dat8 = (block->instance->OPS_soa ? args[8].dat->type_size : args[8].dat->elem_size);
    long long int dat9 = (block->instance->OPS_soa ? args[9].dat->type_size : args[9].dat->elem_size);
    long long int dat10 = (block->instance->OPS_soa ? args[10].dat->type_size : args[10].dat->elem_size);
    long long int dat11 = (block->instance->OPS_soa ? args[11].dat->type_size : args[11].dat->elem_size);
    long long int dat12 = (block->instance->OPS_soa ? args[12].dat->type_size : args[12].dat->elem_size);
    long long int dat13 = (block->instance->OPS_soa ? args[13].dat->type_size : args[13].dat->elem_size);
    long long int dat14 = (block->instance->OPS_soa ? args[14].dat->type_size : args[14].dat->elem_size);
    long long int dat15 = (block->instance->OPS_soa ? args[15].dat->type_size : args[15].dat->elem_size);
    long long int dat16 = (block->instance->OPS_soa ? args[16].dat->type_size : args[16].dat->elem_size);
    long long int dat17 = (block->instance->OPS_soa ? args[17].dat->type_size : args[17].dat->elem_size);
    long long int dat18 = (block->instance->OPS_soa ? args[18].dat->type_size : args[18].dat->elem_size);
    long long int dat19 = (block->instance->OPS_soa ? args[19].dat->type_size : args[19].dat->elem_size);
    long long int dat20 = (block->instance->OPS_soa ? args[20].dat->type_size : args[20].dat->elem_size);
    long long int dat21 = (block->instance->OPS_soa ? args[21].dat->type_size : args[21].dat->elem_size);
    long long int dat22 = (block->instance->OPS_soa ? args[22].dat->type_size : args[22].dat->elem_size);
    long long int dat23 = (block->instance->OPS_soa ? args[23].dat->type_size : args[23].dat->elem_size);
    long long int dat24 = (block->instance->OPS_soa ? args[24].dat->type_size : args[24].dat->elem_size);
    long long int dat25 = (block->instance->OPS_soa ? args[25].dat->type_size : args[25].dat->elem_size);
    long long int dat26 = (block->instance->OPS_soa ? args[26].dat->type_size : args[26].dat->elem_size);
    long long int dat27 = (block->instance->OPS_soa ? args[27].dat->type_size : args[27].dat->elem_size);
    long long int dat28 = (block->instance->OPS_soa ? args[28].dat->type_size : args[28].dat->elem_size);
    long long int dat29 = (block->instance->OPS_soa ? args[29].dat->type_size : args[29].dat->elem_size);
    long long int dat30 = (block->instance->OPS_soa ? args[30].dat->type_size : args[30].dat->elem_size);
    long long int dat31 = (block->instance->OPS_soa ? args[31].dat->type_size : args[31].dat->elem_size);
    long long int dat32 = (block->instance->OPS_soa ? args[32].dat->type_size : args[32].dat->elem_size);

    char *p_a[33];

//  =======================
//  set up initial pointers
//  =======================
    long long int base7 = args[7].dat->base_offset + dat7 * 1 * (start_indx[0] * args[7].stencil->stride[0]);
    base7 = base7 + dat7 * 
                     args[7].dat->size[0] * 
                     (start_indx[1] * args[7].stencil->stride[1]);
    base7 = base7 + dat7 * 
                     args[7].dat->size[0] * 
                     args[7].dat->size[1] * 
                     (start_indx[2] * args[7].stencil->stride[2]);
    p_a[7] = (char *)args[7].data_d + base7;

    long long int base8 = args[8].dat->base_offset + dat8 * 1 * (start_indx[0] * args[8].stencil->stride[0]);
    base8 = base8 + dat8 * 
                     args[8].dat->size[0] * 
                     (start_indx[1] * args[8].stencil->stride[1]);
    base8 = base8 + dat8 * 
                     args[8].dat->size[0] * 
                     args[8].dat->size[1] * 
                     (start_indx[2] * args[8].stencil->stride[2]);
    p_a[8] = (char *)args[8].data_d + base8;

    long long int base9 = args[9].dat->base_offset + dat9 * 1 * (start_indx[0] * args[9].stencil->stride[0]);
    base9 = base9 + dat9 * 
                     args[9].dat->size[0] * 
                     (start_indx[1] * args[9].stencil->stride[1]);
    base9 = base9 + dat9 * 
                     args[9].dat->size[0] * 
                     args[9].dat->size[1] * 
                     (start_indx[2] * args[9].stencil->stride[2]);
    p_a[9] = (char *)args[9].data_d + base9;

    long long int base10 = args[10].dat->base_offset + dat10 * 1 * (start_indx[0] * args[10].stencil->stride[0]);
    base10 = base10 + dat10 * 
                     args[10].dat->size[0] * 
                     (start_indx[1] * args[10].stencil->stride[1]);
    base10 = base10 + dat10 * 
                     args[10].dat->size[0] * 
                     args[10].dat->size[1] * 
                     (start_indx[2] * args[10].stencil->stride[2]);
    p_a[10] = (char *)args[10].data_d + base10;

    long long int base11 = args[11].dat->base_offset + dat11 * 1 * (start_indx[0] * args[11].stencil->stride[0]);
    base11 = base11 + dat11 * 
                     args[11].dat->size[0] * 
                     (start_indx[1] * args[11].stencil->stride[1]);
    base11 = base11 + dat11 * 
                     args[11].dat->size[0] * 
                     args[11].dat->size[1] * 
                     (start_indx[2] * args[11].stencil->stride[2]);
    p_a[11] = (char *)args[11].data_d + base11;

    long long int base12 = args[12].dat->base_offset + dat12 * 1 * (start_indx[0] * args[12].stencil->stride[0]);
    base12 = base12 + dat12 * 
                     args[12].dat->size[0] * 
                     (start_indx[1] * args[12].stencil->stride[1]);
    base12 = base12 + dat12 * 
                     args[12].dat->size[0] * 
                     args[12].dat->size[1] * 
                     (start_indx[2] * args[12].stencil->stride[2]);
    p_a[12] = (char *)args[12].data_d + base12;

    long long int base13 = args[13].dat->base_offset + dat13 * 1 * (start_indx[0] * args[13].stencil->stride[0]);
    base13 = base13 + dat13 * 
                     args[13].dat->size[0] * 
                     (start_indx[1] * args[13].stencil->stride[1]);
    base13 = base13 + dat13 * 
                     args[13].dat->size[0] * 
                     args[13].dat->size[1] * 
                     (start_indx[2] * args[13].stencil->stride[2]);
    p_a[13] = (char *)args[13].data_d + base13;

    long long int base14 = args[14].dat->base_offset + dat14 * 1 * (start_indx[0] * args[14].stencil->stride[0]);
    base14 = base14 + dat14 * 
                     args[14].dat->size[0] * 
                     (start_indx[1] * args[14].stencil->stride[1]);
    base14 = base14 + dat14 * 
                     args[14].dat->size[0] * 
                     args[14].dat->size[1] * 
                     (start_indx[2] * args[14].stencil->stride[2]);
    p_a[14] = (char *)args[14].data_d + base14;

    long long int base15 = args[15].dat->base_offset + dat15 * 1 * (start_indx[0] * args[15].stencil->stride[0]);
    base15 = base15 + dat15 * 
                     args[15].dat->size[0] * 
                     (start_indx[1] * args[15].stencil->stride[1]);
    base15 = base15 + dat15 * 
                     args[15].dat->size[0] * 
                     args[15].dat->size[1] * 
                     (start_indx[2] * args[15].stencil->stride[2]);
    p_a[15] = (char *)args[15].data_d + base15;

    long long int base16 = args[16].dat->base_offset + dat16 * 1 * (start_indx[0] * args[16].stencil->stride[0]);
    base16 = base16 + dat16 * 
                     args[16].dat->size[0] * 
                     (start_indx[1] * args[16].stencil->stride[1]);
    base16 = base16 + dat16 * 
                     args[16].dat->size[0] * 
                     args[16].dat->size[1] * 
                     (start_indx[2] * args[16].stencil->stride[2]);
    p_a[16] = (char *)args[16].data_d + base16;

    long long int base17 = args[17].dat->base_offset + dat17 * 1 * (start_indx[0] * args[17].stencil->stride[0]);
    base17 = base17 + dat17 * 
                     args[17].dat->size[0] * 
                     (start_indx[1] * args[17].stencil->stride[1]);
    base17 = base17 + dat17 * 
                     args[17].dat->size[0] * 
                     args[17].dat->size[1] * 
                     (start_indx[2] * args[17].stencil->stride[2]);
    p_a[17] = (char *)args[17].data_d + base17;

    long long int base18 = args[18].dat->base_offset + dat18 * 1 * (start_indx[0] * args[18].stencil->stride[0]);
    base18 = base18 + dat18 * 
                     args[18].dat->size[0] * 
                     (start_indx[1] * args[18].stencil->stride[1]);
    base18 = base18 + dat18 * 
                     args[18].dat->size[0] * 
                     args[18].dat->size[1] * 
                     (start_indx[2] * args[18].stencil->stride[2]);
    p_a[18] = (char *)args[18].data_d + base18;

    long long int base19 = args[19].dat->base_offset + dat19 * 1 * (start_indx[0] * args[19].stencil->stride[0]);
    base19 = base19 + dat19 * 
                     args[19].dat->size[0] * 
                     (start_indx[1] * args[19].stencil->stride[1]);
    base19 = base19 + dat19 * 
                     args[19].dat->size[0] * 
                     args[19].dat->size[1] * 
                     (start_indx[2] * args[19].stencil->stride[2]);
    p_a[19] = (char *)args[19].data_d + base19;

    long long int base20 = args[20].dat->base_offset + dat20 * 1 * (start_indx[0] * args[20].stencil->stride[0]);
    base20 = base20 + dat20 * 
                     args[20].dat->size[0] * 
                     (start_indx[1] * args[20].stencil->stride[1]);
    base20 = base20 + dat20 * 
                     args[20].dat->size[0] * 
                     args[20].dat->size[1] * 
                     (start_indx[2] * args[20].stencil->stride[2]);
    p_a[20] = (char *)args[20].data_d + base20;

    long long int base21 = args[21].dat->base_offset + dat21 * 1 * (start_indx[0] * args[21].stencil->stride[0]);
    base21 = base21 + dat21 * 
                     args[21].dat->size[0] * 
                     (start_indx[1] * args[21].stencil->stride[1]);
    base21 = base21 + dat21 * 
                     args[21].dat->size[0] * 
                     args[21].dat->size[1] * 
                     (start_indx[2] * args[21].stencil->stride[2]);
    p_a[21] = (char *)args[21].data_d + base21;

    long long int base22 = args[22].dat->base_offset + dat22 * 1 * (start_indx[0] * args[22].stencil->stride[0]);
    base22 = base22 + dat22 * 
                     args[22].dat->size[0] * 
                     (start_indx[1] * args[22].stencil->stride[1]);
    base22 = base22 + dat22 * 
                     args[22].dat->size[0] * 
                     args[22].dat->size[1] * 
                     (start_indx[2] * args[22].stencil->stride[2]);
    p_a[22] = (char *)args[22].data_d + base22;

    long long int base23 = args[23].dat->base_offset + dat23 * 1 * (start_indx[0] * args[23].stencil->stride[0]);
    base23 = base23 + dat23 * 
                     args[23].dat->size[0] * 
                     (start_indx[1] * args[23].stencil->stride[1]);
    base23 = base23 + dat23 * 
                     args[23].dat->size[0] * 
                     args[23].dat->size[1] * 
                     (start_indx[2] * args[23].stencil->stride[2]);
    p_a[23] = (char *)args[23].data_d + base23;

    long long int base24 = args[24].dat->base_offset + dat24 * 1 * (start_indx[0] * args[24].stencil->stride[0]);
    base24 = base24 + dat24 * 
                     args[24].dat->size[0] * 
                     (start_indx[1] * args[24].stencil->stride[1]);
    base24 = base24 + dat24 * 
                     args[24].dat->size[0] * 
                     args[24].dat->size[1] * 
                     (start_indx[2] * args[24].stencil->stride[2]);
    p_a[24] = (char *)args[24].data_d + base24;

    long long int base25 = args[25].dat->base_offset + dat25 * 1 * (start_indx[0] * args[25].stencil->stride[0]);
    base25 = base25 + dat25 * 
                     args[25].dat->size[0] * 
                     (start_indx[1] * args[25].stencil->stride[1]);
    base25 = base25 + dat25 * 
                     args[25].dat->size[0] * 
                     args[25].dat->size[1] * 
                     (start_indx[2] * args[25].stencil->stride[2]);
    p_a[25] = (char *)args[25].data_d + base25;

    long long int base26 = args[26].dat->base_offset + dat26 * 1 * (start_indx[0] * args[26].stencil->stride[0]);
    base26 = base26 + dat26 * 
                     args[26].dat->size[0] * 
                     (start_indx[1] * args[26].stencil->stride[1]);
    base26 = base26 + dat26 * 
                     args[26].dat->size[0] * 
                     args[26].dat->size[1] * 
                     (start_indx[2] * args[26].stencil->stride[2]);
    p_a[26] = (char *)args[26].data_d + base26;

    long long int base27 = args[27].dat->base_offset + dat27 * 1 * (start_indx[0] * args[27].stencil->stride[0]);
    base27 = base27 + dat27 * 
                     args[27].dat->size[0] * 
                     (start_indx[1] * args[27].stencil->stride[1]);
    base27 = base27 + dat27 * 
                     args[27].dat->size[0] * 
                     args[27].dat->size[1] * 
                     (start_indx[2] * args[27].stencil->stride[2]);
    p_a[27] = (char *)args[27].data_d + base27;

    long long int base28 = args[28].dat->base_offset + dat28 * 1 * (start_indx[0] * args[28].stencil->stride[0]);
    base28 = base28 + dat28 * 
                     args[28].dat->size[0] * 
                     (start_indx[1] * args[28].stencil->stride[1]);
    base28 = base28 + dat28 * 
                     args[28].dat->size[0] * 
                     args[28].dat->size[1] * 
                     (start_indx[2] * args[28].stencil->stride[2]);
    p_a[28] = (char *)args[28].data_d + base28;

    long long int base29 = args[29].dat->base_offset + dat29 * 1 * (start_indx[0] * args[29].stencil->stride[0]);
    base29 = base29 + dat29 * 
                     args[29].dat->size[0] * 
                     (start_indx[1] * args[29].stencil->stride[1]);
    base29 = base29 + dat29 * 
                     args[29].dat->size[0] * 
                     args[29].dat->size[1] * 
                     (start_indx[2] * args[29].stencil->stride[2]);
    p_a[29] = (char *)args[29].data_d + base29;

    long long int base30 = args[30].dat->base_offset + dat30 * 1 * (start_indx[0] * args[30].stencil->stride[0]);
    base30 = base30 + dat30 * 
                     args[30].dat->size[0] * 
                     (start_indx[1] * args[30].stencil->stride[1]);
    base30 = base30 + dat30 * 
                     args[30].dat->size[0] * 
                     args[30].dat->size[1] * 
                     (start_indx[2] * args[30].stencil->stride[2]);
    p_a[30] = (char *)args[30].data_d + base30;

    long long int base31 = args[31].dat->base_offset + dat31 * 1 * (start_indx[0] * args[31].stencil->stride[0]);
    base31 = base31 + dat31 * 
                     args[31].dat->size[0] * 
                     (start_indx[1] * args[31].stencil->stride[1]);
    base31 = base31 + dat31 * 
                     args[31].dat->size[0] * 
                     args[31].dat->size[1] * 
                     (start_indx[2] * args[31].stencil->stride[2]);
    p_a[31] = (char *)args[31].data_d + base31;

    long long int base32 = args[32].dat->base_offset + dat32 * 1 * (start_indx[0] * args[32].stencil->stride[0]);
    base32 = base32 + dat32 * 
                     args[32].dat->size[0] * 
                     (start_indx[1] * args[32].stencil->stride[1]);
    base32 = base32 + dat32 * 
                     args[32].dat->size[0] * 
                     args[32].dat->size[1] * 
                     (start_indx[2] * args[32].stencil->stride[2]);
    p_a[32] = (char *)args[32].data_d + base32;

//  =============
//  Halo exchange
//  =============
#ifndef OPS_LAZY
    ops_H_D_exchanges_device(args, 33);
    ops_halo_exchanges(args, 33, range);
#endif

    if (block->instance->OPS_diags > 1) { 
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[4].mpi_time += __t2 - __t1;
    }

//  ==========================================================
//  ops_dat strides for offset calculation in wrapper function
//  ==========================================================
    int xstride_7, ystride_7, zstride_7;
    xstride_7 = args[7].stencil->stride[0];    ystride_7 = args[7].stencil->stride[1];
    zstride_7 = args[7].stencil->stride[2];
    int xstride_8, ystride_8, zstride_8;
    xstride_8 = args[8].stencil->stride[0];    ystride_8 = args[8].stencil->stride[1];
    zstride_8 = args[8].stencil->stride[2];
    int xstride_9, ystride_9, zstride_9;
    xstride_9 = args[9].stencil->stride[0];    ystride_9 = args[9].stencil->stride[1];
    zstride_9 = args[9].stencil->stride[2];
    int xstride_10, ystride_10, zstride_10;
    xstride_10 = args[10].stencil->stride[0];    ystride_10 = args[10].stencil->stride[1];
    zstride_10 = args[10].stencil->stride[2];
    int xstride_11, ystride_11, zstride_11;
    xstride_11 = args[11].stencil->stride[0];    ystride_11 = args[11].stencil->stride[1];
    zstride_11 = args[11].stencil->stride[2];
    int xstride_12, ystride_12, zstride_12;
    xstride_12 = args[12].stencil->stride[0];    ystride_12 = args[12].stencil->stride[1];
    zstride_12 = args[12].stencil->stride[2];
    int xstride_13, ystride_13, zstride_13;
    xstride_13 = args[13].stencil->stride[0];    ystride_13 = args[13].stencil->stride[1];
    zstride_13 = args[13].stencil->stride[2];
    int xstride_14, ystride_14, zstride_14;
    xstride_14 = args[14].stencil->stride[0];    ystride_14 = args[14].stencil->stride[1];
    zstride_14 = args[14].stencil->stride[2];
    int xstride_15, ystride_15, zstride_15;
    xstride_15 = args[15].stencil->stride[0];    ystride_15 = args[15].stencil->stride[1];
    zstride_15 = args[15].stencil->stride[2];
    int xstride_16, ystride_16, zstride_16;
    xstride_16 = args[16].stencil->stride[0];    ystride_16 = args[16].stencil->stride[1];
    zstride_16 = args[16].stencil->stride[2];
    int xstride_17, ystride_17, zstride_17;
    xstride_17 = args[17].stencil->stride[0];    ystride_17 = args[17].stencil->stride[1];
    zstride_17 = args[17].stencil->stride[2];
    int xstride_18, ystride_18, zstride_18;
    xstride_18 = args[18].stencil->stride[0];    ystride_18 = args[18].stencil->stride[1];
    zstride_18 = args[18].stencil->stride[2];
    int xstride_19, ystride_19, zstride_19;
    xstride_19 = args[19].stencil->stride[0];    ystride_19 = args[19].stencil->stride[1];
    zstride_19 = args[19].stencil->stride[2];
    int xstride_20, ystride_20, zstride_20;
    xstride_20 = args[20].stencil->stride[0];    ystride_20 = args[20].stencil->stride[1];
    zstride_20 = args[20].stencil->stride[2];
    int xstride_21, ystride_21, zstride_21;
    xstride_21 = args[21].stencil->stride[0];    ystride_21 = args[21].stencil->stride[1];
    zstride_21 = args[21].stencil->stride[2];
    int xstride_22, ystride_22, zstride_22;
    xstride_22 = args[22].stencil->stride[0];    ystride_22 = args[22].stencil->stride[1];
    zstride_22 = args[22].stencil->stride[2];
    int xstride_23, ystride_23, zstride_23;
    xstride_23 = args[23].stencil->stride[0];    ystride_23 = args[23].stencil->stride[1];
    zstride_23 = args[23].stencil->stride[2];
    int xstride_24, ystride_24, zstride_24;
    xstride_24 = args[24].stencil->stride[0];    ystride_24 = args[24].stencil->stride[1];
    zstride_24 = args[24].stencil->stride[2];
    int xstride_25, ystride_25, zstride_25;
    xstride_25 = args[25].stencil->stride[0];    ystride_25 = args[25].stencil->stride[1];
    zstride_25 = args[25].stencil->stride[2];
    int xstride_26, ystride_26, zstride_26;
    xstride_26 = args[26].stencil->stride[0];    ystride_26 = args[26].stencil->stride[1];
    zstride_26 = args[26].stencil->stride[2];
    int xstride_27, ystride_27, zstride_27;
    xstride_27 = args[27].stencil->stride[0];    ystride_27 = args[27].stencil->stride[1];
    zstride_27 = args[27].stencil->stride[2];
    int xstride_28, ystride_28, zstride_28;
    xstride_28 = args[28].stencil->stride[0];    ystride_28 = args[28].stencil->stride[1];
    zstride_28 = args[28].stencil->stride[2];
    int xstride_29, ystride_29, zstride_29;
    xstride_29 = args[29].stencil->stride[0];    ystride_29 = args[29].stencil->stride[1];
    zstride_29 = args[29].stencil->stride[2];
    int xstride_30, ystride_30, zstride_30;
    xstride_30 = args[30].stencil->stride[0];    ystride_30 = args[30].stencil->stride[1];
    zstride_30 = args[30].stencil->stride[2];
    int xstride_31, ystride_31, zstride_31;
    xstride_31 = args[31].stencil->stride[0];    ystride_31 = args[31].stencil->stride[1];
    zstride_31 = args[31].stencil->stride[2];
    int xstride_32, ystride_32, zstride_32;
    xstride_32 = args[32].stencil->stride[0];    ystride_32 = args[32].stencil->stride[1];
    zstride_32 = args[32].stencil->stride[2];

//  call kernel wrapper function, passing in pointers to data
    if (x_size > 0 && y_size > 0 && z_size > 0) {

        ops_fd3d_pml_kernel2<<<grid, tblock >>> (
                   *(int *)arg0.data, 
                   *(int *)arg1.data, 
                   *(int *)arg2.data, 
                   arg_idx[0], arg_idx[1], arg_idx[2], 
                   *(float *)arg4.data, 
                   *(float *)arg5.data, 
                   *(float *)arg6.data, 
                   (float *)p_a[7], xstride_7, ystride_7, zstride_7, 
                   (float *)p_a[8], xstride_8, ystride_8, zstride_8, 
                   (float *)p_a[9], xstride_9, ystride_9, zstride_9, 
                   (float *)p_a[10], xstride_10, ystride_10, zstride_10, 
                   (float *)p_a[11], xstride_11, ystride_11, zstride_11, 
                   (float *)p_a[12], xstride_12, ystride_12, zstride_12, 
                   (float *)p_a[13], xstride_13, ystride_13, zstride_13, 
                   (float *)p_a[14], xstride_14, ystride_14, zstride_14, 
                   (float *)p_a[15], xstride_15, ystride_15, zstride_15, 
                   (float *)p_a[16], xstride_16, ystride_16, zstride_16, 
                   (float *)p_a[17], xstride_17, ystride_17, zstride_17, 
                   (float *)p_a[18], xstride_18, ystride_18, zstride_18, 
                   (float *)p_a[19], xstride_19, ystride_19, zstride_19, 
                   (float *)p_a[20], xstride_20, ystride_20, zstride_20, 
                   (float *)p_a[21], xstride_21, ystride_21, zstride_21, 
                   (float *)p_a[22], xstride_22, ystride_22, zstride_22, 
                   (float *)p_a[23], xstride_23, ystride_23, zstride_23, 
                   (float *)p_a[24], xstride_24, ystride_24, zstride_24, 
                   (float *)p_a[25], xstride_25, ystride_25, zstride_25, 
                   (float *)p_a[26], xstride_26, ystride_26, zstride_26, 
                   (float *)p_a[27], xstride_27, ystride_27, zstride_27, 
                   (float *)p_a[28], xstride_28, ystride_28, zstride_28, 
                   (float *)p_a[29], xstride_29, ystride_29, zstride_29, 
                   (float *)p_a[30], xstride_30, ystride_30, zstride_30, 
                   (float *)p_a[31], xstride_31, ystride_31, zstride_31, 
                   (float *)p_a[32], xstride_32, ystride_32, zstride_32, 
                   x_size, y_size, z_size);

    }

    cutilSafeCall(block->instance->ostream(), cudaGetLastError());

    if(block->instance->OPS_diags > 1) {
        cutilSafeCall(block->instance->ostream(), cudaDeviceSynchronize());
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[4].time += __t1 - __t2;
    }

#ifndef OPS_LAZY
    ops_set_dirtybit_device(args, 33);
    ops_set_halo_dirtybit3(&args[21], range);
    ops_set_halo_dirtybit3(&args[22], range);
    ops_set_halo_dirtybit3(&args[23], range);
    ops_set_halo_dirtybit3(&args[24], range);
    ops_set_halo_dirtybit3(&args[25], range);
    ops_set_halo_dirtybit3(&args[26], range);
    ops_set_halo_dirtybit3(&args[27], range);
    ops_set_halo_dirtybit3(&args[28], range);
    ops_set_halo_dirtybit3(&args[29], range);
    ops_set_halo_dirtybit3(&args[30], range);
    ops_set_halo_dirtybit3(&args[31], range);
    ops_set_halo_dirtybit3(&args[32], range);
#endif

    if (block->instance->OPS_diags > 1) {
//      ====================
//      Update kernel record
//      ====================
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[4].mpi_time += __t2 - __t1;
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg7);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg8);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg9);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg10);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg11);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg12);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg13);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg14);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg15);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg16);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg17);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg18);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg19);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg20);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg21);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg22);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg23);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg24);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg25);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg26);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg27);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg28);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg29);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg30);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg31);
        block->instance->OPS_kernels[4].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg32);
    }
}

#ifdef OPS_LAZY
void ops_par_loop_fd3d_pml_kernel2(
    const char * name,
    ops_block block,
    int dim,
    int * range,
    ops_arg arg0,
    ops_arg arg1,
    ops_arg arg2,
    ops_arg arg3,
    ops_arg arg4,
    ops_arg arg5,
    ops_arg arg6,
    ops_arg arg7,
    ops_arg arg8,
    ops_arg arg9,
    ops_arg arg10,
    ops_arg arg11,
    ops_arg arg12,
    ops_arg arg13,
    ops_arg arg14,
    ops_arg arg15,
    ops_arg arg16,
    ops_arg arg17,
    ops_arg arg18,
    ops_arg arg19,
    ops_arg arg20,
    ops_arg arg21,
    ops_arg arg22,
    ops_arg arg23,
    ops_arg arg24,
    ops_arg arg25,
    ops_arg arg26,
    ops_arg arg27,
    ops_arg arg28,
    ops_arg arg29,
    ops_arg arg30,
    ops_arg arg31,
    ops_arg arg32
    )
{
    ops_arg args[33];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;
    args[5] = arg5;
    args[6] = arg6;
    args[7] = arg7;
    args[8] = arg8;
    args[9] = arg9;
    args[10] = arg10;
    args[11] = arg11;
    args[12] = arg12;
    args[13] = arg13;
    args[14] = arg14;
    args[15] = arg15;
    args[16] = arg16;
    args[17] = arg17;
    args[18] = arg18;
    args[19] = arg19;
    args[20] = arg20;
    args[21] = arg21;
    args[22] = arg22;
    args[23] = arg23;
    args[24] = arg24;
    args[25] = arg25;
    args[26] = arg26;
    args[27] = arg27;
    args[28] = arg28;
    args[29] = arg29;
    args[30] = arg30;
    args[31] = arg31;
    args[32] = arg32;

    create_kerneldesc_and_enque(name, "fd3d_pml_kernel2", args, 33, 4, dim, 1, range, block, ops_par_loop_fd3d_pml_kernel2_execute);
}
#endif
