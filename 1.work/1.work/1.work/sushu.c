#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void Sushu(int x)
{
	int i = 2;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			break;
		}	
	}
	if (i < x)
	{
		printf("%d不是素数\n", x);
	}
	else
	{
		printf("%d是素数\n", x);
	}
}

int main()
{
	printf("请输入一个正整数：\n");
	int n = 0;
	scanf("%d", &n);
	Sushu(n);
	system("pause");
	return 0;
}