#!/bin/bash

if [ "$#" -lt 2 ]; then
    echo "Usage: ${0} <target_mode> <app_name> [<additional_args>]"
    exit 1
fi

SCRIPT_DIR="$(dirname "$(readlink -f "$0")")"

TARGET_MODE=$1
APP_NAME=$2
PLATFORM=$3
shift 3
CXXFLAGS="$@"

PROFILE_DIR=./hls/profile_data/${TARGET_MODE}/
PROFILE_FILE=perf_profile.csv
POWER_PROFILE_FILE=hls_power_profile.csv
DEVICE_BDF=0000:c1:00.1

# Hardcoded parameter sets (sizex, sizey, iters, batch)
if [[ "${CXXFLAGS}" == *"-DPOWER_PROFILE"* ]]; then
    @echo "Power profiling enabled"
    if [[ "${TARGET_MODE}" == "hw" ]]; then
        if [[ "${PLATFORM}" == *"u280"* ]]; then
            parameter_sets=(
                "30,30,60102,1000,1"
                "60,60,60102,1000,1"
                "100,100,60102,500,1"
                "200,100,60102,500,1"
                "200,200,60102,500,1"
                "300,150,60102,250,1"
                "300,300,60102,100,1"
                "400,200,60102,100,1"
                "400,300,60102,50,1"
                "400,400,60102,50,1"
                "60,60,60102,1000,10"
                "30,30,60102,1000,10"
                "100,100,60102,500,10"
                "200,100,60102,500,10"
                "200,200,60102,500,10"
                "300,150,60102,250,10"
                "300,300,60102,100,10"
                "400,200,60102,100,10"
                "400,300,60102,100,10"
                "400,400,60102,100,10"
                "30,30,60102,1000,20"
                "60,60,60102,1000,20"
                "100,100,60102,500,20"
                "200,100,60102,500,20"
                "200,200,60102,500,20"
                "300,150,60102,250,20"
                "300,300,60102,100,20"
                "400,200,60102,100,20"
                "400,300,60102,100,20"
                "400,400,60102,100,20"
                "30,30,60102,10000,50"
                "60,60,60102,1000,50"
                "100,100,60102,500,50"
                "200,100,60102,500,50"
                "200,200,60102,500,50"
                "300,150,60102,250,50"
                "300,300,60102,100,50"
                "400,200,60102,100,50"
                "400,300,60102,100,50"
                "400,400,60102,100,50"
                "30,30,60102,1000,100"
                "60,60,60102,1000,100"
                "100,100,60102,500,100"
                "200,100,60102,500,100"
                "200,200,60102,500,100"
                "300,150,60102,250,100"
                "300,300,60102,100,100"
                "400,200,60102,100,100"
                "400,300,60102,100,100"
                "400,400,60102,100,100"
                # Add more parameter sets here as needed
            )
        else
            parameter_sets=(
                "100,100,60060,5000"
                "200,100,60060,5000"
                "200,200,60060,5000"
                "300,150,60060,2500"
                "300,300,60060,1000"
                "400,200,60060,500"
                "400,300,60060,500"
                "400,400,60060,500"
                # Add more parameter sets here as needed
            )
        fi
    else
        echo "Error: Cannot power profile sw_emu or hw_emu"
        exit 1
    fi
else
    if [[ "${TARGET_MODE}" == "hw" ]]; then
        if [[ "${PLATFORM}" == *"u280"* ]]; then
            parameter_sets=(
                "30,30,126,100,1"
                "30,30,60102,100,1"
                "60,60,60102,100,1"
                "100,100,60102,100,1"
                "200,100,60102,100,1"
                "200,200,60102,100,1"
                "300,150,60102,20,1"
                "300,300,60102,20,1"
                "400,200,60102,20,1"
                "400,300,60102,20,1"
                "400,400,60102,20,1"
                "30,30,60102,100,10"
                "60,60,60102,100,10"
                "100,100,60102,100,10"
                "200,100,60102,100,10"
                "200,200,60102,100,10"
                "300,150,60102,20,10"
                "300,300,60102,20,10"
                "400,200,60102,20,10"
                "400,300,60102,20,10"
                "400,400,60102,20,10"
                "30,30,60102,100,20"
                "60,60,60102,100,20"
                "100,100,60102,100,20"
                "200,100,60102,100,20"
                "200,200,60102,100,20"
                "300,150,60102,20,20"
                "300,300,60102,20,20"
                "400,200,60102,20,20"
                "400,300,60102,20,20"
                "400,400,60102,20,20"
                "30,30,60102,100,50"
                "60,60,60102,100,50"
                "100,100,60102,100,50"
                "200,200,60102,100,50"
                "200,100,60102,100,50"
                "300,150,60102,50,50"
                "300,300,60102,50,50"
                "400,200,60102,50,50"
                "400,300,60102,50,50"
                "400,400,60102,50,50"
                "30,30,60102,100,100"
                "60,60,60102,100,100"
                "100,100,60102,100,100"
                "200,100,60102,100,100"
                "200,200,60102,100,100"
                "300,150,60102,100,100"
                "300,300,60102,100,100"
                "400,200,60102,100,100"
                "400,300,60102,100,100"
                "400,400,60102,100,100"
                # Add more parameter sets here as needed
                )
        else
            parameter_sets=(
                "30,30,110,100"
                "30,30,60060,100"
                "60,60,60060,100"
                "100,100,60060,100"
                "200,100,60060,100"
                "200,200,60060,100"
                "300,150,60060,20"
                "300,300,60060,20"
                "400,200,60060,20"
                "400,300,60060,20"
                "400,400,60060,20"
                "400,425,60060,20"
                "400,350,60060,20"
                "400,375,60060,20"
                "300,350,60060,20"
                "300,375,60060,20"
                "300,400,60060,20"
                "300,425,60060,20"
                "300,450,60060,20"
                "300,475,60060,20"
                "300,500,60060,20"
                "300,525,60060,20"
                "300,550,60060,20"
                "300,575,60060,20"
                "300,600,60060,10"
                "300,625,60060,10"
                "300,650,60060,10"
                "300,675,60060,10"
                "300,700,60060,10"
                "300,725,60060,10"
                "300,750,60060,5"
                "300,775,60060,5"
                "300,800,60060,5"
                "300,825,60060,5"
                "300,850,60060,5"
                # Add more parameter sets here as needed
                )
        fi
    else
        if [[ "${PLATFORM}" == *"u280"* ]]; then
            parameter_sets=(
                "5,5,162,1,1"
                "5,5,162,4,2"
                # Add more parameter sets here as needed
            )
        else
            parameter_sets=(
                "30,30,110,1"
                # Add more parameter sets here as needed
            )
        fi
    fi
