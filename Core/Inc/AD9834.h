#ifndef __AD9834_H 
#define __AD9834_H 
#include "stm32f4xx_hal.h"
#include "gpio.h"

#define Triangle_Wave    0x2002 
#define Sine_Wave  0x2008 
#define Square_Wave 0x2028
/* AD9834����Ƶ�� */ 

#define AD9834_SYSTEM_COLCK     75000000UL 

/* AD9834 �������� */ 
/*
#define AD9834_Control_Port  GPIOA
#define AD9834_FSYNC  GPIO_Pin_3    //A3
#define AD9834_SCLK   GPIO_Pin_4			//A4
#define AD9834_SDATA  GPIO_Pin_5 		//A5
#define AD9834_RESET  GPIO_Pin_6		//A6
#define AD9834_FS  		GPIO_Pin_0		//B0
#define AD9834_PS  		GPIO_Pin_1		//B1
*/
#define AD9834_FSYNC_SET   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_SET)

#define AD9834_FSYNC_CLR   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,GPIO_PIN_RESET)

#define AD9834_SCLK_SET   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET)

#define AD9834_SCLK_CLR   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET)

#define AD9834_SDATA_SET   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET)

#define AD9834_SDATA_CLR  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET)

#define AD9834_RESET_SET   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET)

#define AD9834_RESET_CLR   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET)

 

#define FREQ_0      0 

#define FREQ_1      1 

 

#define DB15        0 

#define DB14        0 

#define DB13        B28 

#define DB12        HLB 

#define DB11        FSEL 

#define DB10        PSEL 

#define DB9         PIN_SW 

#define DB8         RESET 

#define DB7         SLEEP1 

#define DB6         SLEEP12 

#define DB5         OPBITEN 

#define DB4         SIGN_PIB 

#define DB3         DIV2 

#define DB2         0 

#define DB1         MODE 

#define DB0         0 

#define CONTROL_REGISTER    (DB15<<15)|(DB14<<14)|(DB13<<13)|(DB12<<12)|(DB11<<11)|(DB10<<10)|(DB9<<9)|(DB8<<8)|(DB7<<7)|(DB6<<6)|(DB5<<5)|(DB4<<4)|(DB3<<3)|(DB2<<2)|(DB1<<1)|(DB0<<0) 

/* AD9834�������� */ 

 void AD9834_Write_16Bits(unsigned int data) ;  //дһ���ֵ�AD9834 

 void AD9834_Select_Wave(unsigned int initdata) ; //ѡ��������� 

void AD9834_Init(void);  					//��ʼ������ 

 void AD9834_Set_Freq(unsigned char freq_number, unsigned long freq) ;//ѡ������Ĵ��������Ƶ��ֵ 

#endif /* AD9834_H */ 

