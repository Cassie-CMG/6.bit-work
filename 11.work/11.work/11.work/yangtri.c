#include <stdio.h>
#include <stdlib.h>
#define ROW 10
#define COL 10

void tri()
{
	int a[ROW][COL] = { 0 };
	int i = 0, j = 0;
	for (i = 0; i < ROW; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < ROW; i++)
	{
		for (j = 1; j <= i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < ROW; i++)
	{
		/*for (j = 0; j <= col*(ROW - i) / 2; j++)
		{
			printf(" ");
		}*/
		for (j = 0; j <= i; j++)
		{
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}

}
int main()
{
	tri();
	system("pause");
	return 0;
}