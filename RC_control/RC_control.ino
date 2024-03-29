#include <Servo.h>

Servo actuator; // create a servo object named "actuator"

void setup() {
  actuator.attach(9); // attach the actuator to Arduino pin 9 (PWM)
  actuator.writeMicroseconds(1000); // give the actuator a 1ms pulse to retract the arm (1000us = 1ms)
  delay(3000); // delay a few seconds to give the arm time to retract
}

void setActuator(int percentage){

  int x = 1000;
  x += percentage*10;
  actuator.writeMicroseconds(x); // 1ms pulse to retract the arm


}

void loop() {
  // Extend and retract the actuator arm on a 5 second interval
  // actuator.writeMicroseconds(2000); // 2ms pulse to extend the arm
  // delay(3000);
  // actuator.writeMicroseconds(1000); // 1ms pulse to retract the arm
  // delay(3000);


  setActuator(100);
  delay(3000);
  setActuator(0);
  delay(3000);
}