//��ӡһ��������ÿһλ
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void digit(int n)
{
	if (n > 9)
	{
		digit(n / 10);
	}
	printf("%d\n", n % 10);
}

int main()
{
	int n = 0;
	printf("������һ��������\n");
	scanf("%d",&n);
	digit(n);
	system("pause");
	return 0;
}