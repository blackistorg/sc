/*-----------------------------------------------
  名称：延迟函数库
  编写：夏杰
  日期：2017.4.8
  内容：通过变量自减，以实现延时
------------------------------------------------*/

#include "delay.h"
#include <intrins.h>


/*-----------------------------------------------
  TODO：delay for 2*t us
  参数：t delay for 2*t us
  编写：夏杰
  日期：2017.4.8
------------------------------------------------*/
void DelayUs2x(unsigned char t)
{
	// 自减循环
	while(--t);
}


/*-----------------------------------------------
  TODO：delay for t mS
  参数：t delay for t mS
  编写：夏杰
  日期：2017.4.8
------------------------------------------------*/
void DelayMs(unsigned char t)
{
	// 自减循环
	while(t--)
	{
		DelayUs2x(245);
		DelayUs2x(245);
	}
}



