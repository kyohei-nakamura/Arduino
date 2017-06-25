import serial # pyserial

# Get a connection with serial (device name is COM3)
with serial.Serial('COM3', 9600) as ser:
    while True:
        # Read input
        input = raw_input()

        if input == "on":
            ser.write('h') # send char 'h', it means "LED ON".
        elif input == "off":
            ser.write('l') # send char 'l', it measn "LED OFF".
        elif input == "quit":
            break; # Quit

