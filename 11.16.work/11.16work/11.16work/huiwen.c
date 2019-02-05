#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int huiwen(char* arr)
{
	int left = 0, right = strlen(arr) - 1;
	while (left <= right)
	{
		if (arr[left] != arr[right])
		{
			return 0;
		}
		else
		{
			left++;
			right--;
		}
	}
	return 1;
}

int ispal(int n)
{
	int div = 1;
	//使其在同一个数量级
	while ((n / div) >= 10)
	{
		div *= 10;
	}
	//判断是否是回文数
	while (n > 9)
	{
		//首先判断当前的最高位和最低位
		if (n / div != n % 10)
		{
			return 0;
		}
		//去掉最高位
		n %= div;
		//去掉最低位
		n /= 10;
		div /= 100;
	}
	return 1;
}

int main()
{
	char arr[] = "12344321";
	printf("%d\n", huiwen(arr));

	int n = 123321;
	printf("%d\n", ispal(n));
	system("pause");
	return 0;
}
