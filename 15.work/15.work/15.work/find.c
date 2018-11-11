//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次,找出这两个数字。
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10] = { 1,1,2,2,4,4,4,4,5,6};
	int ret = 0, divide = 0, x = 0, y = 0;
	for (int i = 0; i < 10; i++)
	{
		ret ^= a[i];    //ret的值是出现了一次的两个数异或的结果
	}
	for (int i = 0; i < 32; i++)
	{
		if (((ret << i) & 1) == 1)
		{
			//在ret的二进制位中找到一个为 1 的位，记录下来这个位置
			divide = i;   
			break;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		//根据第 divide 位的不同，将数组分为两组
		if (((a[i] << divide) & 1) == 1) 
		{
			x ^= a[i];
			//x的值是这组数中单独出现的那个数
		}
		else
		{
			y ^= a[i];
			//y的值是这组数中单独出现的那个数
		}
	}
	printf("%d\n", x);
	printf("%d\n", y);
	system("pause");
	return 0;
}