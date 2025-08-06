#!/bin/bash

if [ "$#" -lt 2 ]; then
    echo "Usage: ${0} <app_name> <target> [<additional_args>]"
    exit 1
fi

SCRIPT_DIR="$(dirname "$(readlink -f "$0")")"
POWER_PROFILE_SCRIPT="../../../scripts/profile_with_nvidia_smi.sh"
APP=$1
TARGETS=$2
shift 2
CXXFLAGS="$@"

if [[ ! "cuda" == *"${TARGETS}"* ]]; then
    if [[ ! -f "${APP}_cuda" ]]; then
        echo "Cuda app is not properly compiled please make sure building before runing the run_script.sh"
        exit -1
    fi
fi

PROFILE_DIR=./profile_data/runtime/
POWER_PROFILE_DIR=./profile_data/power/
PROFILE_FILE=perf_profile.csv
POWER_PROFILE_FILE=nvidia_smi_log.csv 

if [[ "${CXXFLAGS}" == *"-DPOWER_PROFILE"* ]]; then
    @echo "Power profiling enabled"
    parameter_sets=(
            "30,30,30,1800,10"
            "30,30,50,1800,10"
            "50,50,16,1800,10"
            "50,50,30,1800,10"
            "50,50,50,1800,10"
            "75,75,75,1800,10"
            "100,100,100,1800,10"
            "125,125,125,1800,10"
            "150,150,150,1800,10"
            "175,175,175,1800,5"
            "200,200,200,1800,3"
            "225,225,225,1800,2"
            "250,250,250,1800,2"
            # Add more parameter sets here as needed
        )
else
    parameter_sets=(
            "30,30,30,1800,2"
            "30,30,50,1800,2"
            "50,50,16,1800,2"
            "50,50,30,1800,2"
            "50,50,50,1800,2"
            "75,75,75,1800,2"
            "100,100,100,1800,2"
            "125,125,125,1800,2"
            "150,150,150,1800,2"
            "175,175,175,1800,2"
            "200,200,200,1800,2"
            "225,225,225,1800,2"
            "250,250,250,1800,2"
            # Add more parameter sets here as needed
        )
fi
echo "Running application ${APP} in GPU with hardcoded parameters:"

for params in "${parameter_sets[@]}"; do
    IFS=',' read -r sizex sizey sizez iters batch <<< "$params"

    if [[ -z "$sizex" || -z "$sizey"  || -z "$sizez" || -z "$iters" || -z "$batch" ]]; then
        echo "Warning: Skipping invalid parameter set: $params"
        continue
    fi
    # for i in number of batches need to run this section


    # Removing previous residues
    if [ -f "${PROFILE_FILE}" ]; then
        rm ${PROFILE_FILE}
    fi

    echo "-----------------------------------------------------------------"
    echo "Running with sizex=${sizex}, sizey=${sizey}, sizez=${sizez}, iters=${iters}, batch=${batch}"
    echo "-----------------------------------------------------------------"

    if [[ "${CXXFLAGS}" == *"-DPOWER_PROFILE"* ]]; then
        ${POWER_PROFILE_SCRIPT} ${SCRIPT_DIR}/${APP}_cuda -sizex="${sizex}" -sizey="${sizey}" -sizez="${sizez}" -iters="${iters}" -batch="${batch}" OPS_BLOCK_SIZE_X=10 OPS_BLOCK_SIZE_Y=1 OPS_BLOCK_SIZE_Z=1

        if [ ! -d "${POWER_PROFILE_DIR}" ]; then
            echo "Directory '${POWER_PROFILE_DIR}' does not exist. Creating it..."
            mkdir -p "${POWER_PROFILE_DIR}"
        fi
        if [ -f "${POWER_PROFILE_FILE}" ]; then
            # Construct the new filename for the profile directory
            new_filename="${POWER_PROFILE_DIR}/${sizex}_${sizey}_${sizez}_${POWER_PROFILE_FILE}"
            echo "Moving '${POWER_PROFILE_FILE}' to '${new_filename}'"
            mv "${POWER_PROFILE_FILE}" "${new_filename}"
        else
            echo "Warning: Output file '${POWER_PROFILE_FILE}' not found after the run."
        fi
    else
        ${SCRIPT_DIR}/${APP}_cuda -sizex="${sizex}" -sizey="${sizey}" -sizez="${sizez}" -iters="${iters}" -batch="${batch}" OPS_BLOCK_SIZE_X=10 OPS_BLOCK_SIZE_Y=1 OPS_BLOCK_SIZE_Z=1


        if [ ! -d "${PROFILE_DIR}" ]; then
            echo "Directory '${PROFILE_DIR}' does not exist. Creating it..."
            mkdir -p "${PROFILE_DIR}"
        fi
        if [ -f "${PROFILE_FILE}" ]; then
            # Construct the new filename for the profile directory
            new_filename="${PROFILE_DIR}/${sizex}_${sizey}_${sizez}_${PROFILE_FILE}"
            echo "Moving '${PROFILE_FILE}' to '${new_filename}'"
            mv "${PROFILE_FILE}" "${new_filename}"
        else
            echo "Warning: Output file '${PROFILE_FILE}' not found after the run."
        fi
    fi
   

    # if [[ ! "${CXXFLAGS}" == *"-DPOWER_PROFILE"* ]]; then
    #     i2=0
    #     for file in ./temp_prof/*_${PROFILE_FILE}; do
    #         batch_id=$(basename "$file" | grep -oE '^[0-9]+')
    #         #Read file line-by-line
    #         while IFS= read -r line || [ -n "$line" ]; do
    #             if $first_file; then
    #                 echo "$line" > ${PROFILE_FILE}
    #                 first_file=false
    #             elif [[ "$line" != grid_x,* ]]; then
    #                 # Replace the 6th column (batch_id) with extracted batch_id
    #                 # This assumes CSV columns are fixed and in same order
    #                 updated_line=$(echo "$line" | awk -F',' -v b="$batch_id" 'BEGIN {OFS=","} {$5 = b; print}')
    #                 echo "$updated_line" >> ${PROFILE_FILE}
    #             fi
    #         done < "$file"
    #     done

    #     rm -rf ./temp_prof

    #     if [ -f "${PROFILE_FILE}" ]; then
    #         # Construct the new filename for the profile directory
    #         new_filename="${PROFILE_DIR}/${bsize}-batch/${sizex}_${sizey}_${PROFILE_FILE}"
    #         echo "Moving '${PROFILE_FILE}' to '${new_filename}'"
    #         mv "${PROFILE_FILE}" "${new_filename}"
    #     else
    #         echo "Warning: Output merged file: '${PROFILE_FILE}' not found after the run."
    #     fi
    # fi
done

echo "-----------------------------------------------------------------"
echo "Finished running all hardcoded parameter sets."

exit 0