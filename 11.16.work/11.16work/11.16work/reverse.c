//逆转整数
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long Reverse(int n)
{
	int max = 0x7fffffff;
	int min = -max - 1;
	long long temp = 0;//防止逆转之后溢出
	while (n != 0)
	{
		temp = temp * 10 + n % 10;
		n /= 10;
	}
	//
	if (temp > max || temp < min)
	{
		return 0;
	}
	return temp;
}

int main()
{
	int x = 12345678;
	printf("%d\n", Reverse(x));
	system("pause");
	return 0;
}