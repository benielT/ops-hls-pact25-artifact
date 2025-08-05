#!/bin/bash

# Set variables
APP_CMD="$@"           # The full application command (including arguments)
LOG_FILE="nvidia_smi_log.csv"  # Output log file
INTERVAL=0.01            # Sampling interval in seconds

# Check if the application command is provided
if [ -z "$APP_CMD" ]; then
  echo "Usage: $0 <application_command_with_arguments>"
  exit 1
fi

# Print header to the log file
echo "timestamp,power.draw (W),clocks.sm (MHz),clocks.mem (MHz),clocks.gr (MHz)" > $LOG_FILE

# Start the application in the background
eval "$APP_CMD" &
APP_PID=$!

echo "Profiling application (PID: $APP_PID)..."
echo "Logging GPU metrics to $LOG_FILE..."

# Monitor GPU metrics while the application is running
while kill -0 $APP_PID 2> /dev/null; do
  # Query GPU metrics with nvidia-smi
  nvidia-smi --query-gpu=timestamp,power.draw,clocks.sm,clocks.mem,clocks.gr --format=csv,noheader,nounits>> $LOG_FILE
  sleep $INTERVAL
done

echo "$APP_CMD" >> $LOG_FILE

echo "Profiling complete. Metrics saved in $LOG_FILE."