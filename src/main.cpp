#include <Arduino.h>
#include <Servo.h>
Servo myServo;
void setup() {
    myServo.attach(9);
}