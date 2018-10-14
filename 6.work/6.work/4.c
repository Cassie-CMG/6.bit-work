//打印一个整数的每一位
#include <stdio.h>
#include <stdlib.h>

int digit(int n)
{
	if (n > 9)
	{
		digit(n / 10);
	}
	printf("%d\n", n % 10);
}

int main()
{
	digit(1234);
	system("pause");
	return 0;
}