#include "QSKDefines.h"
#include "proto.h"
#include "extern.h"

/***********************************************************************/
/*                                                                     */
/*  DATE        :Mon, Mar 23, 2009                                     */
/*																	   */
/*  DESCRIPTION :  This file contains all the interrupt routines for   */
/* 	  				the peripherals.  								   */
/*																	   */
/*  CPU GROUP   :62P                                                   */
/*                                                                     */
/*  Copyright (c) 2009 by BNS Solutions, Inc.						   */
/*  All rights reserved.											   */
/*                                                                     */
/***********************************************************************/

#pragma INTERRUPT A2DInterrupt
#pragma INTERRUPT UART0TransmitInterrupt
#pragma INTERRUPT UART0ReceiveInterrupt
#pragma INTERRUPT TimerA1Interrupt
#pragma INTERRUPT TimerA2Interrupt
#pragma INTERRUPT TimerB0Interrupt
#pragma INTERRUPT KeyBoardInterrupt
#pragma INTERRUPT DMA0Interrupt
#pragma INTERRUPT WakeUpInterrupt
#pragma INTERRUPT RTCInterrupt
#pragma INTERRUPT WatchDogInterrupt

unsigned int sw2_debounce_count=0;
unsigned int sw2_disabled=0;
unsigned int sw1_debounce_count=0;
unsigned int sw1_disabled=0;
unsigned int sw3_debounce_count=0;
unsigned int sw3_disabled=0;

void A2DInterrupt(void)
//-----------------------------------------------------------------------------------------------------
//  Purpose:	Unused in this program
//  
//
//  Rev:    1.0     Initial Release
//  
//  Notes:          None    
//-----------------------------------------------------------------------------------------------------
{
}

void InitSwitch(void)
{
	DISABLE_IRQ//disable switches
    int1ic=0x04;//enable switch 1
	int0ic=0x04;//enable switch 2
	ta4ic=0x04;//enable switch 3
	
	ENABLE_IRQ
}

void UART0TransmitInterrupt(void)
//-----------------------------------------------------------------------------------------------------
//  Purpose:	Unused in this program
//  
//
//  Rev:    1.0     Initial Release
//  
//  Notes:          None    
//-----------------------------------------------------------------------------------------------------
{
}

#pragma INTERRUPT sw2_ISR
void sw2_ISR (void) //test question underbar begins only in sfr30
{
	int0ic = 0; //disable interrupt
	sw2_debounce_count=0;
	//sw1_happened=1;
	sw2_disabled=1;
	BNSPrintf(LCD,"\n SW1 \n");
}

#pragma INTERRUPT sw1_ISR
void sw1_ISR (void) //test question underbar begins only in sfr30
{
	int1ic = 0; //disable interrupt
	sw1_debounce_count=0;
	//sw1_happened=1;
	sw1_disabled=1;
	BNSPrintf(LCD,"\n SW2 \n");
}
void DMA0Interrupt(void)
//-----------------------------------------------------------------------------------------------------
//  Purpose:	Unused in this program
//  
//
//  Rev:    1.0     Initial Release
//  
//  Notes:          None    
//-----------------------------------------------------------------------------------------------------
{
}

void UART0ReceiveInterrupt(void)
//-----------------------------------------------------------------------------------------------------
//  Purpose:	Unused in this program
//  
//
//  Rev:    1.0     Initial Release
//  
//  Notes:          None    
//-----------------------------------------------------------------------------------------------------
{
}



void TimerA1Interrupt(void)
//-----------------------------------------------------------------------------------------------------
//  Purpose:	Unused in this program
//  
//
//  Rev:    1.0     Initial Release
//  
//  Notes:          None    
//-----------------------------------------------------------------------------------------------------
{
}

void TimerA2Interrupt(void)
//-----------------------------------------------------------------------------------------------------
//  Purpose:	Unused in this program
//  
//
//  Rev:    1.0     Initial Release
//  
//  Notes:          None    
//-----------------------------------------------------------------------------------------------------
{
}
#pragma INTERRUPT TimerA4Interrupt
void TimerA4Interrupt(void)
{
//	ta4ic = 0; //disable interrupt

	BNSPrintf(LCD,"\n SW3 \n");
}

