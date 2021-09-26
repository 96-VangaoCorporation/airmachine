#include "main.h"
 /******************************************************************************
//本程序适用与STM32F103C8
//@DAMON
//              GND   电源地
//              VCC   接5V或3.3v电源
//              SCL   接PA7（SCL）
//              SDA   接PA6（SDA）
//              RES   接PA5
//              DC    接PA4
//              CS    接PA3 
//				BL	  接PA2
*******************************************************************************/


int main(void)
{
  uint32_t i=0; 
  SYSTEM_Initialize();       //系统初始化

  while (1)
  {
	  Ms_Treat();		//定时器定时处理
	  ScreenProcess();	//屏幕绘制
  }

}
