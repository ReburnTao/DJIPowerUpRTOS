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
//<e> ��������ģ��
//=======================
//<i> �����Ƿ�ʹ�ô������̡�
#define BOARD_TURING_PURE          1
 //</e>
//=======================
//<h>ϵͳʱ������
//=======================
	//<o> PLL M��Ƶ����
	//<i> ����/M��Ϊ����PLL��ʱ�ӡ�
	#define PLL_M    		         (5U)
	//<o> PLL N��Ƶ����
	//<i> PLL����ʱ��*NΪ��һ�׶�ʱ�ӡ�
	#define PLL_N    		         (160U)
//</h>
//=======================
//<h>Systick����
//=======================
	//<o> Systick�ж����ȼ�
	//<i> Ĭ����͡�
	#define SYSTICK_PreemptPriority    		 (0x15)
//</h>
//=======================
//<h>SDRAM����
//=======================
	//<o> SDRAM��ʼ��ַ
	//<i> Ĭ��Ϊ0����û�У���С��Ҫ��Initial���ֶ��޸ġ�
	#define SDRAM_DEVICE_ADDR    		 	(0xD0000000)
	//<o> SDRAM��С
	//<i> Ĭ��Ϊ0����û�У�Initial��Ҫ���MPU���ֶ��޸ġ�
	#define SDRAM_DEVICE_SIZE    		 	(0x02000000)
	//<o> SDRAMʹ�õ�MDMA�ж����ȼ�
	//<i> Ĭ�ϵ����ڶ���
	#define MDMA_PreemptPriority    		 (0x3)
	//SDRAM���ߴ���
	#define SDRAM_MEMORY_WIDTH               FMC_SDRAM_MEM_BUS_WIDTH_32
	//SDRAMʱ��
	#define SDCLOCK_PERIOD                   FMC_SDRAM_CLOCK_PERIOD_2
	#define REFRESH_COUNT                    ((uint32_t)0x0603)   /* SDRAM refresh counter (100Mhz FMC clock) */
	//SDRAM��MDMA����
	#define SDRAM_MDMAx_CHANNEL               MDMA_Channel0
	#define SDRAM_MDMAx_IRQn                  MDMA_IRQn
//</h>
//=======================
//<h>DMA2D����
//=======================
	//<o> DMA2D�ж����ȼ�
	//<i> Ĭ�ϵ���������
	#define DMA2D_PreemptPriority    		 (0x2)
//</h>
//==================================================================
//<h>I2C�й�����
//==================================================================
/* Definition for I2Cx clock resources */
#define I2Cx                            I2C1
#define I2Cx_CLK_ENABLE()               __HAL_RCC_I2C1_CLK_ENABLE()
#define I2Cx_SDA_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOB_CLK_ENABLE()
#define I2Cx_SCL_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOB_CLK_ENABLE() 

