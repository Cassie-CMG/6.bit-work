//杨氏矩阵
#include <stdio.h>
#include <stdlib.h>
#define NUM 5

void find1(int arr[3][3],int row,int col,int k, int *px, int *py)
{
	//从右上角开始找
	int i = 0, j = col - 1;
	while ((i < row) && (j >= 0))  //符合条件的查找范围
	{
		if (arr[i][j] == k)  //如果当前值等于k,返回该值的坐标
		{
			*px = i;
			*py = j;
			return;
		}
		else if (arr[i][j] < k)  //如果当前值小于k,再寻找更大的值
		{
			i++;
		}
		else  //如果当前值大于k,再寻找更小的值
		{
			j--;
		}
		*px = -1;  //不合法值代表没有找到相应数字
		*py = -1;
	}
}

void find2(int arr[3][3], int row, int col, int k, int *px, int *py)
{
	//从左下角开始找
	int i = row - 1, j = 0;
	while ((i >= 0) && (j < col))  //符合条件的查找范围
	{
		if (arr[i][j] == k)  //如果当前值等于k,返回该值的坐标
		{
			*px = i;
			*py = j;
			return;
		}
		else if (arr[i][j] < k)  //如果当前值小于k,再寻找更大的值
		{
			j++;
		}
		else  //如果当前值大于k,再寻找更小的值
		{
			i--;
		}
		*px = -1;  //不合法值代表没有找到相应数字
		*py = -1;
	}
}

int find3(int arr[3][3],int row,int col,int k,int x,int y,int *px,int *py)
{
	//从右上角开始找
	if ((x >= row) || (y < 0))
	{
		*px = -1;
		*py = -1;
		return 0;  //不合法值表示未找到，返回0
	}
	if (arr[x][y] == k)  //如果当前值等于k,返回1
	{
		*px = x;
		*py = y;
		return 1;
	}
	else if(arr[x][y] < k)  //如果当前值小于k,再寻找更大的值
	{
		return find3(arr, row, col, k, x + 1, y, px, py);
	}
	else  //如果当前值大于k,再寻找更小的值
	{
		return find3(arr, row, col, k, x, y - 1, px, py);
	}
}

int find4(int arr[3][3], int row, int col, int k, int x, int y, int *px, int *py)
{
	//从左下角开始找
	if ((x < 0) || (x >= row))
	{
		*px = -1;
		*py = -1;
		return 0;  //不合法值表示未找到，返回0 
	}
	if (arr[x][y] == k)  //如果当前值等于k,返回1
	{
		*px = x;
		*py = y;
		return 1;
	}
	else if (arr[x][y] < k)  //如果当前值小于k,再寻找更大的值
	{
		return find4(arr, row, col, k, x, y + 1, px, py);
	}
	else  //如果当前值大于k,再寻找更小的值
	{
		return find4(arr, row, col, k, x - 1, y, px, py);
	}
}

int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int px1 = 0, py1 = 0;
	find1(arr, 3, 3, NUM, &px1, &py1);  //在数组中寻找MUM这个数字
	printf("找到的数字坐标为：（%d,%d）\n", px1, py1);

	int px2 = 0, py2 = 0;
	find2(arr, 3, 3, NUM, &px2, &py2);  //在数组中寻找MUM这个数字
	printf("找到的数字坐标为：（%d,%d）\n", px2, py2);

	int px3 = 0, py3 = 0;
	find3(arr, 3, 3, NUM, 0, 2, &px3, &py3);  //在数组中寻找MUM这个数字
	printf("找到的数字坐标为：（%d,%d）\n", px3, py3);

	int px4 = 0, py4 = 0;
	find4(arr, 3, 3, NUM, 2, 0, &px4, &py4);  //在数组中寻找MUM这个数字
	printf("找到的数字坐标为：（%d,%d）\n", px4, py4);

	system("pause");
	return 0;
}