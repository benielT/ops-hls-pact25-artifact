# OPS HLS Benchmark artifacts

This contains benchmark applications and results that we used for our publication in PACT25 conference. The artifact structured into code-generated FPGA applications, hand-codedd FPGA applications, GPU applications and contains utility scripts. Please follow through the getting started of this section for instructions to setup OPS. Each OPS application (ie. poisson2d) will have sperate project for each target to maintain reproducability and ease of setups though the source codes are identical with exception to batched GPU OPS application where you'll find slight differences in OPS-API as we are using OPS_batched APIs which is not yet merged to the current version of OPS.

## Getting Started

The benchmark applications are structured into independant projects with it's own Makefile and runscript. The target specific requirements are in each section README.md files.

This repository organized in following manner:

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

NOTE: There's no universal setup for this benchmark as our benchmark is on heterogenious devices and systems. Follow through REDME.md in each sections. 

* [codegen_apps](./codegen_apps): - Contains codegen app projects for Xilinx(AMD) FPGA Devices with our novel OPS HLS code-generation.
* [handcoded_apps](./hancoded_apps): - Contains handcoded app projects for Xilinx(AMD) FPGA Devices.
* [gpu_apps](./gpu_apps): - Contains codegen app projects for H100 GPU with batching (except for some application) with OPS.
* [scripts](./scripts): - Support scripts for environment setup and data opperations. 

### Step 1: Update Sub-Modules

We have included relevent OPS branches as git submodules ([OPS](./OPS),[OPS_batched](./OPS_batched)) herewith this repository. Please run,

        git submodule update --recursive

if any submodule not cloned, please use --init flag to above command.

### Step 2: Add Environment Variable

        export OPS_HLS_ARTIFACT_DIR=<absolute_path_to_artifacts>

This environment variable will be useful to track relative paths. 

### Step 3: Target specific setups

Setup environment and target requirements. Check the setup guidline in each sub-section README.md. 

## Contact Us

If any support is needed related to OPS-HLS, please contact:
beniel.thileepan@warwick.ac.uk

## License

This repository's original code is licensed under the MIT License — see [LICENSE](LICENSE).

It also includes third-party components under different terms:

- [OPS](./OPS), [OPS_batched](./OPS_batched) — BSD 3-Clause License (see [OPS/LICENSE](./OPS/LICENSE)).
