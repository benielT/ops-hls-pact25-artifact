## Code generated HLS benchmark applications 

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

The OPS with the correct branch for Vitis-HLS codegen is added as a git submodule. Cloning the relevant submodule and setup instructions can be found in main [README.md](../README.md).

#### Build Software Requirements:
* python 3 > 3.8
* GNU C++ 9.4 (or other Compatible versions)

NOTE: These are required in addition to [runtime software requirements](#runtime-software-requirements).

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

The code-generated HLS applications are organized into separate projects based on the target platform, containing OPS source code, generated HLS codes, pre-build host binary, prebuild FPGA xcl binaries, and generated profile data, etc. following manner given below.

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
    │   │   └── run_script_hls.sh 
    │   └── vck5000_project/
    ├── app_2/
    │  .... </pre>

Most of the HLS codegen applications have u280_project, vck5000_project separated out in order to maintain the OPS HLS configuration separately and maintain reproducability, with the underlying OPS code being exactly the same. 

Inside each project, for example [poisson2d/u280_project](./poisson2d/u280_project/), contains OPS and related CPP source files can be found in the first directory level. Then the code-generated source files can be found inside [hls/device](./poisson2d/u280_project/hls/device/) and [hls/host](./poisson2d/u280_project/hls/host/) folders. The HLS hardware build artifacts can be found inside [hls/build](./poisson2d/u280_project/hls/build/). Finally, the profile data artifacts can be found inside [hls/profile_data](./poisson2d/u280_project/hls/profile_data/).

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

Runtime profile data recorded as ```*_perf_profile.csv``` where the prefix will be grid dimensions. These profile logs contain recorded runtimes for multiple runs. 

Power profile data recorded as ```*_hls_power_profile.csv``` where the prefix will be grid dimensions. These power usage data are extracted using ```xbuitil``` via the OPS support script, [power_profile_hls.sh](../OPS/scripts/power_profile_hls.sh) called by the ```run_script_hls.sh``` in each project.

Additionally, OPS is packaged with support scripts to generate profile summaries, which are added as artifacts. Further details in section [Build OPS/Section 4](#4-run-profile-scripts-for-data-summaries) on how to run these support scripts to generate summaries.

### Build OPS
#### 1. Setup environment

Sample setup script for Vitis 2022.2, [source_kaust_vitis_2022_2_ops.sh](../scripts/source_kaust_vitis_2022_2_ops.sh) is given. Please modify it accordingly before the source. NOTE: Make sure the environment variable OPS_HLS_ARTIFACT_DIR is set as mentioned in the main [README.md Getting Started - Step 2](../README.md#step-2-add-environment-variable).

Similarlt setup script, [source_kaust_vitis_2022_1_ops.sh](../scripts/source_kaust_vitis_2022_1_ops.sh) given for setup Vitis 2022.1.

NOTE: You can have your own environment setup script. But follow the above scripts as a guide. For further info about OPS setup, check: [OPS/README.md](../OPS/README.md).

#### 2. Build

If the proper setup is completed, as in step 1. Then, you'll be able to check ```echo $OPS_INSTALL_PATH``` which will point to [OPS/ops](../OPS/ops/) or [OPS_batched/ops](../OPS_batched/ops/). Additionally, Python virtual environment [OPS/ops_translator/ops_venv](../OPS/ops_translator/ops_venv/) should have been created without any error if it is the first time. 

If the above verification passes properly, go to: ```cd $OPS_INSTALL_PATH/hls``` and run ```make```.

Verify proper installation by checking whether ```libops_hls.a``` and ```libops_seq.a``` are available inside ```OPS/ops/hls/lib/gnu/```.

### Build + Run Apps

If the [Build OPS](#build-ops) is completed, you will be able to run prebuild binaries if your test environment is similar to our [benchmarked system](#benchmarked-system-specs). 

#### 1. Source the relevant environment setup script

Make sure you source the correct Vitis setup. Our prebuild binaries are on Vitis 2022.2 for U280 and Vitis 2022.1 for VCK5000 and U55c ([details of prebuild-binary supported Vitis toolchain](#pre-build-binary-details)). You must have the platforms as mentioned in [benchmarked system specs](#benchmarked-system-specs), and you might need the same (or compatible) XRT driver in order to run these prebuild binaries/xcl_binaries.

Try running the app as in [step 3](#3-run-application). If this step does not work, it might be due to pre-built binary incompatibility (proceed to the next section).

#### 2. Clean and build the application

First try building the app in ```SW_EMU```- software emulation mode. By default the Makefile contains ```HLS_TARGET_MODE=hw``` and ```PLATFORM=*``` as mentioned in the [benchmarked system specs](#benchmarked-system-specs). Change ```HLS_TARGET_MODE``` to ```HLS_TARGET_MODE=sw_emu``` for software emulation build and replate ```PLATFORM=``` if your platform is different. 

NOTE: Not every platform is supported by this experimental OPS version for Xilinx FPGAs. Please feel free to [contact](../README.md#contact-us) us if any support is needed.

OPS-translator uses a config.json file in each project, integrated via Makefile to define design configurations (check [appendix](#ops-translator-config-file-for-hls-target) for more details about the config file). Please make sure you have provided the correct ```device_id``` if the runtime environment has more than one Xilinx FPGA device. 

        make clean && make
        
To build the application from the OPS code. This will first generate HLS Device code and C++ host code, and then build. ```make clean``` will remove ```hls``` folder and dataflow image artifacts.  NOTE: you can use ```-j <number of threads>``` flag for make if you need to build faster. 

#### 3. Run application

By default, apps will have a Makefile with ```CXXFLAGS += -DPROFILE```, which indicates runtime profiling enabled. With that, run the application with:

        make run_hls_host

which will call ```run_script_hls.sh``` inside the application project. You can add custom run parameters in the run_script. If successfully run, you'll have profile data inside ```hls/profile_data/hw/```. 

If you haven't enabled ```CXXFLAGS += -DPROFILE``` before full build as in [previous section](#2-clean-and-build-application), enable the Makefile PROFILE flag and build the host application alone (otherwise rebuild will take hours) using

        make build_host

and try ```make run_hls_host```.

##### Power profile

NOTE: Power profile uses ```xbutil examine -electrical``` which needs the correct device BDF. Please changes ```BDF``` inside ```run_script_hls.sh``` with the BDF of the target platform device. 

To swith to power profiling run, comment ```CXXFLAGS += -DPROFILE``` and uncomment ```CXXFLAGS += -DPOWER_PROFILE```. Similar to above, use ```make run_hls_host``` which will call ```run_hls_script.sh``` inside the application project with recording profile data in ```hls/profile_data/hw/```. 



##### Customizing experimentation

You can add custom run parameters in the run_script. <font color="red">DO NOT REBUILD WHOLE APP. YOU CAN BUILD HOST ALONE BY CALLING ```make run_hls_host```</font>.


#### 4. Run profile scripts for data summaries

After running the application with ```PROFILE``` flag, you'll have profile data inside ```hls/profile_data/hw``` with grid size and with multiple records with the number of batches you have provided in the ```run_script_hls.sh```. To get the average runtime for these runs and summarize them into a single CSV, OPS contains a support script, [profile_summery_hls.py](../OPS/scripts/profile_summery_hls.py).

first ```cd hls/profile_data/hw/``` and then run profile script,

        python $OPS_HLS_ARTIFACT_DIR/OPS/scripts/profile_summery_hls.py -d .

NOTE: python3 environment with pandas required.

Similary, power profile summary will be generated by support script, [power_profile_summery_hls.py](../OPS/scripts/power_profile_summery_hls.py).

goto, ```cd hls/profile_data/hw/``` and then run profile script,

        python $OPS_HLS_ARTIFACT_DIR/OPS/scripts/profile_summery_hls.py -d . -p <batch_size_need_to_be_estimated>

NOTE: ```<power_batch_size_need_to_be_estimated>``` is the required batch size you need for estimated energy usage. The pre genreated summary will have estimated batch sizes used in the publication. 


### Appendix

#### Pre-build binary details 

* Black-Scholes
    * U280 - Vitis2022.2
    * VCK5000 - Vitis 2022.1
* Laplace2d
    * U280 - Vitis2022.2
    * VCK5000 - Vitis 2022.1
* Jacobian2d
    * U280 - Vitis2022.2
    * VCK5000 - Vitis 2022.1
* Poisson2d
    * U280 - Vitis2022.2
    * VCK5000 - Vitis 2022.1
* Heat3d
    * U280 - Vitis2022.2
    * VCK5000 - Vitis 2022.1
* Jacobian3d
    * U280 - Vitis2022.2
    * VCK5000 - Vitis 2022.1
* RTM_FP
    * U55c - Vitis2022.1
    * VCK5000 - Vitis 2022.1
* PW_advection
    * VCK5000 - Vitis 2022.1


#### OPS-translator config file for HLS target

**"SLR_count"** : 1 - _Number of SLR regions the design covers._

**"device_id"** : 0 - _Device id of the target device, if not defined, device 0 will be selected._

**"vector_factor"** : 8 - _Cell vector factor - V_

**"mem_vector_factor"**: 16 - _M-AXI4 memory bit size vector factor. Example, if "stencil_type" is a float, then to utilize the 512-bit bus width, 16 float elements can be transferred_
        
**"iter_par_factor"**: 20 - _Per SLR unroll factor p_

**"stencil_type"** : "float" - _Stencil computation elements underlying type_

**"data_width"** : 32 - _bit size of the stencil computation elements_

**"mem_data_width"** : 32 - _bit size of the stencil computation elements used for AXIS4_

**"maxi_depth"** : 4096 - _M-AXI4 data buffer depth_ 

**"maxi_read_burst_length"** : 64 - _M-AXI4 read burst length_ 

**"maxi_write_burst_length"** : 64 - _M-AXI4 write burst length_

**"num_read_outstanding"** : 4 - _M-AXI4 read buffer size to hold outstanding reads_

**"num_write_outstanding"** : 4 - _M-AXI4 write buffer size to hold outstanding reads_

**"maxi_offset"** : "slave" - _**<master\slave>** M-AXI4 controller mode_

**"axis_interconnect_buff_size"** : 2048 - _AXIS stream buffer size, l_axis (used in inter SLR, inter kernel streams_

**"hls_interconnect_buff_size"** : 10 - _HLS stream buffer size, l_hls (used in internel hls streams_

**"datamover_mode"** : 1 - _**1** - Loopback design mode, **2** - memory copy design mode_

**"profile"** : False - _**<True\FALSE>** Enable True for HLS profiling_

**"platform"** : "u280" - _**<u280\vck5000\u55c>** Target platform_

