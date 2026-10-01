#include <Servo.h>

Servo servoMotor;

void setup() {
  // Attach servo to digital pin 9
  servoMotor.attach(9);

  // Start serial communication
  Serial.begin(9600);

  // Set initial servo position
  servoMotor.write(0);
}

void loop() {

  // Check if serial data is available
  if (Serial.available() > 0) {

    char command = Serial.read();

    // Move servo to 90 degrees
    if (command == '1') {
      servoMotor.write(90);
    }

    // Move servo back to 0 degrees
    else {
      servoMotor.write(0);
    }
  }
}
