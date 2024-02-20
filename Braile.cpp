#include "Arduino.h"
#include <Servo.h>
#include "Braile.h"
#include "chars.h"

Servo servo, servo2, servo3, servo4, servo5, servo6;

Braile::Braile() {}

void Braile::begin() {
  servo1.attach(_pinServo1, 500, 2500);
  servo2.attach(_pinServo2, 500, 2500);
  servo3.attach(_pinServo3, 500, 2500);
  servo4.attach(_pinServo4, 500, 2500);
  servo5.attach(_pinServo5, 500, 2500);
  servo6.attach(_pinServo6, 500, 2500);
}

int Braile::getChar(char c){
  return int(c);
}

void Braile::setServo(int servo, int position){
  switch(servo){
    case 1:
      servo1.write(position);
      break;
    case 2:
      servo2.write(position);
      break;
    case 3:
      servo3.write(position);
      break;
    case 4:
      servo4.write(position);
      break;
    case 5:
      servo5.write(position);
      break;
    case 6:
      servo6.write(position);
      break;
  }
}

void Braile::setServos(int position) {
  servo1.write(position);
  servo2.write(position);
  servo3.write(position);
  servo4.write(position);
  servo5.write(position);
  servo6.write(position);
}

void Braile::setChar(int c) {
  setServo(0, chars[c][0]);
  setServo(1, chars[c][1]);
  setServo(2, chars[c][2]);
  setServo(3, chars[c][3]);
  setServo(4, chars[c][4]);
  setServo(5, chars[c][5]);
}
