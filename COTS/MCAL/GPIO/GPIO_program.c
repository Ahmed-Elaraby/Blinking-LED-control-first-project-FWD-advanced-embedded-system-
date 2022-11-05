/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% Name   : Ahmed Elaraby   %%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% Date   : 23/8/2022   %%%%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% SWC   : tm4c123gh6pm   %%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% SWC   : GPIO.c  %%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
#include "GPIO_INTERFACE.h"
#include "STD_TYPES.h"
#include "tm4c123gh6pm.h"
#include"PORT_Interface.h"
u8 Dio_ReadChannel(u8 Pin_number)
{
if( Pin_number <= 7 ) /*PORTA*/
{ 
return *((volatile u32*)(bit_band_alias +0x000058000*32+ 0x3FC*32 + Pin_number*4))  ;
}
else if( Pin_number <= 15 )
{return	*((volatile u32*)(bit_band_alias +0x000059000*32 +0x3FC*32 + (Pin_number-8)*4)) ;}
else if( Pin_number <= 23 )
{	
return *((volatile u32*)(bit_band_alias +0x00005A000*32 +0x3FC*32 + (Pin_number-16)*4))  ;
}
else if( Pin_number <= 31 )
{return	*((volatile u32*)(bit_band_alias +0x00005B000*32 +0x3FC*32 + (Pin_number-24)*4)) ;}
else if( Pin_number <= 37 )
{return	*((volatile u32*)(bit_band_alias +0x00005C000*32 + 0x3FC*32 +(Pin_number-30)*4))  ;}
else if( Pin_number <= 42 )
{return	*((volatile u32*)(bit_band_alias +0x00005D000*32 + 0x3FC*32 +(Pin_number-35)*4))  ;}
else {}

}
u8 Dio_WriteChannel(u8 Pin_number ,u8 Pin_level)
{
if( Pin_number <= 7 ) /*PORTA*/
{ 
*((volatile u32*)(bit_band_alias +0x000058000*32+ 0x3FC*32 + Pin_number*4)) = Pin_level ;
}
else if( Pin_number <= 15 )
{	*((volatile u32*)(bit_band_alias +0x000059000*32 +0x3FC*32 + (Pin_number-8)*4)) = Pin_level ;}
else if( Pin_number <= 23 )
{	
*((volatile u32*)(bit_band_alias +0x00005A000*32 +0x3FC*32 + (Pin_number-16)*4)) = Pin_level ;
}
else if( Pin_number <= 31 )
{	*((volatile u32*)(bit_band_alias +0x00005B000*32 +0x3FC*32 + (Pin_number-24)*4)) = Pin_level ;}
else if( Pin_number <= 37 )
{	*((volatile u32*)(bit_band_alias +0x00005C000*32 + 0x3FC*32 +(Pin_number-30)*4)) = Pin_level ;}
else if( Pin_number <= 42 )
{	*((volatile u32*)(bit_band_alias +0x00005D000*32 + 0x3FC*32 +(Pin_number-35)*4)) = Pin_level ;}
else {}
	return Pin_number;
}
u8 Dio_ReadPort(u8 Port_name)
{
if( Port_name == 0 ) /*PORTA*/
{ 
return GPIODATA_REG_PORTA  ;           
} 
else if( Port_name == 1 )
{	
	return GPIODATA_REG_PORTB  ;           
}
else if( Port_name == 2 )
{	
	return GPIODATA_REG_PORTC  ;           
}
else if( Port_name == 3 )
{	
	return GPIODATA_REG_PORTD  ;           
}else if( Port_name == 4 )
{	
	return GPIODATA_REG_PORTE  ;           
}else if( Port_name == 5 )
{	
	return GPIODATA_REG_PORTF  ;           
}else {}

}

void Dio_WritePort(u8 Port_name , u8 Port_value){
if( Port_name == 0 ) /*PORTA*/
{ 
 GPIODATA_REG_PORTA = Port_value  ;           
} 
else if( Port_name == 1 )
{	
 GPIODATA_REG_PORTB = Port_value  ;  
}
else if( Port_name == 2 )
{	
 GPIODATA_REG_PORTC = Port_value  ;           
}
else if( Port_name == 3 )
{	
 GPIODATA_REG_PORTD = Port_value  ;            
}else if( Port_name == 4 )
{	
 GPIODATA_REG_PORTE = Port_value  ;          
}else if( Port_name == 5 )
{	
 GPIODATA_REG_PORTF = Port_value  ;          
}else {}


}

void Dio_FlipChannel(u8 Pin_number)
{
if( Pin_number <= 7 ) /*PORTA*/
{ 
 *((volatile u32*)(bit_band_alias +0x000058000*32+ 0x3FC*32 + Pin_number*4)) ^=1  ;
}
else if( Pin_number <= 15 )
{*((volatile u32*)(bit_band_alias +0x000059000*32 +0x3FC*32 + (Pin_number-8)*4))^=1 ;}
else if( Pin_number <= 23 )
{	
*((volatile u32*)(bit_band_alias +0x00005A000*32 +0x3FC*32 + (Pin_number-16)*4))^=1  ;
}
else if( Pin_number <= 31 )
{	*((volatile u32*)(bit_band_alias +0x00005B000*32 +0x3FC*32 + (Pin_number-24)*4))^=1 ;}
else if( Pin_number <= 37 )
{	*((volatile u32*)(bit_band_alias +0x00005C000*32 + 0x3FC*32 +(Pin_number-30)*4))^=1  ;}
else if( Pin_number <= 42 )
{	*((volatile u32*)(bit_band_alias +0x00005D000*32 + 0x3FC*32 +(Pin_number-35)*4))^=1 ;}
else {}

}