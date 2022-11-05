#include"STD_TYPES.h"
#include"PORT_Interface.h"
#include"tm4c123gh6pm.h"
#include "STK_configuration.h"
#include "STK_interface.h"
#include "GPIO_INTERFACE.h"
void port_init(PORT_PinConfig* info);
void STK_Init(void);
void STK_TIME(u8 TIME_SECONDS, void(*PTR_FUNC)(void));
u8 TIME_ON ;
u8 TIME_OFF ;
u8 TIME ;
u8 PIN ;
void FUNCTION (void)
{

	Dio_FlipChannel(PIN);
	TIME = TIME_OFF;
  TIME_OFF = TIME_ON;
  TIME_ON = TIME;
	STK_TIME(TIME_ON,&FUNCTION);
}
int main(void)
{
  TIME_ON =10;
	TIME_OFF=5;
  STK_Init();
	PORT_PinConfig data ={PORTA,PORT_PIN1,GPIO,OUTPUT,LOW,OUTPUT_2_MA};
  port_init(&data);
	PIN = Dio_WriteChannel(PA1,GPIO_HIGH);
  STK_TIME(TIME_ON,&FUNCTION);

	while(1)
	{
	
	}
	
	return 0;
}


