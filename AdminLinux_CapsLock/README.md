# Caps Lock Brightness Control Program

This C program allows you to control the Caps Lock LED brightness on Linux systems by reading from and writing to the /sys/class/leds/input1::capslock/brightness file. It provides functionality to toggle the LED on or off based on user input.

## Features

- *Toggle Caps Lock LED*: Set the Caps Lock LED to either on or off.
- *User Input*: Allows the user to input a brightness value (0 or 1) to control the Caps Lock LED.
- *Error Handling*: Ensures the file exists, handles errors related to file access and writing.
