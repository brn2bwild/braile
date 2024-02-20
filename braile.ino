#include "Braile.h"

Braile braile;

void setup() {
  Serial.begin(115200);
  delay(100);
  braile.begin();
  delay(100);
  braile.setServos(90);
}


void loop() {
  // if(Serial.available()){
  //   char serialChar = Serial.read();
  //   int charConverted = braile.getChar(serialChar);
  //   delay(5);
  //   Serial.println(charConverted);
  // }
  braile.setServo(braile.SERVO_UNO, 95);
  delay(300);
  braile.setServo(braile.SERVO_UNO, 85);
  delay(300);
  braile.setServo(braile.SERVO_DOS, 95);
  delay(300);
  braile.setServo(braile.SERVO_DOS, 85);
  delay(300);
  braile.setServo(braile.SERVO_TRES, 95);
  delay(300);
  braile.setServo(braile.SERVO_TRES, 85);
  delay(300);
  braile.setServo(braile.SERVO_CUATRO, 85);
  delay(300);
  braile.setServo(braile.SERVO_CUATRO, 95);
  delay(300);
  braile.setServo(braile.SERVO_CINCO, 85);
  delay(300);
  braile.setServo(braile.SERVO_CINCO, 95);
  delay(300);
  braile.setServo(braile.SERVO_SEIS, 85);
  delay(300);
  braile.setServo(braile.SERVO_SEIS, 95);
  delay(300);
}
