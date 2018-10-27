//输出一个数字的每一位
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void Print(int x)
{
	if (x > 9)
	{
		Print(x / 10);
	}
	printf("%d ", x % 10);

}

int main()
{
	printf("请输入一个数字：\n");
	int value = 0;
	scanf("%d", &value);
	Print(value);
	system("pause");
	return 0;
}