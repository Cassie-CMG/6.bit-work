//һ��������ֻ�����������ǳ���һ�Σ������������ֶ�����������,�ҳ����������֡�
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10] = { 1,1,2,2,4,4,4,4,5,6};
	int ret = 0, divide = 0, x = 0, y = 0;
	for (int i = 0; i < 10; i++)
	{
		ret ^= a[i];    //ret��ֵ�ǳ�����һ�ε����������Ľ��
	}
	for (int i = 0; i < 32; i++)
	{
		if (((ret << i) & 1) == 1)
		{
			//��ret�Ķ�����λ���ҵ�һ��Ϊ 1 ��λ����¼�������λ��
			divide = i;   
			break;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		//���ݵ� divide λ�Ĳ�ͬ���������Ϊ����
		if (((a[i] << divide) & 1) == 1) 
		{
			x ^= a[i];
			//x��ֵ���������е������ֵ��Ǹ���
		}
		else
		{
			y ^= a[i];
			//y��ֵ���������е������ֵ��Ǹ���
		}
	}
	printf("%d\n", x);
	printf("%d\n", y);
	system("pause");
	return 0;
}