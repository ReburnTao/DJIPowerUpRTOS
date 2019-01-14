#include "Thread_WIFI.h"
#include "Board_WIFI.h"
/*----------------------------------------------------------------------------
 *      Thread 3 'Thread_Name': WIFI thread
 *---------------------------------------------------------------------------*/
osThreadId_t ThreadIDWIFI;
osEventFlagsId_t EvtIDWIFI;
static uint64_t wifi_thread_stk[4096 / 8] = {0};
const osThreadAttr_t WIFIThreadControl = {
	.stack_mem = &wifi_thread_stk[0],
  .stack_size =  sizeof(wifi_thread_stk) , 
	.priority = osPriorityNormal,
};
__NO_RETURN void ThreadTaskWIFI (void *argument) {
	EvtIDWIFI = osEventFlagsNew(NULL);
	Board_WIFI_Init();//������ʼ��
	WIFI_APP_Init();//��ʼ��APP����
	if(WIFI_Start_Station()!=RW_OK)//���ӵ�·����
		osThreadExit();
  for (;;) 
	{
		osThreadFlagsWait(0x0001U, osFlagsWaitAny, 10);
	}
}
