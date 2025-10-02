#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(9);  // Attach servo to pin 9
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    int angle = Serial.parseInt();  // Read the angle from the serial input
    if (angle >= 0 && angle <= 180) {
      myServo.write(angle);  // Set the servo angle
      delay(15);  // Wait for the servo to reach the position
    }
  }
}