/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% Name   : Ahmed Elaraby   %%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% Date   : 23/8/2022   %%%%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% SWC   : tm4c123gh6pm   %%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/

#ifndef tm4c123gh6pm_H
#define tm4c123gh6pm_H
#include "STD_TYPES.h"
#define bit_band_alias        0x42000000
/*%%%%%%%%%%%%%%%%%%%%%%% GPIO %%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/

#define  GPIO_PORTA_Base      0x40058000
#define  GPIO_PORTB_Base      0x40059000
#define  GPIO_PORTC_Base      0x4005A000
#define  GPIO_PORTD_Base      0x4005B000
#define  GPIO_PORTE_Base      0x4005C000
#define  GPIO_PORTF_Base      0x4005D000
#define GPIODATA_REG_PORTA        *((volatile u32*)0x400583FC)
#define GPIODATA_REG_PORTB        *((volatile u32*)0x400593FC)	
#define GPIODATA_REG_PORTC        *((volatile u32*)0x4005A3FC)
#define GPIODATA_REG_PORTD        *((volatile u32*)0x4005B3FC)
#define GPIODATA_REG_PORTE        *((volatile u32*)0x4005C3FC)
#define GPIODATA_REG_PORTF        *((volatile u32*)0x4005D3FC)
/******************************** SYSTICK Registers ***********************************/
#define  STK_Base      0xE000E000
#define STCTRL_REG        *((volatile u32*)(STK_Base+0x010 ))
#define STRELOAD_REG      *((volatile u32*)(STK_Base+0x014 ))
#define STCURRENT_REG     *((volatile u32*)(STK_Base+0x018 ))

#endif