#include "Emakefun_MotorDriver.h"
Emakefun_MotorDriver mMotorDriver = Emakefun_MotorDriver(0x60, MOTOR_DRIVER_BOARD_V5);
Emakefun_DCMotor *DCMotor_1 = mMotorDriver.getMotor(M1);
Emakefun_DCMotor *DCMotor_2 = mMotorDriver.getMotor(M2);
Emakefun_DCMotor *DCMotor_3 = mMotorDriver.getMotor(M3);
Emakefun_DCMotor *DCMotor_4 = mMotorDriver.getMotor(M4);

void setup()
{
    Serial.begin(9600);
    mMotorDriver.begin(50);
}

void loop()
{
  // 前进
  DCMotor_1->setSpeed(200);
  DCMotor_1->run(FORWARD);
  DCMotor_2->setSpeed(200);
  DCMotor_2->run(FORWARD);
  DCMotor_3->setSpeed(200);
  DCMotor_3->run(FORWARD);
  DCMotor_4->setSpeed(200);
  DCMotor_4->run(FORWARD);
  delay(4000);
  // 后退
  DCMotor_1->setSpeed(100);
  DCMotor_1->run(BACKWARD);
  DCMotor_2->setSpeed(100);
  DCMotor_2->run(BACKWARD);
  DCMotor_3->setSpeed(100);
  DCMotor_3->run(BACKWARD);
  DCMotor_4->setSpeed(100);
  DCMotor_4->run(BACKWARD);
  delay(4000);
  // 刹车
  DCMotor_1->run(BRAKE);
  DCMotor_2->run(BRAKE);
  DCMotor_3->run(BRAKE);
  DCMotor_4->run(BRAKE);
  delay(4000);
}
