//Travus Helmly 23. Sept. 2012. ECE 306
//File contains functions for the Shape maneuvres

//function prototypes

#include "QSKDefines.h"

void Circle(void);
void Turn_135(void);
void Straight_Line(void);
void Figure_8(void);
void Triangle(void);
int i=0;
void Turn_135 (void)
{
	BNSPrintf(LCD,"\n TURN135 \n");
	//forward half distance
	//turn 135 degrees
	Both_wheels_OFF();
	while(1)
	{
		Left_wheel_FWD();
	}
	Both_wheels_OFF();
}

//Function to perform Figure Eight Shape
void Figure_8(void)
{
	BNSPrintf(LCD,"\n FIGURE_8 \n");
	
	Both_wheels_OFF();
	Left_wheel_FWD();
	for(i=0;i<=5000;i++)
		{	
		}	
	Both_wheels_OFF();
	Right_wheel_FWD();	
	Both_wheels_OFF();
}

void Triangle (void)
{
	BNSPrintf(LCD,"\n Triangle \n");
	Both_wheels_OFF();
	while(1)
	{
		Straight_Line();
	}
	while(1)
	{
		Turn_135();
	}
	while(1)
	{
		Straight_Line();
	}
	while(1)
	{
		Turn_135();
	}
	while(1)
	{
		Straight_Line();
	}
	while(1)
	{
		Turn_135();
	}
	while(1)
	{
		Turn_135();
	}
	while(1)
	{
		Straight_Line();
	}
	Both_wheels_OFF();
}