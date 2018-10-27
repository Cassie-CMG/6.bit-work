////求第 n 个斐波那契数
//#include <stdio.h>
//#include <stdlib.h>
//
//int Fib1(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	return Fib1(n - 1) + Fib1(n - 2);
//}
//
//int Fib2(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	int num1 = 1, num2 = 1,result = 0;
//	for (int i = 3; i <= n; i++)
//	{
//		result = num1 + num2;
//		num1 = num2;
//		num2 = result;
//	}
//	return result;
//}
//
//int main()
//{
//	printf("%d\n", Fib2(40));
//	printf("%d\n", Fib1(40));
//	system("pause");
//	return 0;
//}