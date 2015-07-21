//Travus Helmly. 23 Sept 2012. ECE 306
//File contains functions to initialize ports.
/* Port Pins */

//macros used in file
#include "sfr62p.h"
#define PORT_IN         0 
#define PORT_OUT        1 
#define LOW             0 
#define HIGH            1 

//function prototypes
void init_ports(void);
void init_port0(void);
void init_port1(void);
void init_port2(void);
void init_port3(void);
void init_port4(void);
void init_port5(void);
void init_port6(void);
void init_port7(void);
void init_port8(void);
void init_port9(void);
void init_port10(void);

/*
Purpose:Initialize ports
Function initializes each port and all pins
*/
void init_ports(void){
  //Calling port functions for all the 11 ports
 // void init_port0();
  //void init_port1();
  //void init_port2();
   init_port3();
  //void init_port4();
  //void init_port5();
  //void init_port6();
  //void init_port7();
  //void init_port8();
  //void init_port9();
  //void init_port10();

  
}

//Initialize all ports
//We decided to initialize pdx_y to PORT_IN (which is 0)
//and px_y to LOW (which is 0).
//Input means input to the processor.

/*
Purpose: Initialize Pins in Port 0
*Pin 0: General Purpose I/O
 Pin 0: AN0_0 Analog Input Pin 0 for A/D converter
*Pin 1: General Purpose I/0
 Pin 1: AN0_1 Analog Pin 1
*Pin 2: General Purpose I/O
 Pin 2: AN0_2 Analog Pin 2
*Pin 3: General Purpose I/O
 Pin 3: AN0_3 Analog Pin 3
*Pin 4: General Purpose I/O
 Pin 4: ANO_4 Analog Pin 4
*Pin 5: General Purpose I/O
 Pin 5: AN0_5 Analog Pin 5
*Pin 6: General Purpose I/O
 Pin 6: AN0_6 Analog Pin 6
*Pin 7: General Purpose I/O
 Pin 7: AN0_7 Analog Pin 7
 
 Variables: None
*/
/*void  init_port0(void){
   pd0_0 = PORT_IN;  
   pd0_1 = PORT_IN;  
   pd0_2 = PORT_IN;  
   pd0_3 = PORT_IN;  
   pd0_4 = PORT_IN;  
   pd0_5 = PORT_IN;  
   pd0_6 = PORT_IN;  
   pd0_7 = PORT_IN;  

   p0_0 = LOW;  
   p0_1 = LOW;  
   p0_2 = LOW;  
   p0_3 = LOW;  
   p0_4 = LOW;  
   p0_5 = LOW;  
   p0_6 = LOW;  
   p0_7 = LOW;  		//Test pin
}   
/*
Purpose: Initialize Pins in Port 1
*Pin 0: General Purpose I/O
 Pin 0: 
*Pin 1: General Purpose I/0
 Pin 1: 
*Pin 2: General Purpose I/O
 Pin 2: 
*Pin 3: General Purpose I/O
 Pin 3: 
*Pin 4: General Purpose I/O
 Pin 4: 
*Pin 5: General Purpose I/O
 Pin 5: 
*Pin 6: General Purpose I/O
 Pin 6: 
*Pin 7: General Purpose I/O
 Pin 7: 
*/

//Initializes the port
/*
void init_port1(void){
   pd1_0 = PORT_IN;  
   pd1_1 = PORT_IN;  
   pd1_2 = PORT_IN;  
   pd1_3 = PORT_IN;  
   pd1_4 = PORT_IN;  
   pd1_5 = PORT_IN;  
   pd1_6 = PORT_IN;  
   pd1_7 = PORT_IN;  

   p1_0 = LOW;  
   p1_1 = LOW;  
   p1_2 = LOW;  
   p1_3 = LOW;  
   p1_4 = LOW;  
   p1_5 = LOW;  
   p1_6 = LOW;  
   p1_7 = LOW;  
} */
/*
Purpose: Initialize Pins in Port 2
*Pin 0: General Purpose I/O
 Pin 0: AN2_0 Analog Pin 0
*Pin 1: General Purpose I/0
 Pin 1: AN2_1 Analog Pin 1
*Pin 2: General Purpose I/O
 Pin 2: AN2_2 Analog Pin 2
*Pin 3: General Purpose I/O
 Pin 3: AN2_3 Analog Pin 3
*Pin 4: General Purpose I/O
 Pin 4: AN2_4 Analog Pin 4
*Pin 5: General Purpose I/O
 Pin 5: AN2_5 Analog Pin 5
*Pin 6: General Purpose I/O
 Pin 6: AN2_6 Analog Pin 6
*Pin 7: General Purpose I/O
 Pin 7: AN2_7 Analog Pin 7
*/
void init_port2(void){
   pd2_0 = PORT_IN;  
   pd2_1 = PORT_IN;  
   pd2_2 = PORT_IN;  
   pd2_3 = PORT_IN;  
   pd2_4 = PORT_IN;  
   pd2_5 = PORT_IN;  
   pd2_6 = PORT_IN;  
   pd2_7 = PORT_IN;  

   p2_0 = LOW;  
   p2_1 = LOW;  
   p2_2 = LOW;  
   p2_3 = LOW;  
   p2_4 = LOW;  
   p2_5 = LOW;  
   p2_6 = LOW;  
   p2_7 = LOW;  
}