#define I2Cx_FORCE_RESET()              __HAL_RCC_I2C1_FORCE_RESET()
#define I2Cx_RELEASE_RESET()            __HAL_RCC_I2C1_RELEASE_RESET()
/* Definition for I2Cx Pins */
#define I2Cx_SCL_PIN                    GPIO_PIN_6
#define I2Cx_SCL_GPIO_PORT              GPIOB
#define I2Cx_SDA_PIN                    GPIO_PIN_7
#define I2Cx_SDA_GPIO_PORT              GPIOB
#define I2Cx_SCL_SDA_AF                 GPIO_AF4_I2C1
/* Definition for I2Cx's NVIC */
#define I2C_INTERRUPT_USE 0
#if I2C_INTERRUPT_USE == 1
#define I2Cx_EV_PreemptPriority         0x12
#define I2Cx_EV_IRQn                    I2C1_EV_IRQn
#define I2Cx_ER_IRQn                    I2C1_ER_IRQn
#define I2Cx_ER_PreemptPriority         0x11
#define I2Cx_EV_IRQHandler              I2C1_EV_IRQHandler
#define I2Cx_ER_IRQHandler              I2C1_ER_IRQHandler
#endif
//</h>
//==================================================================
//<h>LCD�й�����
//==================================================================
#define LCD_BL_Pin 				GPIO_PIN_10
#define LCD_BL_GPIO_Port 	GPIOF
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
//==================================================================
//<h>SDCard�й�����
//==================================================================
#define SDMMCx                           SDMMC2
#define SDMMCx_CLK_ENABLE()              __HAL_RCC_SDMMC2_CLK_ENABLE()
#define SDMMCx_FORCE_RESET()             __HAL_RCC_SDMMC2_FORCE_RESET()
#define SDMMCx_RELEASE_RESET()           __HAL_RCC_SDMMC2_RELEASE_RESET()
#define SD_CD_Pin                        GPIO_PIN_11
#define SD_CD_GPIO_Port                  GPIOD
#define SD_CD_GPIO_CLK_ENABLE()          __HAL_RCC_GPIOD_CLK_ENABLE()
#define SDMMCx_D0_Pin                    GPIO_PIN_14
#define SDMMCx_D0_GPIO_Port              GPIOB
#define SDMMCx_D0_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOB_CLK_ENABLE()
#define SDMMCx_D0_AF                     GPIO_AF9_SDIO2
#define SDMMCx_D1_Pin                    GPIO_PIN_15
#define SDMMCx_D1_GPIO_Port              GPIOB
#define SDMMCx_D1_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOB_CLK_ENABLE()
#define SDMMCx_D1_AF                     GPIO_AF9_SDIO2
#define SDMMCx_D2_Pin                    GPIO_PIN_3
#define SDMMCx_D2_GPIO_Port              GPIOB
#define SDMMCx_D2_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOB_CLK_ENABLE()
#define SDMMCx_D2_AF                     GPIO_AF9_SDIO2
#define SDMMCx_D3_Pin                    GPIO_PIN_4
#define SDMMCx_D3_GPIO_Port              GPIOB
#define SDMMCx_D3_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOB_CLK_ENABLE()
#define SDMMCx_D3_AF                     GPIO_AF9_SDIO2
#define SDMMCx_CK_Pin                    GPIO_PIN_6
#define SDMMCx_CK_GPIO_Port              GPIOD
#define SDMMCx_CK_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOD_CLK_ENABLE() 
#define SDMMCx_CK_AF                     GPIO_AF11_SDIO2
#define SDMMCx_CMD_Pin                   GPIO_PIN_0
#define SDMMCx_CMD_GPIO_Port             GPIOA 
#define SDMMCx_CMD_GPIO_CLK_ENABLE()     __HAL_RCC_GPIOA_CLK_ENABLE() 
#define SDMMCx_CMD_AF                    GPIO_AF9_SDIO2

#define SDMMCx_INTERRUPT_USE              1
#if SDMMCx_INTERRUPT_USE == 1
#define SDMMCx_PreemptPriority           0x07
#define SDMMCx_IRQn                      SDMMC2_IRQn
#define SDMMCx_IRQHandler                SDMMC2_IRQHandler
#endif
//</h>
//==================================================================
//<h>CAMERA�й�����
//==================================================================
//---------------------------------------------------------
//CAMERA ��λ��STBY�ܽ�
#define CAM_RST_GPIO_CLK_ENABLE()        __HAL_RCC_GPIOI_CLK_ENABLE()
#define CAM_RST_Pin 									   GPIO_PIN_11
#define CAM_RST_GPIO_Port 						   GPIOI
#define CAM_STBY_GPIO_CLK_ENABLE()       __HAL_RCC_GPIOE_CLK_ENABLE()
#define CAM_STBY_Pin                     GPIO_PIN_3
#define CAM_STBY_GPIO_Port 						   GPIOE
//---------------------------------------------------------
//CAMERA SENSOR SCCB��ȡ���豸ID
#define OV9650_ID       							   (0x96)
#define OV2640_ID       							   (0x26)
#define OV7725_ID       							   (0x77)
#define MT9V034_ID                       (0x13) 
#define LEPTON_ID                        (0x54)
//---------------------------------------------------------
//CAMERA SENSOR SCCBʱ��
#define CAM_XCLK_FREQUENCY             (12000000)
#define TIMx                           TIM1
#define TIMx_CLK_ENABLE()              __HAL_RCC_TIM1_CLK_ENABLE()
#define TIMx_PCLK_FREQ()               HAL_RCC_GetPCLK2Freq()
#define TIMx_GPIO_CLK_ENABLE()         __HAL_RCC_GPIOA_CLK_ENABLE()
#define TIMx_PIN                       (GPIO_PIN_8)
#define TIMx_PORT                      (GPIOA)
#define TIMx_AF                        (GPIO_AF1_TIM1)
//</h>
//==================================================================
//<h>DCMI �й�����
//==================================================================
#define DCMI_PreemptPriority           0x04
//</h>
#endif
/****************** (C) COPYRIGHT SuChow University Shannon********************/
