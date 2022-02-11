/*
 * @Descripttion: 
 * @version: 
 * @Author: Jarvif
 * @Date: 2022-02-11 15:00:26
 * @LastEditors: Jarvif
 * @LastEditTime: 2022-02-11 16:04:47
 * @Mail: liuzhiwei@casachina.com.cn
 * @COPYRIGHT(c):  CASA Technology Co. Ltd
 */
#include <stdio.h>
#include "spi.h"
#include "i2c.h"

int main(int argc,char *argv[])
{
	argc = argc;
	argv = argv;

	printf("meson ninja hello world\n");
	int a = sum(5,1);
	printf("a:%d\n",a);
	int b = add(5,1);
	printf("b:%d\n",b);
	return 0;
}
