#include <Servo.h>

Servo actuator; // create a servo object named "actuator"

void setup() {
  actuator.attach(9); // attach the actuator to Arduino pin 9 (PWM)
  actuator.writeMicroseconds(1000); // give the actuator a 1ms pulse to retract the arm (1000us = 1ms)
  delay(3000); // delay a few seconds to give the arm time to retract
    Serial.begin(9600);

}


void setActuator(int percentage){

  int x = 1000;
  x += percentage*10;
  actuator.writeMicroseconds(x); // 1ms pulse to retract the arm

}

void loop() {



  setActuator(0);
  Serial.println("bruh");
  delay(100);


}