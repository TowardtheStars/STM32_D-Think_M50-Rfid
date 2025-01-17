#ifndef __USART2_H
#define __USART2_H
#include "stdio.h"	
#include "sys.h" 
//////////////////////////////////////////////////////////////////////////////////
// 修改了正点原子的范例代码
//////////////////////////////////////////////////////////////////////////////////  
#define USART_REC_LEN  			200  	//定义最大接收字节数 200
#define EN_USART2_RX 			1		//使能（1）/禁止（0）串口1接收
	  	
extern u8  USART2_RX_BUF[30]; //接收缓冲,最大USART_REC_LEN个字节.末字节为换行符
extern u16 USART2_RX_STA;         		//接收状态标记
//如果想串口中断接收，请不要注释以下宏定义
void uart2_init(u32 bound);
void uart2_send_mydata(u8 *data,u8 len);
void uart2_receive_mydata(u8 *data,u8 *len);

#endif


