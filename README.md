# SPEECH RECOGNIZATION SYSTEM

COMPANY : CODETECH IT SOLUTION

NAME : SHUBHAM DATTATRAY SURVE

INTERN ID : CT08DH2161

DOMAIN : EMBEDDED SYSTEM

DURATION : 8 WEEKS

MENTOR : NEELA SANTOSH KUMAR

This project is a basic voice-controlled home automation system built using Arduino UNO. Instead of physical switches, voice commands are typed or spoken via Serial Monitor. The Arduino reads these commands and turns ON or OFF the connected devices (simulated using LEDs). This system demonstrates the concept of speech-based automation without using Bluetooth modules like HC-05, relying solely on Serial input from the PC.

🔩 Components Used:

1. Arduino UNO – Main controller
2. LEDs (2 or more) – To simulate appliances like Light, Fan, etc.
3. Resistors (220Ω) – To limit current to LEDs
4. Breadboard & Jumper Wires – For easy circuit setup
5. USB Cable – For power and serial communication
6. Laptop/PC with Arduino IDE – To give serial commands

⚙️ Working Principle:

The user types or speaks commands (like "light on", "fan off") into the Serial Monitor.
Arduino reads the string using Serial.readString() function.
It compares the command with predefined strings.
If the command matches:

"light on" → Light LED is turned ON
"light off" → Light LED is turned OFF
"fan on" → Fan LED is turned ON
"fan off" → Fan LED is turned OFF

The output is shown by turning the LEDs ON or OFF, simulating appliances.

🧪 Output (Expected):

Example Serial Monitor Output:

Enter Command: light on  
Result: Light is ON

Enter Command: fan off  
Result: Fan is OFF

LEDs on breadboard respond accordingly.

⚠️ Important Notes:

Baud rate should be set to 9600 in Serial Monitor and code.
Ensure correct string comparisons (case-sensitive or case-insensitive).
Serial Monitor must be open to give commands – no external mic or app required.
Useful Arduino functions: Serial.available(), Serial.readString(), digitalWrite()

🔄 Possible Voice Input Method (Optional):

Use Google Docs Voice Typing or any PC voice-to-text tool to speak → copy-paste into Serial Monitor.
(Example: speak "light on", it types → paste into Serial Monitor)

✅ Applications:

Prototype for smart homes
Useful for elderly or physically challenged people
Introduction to Natural Language Input + Arduino projects
