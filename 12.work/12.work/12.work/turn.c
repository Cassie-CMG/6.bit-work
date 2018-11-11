//二进制从左到右翻转
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int Reverse1(unsigned int n)
{
	unsigned int ret = 0;
	for (int i = 0; i < 32; i++)
	{
		//保存上一位的结果
		ret <<= 1;
		//把当前位的结果保存在ret的第一位；
		ret |= (n >> i) & 1;
	}
	return ret;
}

unsigned int Reverse2(unsigned int n)
{
	unsigned int sum = 0;
	for (int i = 0; i < 32; i++)
	{
		sum += ((n >> i) & 1) * pow(2, 31 - i);
	}
	return sum;
}

int main()
{
	unsigned int n = 0;
	printf("请输入一个正整数：\n");
	scanf("%d", &n);
	printf("%u\n", Reverse1(n));
	printf("%u\n", Reverse2(n));
	system("pause");
	return 0;
}