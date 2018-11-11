//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水.
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int money = 0;
	int tolal = 0;
	int empty = 0;
	printf("请输入钱数：\n");
	scanf("%d", &money);
	tolal = money;
	empty = money;
	while (empty > 1)
	{
		tolal += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", tolal);
	system("pause");
	return 0;
}