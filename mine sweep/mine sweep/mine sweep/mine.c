#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define ROW 10
#define COL 10
#define MINE 20
char mine_map[ROW + 2][COL + 2];   //表示地雷的雷阵
char show_map[ROW + 2][COL + 2];   //表示用户看到的地图

int Menu(choice)
{
	printf("             1.开始游戏\n");
	printf("             0.退出游戏\n");
	printf("请输入你的选择：\n");
	scanf("%d", &choice);
	return choice;
}

void InIt(char mine_map[ROW + 2][COL + 2],char show_map[ROW + 2][COL + 2])
{
	memset(mine_map, '0', (ROW + 2) * (COL + 2));
	memset(show_map, '*', (ROW + 2) * (COL + 2));
	srand(time(0));
	int mine_count = MINE;
	while (mine_count > 0)
	{
		int row = rand() % 10 + 1;
		int col = rand() % 10 + 1;
		if (mine_map[row][col] == '0')
		{
			mine_map[row][col] = '1';
			mine_count--;
		
		}
	}
}

void DisPlay(char map[ROW + 2][COL + 2])
{
	printf("     ");
	for (int col = 1; col <= COL; col++)
	{
		printf("%d ",col);
	}
	printf("\n");
	for (int col = 1; col <= COL; col++)
	{
		printf("---");
	}
	printf("\n");
	for (int row = 1; row <= ROW; row++)
	{
		printf("%02d | ",row);
		for (int col = 1; col <= COL; col++)
		{
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}

}

void UpdateMap(char show_map[ROW + 2][COL + 2], char mine_map[ROW + 2][COL + 2],int row,int col)
{
	int mine_count = 0;
	mine_count = (mine_map[row - 1][col - 1] - '0') + (mine_map[row - 1][col] - '0') + (mine_map[row - 1][col + 1] - '0') +
		(mine_map[row][col - 1] - '0') + (mine_map[row][col + 1] - '0') + (mine_map[row + 1][col - 1] - '0') +
		(mine_map[row + 1][col] - '0') + (mine_map[row + 1][col + 1] - '0');
	show_map[row][col] = '0' + mine_count;
}

void Game()
{
	int not_mine = 0;
	InIt(mine_map,show_map);
	DisPlay(show_map);
	while (1)
	{
		int row = 0,col = 0;
		printf("请输入要翻开的坐标：\n");
		scanf("%d %d", &row, &col);
		if (row <= 0 || row > ROW || col <= 0 || col > COL)
		{
			printf("您输入的坐标不合法，请重新输入！");
			continue;
		}
		if (mine_map[row][col] == '1')   
		{
			printf("游戏结束！\n");
			DisPlay(mine_map);
			break;
		}
		not_mine++;
		if (not_mine == ROW * COL - MINE)
		{
			printf("扫雷成功！\n");
			DisPlay(mine_map);
			break;
		}
		UpdateMap(show_map,mine_map,row,col);
		DisPlay(show_map);
	}
}

void Start()
{
	while (1)
	{
		int choice = Menu();
		if (choice == 0)
		{
			printf("游戏结束！\n");
			break;
		}
		Game();
	}
}

int main()
{
    Start();
	system("pause");
	return 0;
}