void TimerB0_Init(void)
//-----------------------------------------------------------------------------------------------------
//  Purpose:	Unused in this program
//  
//
//  Rev:    1.0     Initial Release
//  
//  Notes:          None    
//-----------------------------------------------------------------------------------------------------
// Timer Bi Mode Register (i=0 to 4)
// 0 TMOD0 Operation Mode Select Bit
// 1 TMOD1 Operation Mode Select Bit
// 2 MR0, MR1 No effect with timer
// 4 MR2 Set to "0" in event timer mode
// 5 MR3 Set to "0" in event timer mode
// 6 TCK0, TCK1 Clock Source
//      00 : f1 or f2 [selected in PCLKR Register bit 0]
//      01 : f8
//      10 : f32
//      11 : fC32
//#define f1_CLK_SPEED	  (6000000L) // Installed Oscillator
#define CLEAR_REGISTER        (0x00) // Clear Register
#define DESIRED_TIME_MS       (0x05) //  5 millisecond timer
#define TIMER_MODE            (0x00) //  Timer Mode
#define EVENT_MODE            (0x01) //  Event Mode
#define PULSE_MODE            (0x02) //  Pulse Period Mode
#define SRC_F1_F2_PCLK0       (0x00) //  selected in PCLKR Register bit 0
#define SRC_F8                (0x40) //  clock source f8
#define SRC_F32               (0x80) //  clock source f32
#define SRC_FC32              (0xC0) //  clock source fC32

{
  tb0mr = CLEAR_REGISTER;            // Clear Timer B0 Mode Register
  tb0mr |= TIMER_MODE;	             // Timer mode
  tb0mr |= SRC_F32;	             // Clock Source f32
// (6MHz / 32 * [time in millisecond] / 1000 ms per second )-1
  tb0 = (unsigned int) (((f1_CLK_SPEED/32)*DESIRED_TIME_MS/1000) - 1);
	
}

//---------------------------------------------------------------------------
//  Purpose:  Set Timer B0 5 ms.
//  
//  Rev:    1.0     Initial Release
//  
//  Notes:          None    
//---------------------------------------------------------------------------// Toggle Port 3 pin 0 to see on oscilloscope - each transition 5 msec 
#pragma INTERRUPT TimerB0Interrupt
void TimerB0Interrupt(void)
{
	//p3_0^=1;
	sw2_debounce_count++;
	if(sw2_debounce_count>=20)//if statement guarantees no overwrapping
	{				      //count is always at 20.
		sw2_debounce_count=20;
		if(sw2_disabled)//don't want to change system variable if unnecessary
		  {
			sw2_disabled=0;
			int0ic=0x04;
		  }
		  
	}//end of if statement
	
		sw1_debounce_count++;
	if(sw1_debounce_count>=20)//if statement guarantees no overwrapping
	{				      //count is always at 20.
		sw1_debounce_count=20;
		if(sw1_disabled)//don't want to change system variable if unnecessary
		  {
			sw1_disabled=0;
			int1ic=0x04;
		  }
		  
	}//end of if statement

	
}

void KeyBoardInterrupt(void)
//-----------------------------------------------------------------------------------------------------
//  Purpose:	Unused in this program
//  
//
//  Rev:    1.0     Initial Release
//  
//  Notes:          None    
//-----------------------------------------------------------------------------------------------------
{
}

void WakeUpInterrupt(void)
//-----------------------------------------------------------------------------------------------------
//  Purpose:	Unused in this program
//  
//
//  Rev:    1.0     Initial Release
//  
//  Notes:          None    
//-----------------------------------------------------------------------------------------------------
{
}

void RTCInterrupt(void)
//-----------------------------------------------------------------------------------------------------
//  Purpose:	Unused in this program
//  
//
//  Rev:    1.0     Initial Release
//  
//  Notes:          None    
//-----------------------------------------------------------------------------------------------------
{
}

void WatchDogInterrupt(void)
//-----------------------------------------------------------------------------------------------------
//  Purpose:	Unused in this program
//  
//
//  Rev:    1.0     Initial Release
//  
//  Notes:          None    
//-----------------------------------------------------------------------------------------------------
{
}