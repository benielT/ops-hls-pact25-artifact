import pandas as pd
import numpy as np
import argparse
import os
import profile_summary_nvidia_smi as smi_handler
import re

def generate_power_profile_summery(directory, p_batches=None):
    summary_data = []
    
    for filename in os.listdir(directory):
        if filename.endswith("nvidia_smi_log.csv"):
            file_ = os.path.join(directory, filename)
            
            avg_power, elapsed_time, command = smi_handler.calculate_average_power_and_duration(file_)
            energy_kj = smi_handler.calculate_energy_kj(avg_power, elapsed_time)
            
            match = re.search(r'-batch=(\d+)', command)
            if match:
                batch_size = int(match.group(1))
                print("Batch:", batch_size)
            else:
                print("[ERROR] No batch found")
                exit(-1)
            energy_per_batch_kj = energy_kj / batch_size
            
            if (p_batches):
                estimated_energy_kj = energy_per_batch_kj * p_batches
            else:
                estimated_energy_kj = energy_kj
                p_batches = batch_size
                
            sizex = 1
            sizey = 1
            sizez = 1
            if "-sizex=" in command:
                sizex = int(command.split("-sizex=")[1].split()[0])
            if "-sizey=" in command:
                sizey = int(command.split("-sizey=")[1].split()[0])
            if "-sizez=" in command:
                sizez = int(command.split("-sizez=")[1].split()[0])
                
            summary_data.append({
                "File": filename,
                "Grid Size X": sizex,
                "Grid Size Y": sizey,
                "Grid Size Z": sizez,
                "Batch Size": batch_size,
                "Average Power (W)": avg_power,
                "Elapsed Time (ms)": elapsed_time,
                "Total Energy (kJ)": energy_kj,
                "Energy per Batch (kJ)": energy_per_batch_kj,
                f"Estimated Energy for {p_batches} Batches (kJ)": estimated_energy_kj
            })
        
     # Create a DataFrame for the summary
    summary_df = pd.DataFrame(summary_data)

    # Sort the DataFrame by grid sizes
    summary_df = summary_df.sort_values(by=["Grid Size X", "Grid Size Y", "Grid Size Z"])

    # Save the summary to a CSV file
    output_file = os.path.join(directory, "power_profile_summary.csv")
    summary_df.to_csv(output_file, index=False)

    print(f"Power profile summary saved to {output_file}")

if __name__ == "__main__":
    # Set up argument parser
    parser = argparse.ArgumentParser(description="Process power profile data and calculate energy metrics.")
    parser.add_argument("-d", "--directory", type=str, required=True, help="Path to the directory containing the power profile CSV files.")
    parser.add_argument("-p", "--p_batches", type=int, required=False, default=None, help="Number of batches for energy estimation.")
    
    # Parse arguments
    args = parser.parse_args()
    
    # Process the power profiles
    generate_power_profile_summery(args.directory, args.p_batches)