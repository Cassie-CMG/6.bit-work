//�����������ͬ�ı���λ����
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
	printf("�������������֣�\n");
	int m = 0,n = 0;
	scanf("%d %d", &m,&n);
	printf("��ͬ��bitλ��Ϊ��%d\n", differ1(m, n));
	system("pause");
	return 0;
}