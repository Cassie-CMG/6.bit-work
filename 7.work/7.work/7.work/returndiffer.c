//输出两个数不同的比特位个数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int differ1(int m,int n)
{
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((m >> i) & 1) != ((n >> i) & 1))
		{
			count++;
		}
	}
	return count;
}

int main()
{
	printf("请输入两个数字：\n");
	int m = 0,n = 0;
	scanf("%d %d", &m,&n);
	printf("不同的bit位数为：%d\n", differ1(m, n));
	system("pause");
	return 0;
}