#include <stdio.h>
#include <stdlib.h>

int Strlen(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		++count;
		++arr;
	}
	return count;
}

void change(char* arr)
{
	if (*arr)
	{
		char temp = 0;
		int len = Strlen(&arr);
		temp = arr[0];
		arr[0] = arr[len - 1];
		arr[len - 1] = '\0';
		change(arr + 1);
		arr[len - 1] = temp;
	}
}
int main()
{
	char arr[] = "student a am I";
	change(&arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}