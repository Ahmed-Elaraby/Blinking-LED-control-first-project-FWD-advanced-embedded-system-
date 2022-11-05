/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% Name   : Ahmed Elaraby   %%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% Date   : 23/8/2022   %%%%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% SWC   : tm4c123gh6pm   %%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% SWC   : STK_Interface  %%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
#include "STD_TYPES.h"
#ifndef PORT_INTERFACE_H
#define PORT_INTERFACE_H


void STK_Init(void);
void STK_TIME(u8 TIME_SECONDS, void(*PTR_FUNC)(void));
void SysTick_Handler(void);

#endif
