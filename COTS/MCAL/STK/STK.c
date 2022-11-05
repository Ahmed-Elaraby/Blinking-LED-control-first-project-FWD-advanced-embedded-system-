/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% Name   : Ahmed Elaraby   %%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% Date   : 23/8/2022   %%%%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% SWC   : tm4c123gh6pm   %%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% SWC   : STK.C  %%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
#include "STD_TYPES.h"
#include "tm4c123gh6pm.h"
#include "STK_configuration.h"
#include "STK_interface.h"

/* Global Pointer to a function */
static void(*STK_PTR)()  ;
static u8 count =0;
static u8 TIME =0;
void STK_Init(void)
{
	/* Disable Timer & select the CLK Source & Enable interrupt*/
STCTRL_REG = 0x00000006;

}
void STK_TIME(u8 TIME_SECONDS, void(*PTR_FUNC)(void))
{

/* Set Load Register */
	if (TIME_SECONDS >= 1)
	{STRELOAD_REG = 12000000;	}
/* Enable Timer */
STCTRL_REG = 0x00000007;	
/* Set Callback */
STK_PTR = PTR_FUNC ;
TIME = TIME_SECONDS;
}

void SysTick_Handler(void)
{
if(count == TIME-1)
{
STCTRL_REG = 0x00000006;/*enable*/
STRELOAD_REG = 0x00000000;
STCURRENT_REG = 0x00000000;
count=0;	
STK_PTR();}
else {count++;}

}