fi

echo "Running application '${APP_NAME}' in '${TARGET_MODE}' mode with hardcoded parameters:"

for params in "${parameter_sets[@]}"; do
    IFS=',' read -r sizex sizey iters batch bsize <<< "$params"

    if [[ -z "$sizex" || -z "$sizey" || -z "$iters" || -z "$batch" || -z "$bsize" ]]; then
        echo "Warning: Skipping invalid parameter set: $params"
        continue
    fi

    # Removing previous residues
    if [ -f "${PROFILE_FILE}" ]; then
        rm ${PROFILE_FILE}
    fi
    if [ -f "${POWER_PROFILE_FILE}" ]; then
        rm ${POWER_PROFILE_FILE}
    fi


    echo "-----------------------------------------------------------------"
    echo "Running with sizex=${sizex}, sizey=${sizey}, iters=${iters}, batch=${batch}, bsize=${bsize}"
    echo "-----------------------------------------------------------------"


    if [[ "${CXXFLAGS}" == *"-DPOWER_PROFILE"* ]]; then
        echo "Running HW mode with power profiling"
            ${OPS_INSTALL_PATH}/../scripts/power_profile_hls.sh ${DEVICE_BDF} ${SCRIPT_DIR}/hls/build/${TARGET_MODE}/${APP_NAME}_host ${SCRIPT_DIR}/hls/build/${TARGET_MODE}/${APP_NAME}.xclbin -sizex="${sizex}" -sizey="${sizey}" -iters="${iters}" -piter="${batch}" -bsize="${bsize}"

    else
        if [[ $TARGET_MODE == sw_emu || $TARGET_MODE == hw_emu ]]; then
            echo "Running in emulation mode with ${TARGET_MODE}"
            XCL_EMULATION_MODE=${TARGET_MODE} ${SCRIPT_DIR}/hls/build/${TARGET_MODE}/${APP_NAME}_host ${SCRIPT_DIR}/hls/build/${TARGET_MODE}/${APP_NAME}.xclbin -sizex="${sizex}" -sizey="${sizey}" -iters="${iters}" -batch="${batch}" -bsize="${bsize}"
        else
            echo "Running HW mode"
            ${SCRIPT_DIR}/hls/build/${TARGET_MODE}/${APP_NAME}_host ${SCRIPT_DIR}/hls/build/${TARGET_MODE}/${APP_NAME}.xclbin -sizex="${sizex}" -sizey="${sizey}" -iters="${iters}" -batch="${batch}" -bsize="${bsize}"
        fi
    fi

    if [ ! -d "${PROFILE_DIR}" ]; then
        echo "Directory '${PROFILE_DIR}' does not exist. Creating it..."
        mkdir -p "${PROFILE_DIR}"
    fi
    if [ -f "${PROFILE_FILE}" ]; then
        # Construct the new filename for the profile directory
        new_filename="${PROFILE_DIR}/${sizex}_${sizey}_${bsize}_${PROFILE_FILE}"
        echo "Moving '${PROFILE_FILE}' to '${new_filename}'"
        mv "${PROFILE_FILE}" "${new_filename}"
    else
        echo "Warning: Output file '${PROFILE_FILE}' not found after the run."
    fi
    if [ -f "${POWER_PROFILE_FILE}" ]; then
        # Construct the new filename for the profile directory
        new_filename="${PROFILE_DIR}/${sizex}_${sizey}_${bsize}_${POWER_PROFILE_FILE}"
        echo "Moving '${POWER_PROFILE_FILE}' to '${new_filename}'"
        mv "${POWER_PROFILE_FILE}" "${new_filename}"
    else
        echo "Warning: Output file '${POWER_PROFILE_FILE}' not found after the run."
    fi
done

echo "-----------------------------------------------------------------"
echo "Finished running all hardcoded parameter sets."

exit 0