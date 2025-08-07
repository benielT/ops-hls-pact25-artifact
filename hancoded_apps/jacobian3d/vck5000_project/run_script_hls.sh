#!/bin/bash

if [ "$#" -lt 2 ]; then
    echo "Usage: ${0} <target_mode> <platform> [<additional_args>]"
    exit 1
fi

SCRIPT_DIR="$(dirname "$(readlink -f "$0")")"

TARGET_MODE=$1
PLATFORM=$2
shift 2
CXXFLAGS="$@"

echo "runscript TARGET MODE: ${TARGET_MODE}, PLATFORM: ${PLATFORM}"

PROFILE_DIR=./profile_data/${TARGET_MODE}/
PROFILE_FILE=perf_profile.csv
DEVICE_BDF=0000:c1:00.1


if [[ "${TARGET_MODE}" == "hw" ]]; then
    parameter_sets=(
            "30,30,30,60004,50"
            "50,50,50,60004,50"
            "100,100,100,60004,20" 
            "150,150,150,60004,10"
            "200,200,200,60004,5"
            "250,250,250,60004,3"
            "300,300,300,60004,2"
            # Add more parameter sets here as needed
        )
else
    parameter_sets=(
            "30,30,30,112,1"
            # Add more parameter sets here as needed
        )
fi


echo "Running application hand-coded BlackScholes in '${TARGET_MODE}' mode with hardcoded parameters:"

for params in "${parameter_sets[@]}"; do
    IFS=',' read -r sizex sizey sizez iters batch <<< "$params"

    if [[ -z "$sizex" || -z "$sizey" || -z "$sizez" || -z "$iters" || -z "$batch" ]]; then
        echo "Warning: Skipping invalid parameter set: $params"
        continue
    fi
    mkdir ./temp_prof
    first_file=true
    # for i in number of batches need to run this section
    for i in $(seq 1 $batch); do

        # Removing previous residues
        if [ -f "${PROFILE_FILE}" ]; then
            rm ${PROFILE_FILE}
        fi

        echo "-----------------------------------------------------------------"
        echo "Running with sizex=${sizex}, sizey=${sizey}, sizez=${sizez}, iters=${iters}, batch=${batch}"
        echo "-----------------------------------------------------------------"


        if [[ "${CXXFLAGS}" == *"-DPOWER_PROFILE"* ]]; then
            echo "Running HW mode with power profiling"
                # ../../../scripts/power_profile_hls.sh ${DEVICE_BDF} ${SCRIPT_DIR}/hls/build/${TARGET_MODE}/${APP_NAME}_host ${SCRIPT_DIR}/hls/build/${TARGET_MODE}/${APP_NAME}.xclbin -sizex="${sizex}" -iters="${iters}" -piter="${batch}"

        else
            if [[ $TARGET_MODE == sw_emu || $TARGET_MODE == hw_emu ]]; then
                echo "Running in emulation mode with ${TARGET_MODE}"
                XCL_EMULATION_MODE=${TARGET_MODE} ${SCRIPT_DIR}/bin/${TARGET_MODE}/app_host ${SCRIPT_DIR}/bin/${TARGET_MODE}/app_device.xclbin -sizex="${sizex}" -sizey="${sizey}" -sizez="${sizez}" -iters="${iters}"
            else
                echo "Running HW mode"
                ${SCRIPT_DIR}/bin/${TARGET_MODE}/app_host ${SCRIPT_DIR}/bin/${TARGET_MODE}/app_device.xclbin -sizex="${sizex}" -sizey="${sizey}" -sizez="${sizez}" -iters="${iters}"
            fi
        fi

        if [ ! -d "${PROFILE_DIR}" ]; then
            echo "Directory '${PROFILE_DIR}' does not exist. Creating it..."
            mkdir -p "${PROFILE_DIR}"
        fi
        if [ -f "${PROFILE_FILE}" ]; then
            # Construct the new filename for the profile directory
            new_filename="./temp_prof/${i}_${PROFILE_FILE}"
            echo "Moving '${PROFILE_FILE}' to '${new_filename}'"
            mv "${PROFILE_FILE}" "${new_filename}"
        else
            echo "Warning: Output file '${PROFILE_FILE}' not found after the run."
        fi
    done

    i2=0
    for file in ./temp_prof/*_${PROFILE_FILE}; do
        batch_id=$(basename "$file" | grep -oE '^[0-9]+')
        #Read file line-by-line
        while IFS= read -r line || [ -n "$line" ]; do
            if $first_file; then
                echo "$line" > ${PROFILE_FILE}
                first_file=false
            elif [[ "$line" != grid_x,* ]]; then
                # Replace the 6th column (batch_id) with extracted batch_id
                # This assumes CSV columns are fixed and in same order
                updated_line=$(echo "$line" | awk -F',' -v b="$batch_id" 'BEGIN {OFS=","} {$5 = b; print}')
                echo "$updated_line" >> ${PROFILE_FILE}
            fi
        done < "$file"
    done

    rm -rf ./temp_prof

    if [ -f "${PROFILE_FILE}" ]; then
        # Construct the new filename for the profile directory
        new_filename="${PROFILE_DIR}/${sizex}_${sizey}_${sizez}_${PROFILE_FILE}"
        echo "Moving '${PROFILE_FILE}' to '${new_filename}'"
        mv "${PROFILE_FILE}" "${new_filename}"
    else
        echo "Warning: Output merged file: '${PROFILE_FILE}' not found after the run."
    fi
done

echo "-----------------------------------------------------------------"
echo "Finished running all hardcoded parameter sets."

exit 0