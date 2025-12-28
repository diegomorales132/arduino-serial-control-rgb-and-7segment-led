# arduino-serial-control-rgb-and-7segment-led
This project uses the Arduino Serial Monitor to control the RGB LED and a 7-segment display.

## Features
- Type color names (red, green, blue) to change rgb LED color
- Type numbers 0-9 to display them on a 7 segment LED
- Uses conditionals and serial input parsing
## Hardware
- Arduino UNO
- RGB LED
- 7-segment display
- Resistors
- Breadboard and wires
## How it works 
Serial input is read as text.
If input matches a color, the RGB LED changes. 
If input is a number, the 7-segment updates.
## How to run
Upload the code, open Serial Monitor, set baud rate, type commands. 
** Demo **
https://youtu.be/td9IhLr_510
