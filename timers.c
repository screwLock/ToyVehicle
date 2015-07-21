//Author: Travus Helmly
//Date: Septemper 5, 2012
//This file configures the timers and contains the TimerInit() function

#include "QSKDefines.h"
#include "proto.h"
#include "extern.h"

void TimerInit(void)
{
   /* Configure Timer A0 - 1ms (millisecond) counter */
   ta0mr = 0x80;	// Timer mode, f32, no pulse output
   ta0 = (unsigned int) (((f1_CLK_SPEED/32)*1e-3) - 1);	// (1ms x 12MHz/32)-1 = 374
 
   /* Configure Timer A1 - Timer A0 used as clock */
   ta1mr = 0x01;	// Event Counter mode, no pulse output
   ta1 = 0x3FF;		// initial value - max value of ADC (0x3FF)
   trgsr = 0x02;	// Timer A0 as event trigger

/* The recommended procedure for writing an Interrupt Priority Level is shown
   below (see M16C datasheets under 'Interrupts' for details). */

   DISABLE_IRQ		// disable irqs before setting irq registers - macro defined in skp_bsp.h

   tb0ic = 3;    // Set the timer B0's IPL (interrupt priority level) to 3
   ENABLE_IRQ		// enable interrupts macro defined in skp_bsp.h       
	ta4mr = 0x01; //event mode counter
	trgsr = 0x02;
	ta4 = 0x00;
   /* Start timers */
   ta1s = 1;		// Start Timer A1
   ta0s = 1;		// Start timer A0
   tb0s = 1;	    // Start timer B0
   ta4s = 1;		// Start timer A4   


}