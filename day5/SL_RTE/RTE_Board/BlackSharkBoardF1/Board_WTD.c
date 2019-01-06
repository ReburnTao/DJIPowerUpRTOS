#include "Board_WTD.h"
/**
 * ��ʼ���������Ź�
 * prer:��Ƶ��:0~7(ֻ�е� 3 λ��Ч!)
 * ��Ƶ����=4*2^prer.�����ֵֻ���� 256!
 * rlr:��װ�ؼĴ���ֵ:�� 11 λ��Ч.
 * ʱ�����(���):Tout=((4*2^prer)*rlr)/40 (ms).
 */
void Board_WTD_Init(void)
{
    IWDG_WriteAccessCmd(IWDG_WriteAccess_Enable); /* ʹ�ܶԼĴ���IWDG_PR��IWDG_RLR��д����*/
    IWDG_SetPrescaler(4);    /*����IWDGԤ��Ƶֵ:����IWDGԤ��Ƶֵ*/
    IWDG_SetReload(625);     /*����IWDG��װ��ֵ*/
    IWDG_ReloadCounter();    /*����IWDG��װ�ؼĴ�����ֵ��װ��IWDG������*/
    IWDG_Enable();        /*ʹ��IWDG*/
}
void Board_WTD_Feed(void *par)
{		
	IWDG_ReloadCounter();    /*reload*/
}
