//将字符串中的字符反向排列
#include <stdio.h>
#include <stdlib.h>

void reverse(char* str)
{
	char* first = str;
	while (*str != '\0')
	{
		str++;
	}
	while (str != first)
	{
		str--;
		printf("%c", *str);
	}

}

int main()
{
	char str[] = "hello";
	reverse(str);
	printf("\n");
	system("pause");
	return 0;
}