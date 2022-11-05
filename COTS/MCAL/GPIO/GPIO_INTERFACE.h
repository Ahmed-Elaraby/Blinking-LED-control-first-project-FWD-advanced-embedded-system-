/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% Name   : Ahmed Elaraby   %%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% Date   : 23/8/2022   %%%%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% SWC   : tm4c123gh6pm   %%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%% SWC   : GPIO_Interface  %%%%%%%%%*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H
#include "STD_TYPES.h"
/*       pins    */
#define PA0         0
#define PA1         1
#define PA2         2
#define PA3         3
#define PA4         4
#define PA5         5
#define PA6         6
#define PA7         7
#define PB0         8
#define PB1         9
#define PB2         10
#define PB3         11
#define PB4         12
#define PB5         13
#define PB6         14
#define PB7         15
#define PC0         16
#define PC1         17
#define PC2         18
#define PC3         19
#define PC4         20
#define PC5         21
#define PC6         22
#define PC7         23
#define PD0         24
#define PD1         25
#define PD2         26
#define PD3         27
#define PD4         28
#define PD5         29
#define PD6         30
#define PD7         31
#define PE0         32
#define PE1         33
#define PE2         34
#define PE3         35
#define PE4         36
#define PE5         37
#define PF0         38
#define PF1         39
#define PF2         40
#define PF3         41
#define PF4         42

/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
/*       ports    */
#define GPIO_PORTA         0
#define GPIO_PORTB         1
#define GPIO_PORTC         2
#define GPIO_PORTD         3
#define GPIO_PORTE         4
#define GPIO_PORTF         5
/* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  */
                          /* Macros for Pin Value */
#define GPIO_HIGH                       1
#define GPIO_LOW                        0

/****************************************/
u8 Dio_ReadChannel(u8 Pin_number);
u8 Dio_WriteChannel(u8 Pin_number , u8 Pin_level);
u8 Dio_ReadPort(u8 Port_name);
void Dio_WritePort(u8 Port_name , u8 Port_value);
void Dio_FlipChannel(u8 Pin_number);



#endif
