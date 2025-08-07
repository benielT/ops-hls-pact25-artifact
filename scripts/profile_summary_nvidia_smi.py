import pandas as pd
import numpy as np
import argparse
import os

def calculate_average_power_and_duration(log_file):
    """
    Calculate the average power draw and the time period in milliseconds from the NVIDIA SMI log.
    
    Args:
        log_file (str): Path to the NVIDIA SMI log file.

    Returns:
        tuple: Average power draw (W) and total time period (ms).
    """
    # Load the CSV file into a pandas DataFrame
    data = pd.read_csv(log_file)
    command = data.tail(1)
    data.drop(data.tail(1).index, inplace=True)
    print(data)
    
    # Ensure the necessary columns exist
    required_columns = {'timestamp', 'power.draw (W)'}
    if not required_columns.issubset(data.columns):
        raise ValueError(f"Log file must contain the following columns: {required_columns}")

    # Convert timestamps to pandas datetime
    data['timestamp'] = pd.to_datetime(data['timestamp'], format="%Y/%m/%d %H:%M:%S.%f")

    # Calculate average power draw using numpy
    average_power_draw = np.mean(data['power.draw (W)'])

    # Calculate the total time period in milliseconds
    duration_ms = (data['timestamp'].iloc[-1] - data['timestamp'].iloc[0]).total_seconds() * 1000

    return average_power_draw, duration_ms, command['timestamp'].iloc[0]

def calculate_energy_kj(average_power_w, duration_ms):
    """Convert power in watts and time in milliseconds to energy in kilojoules."""
    return (average_power_w * duration_ms / 1_000_000)
        
# Main execution
if __name__ == "__main__":
    # Parse command-line arguments
    parser = argparse.ArgumentParser(description="Analyze power draw from an NVIDIA SMI log using pandas.")
    parser.add_argument("log_file", help="Path to the NVIDIA SMI log file")
    args = parser.parse_args()

    try:
        # Calculate metrics
        average_power, duration, command = calculate_average_power_and_duration(args.log_file)
        energy_kj = calculate_energy_kj(average_power, duration)
        # Print results
        print(f"Average Power Draw: {average_power:.2f} W")
        print(f"Time Period: {duration:.2f} ms")
        print(f"Total energy: {energy_kj} kJ")
        print(f"Command ran: {command} ms")
    except Exception as e:
        print(f"Error: {e}")