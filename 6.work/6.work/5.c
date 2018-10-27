////求一个字符串的长度
//#include <stdio.h>
//#include <stdlib.h>
//
//int strlen1(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int strlen2(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	return 1 + strlen2(str + 1);
//}
//
//int main()
//{
//	printf("%d\n", strlen1("hello"));
//	printf("%d\n", strlen2("hello"));
//	system("pause");
//	return 0;
//}