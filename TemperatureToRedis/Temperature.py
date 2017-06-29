import sys
import os
import serial # pyserial

# stop buffering
sys.stdout = os.fdopen(sys.stdout.fileno(), 'w', 0)

# Get a connection with serial (device name is COM3)
with serial.Serial('COM3', 9600, timeout=2) as ser:
    print(ser.name)
    while True:
        # Read temperature from Arduino
        temp = ser.readline()
        print(temp)