/*
Purpose: Initialize Pins in Port 3
*Pin 0: General Purpose I/O
 Pin 0: Used for Left Motor Forward
*Pin 1: General Purpose I/0
 Pin 1: 
*Pin 2: General Purpose I/O
 Pin 2: Used for Righ Motor Forward
*Pin 3: General Purpose I/O
 Pin 3: 
*Pin 4: General Purpose I/O
 Pin 4: 
*Pin 5: General Purpose I/O
 Pin 5: 
*Pin 6: General Purpose I/O
 Pin 6: 
*Pin 7: General Purpose I/O
 Pin 7: 
*/
void init_port3(void){
   pd3_0 = PORT_OUT;  //Left motor
   pd3_1 = PORT_OUT;
   pd3_2 = PORT_OUT;  //Right motor
   pd3_3 = PORT_OUT;  
   pd3_4 = PORT_IN;  
   pd3_5 = PORT_IN;  
   pd3_6 = PORT_IN;  
   pd3_7 = PORT_IN;  

   p3_0 = LOW;  
   p3_1 = LOW;  
   p3_2 = LOW;  
   p3_3 = LOW;  
   p3_4 = LOW;  
   p3_5 = LOW;  
   p3_6 = LOW;  
   p3_7 = LOW;  
} 
/*
Purpose: Initialize Pins in Port 4
*Pin 0: General Purpose I/O
 Pin 0: 
*Pin 1: General Purpose I/0
 Pin 1: 
*Pin 2: General Purpose I/O
 Pin 2: 
*Pin 3: General Purpose I/O
 Pin 3: 
*Pin 4: General Purpose I/O
 Pin 4: 
*Pin 5: General Purpose I/O
 Pin 5: 
*Pin 6: General Purpose I/O
 Pin 6: 
*Pin 7: General Purpose I/O
 Pin 7: 
*/
void init_port4(void){
   pd4_0 = PORT_IN;  
   pd4_1 = PORT_IN;  
   pd4_2 = PORT_IN;  
   pd4_3 = PORT_IN;  
   pd4_4 = PORT_IN;  
   pd4_5 = PORT_IN;  
   pd4_6 = PORT_IN;  
   pd4_7 = PORT_IN;  

   p4_0 = LOW;  
   p4_1 = LOW;  
   p4_2 = LOW;  
   p4_3 = LOW;  
   p4_4 = LOW;  
   p4_5 = LOW;  
   p4_6 = LOW;  
   p4_7 = LOW;  
} 
/*
Purpose: Initialize Pins in Port 5
*Pin 0: General Purpose I/O
 Pin 0: 
*Pin 1: General Purpose I/0
 Pin 1: 
*Pin 2: General Purpose I/O
 Pin 2: 
*Pin 3: General Purpose I/O
 Pin 3: 
*Pin 4: General Purpose I/O
 Pin 4: 
*Pin 5: General Purpose I/O
 Pin 5: 
*Pin 6: General Purpose I/O
 Pin 6: 
*Pin 7: General Purpose I/O
 Pin 7: 
*/
void init_port5(void){
   pd5_0 = PORT_IN;  
   pd5_1 = PORT_IN;  
   pd5_2 = PORT_IN;  
   pd5_3 = PORT_IN;  
   pd5_4 = PORT_IN;  
   pd5_5 = PORT_IN;  
   pd5_6 = PORT_IN;  
   pd5_7 = PORT_IN;  

   p5_0 = LOW;  
   p5_1 = LOW;  
   p5_2 = LOW;  
   p5_3 = LOW;  
   p5_4 = LOW;  
   p5_5 = LOW;  
   p5_6 = LOW;  
   p5_7 = LOW;  
} 
/*
Purpose: Initialize Pins in Port 6
*Pin 0: General Purpose I/O
 Pin 0: CTS0 Clear to Send 0
 Pin 0: RTS0 Ready to Send 0
*Pin 1: General Purpose I/0
 Pin 1: CLK0  Clock

*Pin 2: General Purpose I/O
 Pin 2: RXD0 Serial Data Input
 Pin 2: SCL0 Transfer Clock I/O

*Pin 3: General Purpose I/O
 Pin 3: TXD0 Serial Data Output
 Pin 3: SDA0 Serial Data I/O

*Pin 4: General Purpose I/O
 Pin 4: CTS1 Clear to Send 1
 Pin 4: RTS1 Reception/Transmission
 Pin 4: CTS0 Clear to Send 0
 Pin 4: CLKS1 Clock

*Pin 5: General Purpose I/O
 Pin 5: CLK1 Clock

*Pin 6: General Purpose I/O
 Pin 6: RXD1 Serial Data Input
 Pin 6: SCL1 Transfer Clock I/O

*Pin 7: General Purpose I/O
 Pin 7: RXD2 Serial Data Input
 Pin 7: SCL2 Transfer Clock I/O

*/
void init_port6(void){
   pd6_0 = PORT_IN;  
   pd6_1 = PORT_IN;  
   pd6_2 = PORT_IN;  
   pd6_3 = PORT_IN;  
   pd6_4 = PORT_IN;  
   pd6_5 = PORT_IN;  
   pd6_6 = PORT_IN;  
   pd6_7 = PORT_IN;  

   p6_0 = LOW;  
   p6_1 = LOW;  
   p6_2 = LOW;  
   p6_3 = LOW;  
   p6_4 = LOW;  
   p6_5 = LOW;  
   p6_6 = LOW;  
   p6_7 = LOW;  
} 
/*
Purpose: Initialize Pins in Port 7
*Pin 0: General Purpose I/O
 Pin 0: TXD2 Serial Data Output
 Pin 0: SDA2 Serial Data I/O
 Pin 0: TA0OUT Timer A 0 Output
*Pin 1: General Purpose I/0
 Pin 1: TA0IN Timer A 0 Input
 Pin 1: TB5IN Timer B 4 Input
 Pin 1: RXD2 This is a serial input pin
 Pin 1: SCL2 Transfer Clock I/O

*Pin 2: General Purpose I/O
 Pin 2:

*Pin 3: General Purpose I/O
 Pin 3: 

*Pin 4: General Purpose I/O
 Pin 4: 

*Pin 5: General Purpose I/O
 Pin 5: 

*Pin 6: General Purpose I/O
 Pin 6:  TA3OUT Timer A 3 Output

*Pin 7: General Purpose I/O
 Pin 7: TA3IN   Timer A 3 Input

*/

