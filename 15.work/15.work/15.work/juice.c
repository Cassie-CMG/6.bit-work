//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ.
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int money = 0;
	int tolal = 0;
	int empty = 0;
	printf("������Ǯ����\n");
	scanf("%d", &money);
	tolal = money;
	empty = money;
	while (empty > 1)
	{
		tolal += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", tolal);
	system("pause");
	return 0;
}