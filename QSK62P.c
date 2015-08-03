


/***********************************************************************/
/*                                                                     */
/*  DATE        :Mon, Mar 23, 2009                                     */
/*																	   */
/*  DESCRIPTION :      This is the main file for the project and       */
/* 	  					contains most of the project specific code     */
/*																	   */
#include "QSKDefines.h"
#include "proto.h"
#include "extern.h"


/***********************************************************************/
/*                                                                     */
/*  DATE        :Mon, Mar 23, 2009                                     */
/*																	   */
/*  DESCRIPTION :      This is the main file for the project and       */
/* 	  					contains most of the project specific code     */
/*																	   */
/*  CPU GROUP   :62P                                                   */
/*                                                                     */
/*  Copyright (c) 2009 by BNS Solutions, Inc.						   */
/*  All rights reserved.											   */
/*                                                                     */
/***********************************************************************/
#define ALWAYS 1

#define PRESSED 0
#define BIGNUMBER 12000

/*The following two counts are for the switches.  Whether they are one or zero will determine
/*whether or not the ports come on.
*/

unsigned int switch1_count;
unsigned int switch2_count;
unsigned int switch3_count;
unsigned int waste_time;
unsigned int car=OFF;
void main(void)
//-----------------------------------------------------------------------------------------------------
//  Purpose:	The MCU will come here after reset.
//				UART is set to 9600,N,8,1
//  
//
//  Rev:    1.0     Initial Release
//  
//  Notes:          None    
//-----------------------------------------------------------------------------------------------------
{
	init_ports();
	MCUInit();
	InitDisplay("\tAWESOME-0  \n        ");
	InitUART();
	InitSwitch();
	BNSPrintf(SERIAL_FILE_NUM, "\n\rSample\n\r");
	//p3_0 = 1;
	switch1_count=BIGNUMBER;
	switch2_count=BIGNUMBER;
	switch3_count=BIGNUMBER;
	TimerB0_Init();
	TimerInit();
	//P2A();
	while(ALWAYS)
	{
		/*waste_time=0;
		
		if(switch1_count>=BIGNUMBER)
		{
		switch1_count--;
		if(S1 == PRESSED)
			{
			switch1_count=0;
			BNSPrintf(LCD,"\n LEFT \n");
			p3_0^=HIGH;
			car=ON;
			}
		
				
		}	//end S1 bignumber if
		 
		 if(switch3_count>=BIGNUMBER){
			 switch3_count--;
		 	if(S3 == PRESSED)
		{
			switch3_count=0;
			BNSPrintf(LCD,"\n RIGHT \n");
			p3_2^=HIGH;
				
			
		}
				
		}	//end if S3
		
			if(switch2_count>=BIGNUMBER){
			switch2_count--;
			if(S2 == PRESSED)
		{
				switch2_count=0;
				BNSPrintf(LCD,"\n OFF \n");
				p3_0=LOW;
				p3_2=LOW;
		
		}	
			} //end of S2 bignumber
			
		//while(waste_time<=40000)//while loop to add delay
		//{
		//	waste_time++;
		//} end of waste time loop
		switch1_count++;
		switch2_count++;
		switch3_count++;
		*/
	}//end of while(ALWAYS) loop
	



}//end of main