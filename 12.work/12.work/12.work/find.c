//Ѱ�ҵ������ֵ�����
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[9] = { 1, 2, 3, 4, 6, 4, 3, 2, 1 };
	int ret = 0;
	for (int i = 0; i < 9; i++)
	{
		ret ^= a[i];
	}
	printf("�������ֵ�����Ϊ��%d\n",ret);
	system("pause");
	return 0;
}