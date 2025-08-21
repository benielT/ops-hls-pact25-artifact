#!/bin/bash -f
EMUDIR="/home/x_thileeb/repos/temp/ops-hls-pact25-artifact/codegen_apps/rtm_fp/vck5000_project"
    if [ -d "$EMUDIR" ]
      then
      OUTDIR=$EMUDIR
      cd $OUTDIR
      echo "Current working dir $OUTDIR"
      if [ -e "qemu_args.txt" ]
        then
        echo "Required emulation files like qemu_args exists"
      else
        echo "Required emulation files like qemu_args.txt doesn't exist. Please run from output dir"
        exit 1
      fi
    else
        if [ -e "qemu_args.txt" ]
          then
          echo "Required emulation files like qemu_args exists"
          cd .
          echo "Current working dir $PWD"
        else
          echo "Required emulation files like qemu_args.txt doesn't exist. Please run from output dir"
          exit 2
        fi
    fi
    if [ -z "$LD_LIBRARY_PATH" ]; then
      LD_LIBRARY_PATH="$XILINX_VITIS/tps/lnx64/python-3.8.3/lib:$XILINX_VITIS/lib/lnx64.o/:$XILINX_VIVADO/data/emulation/ip_utils/xtlm_ipc/xtlm_ipc_v1_0/cpp/lib/:$XILINX_VIVADO/lib/lnx64.o/Default/"
    else
      LD_LIBRARY_PATH="$XILINX_VITIS/tps/lnx64/python-3.8.3/lib:$XILINX_VITIS/lib/lnx64.o/:$XILINX_VIVADO/data/emulation/ip_utils/xtlm_ipc/xtlm_ipc_v1_0/cpp/lib/:$XILINX_VIVADO/lib/lnx64.o/Default/:$LD_LIBRARY_PATH"
    fi
    export LD_LIBRARY_PATH
$XILINX_VITIS/tps/lnx64/python-3.8.3/bin/python3 $XILINX_VITIS/bin/launch_emulator.py  -device-family versal \
-aie-sim-config  $PWD/cfg/aie.sim.config.txt \
-target hw_emu \
-qemu-args-file $PWD/qemu_args.txt \
-pmc-args-file $PWD/pmc_args.txt \
-pl-sim-dir $PWD/sim/behav_waveform/xsim \
-ospi-image $PWD/qemu_ospi.bin \
-xtlm-log-state WAVEFORM_AND_LOG \
-platform-name xilinx_vck5000_gen4x8_xdma_2_202210_1 \
$*
