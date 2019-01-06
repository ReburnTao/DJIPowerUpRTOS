#ifndef __BOARD_LCD_H
#define __BOARD_LCD_H
#include "stm32f10x.h"
#include "RTE_Include.h"
//-----------------LCD�˿ڶ���---------------- 
#define LCD_CTRL   	  	GPIOB		//����TFT���ݶ˿�
#define LCD_CTRL2   	  GPIOC		//����TFT���ݶ˿�
#define LCD_RS         	GPIO_Pin_6	//PB1������TFT --RS
#define LCD_CS        	GPIO_Pin_12 //PB11 ������TFT --CS
//Һ�����ƿ���1�������궨��
#define	LCD_CS_SET  	LCD_CTRL->BSRR=LCD_CS    
#define	LCD_RS_SET  	LCD_CTRL2->BSRR=LCD_RS  

//Һ�����ƿ���0�������궨��
#define	LCD_CS_CLR  	LCD_CTRL->BRR=LCD_CS    
#define	LCD_RS_CLR  	LCD_CTRL2->BRR=LCD_RS 
//������ɫ
#define WHITE       0xFFFF
#define BLACK      	0x0000	  
#define BLUE       	0x001F  
#define BRED        0XF81F
#define GRED 			 	0XFFE0
#define GBLUE			 	0X07FF
#define RED         0xF800
#define MAGENTA     0xF81F
#define GREEN       0x07E0
#define CYAN        0x7FFF
#define YELLOW      0xFFE0
#define BROWN 			0XBC40 //��ɫ
#define BRRED 			0XFC07 //�غ�ɫ
#define GRAY  			0X8430 //��ɫ
//GUI��ɫ

#define DARKBLUE      	 0X01CF	//����ɫ
#define LIGHTBLUE      	 0X7D7C	//ǳ��ɫ  
#define GRAYBLUE       	 0X5458 //����ɫ
//������ɫΪPANEL����ɫ 
 
#define LIGHTGREEN     	0X841F //ǳ��ɫ
//#define LIGHTGRAY     0XEF5B //ǳ��ɫ(PANNEL)
#define LGRAY 			 		0XC618 //ǳ��ɫ(PANNEL),���屳��ɫ

#define LGRAYBLUE      	0XA651 //ǳ����ɫ(�м����ɫ)
#define LBBLUE          0X2B12 //ǳ����ɫ(ѡ����Ŀ�ķ�ɫ)
extern void Board_LCD_Init(void);
extern void Board_LCD_DrawPoint(uint16_t x,uint16_t y,uint16_t color);
extern void Board_LCD_FillRect(uint16_t x,uint16_t y,uint16_t x1,uint16_t y1,uint16_t color);
#endif
