//���ز�����������1�ĸ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int count_one_bits(int value)
{
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((value >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	printf("������һ�����֣�\n");
	int value = 0;
	scanf("%d", &value);
	printf("��������1�ĸ���: %d\n",count_one_bits(value));
	system("pause");
	return 0;
}