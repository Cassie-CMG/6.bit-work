//���Ͼ���
#include <stdio.h>
#include <stdlib.h>
#define NUM 5

void find1(int arr[3][3],int row,int col,int k, int *px, int *py)
{
	//�����Ͻǿ�ʼ��
	int i = 0, j = col - 1;
	while ((i < row) && (j >= 0))  //���������Ĳ��ҷ�Χ
	{
		if (arr[i][j] == k)  //�����ǰֵ����k,���ظ�ֵ������
		{
			*px = i;
			*py = j;
			return;
		}
		else if (arr[i][j] < k)  //�����ǰֵС��k,��Ѱ�Ҹ����ֵ
		{
			i++;
		}
		else  //�����ǰֵ����k,��Ѱ�Ҹ�С��ֵ
		{
			j--;
		}
		*px = -1;  //���Ϸ�ֵ����û���ҵ���Ӧ����
		*py = -1;
	}
}

void find2(int arr[3][3], int row, int col, int k, int *px, int *py)
{
	//�����½ǿ�ʼ��
	int i = row - 1, j = 0;
	while ((i >= 0) && (j < col))  //���������Ĳ��ҷ�Χ
	{
		if (arr[i][j] == k)  //�����ǰֵ����k,���ظ�ֵ������
		{
			*px = i;
			*py = j;
			return;
		}
		else if (arr[i][j] < k)  //�����ǰֵС��k,��Ѱ�Ҹ����ֵ
		{
			j++;
		}
		else  //�����ǰֵ����k,��Ѱ�Ҹ�С��ֵ
		{
			i--;
		}
		*px = -1;  //���Ϸ�ֵ����û���ҵ���Ӧ����
		*py = -1;
	}
}

int find3(int arr[3][3],int row,int col,int k,int x,int y,int *px,int *py)
{
	//�����Ͻǿ�ʼ��
	if ((x >= row) || (y < 0))
	{
		*px = -1;
		*py = -1;
		return 0;  //���Ϸ�ֵ��ʾδ�ҵ�������0
	}
	if (arr[x][y] == k)  //�����ǰֵ����k,����1
	{
		*px = x;
		*py = y;
		return 1;
	}
	else if(arr[x][y] < k)  //�����ǰֵС��k,��Ѱ�Ҹ����ֵ
	{
		return find3(arr, row, col, k, x + 1, y, px, py);
	}
	else  //�����ǰֵ����k,��Ѱ�Ҹ�С��ֵ
	{
		return find3(arr, row, col, k, x, y - 1, px, py);
	}
}

int find4(int arr[3][3], int row, int col, int k, int x, int y, int *px, int *py)
{
	//�����½ǿ�ʼ��
	if ((x < 0) || (x >= row))
	{
		*px = -1;
		*py = -1;
		return 0;  //���Ϸ�ֵ��ʾδ�ҵ�������0 
	}
	if (arr[x][y] == k)  //�����ǰֵ����k,����1
	{
		*px = x;
		*py = y;
		return 1;
	}
	else if (arr[x][y] < k)  //�����ǰֵС��k,��Ѱ�Ҹ����ֵ
	{
		return find4(arr, row, col, k, x, y + 1, px, py);
	}
	else  //�����ǰֵ����k,��Ѱ�Ҹ�С��ֵ
	{
		return find4(arr, row, col, k, x - 1, y, px, py);
	}
}

int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int px1 = 0, py1 = 0;
	find1(arr, 3, 3, NUM, &px1, &py1);  //��������Ѱ��MUM�������
	printf("�ҵ�����������Ϊ����%d,%d��\n", px1, py1);

	int px2 = 0, py2 = 0;
	find2(arr, 3, 3, NUM, &px2, &py2);  //��������Ѱ��MUM�������
	printf("�ҵ�����������Ϊ����%d,%d��\n", px2, py2);

	int px3 = 0, py3 = 0;
	find3(arr, 3, 3, NUM, 0, 2, &px3, &py3);  //��������Ѱ��MUM�������
	printf("�ҵ�����������Ϊ����%d,%d��\n", px3, py3);

	int px4 = 0, py4 = 0;
	find4(arr, 3, 3, NUM, 2, 0, &px4, &py4);  //��������Ѱ��MUM�������
	printf("�ҵ�����������Ϊ����%d,%d��\n", px4, py4);

	system("pause");
	return 0;
}