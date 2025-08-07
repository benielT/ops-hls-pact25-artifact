## GPU benchmark applications 

This subsection contains FPGA benchmark application OPS source codes, generated HLS device/host source codes, compiled artifacts and profiling data.

### Dependencies 

#### Hardware Requirements:
* AMD (Xilinx) Alveo U280
* AMD (Xilinx) Versal VCK5000

#### Runtime Software Requirements:
* Vitis 2022.2 compatible XRT-runtime (for U280)
* Vitis 2022.1 compatible XRT-runtime (for VCK5000)
* GNU Make (Any GNU Make compatible with GNU Make 4.2.1)
* OPS 

The OPS with correct branch for Vitis-HLS codegen added as git submodule. or clone relevent submodule and setup instruction can be found in main [README.md](../README.md).

#### Build Software Requirements:
* python 3 > 3.8
* GNU C++ 9.4 (or other Compatible versions)

NOTE: These are required additional to [runtime software requirements](#runtime-software-requirements).

#### Benchmarked System Specs:
* Processor         : AMD EPYC 7763 (64 cores) - 2X
* Memory            : 514GB RAM
* OS                : Linux/Ubuntu 20.04.6 LTS

U280 specific specs:
* Vitis version     : 2022.2
* XRT Version       : 2.13.479
* Platform          : xilinx_u280_gen3x16_xdma_1_202211_1

VCK5000 specific specs:
* Vitis version     : 2022.2
* XRT Version       : 2.13.478
* Platform          : xilinx_vck5000_gen4x8_xdma_2_202210_1

### Getting started 

The code generated HLS applications are organized into sperate project based on the target platform, containing it's own OPS source code, generated HLS codes, prebuild host binary, prebuild FPGA xcl biniaries and generated profile data, etc. following mannerg given bellow.

<pre> codegen_apps/ 
    ├── README.md 
    ├── app_1/
    │   ├── u280_project/ 
    │   │   ├── hls/ 
    │   │   │   ├── build/hw/
    │   │   │   │   ├── temp_dir/
    │   │   │   │   │  ....
    │   │   │   │   ├── app_1_host
    │   │   │   │   ├── app_1.xclbin
    │   │   │   ├── device/
    │   │   │   │   ├── include/
    │   │   │   │   └── src/
    │   │   │   ├── host/
    │   │   │   │   ├── kernel_wrappers/
    │   │   │   │   └── xrt.cfg
    │   │   │   └── profile_data/hw
    │   │   ├── app_1.cpp 
    │   │   │ ....
    │   │   ├── config_u280.json
    │   │   ├── Makefile 
    │   │   └── run_script.sh 
    │   └── vck5000_project/
    ├── app_2/
    │  .... </pre>

Most of the HLS codegen application have u280_project, vck5000_project seperated out in-order to maintain OPS HLS cofiguration seperately and maintain reproducability, with underlying OPS code is exactly same. 

Inside each project, for example [poisson2d/u280_project](./poisson2d/u280_project/), contains OPS and related CPP source files can be found in the first directory level. Then the code-generated source files, can be found inside [hls/device](./poisson2d/u280_project/hls/device/) and [hls/host](./poisson2d/u280_project/hls/host/) folders. The HLS hardware build artifcats can be found inside [hls/build](./poisson2d/u280_project/hls/build/). Finaly the profile data artifacts can be found inside [hls/profile_data](./poisson2d/u280_project/hls/profile_data/).

### Pre-generated data artifacts

Each project contain our benchmarked profile data under ```hls/profile_data``` with following structure:

<pre> codegen_app/u280_project/ 
    ├── hls/
    │   ├── profile_data/hw 
    │   │   ├── 30_30_perf_profile.csv
    │   │   ├── 30_30_hls_power_profile.csv
    │   │   │  ....
    │   │   ├── power_profile_summary.csv
    │   │   └── profile_summary.csv
    │  ....
    ....</pre>

Runtime profile data recoreded as ```*_perf_profile.csv``` where the prefix will be grid dimensions. These profile logs contains recorded runtimes for multiple runs. 

Power profile data recorded as ```*_hls_power_profile.csv``` where the prefix will be grid dimensions. These power usage data is extracted using ```xbuitil``` via OPS support script, [power_profile_hls.sh](../OPS/scripts/power_profile_hls.sh) called by the ```run_script.sh``` in each project.

Additionally, OPS packaged with support scripts to generate profile summaries, which are added as artifacts. Further details in section []() how to run these support scripts to generate summeries.

### Build OPS
#### 1. Setup environment

Sample setup script for Vitis 2022.2, [source_kaust_vitis_2022_2_ops.sh](../scripts/source_kaust_vitis_2022_2_ops.sh) is given. Please modify it accordingly before source. NOTE: Make sure environment variable OPS_HLS_ARTIFACT_DIR set as in main [README.md Getting Started - Step 2](../README.md#step-2-add-environment-variable).

Similarlt setup script, [source_kaust_vitis_2022_1_ops.sh](../scripts/source_kaust_vitis_2022_1_ops.sh) given for setup Vitis 2022.1.

NOTE: you can have your own environment setup script. But follow above scripts as guide. For further info about OPS setup check: [OPS/README.md](../OPS/README.md).

#### 2. Build

If proper setup completed as in step 1. Then, you'll be able to check ```echo $OPS_INSTALL_PATH``` which will point to [OPS/ops](../OPS/ops/) or [OPS_batched/ops](../OPS_batched/ops/). Additionally, python virtual enviroment [OPS/ops_translator/ops_venv](../OPS/ops_translator/ops_venv/) should have been created without any error if it is the first time. 

If above check is properly passing, goto: ```cd $OPS_INSTALL_PATH/hls``` and run ```make```.

Verify proper installation by check whether ```libops_hls.a``` and ```libops_seq.a``` are available inside ```OPS/ops/hls/lib/gnu/```.

### Build + Run Apps

If the [Build OPS](#build-ops) is completed, you will be able to run prebuild binaries if your test environment is similar to our [benchmarked system](#benchmarked-system-specs). 

#### 1. Source relevent environment setup script

Make sure you source the correct Vitis setup. Our prebuild binaries are on Vitis 2022.2 for U280 and Vitis 2022.1 for VCK5000. You must be haveing the platforms as mentioned in [benchmarked system specs](#benchmarked-system-specs) and you might need the same (or compatible) XRT driver in-order to run these prebuild binaries/xcl_binaries.

Try running app as in [step 3](#3-run-application). If this step not working it might be due to pre-build binary incompatibility (proceed to next section).

#### 2. Clean and build application

First try building the app in ```SW_EMU```- software emulation mode. By default the Makefile contains ```HLS_TARGET_MODE=hw``` and ```PLATFORM=*``` as mentioned in the [benchmarked system specs](#benchmarked-system-specs). Change ```HLS_TARGET_MODE``` to ```HLS_TARGET_MODE=sw_emu``` for software emulation build and replate ```PLATFORM=``` if your platform is different. 

NOTE: Not every platform is supported by current OPS as it is experimental. Please feel free to [contact](../README.md#contact-us) us if any support need.

Run,

        make clean && make 

for build the application from OPS code. This will first generate HLS Device code and C++ host code and then build. ```make clean``` will remove ```hls``` folder and dataflow image artifacts.  NOTE: you can use ```-j <number of threads>``` flag for make if need to build faster. 

#### 3. Run application

By defauit apps will have Makefile with ```CXXFLAGS += -DPROFILE```, which indicates runtime profiling enabled. With that run application with:

        make run_hls_host

which will call ```run_script.sh``` inside the application project. You can add custom run paramenters in the run_script. If sucessfully ran, you'll have profile data inside ```hls/profile_data/hw/```. 

If you haven't enabled ```CXXFLAGS += -DPROFILE``` prior to total build as in [previous section](#2-clean-and-build-application), enble the Makefile PROFILE flag and build the host application alone (otherwise rebuild will take hours) using,

        make build_host

and try ```make run_hls_host```.

##### Power profile

To swith to power profiling run, comment ```CXXFLAGS += -DPROFILE``` and uncomment ```CXXFLAGS += -DPOWER_PROFILE```. Similar to above use ```make run_hls_host``` which will call ```run_script.sh``` inside the application project with recording profile data in ```hls/profile_data/hw/```. You can add custom run parameters in the run_script. <font color="red">DO NOT REBUILD WHOLE APP. YOU CAN BUILD HOST ALONE BY CALLING ```make run_hls_host```</font>.

#### 4. Run profile scripts for data summaries

After running application with ```PROFILE``` flag you'll be having profile data inside ```hls/profile_data/hw``` with grid size and with mutiple records with the number of batch you have provided in the ```run_script.sh```. To get average runtime for these runs and summerize them into a sigle CSV, OPS contains support script, [profile_summery_hls.py](../OPS/scripts/profile_summery_hls.py).

first ```cd hls/profile_data/hw/``` and then run profile script,

        python $OPS_HLS_ARTIFACT_DIR/OPS/scripts/profile_summery_hls.py -d .

NOTE: python3 environment with pandas required.

Similary, power profile summary will be generated by support script, [power_profile_summery_hls.py](../OPS/scripts/power_profile_summery_hls.py).

goto, ``cd hls/profile_data/hw/``` and then run profile script,

        python $OPS_HLS_ARTIFACT_DIR/OPS/scripts/profile_summery_hls.py -d . -p <batch_size_need_to_be_estimated>

NOTE: ```<power_batch_size_need_to_be_estimated>``` is the required batch size you need for estimated energy usage. The pre genreated summary will have estimated batch sizes used in the publication. 