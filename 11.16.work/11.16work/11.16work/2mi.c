//判断一个数是否是二的幂
#include <stdio.h>
#include <stdlib.h>

int Judje(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count == 1;
}

int main()
{
	int n = 4;
	printf("%d\n", Judje(n));
	system("pause");
	return 0;
}