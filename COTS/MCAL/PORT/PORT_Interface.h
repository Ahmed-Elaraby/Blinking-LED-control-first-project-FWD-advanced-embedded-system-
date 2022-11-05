/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% Name   : Ahmed Elaraby   %%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% Date   : 23/8/2022   %%%%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% SWC   : tm4c123gh6pm   %%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% SWC   : PORT_Interface  %%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
#ifndef PORT_INTERFACE_H
#define PORT_INTERFACE_H

#include "STD_TYPES.h"
#define GPIO         1
/*       pins    */
#define PORT_PIN0         0
#define PORT_PIN1         1
#define PORT_PIN2         2
#define PORT_PIN3         3
#define PORT_PIN4         4
#define PORT_PIN5         5
#define PORT_PIN6         6
#define PORT_PIN7         7
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
/*       ports    */
#define PORTA         0
#define PORTB         1
#define PORTC         2
#define PORTD         3
#define PORTE         4
#define PORTF         5
/* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  */
                          /* Macros for Pin Value */
#define HIGH                       1
#define LOW                        0
/* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  */
                          /* Macros for mode Value */
#define INPUT                       1
#define OUTPUT                      0
/* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  */
/* INPUT */
#define INPUT_FLOATING          0
#define INPUT_PULL_DOWN         1
#define INPUT_PULL_UP           2

/* Output */
#define OUTPUT_FLOATING          3
#define OUTPUT_OPEN_DRAIN        4
#define OUTPUT_2_MA              5
#define OUTPUT_4_MA              6
#define OUTPUT_8_MA              7

/* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
   
#define GPIODATA   0x000
#define GPIODIR    0x400
#define GPIODEN    0x51C
#define GPIOODR    0x50C
#define GPIOPUR    0x510
#define GPIOPDR    0x514
#define GPIODR2R   0x500
#define GPIODR4R   0x504
#define GPIODR8R   0x508
#define RCGCGPIO   0x608

/***********************************/
typedef struct
{
	u8 PortId;
	u8 PinId;
  u8 PinMode;
	u8 Pindir;
	u8 pinlevel;
	u8 pinstatus;

}PORT_PinConfig;

#endif
