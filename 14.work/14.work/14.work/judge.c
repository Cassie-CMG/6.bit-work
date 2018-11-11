//判断一个字符串是否为一个字符串旋转之后的值
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ZuoXuan(char*str,int k)
{
	int len = strlen(str);
	k = k % len;
	char temp = 0;
	char* cur = str;
	while (k != 0)
	{
		temp = *str;
		cur = str;
		while (*(cur + 1) != '\0')
		{
			*cur = *(cur + 1);
			cur++;
		}
		*cur = temp;
		k--;
	}
}

int Judje(char* dest, char* sour)
{
	if (strlen(dest) != strlen(sour))
	{
		return 0;
	}
	if (strcmp(dest, sour) == 0)
	{
		return 1;
	}
	int k = strlen(dest);
	k--;
	while (k != 0)
	{
		ZuoXuan(sour, 1);
		if (strcmp(dest, sour) == 0)
		{
			return 1;
		}
		k--;
	}
	return 0;
}

int main()
{
	char dest[100] = { 0 };
	char sour[100] = { 0 };
	scanf("%s", dest);
	scanf("%s", sour);
	printf("%d\n", Judje(dest, sour));
	system("pause");
	return 0;
}