void init_port7(void){
   pd7_0 = PORT_IN;  
   pd7_1 = PORT_IN;  
   pd7_2 = PORT_IN;         //For LED2_DDR
   pd7_3 = PORT_IN;  
   pd7_4 = PORT_IN;         //For LED1_DDR
   pd7_5 = PORT_IN;  
   pd7_6 = PORT_IN;  
   pd7_7 = PORT_IN;  

   p7_0 = LOW;         
   p7_1 = LOW;  
   p7_2 = LOW;            //For LED2
   p7_3 = LOW;  
   p7_4 = LOW;            //For LED1
   p7_5 = LOW;  
   p7_6 = LOW;  
   p7_7 = LOW;  
} 
//  Purpose: Initialize Port 8
//  System registers associated with Port 8 configured
//  * Pin 0 - I/O    General Purpose I/O
//    Pin 0 - TA4OUT Timer A4 Out
//    Pin 0 - U      Three-Phase Positive Waveform Output Pin
//  * Pin 1 - I/O    General Purpose I/O
//    Pin 1 - TA4IN  Timer A4 In
//    Pin 1 - U      Three-Phase Negative Waveform Output Pin
//  * Pin 2 - I/O    General Purpose I/O
//    Pin 2 - INT0   Interrupt 0 Input
//  * Pin 3 - I/O    General Purpose I/O
//    Pin 3 - INT1   Interrupt 1 Input
//  * Pin 4 - I/O    General Purpose I/O
//    Pin 4 - INT2   Interrupt 2 Input
//    Pin 5 - I/O    General Purpose I/O
//  * Pin 5 - NMI    Non-Maskable Interrupt Input
//    Pin 6 - I/O    General Purpose I/O
//  * Pin 6 – XCIN ==> Connected to X2 back side
//    Pin 7 - I/O    General Purpose I/O
//  * Pin 7 - XCOUT ==> Connected to X2 back side

