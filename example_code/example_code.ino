#include <Servo.h>

Servo myservo;

void setup() {
  myservo.attach(); //shim port number
}

void loop() {
  myservo.write(180); //angle degrees
}
