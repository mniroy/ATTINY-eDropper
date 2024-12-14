# ATTINY-eDropper

## Description
The ATTINY-eDropper is a DIY project that uses an ATtiny85 microcontroller to create an electronic dropper post for a mountain bike (MTB). When the button is pressed, the servo moves to 60 degrees, simulating the dropper post being activated. When the button is released, the servo returns to 0 degrees, simulating the dropper post being deactivated. The microcontroller also goes to sleep to conserve power when idle.

## Hardware Requirements
- ATtiny85 microcontroller
- High-torque servo motor (recommended: MG996R or similar)
- Push button
- Resistor (10k ohm recommended)
- Connecting wires
- Breadboard (optional)
- Small LiPo battery (recommended: 3.7V 500mAh or similar)

## Circuit Diagram
- Connect the button to pin 2 of the ATtiny85 with a pull-up resistor.
- Connect the servo signal wire to pin 3 of the ATtiny85.
- Connect the power and ground pins of the servo and button to the respective power and ground pins of the ATtiny85.

## Usage
1. Upload the provided code to the ATtiny85.
2. Connect the hardware as described in the circuit diagram.
3. Power the ATtiny85.
4. Press the button to move the servo to 60 degrees.
5. Release the button to return the servo to 0 degrees and put the ATtiny85 to sleep.

## Code
The code for this project is provided in the `attinydropper.ino` file.