//ż��λ������λ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void Print(int n)
{
	int i = 0;
	for (i = 31; i > 0; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
}


int main()
{
	printf("������һ�����֣�\n");
	int value = 0;
	scanf("%d", &value);
	Print(value);
	system("pause");
	return 0;
}