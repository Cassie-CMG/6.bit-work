//�����ƴ����ҷ�ת
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int Reverse1(unsigned int n)
{
	unsigned int ret = 0;
	for (int i = 0; i < 32; i++)
	{
		//������һλ�Ľ��
		ret <<= 1;
		//�ѵ�ǰλ�Ľ��������ret�ĵ�һλ��
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
	printf("������һ����������\n");
	scanf("%d", &n);
	printf("%u\n", Reverse1(n));
	printf("%u\n", Reverse2(n));
	system("pause");
	return 0;
}