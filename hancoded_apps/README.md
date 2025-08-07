## Handcoded HLS benchmark applications 

This subsection contains FPGA benchmark application source codes, compiled artifacts and profiling data.

These codes are besed on https://github.com/OP-DSL/StencilsOnFPGA. 

### Dependencies 

Dependencies are similar of code-generated applications. Check [dependencies](../codegen_apps/README.md#dependencies) section of codegen_apps [README.md](../codegen_apps/README.md).

### Getting started 

The HLS applications are organized into sperate project based on the target platform, containing it's own  Vitis-HLS codes, C++ host-side codes, prebuild host binary, prebuild FPGA xcl biniaries and generated profile data, etc. following manner given bellow.

<pre> codegen_apps/ 
    ├── README.md 
    ├── app_1/
    │   ├── u280_project/ 
    │   │   ├── bin
    │   │   ├── common/
    │   │   │   ├── include/
    │   │   │   └── src/
    │   │   ├── host/ 
    │   │   │   ├── include/
    │   │   │   └── src/
    │   │   ├── device/
    │   │   │   ├── include/
    │   │   │   └── src/
    │   │   ├── profile_data/
    │   │   ├── config.ini (or config.cfg)
    │   │   ├── Makefile 
    │   │   └── run_script_hls.sh 
    │   └── vck5000_project/
    ├── app_2/
    │  .... </pre>

Inside each project, common, host and device code can be found in seperated folders. Additionally, config.ini\config.cfg file for Vitis linking configurates will be a part of source files. pre-build binaries and reports can be found inside ```bin``` folder. Generated profile data artifacts can be found inside ```profile_data```. 

### Pre-gerated data artifacts

Each project contain our benchmarked profile data under ```hls/profile_data``` with following structure:

<pre> codegen_app/u280_project/ 
    ├── hls/
    │   ├── profile_data/hw 
    │   │   ├── 30_30_perf_profile.csv
    │   │   │  ....
    │   │   └── profile_summary.csv
    │  ....
    ....</pre>

Runtime profile data recoreded as ```*_perf_profile.csv``` where the prefix will be grid dimensions. These profile logs contains recorded runtimes for multiple runs. 

Additionally, support script from OPS can be used to generate profile summary (which is alread added as artifacts). Further details in section []() how to run these support scripts to generate profile summary.

### Build OPS

Follow [this](../codegen_apps/README.md#build-ops).

### Build + Run Apps
Follow [thils](../codegen_apps/README.md#build--run-apps).

NOTE: Handcoded applications do not have power profiling.

