# OPS HLS Benchmark artifacts

[![DOI](https://zenodo.org/badge/1027688133.svg)](https://doi.org/10.5281/zenodo.16785478)

The repository contains benchmark applications and results from work carried out in ongoing work, "[Automatic Code-Generation for Accelerating Structured-Mesh-Based Explicit Numerical Solvers on FPGAs](#publication)", to be published in the PACT25 conference. The artifact is organized into (1) code-generated FPGA applications, (2) hand-coded FPGA applications, and (3) GPU applications,  along with data artifacts and utility scripts. 

Our work is a derivative work on OPS-DSL, which is a mandatory dependency; together with each type of application mentioned above requires additional dependencies and setups. 
Please follow the Getting Started section of this document for instructions to set up OPS and the common environment setups. Afterwards, please follow the README.md files inside each application type (ie gpu_apps, codgen_apps & handcoded_apps) for properly setting up and running applications. 

Each OPS application (ie, poisson2d) will have a separate project for each target to maintain reproducability and ease of setups, though the source codes are identical, with the exception to batched GPU OPS application where you'll find slight differences in OPS-API as we are using OPS_batched APIs which is not yet merged to the current version of OPS.

## Getting Started

The benchmark applications are structured into independent projects with their own Makefile and runscript. The target-specific requirements are in each section README.md files.

This repository is organized in the following manner:

<pre> ops-hls-pact25-artifact/ 
    ├── README.md 
    ├── codegen_apps/
    │   ├── README.md 
    │   ├── app_1/
    │   │   ├── u280_project/
    │   │   └── vck5000_project/
    │   ├── app_2/
    │     ....
    ├── gpu_apps/
    │   ├── README.md 
    │   ├── app_1/h100_project/ 
    │   ├── app_2/h100_project/
    │     ....
    ├── handcoded_apps/
    │   ├── README.md 
    │   ├── app_1/
    │   │   ├── u280_project/
    │   │   └── vck5000_project/
    │   ├── app_2/
    │     ....
    ├── scripts/
    ├── <font color="blue">OPS/</font>
    ├── <font color="blue">OPS_batched/</font>
    ├── .git
    └── .gitmodules</pre>

NOTE: There's no universal setup for this benchmark as our benchmark is on heterogenious devices and systems. Follow through REDME.md in each section. 

* [codegen_apps](./codegen_apps): - Contains codegen app projects for Xilinx(AMD) FPGA Devices with our novel OPS HLS code-generation.
* [handcoded_apps](./hancoded_apps): - Contains handcoded app projects for Xilinx(AMD) FPGA Devices.
* [gpu_apps](./gpu_apps): - Contains codegen app projects for H100 GPU with batching (except for some applications) with OPS.
* [scripts](./scripts): - Support scripts for environment setup and data operations. 

### Step 1: Update Sub-Modules

We have included relevant OPS branches as git submodules ([OPS](./OPS), [OPS_batched](./OPS_batched)) herewith this repository. Please run,

        git submodule update --recursive
        
If any submodule is not cloned, please use the --init flag with the above command.

### Step 2: Add Environment Variable

        export OPS_HLS_ARTIFACT_DIR=<absolute_path_to_artifacts>

This environment variable will be useful to track relative paths. 

### Step 3: Target specific setups

Set up the environment and target requirements. Check the setup guideline in each sub-section README.md. 

### Step 4: App execution workflow

1. Source correct environment setup
2. In the makefile, select ```PROFILE``` or ```POWER_PROFILE``` flag for profile results. 
3. (FOR FPGAs) In the makefile, provide the correct ```PLATFORM``` and ```TARGET=(sw_emu\hw_emu\hw)``` mode.
4. (FOR FPGAs) Make sure in the OPS config JSON file to provide ```device_id``` matching the PLATFORM if the environment has multiple FPGA devices. Otherwise, OPS translator will take the first device as the target device. 
5. (FOR FPGAs) Build only the host with prebuild XCLBIN by running ```make build_hls_host```.
6. ```make run_app``` or ```make run_hls_app``` to run experiments. 
7. If the above step does not work, do a clean build.
   
## Contact Us

If any support is needed related to OPS-HLS, please contact:
beniel.thileepan@warwick.ac.uk

## License

This repository's original code is licensed under the MIT License — see [LICENSE](LICENSE).

It also includes third-party components under different terms:

- [OPS](./OPS), [OPS_batched](./OPS_batched) — BSD 3-Clause License (see [OPS/LICENSE](./OPS/LICENSE)).

## Publication

B. Thileepan, S.A. Fahmy, and G.R. Mudalige. (2025). Automatic Code-Generation for Accelerating Structured-Mesh-Based Explicit Numerical Solvers on FPGAs. To appear in the International Conference on Parallel Architectures and Compilation Techniques (PACT '25) Nov 03–06, 2025, Irvine, California, USA. ACM, New York, NY, USA.
