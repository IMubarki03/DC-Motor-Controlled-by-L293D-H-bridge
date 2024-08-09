# DC Motor Controlled by L293D H-bridge
## Introduction
A _DC motor_ (Direct Current motor) is an electric motor that runs on direct current (DC) electricity. It converts electrical energy into mechanical energy by utilizing the principles of electromagnetism.<br>

The _L293D_ is a popular H-bridge motor driver IC that allows you to control the direction and speed of DC motors. It's widely used in robotics and other projects where controlling motors is necessary.<br><br>


**PinOut of _L293D_:**
- Pin 1 (Enable 1-2): Enables or disables the first H-bridge (controls Motor 1). Connect to a PWM signal for speed control.
- Pin 2 (Input 1): Controls the direction of Motor 1.
- Pin 3 (Output 1): Connected to one terminal of Motor 1.
- Pin 4 (GND): Ground.
- Pin 5 (GND): Ground.
- Pin 6 (Output 2): Connected to the other terminal of Motor 1.
- Pin 7 (Input 2): Controls the direction of Motor 1.
- Pin 8 (Vcc2): Power supply for the motor (Motor Voltage, up to 36V).
- Pin 9 (Enable 3-4): Enables or disables the second H-bridge (controls Motor 2). Connect to a PWM signal for speed control.
- Pin 10 (Input 3): Controls the direction of Motor 2.
- Pin 11 (Output 3): Connected to one terminal of Motor 2.
- Pin 12 (GND): Ground.
- Pin 13 (GND): Ground.
- Pin 14 (Output 4): Connected to the other terminal of Motor 2.
- Pin 15 (Input 4): Controls the direction of Motor 2.
- Pin 16 (Vcc1): Logic power supply (typically 5V).

## TinkerLink
https://www.tinkercad.com/things/aXBxpYxTWrX-l293d-h-bridge-controlling-dc-motor?sharecode=a_TrTeuQeCNPR_c_1F0-I0GaFDHzYSlDDjuJV6lrfnU

## Requirements
![image](https://github.com/user-attachments/assets/b14904ac-d833-4628-9619-b35ad96e6efc)


## Procedure

### Connections
Follow the next **Steps**:<br>
1. Create a circuit.

2. Install an Arduino Uno R3, Breadboard, L293D H-bridge, and a DC motor.<br>
![image](https://github.com/user-attachments/assets/6487dec2-ab64-4f0a-8a78-852f070ff2f9)<br>

3. From the Arduino, connect the "5v" and "GND" to the breadboard's positive and negative lines; respectively.<br>
![image](https://github.com/user-attachments/assets/0dd15ed7-828d-4f87-8005-3cdaa591717b)<br>

4. Connect the positive and negative lines to their duals on the other side of the breadboard. Now, every positive and negative line is connected to the Arduino.<br>
![image](https://github.com/user-attachments/assets/4eac7593-c082-4f59-85e2-07a877c2390b)<br>

5. Put the L293D H-bridge in the middle of the breadboard.<br>
![image](https://github.com/user-attachments/assets/0a57e84f-c4ef-401a-805e-b347abdf4fb2)<br>

6. Connect the 2 GND pins on each side(Pin 4, Pin 5, Pin 14, Pin 15) to the Negative line on each side.<br>
![image](https://github.com/user-attachments/assets/13125be3-dcf6-4d70-a140-aa78ea456d14)<br>

7. Connect the 2 Power pins(Pin 8, Pin 16), also the 2 Enabling pins(Pin 1, Pin 9) to the Positive line on each side.<br> 
![image](https://github.com/user-attachments/assets/ffc9c0f9-3308-465b-b1c7-d81ee8746e61)<br>

8. From the Arduino, Connect Digital pins(11, 9) to Input4 and Input3; respectively.<br>
![image](https://github.com/user-attachments/assets/a981087e-cb53-44fb-bda0-9ad6d391d0bd)<br>

9. From the DC motor, Connect Terminals(1, 2) to Output4 and Output3; respectively.<br>
![image](https://github.com/user-attachments/assets/2b9aa6e4-4032-4885-954d-01a1e8a63679)<br>

Now the connection part is ready.<br>

### Coding
For coding, the file is attached above.<br>
![image](https://github.com/user-attachments/assets/4de1a7a1-dae5-4d31-8fb0-4a265ccd79a2)
