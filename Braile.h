#include "c_types.h"
#ifndef Braile_h
#define Braile_h

#include <Arduino.h>
#include <Servo.h>

class Braile {
public:
  Braile();
  int getChar(char c);
  void setChar(int c);
  void setServo(int servo, int position);
  void setServos(int position);
  void begin();

  static const uint8_t SERVO_UNO = 1;
  static const uint8_t SERVO_DOS = 2;
  static const uint8_t SERVO_TRES = 3;
  static const uint8_t SERVO_CUATRO = 4;
  static const uint8_t SERVO_CINCO = 5;
  static const uint8_t SERVO_SEIS = 6;

private:
  Servo servo1, servo2, servo3, servo4, servo5, servo6;
  static const uint8_t _pinServo1 = 16;
  static const uint8_t _pinServo2 = 5;
  static const uint8_t _pinServo3 = 4;
  static const uint8_t _pinServo4 = 0;
  static const uint8_t _pinServo5 = 2;
  static const uint8_t _pinServo6 = 14;
};

#endif
