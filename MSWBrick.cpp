// March 25th 2003

#include "rcx.h"
extern "C" {TurnPortOn(void) 
{
if (!RCX_start("COM2")) // Assumes Serial Port COM2 is being used.
return 1;
else
return 33;
}
}

extern "C" {TurnPortOff(void) 
{
RCX_stop=1;
while (RCX_stop); // Wait until interface task has finished
return 2;
}
}

extern "C" {MotorAForward(void) 
{
//set motor speeds to full power
RCX_motor_val[0]=8;
return 3;
}
}

extern "C" {MotorAReverse(void) 
{
//set motor speeds to full power
RCX_motor_val[0]=-8;
return 4;
}
}

extern "C" {MotorBForward(void) 
{
//set motor speeds to full power
RCX_motor_val[1]=8;
return 5;
}
}

extern "C" {MotorBReverse(void) 
{
//set motor speeds to full power
RCX_motor_val[1]=-8;
return 6;
}
}

extern "C" {MotorCForward(void) 
{
//set motor speeds to full power
RCX_motor_val[2]=8;
return 7;
}
}

extern "C" {MotorCReverse(void) 
{
//set motor speeds to full power
RCX_motor_val[2]=-8;
return 8;
}
}

extern "C" {MotorAOn(void) 
{
//switch on motor A
RCX_motor_on[0]=1;
return 9;
}
}

extern "C" {MotorBOn(void) 
{
//switch on motor B
RCX_motor_on[1]=1;
return 10;
}
}

extern "C" {MotorCOn(void) 
{
//switch on motor C
RCX_motor_on[2]=1;
return 11;
}
}

extern "C" {MotorAOff(void) 
{
//switch off motor A
RCX_motor_on[0]=0;
return 12;
}
}

extern "C" {MotorBOff(void) 
{
//switch off motor B
RCX_motor_on[1]=0;
return 13;
}
}

extern "C" {MotorCOff(void) 
{
//switch off motor A
RCX_motor_on[2]=0;
return 14;
}
}

extern "C" {Sensor1On(void) 
{
RCX_sensor_on[1]=1;
return 15;
}
}

extern "C" {Sensor1Off(void) 
{
RCX_sensor_on[1]=0;
return 16;
}
}

extern "C" {int Sensor1Value(int Value1) 
{
Value1 = RCX_sensor_val[1];
return Value1;
}
}

extern "C" {Sensor2On(void) 
{
RCX_sensor_on[2]=1;
return 17;
}
}

extern "C" {Sensor2Off(void) 
{
RCX_sensor_on[2]=0;
return 18;
}
}
extern "C" {int Sensor2Value(int Value2) 
{
Value2 = RCX_sensor_val[2];
return Value2;
}
}

extern "C" {Sensor3On(void) 
{
RCX_sensor_on[3]=1;
return 19;
}
}

extern "C" {Sensor3Off(void) 
{
RCX_sensor_on[3]=0;
return 20;
}
}
extern "C" {int Sensor3Value(int Value3) 
{
Value3 = RCX_sensor_val[3];
return Value3;
}
}