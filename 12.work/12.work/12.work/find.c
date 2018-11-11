//寻找单独出现的数字
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[9] = { 1, 2, 3, 4, 6, 4, 3, 2, 1 };
	int ret = 0;
	for (int i = 0; i < 9; i++)
	{
		ret ^= a[i];
	}
	printf("单独出现的数字为：%d\n",ret);
	system("pause");
	return 0;
}