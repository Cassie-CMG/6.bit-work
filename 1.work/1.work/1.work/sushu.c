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
		printf("%d��������\n", x);
	}
	else
	{
		printf("%d������\n", x);
	}
}

int main()
{
	printf("������һ����������\n");
	int n = 0;
	scanf("%d", &n);
	Sushu(n);
	system("pause");
	return 0;
}