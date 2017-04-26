#ifndef _BLUETEETH_H_
#define _BLUETEETH_H_

// 定义接收的数据
extern unsigned char rec_data;


/*-----------------------------------------------
  TODO：蓝牙模块初始化
  参数：
  编写：夏杰
  日期：2017.4.
------------------------------------------------*/
void blueteeth_init();

/*-----------------------------------------------
  TODO：串口发送数据到蓝牙模块
  参数：dat 要发送的数据
  编写：夏杰
  日期：2017.4.24
------------------------------------------------*/
void blueteeth_send_byte(unsigned char dat);

/*-----------------------------------------------
  TODO：蓝牙发送字符串
  参数：*s 字符串首地址
  编写：夏杰
  日期：2017.4.24
------------------------------------------------*/
void blueteeth_send_str(unsigned char *s);


#endif