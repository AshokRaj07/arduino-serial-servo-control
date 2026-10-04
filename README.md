# Arduino Serial Servo Control

A beginner-friendly Arduino project that demonstrates how to control a servo motor using serial communication.

## 📌 About

This project uses an Arduino and a servo motor to demonstrate basic serial communication and hardware control.

The Arduino continuously checks for incoming serial data. When it receives the character `1`, the servo moves to 90 degrees. For other received characters, the servo returns to 0 degrees.

## 🚀 Features

* Servo motor control using Arduino
* Serial communication
* Simple command-based control
* Beginner-friendly Arduino code

## 🛠️ Components Required

* Arduino board
* Servo motor
* USB cable
* Jumper wires
* Computer with Arduino IDE

## 🔌 Connections

| Servo Wire | Arduino       |
| ---------- | ------------- |
| Signal     | Digital Pin 9 |
| VCC        | 5V            |
| GND        | GND           |

> The exact power requirements may vary depending on the servo motor being used.

## 💻 Software

* Arduino IDE
* Arduino Servo library

The `Servo` library is included in the Arduino code:

```cpp
#include <Servo.h>
```

## ⚙️ How It Works

1. The servo is connected to digital pin 9.
2. Serial communication is started at 9600 baud.
3. The servo starts at 0 degrees.
4. The Arduino checks for incoming serial data.
5. If the received character is `1`, the servo moves to 90 degrees.
6. For other received characters, the servo returns to 0 degrees.

## ▶️ How to Run

1. Connect the servo motor to the Arduino.
2. Open the `.ino` file in Arduino IDE.
3. Connect the Arduino to your computer.
4. Select the correct Arduino board and COM port.
5. Upload the program.
6. Open the Serial Monitor.
7. Set the baud rate to **9600**.
8. Send `1` to move the servo to 90 degrees.
9. Send another character to return the servo to 0 degrees.

## 📸 Project Demo

Add a photo of your Arduino and servo setup here.

```markdown
![Servo Project](images/servo.jpeg)
```

## 🔮 Future Improvements

* Add multiple servo positions
* Control the servo using multiple serial commands
* Add buttons for manual control
* Control multiple servo motors
* Add sensors for automated servo control

## 📚 Learning Outcome

This project was created to understand the basics of Arduino programming, servo motor control, and serial communication.

It helped me learn how software commands can be used to control a physical component connected to an Arduino.
