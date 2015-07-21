//Travus Helmly 23. Sept. 2012. ECE 306
//File contains functions for wheel control

//function protoypes
#include "sfr62p.h"
#define ON 1
#define OFF 0
#define DELAY 100000
#define MT 10000

float delay=DELAY;
float waiting=MT;
void Right_Wheel_FWD(void);
void Left_wheel_FWD(void);
void Both_wheels_OFF(void);
void Right_wheel_REV(void);
void Left_wheel_REV(void);
void P2A(void);
void Both_wheels_FWD(void);
void Both_wheels_REV(void);

//Function to control right wheel forward

void Right_wheel_FWD(void)

{
	Both_wheels_OFF();
	p3_2^=ON;
}

//Function to control left wheel forward

void Left_wheel_FWD(void)

{
	Both_wheels_OFF();
	p3_0^=ON;
}

//Function to turn both wheels off

void Both_wheels_OFF(void)
{
	p3_0=OFF;//fwd
	p3_2=OFF;//fwd
	p3_1=OFF;//rev
	p3_3=OFF;//rev
}

void Both_wheels_FWD(void)
{
	Both_wheels_OFF();
	p3_0=ON;
	p3_2=ON;
	while(delay>0)
		{
			delay--;	
		}
	delay=DELAY;
	Both_wheels_OFF();
}

void Both_wheels_REV(void)
{
	Both_wheels_OFF();
	p3_1=ON;
	p3_3=ON;
	while(delay>0)
		{
			delay--;
		}
	delay=DELAY;
	Both_wheels_OFF;
}

void P2A(void)
{
	Both_wheels_OFF();
	
	while(waiting>0)
	{
		waiting--;
	}
	waiting=MT;
	
	Both_wheels_FWD();
	Both_wheels_OFF();
	
	while(waiting>0)
	{
		waiting--;
	}
	waiting=MT;
	
	Both_wheels_REV();
	Both_wheels_OFF();
	
	while(waiting>0)
	{
		waiting--;
	}
	waiting=MT;
	
	Both_wheels_FWD();
	Both_wheels_OFF();
	
	while(waiting>0)
	{
		waiting--;
	}
	waiting=MT;
	
	Both_wheels_REV();
	Both_wheels_OFF();
	
	while(waiting>0)
	{
		waiting--;
	}
	waiting=MT;
	
	Both_wheels_FWD();
	Both_wheels_OFF();
	while(waiting>0)
	{
		waiting--;
	}
	waiting=MT;
	
	Both_wheels_REV();
	
	Both_wheels_OFF();
	
}