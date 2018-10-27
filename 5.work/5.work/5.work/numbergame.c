////猜数字游戏
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void menu()
//{
//	printf("         1.开始游戏\n");
//	printf("         2.结束游戏\n");
//}
//void game()
//{
//	int num1 = 0;
//	int num2 = 0;
//	num1 = rand() % 100;
//	while (1)
//	{
//		printf("请输入1~100的整数：\n");
//		scanf("%d", &num2);
//		if (num2 < num1)
//		{
//			printf("猜小啦!\n");
//		}
//		if (num2 > num1)
//		{
//			printf("猜大啦！\n");
//		}
//		if (num2 == num1)
//		{
//			printf("你真棒，猜对啦！\n");
//			break;
//		}
//	}	
//}
//int main()
//{
//	int choice = 0;
//	while (1)
//	{
//		menu();
//		printf("请输入你的选择：\n");
//		scanf("%d", &choice);
//		if (choice == 1)
//		{
//			game();
//		}
//		else
//		{
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}