void init_port8(void){
   pd8_0 = PORT_IN;   //For LED0_DDR
   pd8_1 = PORT_IN;   //For S2_DDR
   pd8_2 = PORT_IN;   //For S3_DDR
   pd8_3 = PORT_IN;   //For S1_DDR
   pd8_4 = PORT_IN;   
//   pd8_5 = PORT_IN;   
   //pd8_6 = PORT_IN;  General purpose IO
   //pd8_7 = PORT_IN;  General purpose IO

   p8_0 = LOW;        //For LED0 
   p8_1 = LOW;        //For S2
   p8_2 = LOW;        //For S3
   p8_3 = LOW;        //For S1
   p8_4 = LOW;  
   p8_5 = LOW;  
   //p8_6 = LOW;   General purpose IO
   //p8_7 = LOW;   General purpose IO
} 

//  Purpose: Initialize Port 9
//  System registers associated with Port 9 configured
//  * Pin 0 - I/O    General Purpose I/O
//    Pin 0 - TB0in  Timer B0 Input
//    Pin 0 - CLK3   Clock 3   
//  * Pin 1 - I/O    General Purpose I/O
//    Pin 1 - 
//  * Pin 2 - I/O    General Purpose I/O
//    Pin 2 - TB2IN  Timer B2 Input
//    Pin 2 - SOUT3  Asynchronous Receiver/Transmission
//  * Pin 3 - I/O    General Purpose I/O
//    Pin 3 - TB3IN  Timer B3 Input
//	  Pin 3 - DA0    Digital Analog 0
//  * Pin 4 - TB4IN  Timer B4 Input
//    Pin 4 - DA1    Digital Analog 1
//    Pin 5 - I/O    General Purpose I/O
//  * Pin 5 - CLK4   Clock 4
//    Pin 5 - ANEX0  Analog Pin
//    Pin 6 - I/O    General Purpose I/O
//  * Pin 6 –
//    Pin 7 - I/O    General Purpose I/O
//  * Pin 7 - 



void init_port9(void){
   pd9_0 = PORT_IN;  
   pd9_1 = PORT_IN;  
   pd9_2 = PORT_IN;  
   pd9_3 = PORT_IN;  
   pd9_4 = PORT_IN;  
   pd9_5 = PORT_IN;  
   pd9_6 = PORT_IN;  
   pd9_7 = PORT_IN;  

   p9_0 = LOW;  
   p9_1 = LOW;  
   p9_2 = LOW;  
   p9_3 = LOW;  
   p9_4 = LOW;  
   p9_5 = LOW;  
   p9_6 = LOW;  
   p9_7 = LOW;  
} 
//Initializes the port
/*
//  Purpose: Initialize Port 10
//  System registers associated with Port 10 configured
//  * Pin 0 - I/O    General Purpose I/O
//    Pin 0 - TA4OUT Timer A4 Out
//    Pin 0 - AN0    Analog Pin 0
//  * Pin 1 - I/O    General Purpose I/O
//    Pin 1 - AN1	 Analog Pin 1
//  * Pin 2 - I/O    General Purpose I/O
//    Pin 2 - AN2    Analog Pin 2
//  * Pin 3 - I/O    General Purpose I/O
//    Pin 3 - AN3	 Analog Pin 3
//  * Pin 4 - I/O    General Purpose I/O
//    Pin 4 - KI0    Key Input Interrupt Pin
//	  Pin 4 - AN4	 Analog Pin 4
//  * Pin 5 - I/O    General Purpose I/O
//    Pin 5 - KI1	 Interrupt Pin
//    Pin 5 - AN5    Analog Pin 5
//    Pin 6 - I/O    General Purpose I/O
//  * Pin 6 – KI2    Key Input Interrupt Pin
//    Pin 6 - AN6    Analog Pin 6
//  * Pin 7 - I/O    General Purpose I/O
//    Pin 7 - KI3    Key Input Interrupt Pin
//	  Pin 7 - AN7    Analog Pin 7

void init_port10(void){
   pd10_0 = PORT_IN;  
   pd10_1 = PORT_IN;  
   pd10_2 = PORT_IN;  
   pd10_3 = PORT_IN;  
   pd10_4 = PORT_IN;  
   pd10_5 = PORT_IN;  
   pd10_6 = PORT_IN;  
   pd10_7 = PORT_IN;  

   p10_0 = LOW;  
   p10_1 = LOW;  
   p10_2 = LOW;  
   p10_3 = LOW;  
   p10_4 = LOW;  
   p10_5 = LOW;  
   p10_6 = LOW;  
   p10_7 = LOW;  
   )
*/
