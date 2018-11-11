#include <stdio.h>
#include <stdlib.h>

int Strlen(char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

void Reverse(char* left,char* right)
{
	while (left < right)
	{
		int tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void Turn(char* str)
{
	char* left = str;
	char* right = str + Strlen(str) - 1;
	char* cur = str;
	Reverse(left, right);
	while (*cur)
	{
		char* start = cur;
		while ((*cur != ' ') && (*cur != '\0'))
		{
			cur++;
		}
		Reverse(start, cur - 1);
		if (*cur == ' ')
		{
			cur++;
		}
	}
}

int main()
{
	char arr[] = "student a am I";
	printf("%s\n", arr);
	Turn(arr);
	printf("%s\n",arr);
	system("pause");
	return 0;

}