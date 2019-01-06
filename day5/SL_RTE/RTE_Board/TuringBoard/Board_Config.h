/**
  ******************************************************************************
  * @file    Board_Config.h
  * @author  Shan Lei ->>lurenjia.tech ->>https://github.com/sudashannon
  * @brief   Ӳ����������ͷ�ļ�������KEIL��ʽ��д��Ϊ���ӵ�Ӳ�������������á�
  * @version V1.0 2018/11/02 ��һ��
  ******************************************************************************
  */
#ifndef __BOARD_CONFIG_H
#define __BOARD_CONFIG_H
//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------
//<s> BOARD_VERSION
//<i> Ӳ�����Ӱ汾�ţ����嶨�������ĵ���
#define BOARD_VERSION "1.0"
//=======================
//<h>ϵͳʱ������
//=======================
	//<o> PLL M��Ƶ����
	//<i> ����/M��Ϊ����PLL��ʱ�ӡ�
	#define PLL_M    		         (4U)
	//<o> PLL N��Ƶ����
	//<i> PLL����ʱ��*NΪ��һ�׶�ʱ�ӡ�
	#define PLL_N    		         (400U)
//</h>
//=======================
//<h>Systick����
//=======================
	//<o> Systick�ж����ȼ�
	//<i> Ĭ����͡�
	#define SYSTICK_PreemptPriority    		 (0x15)
//</h>
//==================================================================
//<h>����1�й�����
//==================================================================
	//<o> ����1�ж����ȼ�
	#define USART1_PreemptPriority           0x10
	//<o> ����1�����ж����ȼ�
	#define USART1_DMARX_PreemptPriority     0x09
	//<e>ʹ��DMA����
	#define USART1_USE_DMA_TX                0
	#if USART1_USE_DMA_TX == 1
	//<o> ���ڷ���DMA�ж����ȼ�
	#define USART1_DMATX_PreemptPriority     0x08
	#endif
	//</e>
//</h>
#endif
/****************** (C) COPYRIGHT SuChow University Shannon********************/
