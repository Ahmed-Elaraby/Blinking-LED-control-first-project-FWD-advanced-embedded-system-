/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% Name   : Ahmed Elaraby   %%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% Date   : 23/8/2022   %%%%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% SWC   : tm4c123gh6pm   %%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% SWC   : PORT.C  %%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
#include"PORT_Interface.h"
#include"tm4c123gh6pm.h"
#include "STD_TYPES.h"
void port_init(PORT_PinConfig* info)
{
	/********************** PORT Run Mode Clock*********************/
	
		if (info->PortId == PORTA)
{ *((volatile u32*) (bit_band_alias +0xFE000*0x20+ RCGCGPIO*0x20 + 0*4)) = 1;  }
else if (info->PortId == PORTB)
{ *((volatile u32*) (bit_band_alias +0xFE000*0x20+ RCGCGPIO*0x20 + 1*4)) = 1;  }
else if (info->PortId == PORTC)
{ *((volatile u32*) (bit_band_alias +0xFE000*0x20+ RCGCGPIO*0x20 + 2*4)) = 1;  }
else if (info->PortId == PORTD)
{ *((volatile u32*) (bit_band_alias +0xFE000*0x20+ RCGCGPIO*0x20 + 3*4)) = 1;  }
else if (info->PortId == PORTE)
{ *((volatile u32*) (bit_band_alias +0xFE000*0x20+ RCGCGPIO*0x20 + 4*4)) = 1;  }
else if (info->PortId == PORTF)
{ *((volatile u32*) (bit_band_alias +0xFE000*0x20+ RCGCGPIO*0x20 + 5*4)) = 1;  }
/*******************************************/
	if (info->PinMode == GPIO)
{ 	if (info->PortId == PORTA)
	/**************PIN EN************************/
{ *((volatile u32*)(bit_band_alias +0x00058000*0x20+ GPIODEN*0x20 + info->PinId*4) )= 1;  
	/*****************PIN DIR**********************/
if(info->Pindir == INPUT){*((volatile u32*)(bit_band_alias +0x000058000*32+ GPIODIR*32 + info->PinId*4)) = 0; }
else if (info->Pindir == OUTPUT){*((volatile u32*)(bit_band_alias +0x000058000*32 + GPIODIR*32 + info->PinId*4)) = 1; }
/*******************PIN VALUE*******************/
if(info->pinlevel == LOW){*((volatile u32*)(bit_band_alias +0x000058000*32 + GPIODATA*32 + info->PinId*4)) = 0; }
else if (info->pinlevel == HIGH){*((volatile u32*)(bit_band_alias +0x000058000*32 + 0x3FC*32 + info->PinId*4)) = 1; }
/***********PIN STATUS*********************/
if (info->pinstatus == INPUT_PULL_DOWN ){ *((volatile u32*)(bit_band_alias + 0x000058000*32+GPIOPDR*32 + 0*4)) = 1;  }
else if (info->pinstatus == INPUT_PULL_UP){*((volatile u32*)(bit_band_alias +0x000058000*32+ GPIOPUR*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_OPEN_DRAIN ){*((volatile u32*)(bit_band_alias +0x000058000*32+ GPIOODR*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_2_MA){*((volatile u32*)(bit_band_alias +0x000058000*32+ GPIODR2R*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_4_MA){*((volatile u32*)(bit_band_alias +0x000058000*32+ GPIODR4R*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_8_MA){*((volatile u32*)(bit_band_alias +0x000058000*32+ GPIODR8R*32 + info->PinId*4)) = 1; }
}

else if (info->PortId == PORTB)
{ *((volatile u32*)(bit_band_alias +0x00059000*0x20+ GPIODEN*0x20 + info->PinId*4) )= 1;  
if(info->Pindir == INPUT){*((volatile u32*)(bit_band_alias +0x000059000*32+ GPIODIR*32 + info->PinId*4)) = 0; }
else if (info->Pindir == OUTPUT){*((volatile u32*)(bit_band_alias +0x000059000*32 + GPIODIR*32 + info->PinId*4)) = 1; }
if(info->pinlevel == LOW){*((volatile u32*)(bit_band_alias +0x000059000*32 + GPIODATA*32 + info->PinId*4)) = 0; }
else if (info->pinlevel == HIGH){*((volatile u32*)(bit_band_alias +0x000059000*32 + 0x3FC*32 + info->PinId*4)) = 1; }
if (info->pinstatus == INPUT_PULL_DOWN ){ *((volatile u32*)(bit_band_alias + 0x000059000*32+GPIOPDR*32 + 0*4)) = 1;  }
else if (info->pinstatus == INPUT_PULL_UP){*((volatile u32*)(bit_band_alias +0x000059000*32+ GPIOPUR*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_OPEN_DRAIN ){*((volatile u32*)(bit_band_alias +0x000059000*32+ GPIOODR*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_2_MA){*((volatile u32*)(bit_band_alias +0x000059000*32+ GPIODR2R*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_4_MA){*((volatile u32*)(bit_band_alias +0x000059000*32+ GPIODR4R*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_8_MA){*((volatile u32*)(bit_band_alias +0x000059000*32+ GPIODR8R*32 + info->PinId*4)) = 1; }
}

else if (info->PortId == PORTC)
{ *((volatile u32*)(bit_band_alias +0x0005A000*0x20+ GPIODEN*0x20 + info->PinId*4) )= 1;  
if(info->Pindir == INPUT){*((volatile u32*)(bit_band_alias +0x00005A000*32+ GPIODIR*32 + info->PinId*4)) = 0; }
else if (info->Pindir == OUTPUT){*((volatile u32*)(bit_band_alias +0x00005A000*32 + GPIODIR*32 + info->PinId*4)) = 1; }
if(info->pinlevel == LOW){*((volatile u32*)(bit_band_alias +0x00005A000*32 + GPIODATA*32 + info->PinId*4)) = 0; }
else if (info->pinlevel == HIGH){*((volatile u32*)(bit_band_alias +0x00005A000*32 + 0x3FC*32 + info->PinId*4)) = 1; }
if (info->pinstatus == INPUT_PULL_DOWN ){ *((volatile u32*)(bit_band_alias + 0x00005A000*32+GPIOPDR*32 + 0*4)) = 1;  }
else if (info->pinstatus == INPUT_PULL_UP){*((volatile u32*)(bit_band_alias +0x00005A000*32+ GPIOPUR*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_OPEN_DRAIN ){*((volatile u32*)(bit_band_alias +0x00005A000*32+ GPIOODR*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_2_MA){*((volatile u32*)(bit_band_alias +0x00005A000*32+ GPIODR2R*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_4_MA){*((volatile u32*)(bit_band_alias +0x00005A000*32+ GPIODR4R*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_8_MA){*((volatile u32*)(bit_band_alias +0x00005A000*32+ GPIODR8R*32 + info->PinId*4)) = 1; }
}
else if (info->PortId == PORTD)
{ *((volatile u32*)(bit_band_alias +0x0005B000*0x20+ GPIODEN*0x20 + info->PinId*4) )= 1;  
if(info->Pindir == INPUT){*((volatile u32*)(bit_band_alias +0x00005B000*32+ GPIODIR*32 + info->PinId*4)) = 0; }
else if (info->Pindir == OUTPUT){*((volatile u32*)(bit_band_alias +0x00005B000*32 + GPIODIR*32 + info->PinId*4)) = 1; }
if(info->pinlevel == LOW){*((volatile u32*)(bit_band_alias +0x00005B000*32 + GPIODATA*32 + info->PinId*4)) = 0; }
else if (info->pinlevel == HIGH){*((volatile u32*)(bit_band_alias +0x00005B000*32 + 0x3FC*32 + info->PinId*4)) = 1; }
if (info->pinstatus == INPUT_PULL_DOWN ){ *((volatile u32*)(bit_band_alias + 0x00005B000*32+GPIOPDR*32 + 0*4)) = 1;  }
else if (info->pinstatus == INPUT_PULL_UP){*((volatile u32*)(bit_band_alias +0x00005B000*32+ GPIOPUR*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_OPEN_DRAIN ){*((volatile u32*)(bit_band_alias +0x00005B000*32+ GPIOODR*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_2_MA){*((volatile u32*)(bit_band_alias +0x00005B000*32+ GPIODR2R*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_4_MA){*((volatile u32*)(bit_band_alias +0x00005B000*32+ GPIODR4R*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_8_MA){*((volatile u32*)(bit_band_alias +0x00005B000*32+ GPIODR8R*32 + info->PinId*4)) = 1; }
}
else if (info->PortId == PORTE)
{ *((volatile u32*)(bit_band_alias +0x0005C000*0x20+ GPIODEN*0x20 + info->PinId*4) )= 1;  
if(info->Pindir == INPUT){*((volatile u32*)(bit_band_alias +0x00005C000*32+ GPIODIR*32 + info->PinId*4)) = 0; }
else if (info->Pindir == OUTPUT){*((volatile u32*)(bit_band_alias +0x00005C000*32 + GPIODIR*32 + info->PinId*4)) = 1; }
if(info->pinlevel == LOW){*((volatile u32*)(bit_band_alias +0x00005C000*32 + GPIODATA*32 + info->PinId*4)) = 0; }
else if (info->pinlevel == HIGH){*((volatile u32*)(bit_band_alias +0x00005C000*32 + 0x3FC*32 + info->PinId*4)) = 1; }
if (info->pinstatus == INPUT_PULL_DOWN ){ *((volatile u32*)(bit_band_alias + 0x00005C000*32+GPIOPDR*32 + 0*4)) = 1;  }
else if (info->pinstatus == INPUT_PULL_UP){*((volatile u32*)(bit_band_alias +0x00005C000*32+ GPIOPUR*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_OPEN_DRAIN ){*((volatile u32*)(bit_band_alias +0x00005C000*32+ GPIOODR*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_2_MA){*((volatile u32*)(bit_band_alias +0x00005C000*32+ GPIODR2R*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_4_MA){*((volatile u32*)(bit_band_alias +0x00005C000*32+ GPIODR4R*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_8_MA){*((volatile u32*)(bit_band_alias +0x00005C000*32+ GPIODR8R*32 + info->PinId*4)) = 1; }
}
else if (info->PortId == PORTF)
{ *((volatile u32*)(bit_band_alias +0x0005D000*0x20+ GPIODEN*0x20 + info->PinId*4) )= 1;  
if(info->Pindir == INPUT){*((volatile u32*)(bit_band_alias +0x00005D000*32+ GPIODIR*32 + info->PinId*4)) = 0; }
else if (info->Pindir == OUTPUT){*((volatile u32*)(bit_band_alias +0x00005D000*32 + GPIODIR*32 + info->PinId*4)) = 1; }
if(info->pinlevel == LOW){*((volatile u32*)(bit_band_alias +0x00005D000*32 + GPIODATA*32 + info->PinId*4)) = 0; }
else if (info->pinlevel == HIGH){*((volatile u32*)(bit_band_alias +0x00005D000*32 + 0x3FC*32 + info->PinId*4)) = 1; }
if (info->pinstatus == INPUT_PULL_DOWN ){ *((volatile u32*)(bit_band_alias + 0x00005D000*32+GPIOPDR*32 + 0*4)) = 1;  }
else if (info->pinstatus == INPUT_PULL_UP){*((volatile u32*)(bit_band_alias +0x00005D000*32+ GPIOPUR*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_OPEN_DRAIN ){*((volatile u32*)(bit_band_alias +0x00005D000*32+ GPIOODR*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_2_MA){*((volatile u32*)(bit_band_alias +0x00005D000*32+ GPIODR2R*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_4_MA){*((volatile u32*)(bit_band_alias +0x00005D000*32+ GPIODR4R*32 + info->PinId*4)) = 1; }
else if (info->pinstatus == OUTPUT_8_MA){*((volatile u32*)(bit_band_alias +0x00005D000*32+ GPIODR8R*32 + info->PinId*4)) = 1; }
}
}





}

