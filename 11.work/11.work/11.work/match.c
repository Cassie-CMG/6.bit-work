/*5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
A选手说：B第二，我第三；
B选手说：我第二，E第四；
C选手说：我第一，D第二；
D选手说：C最后，我第三；
E选手说：我第四，A第一；
比赛结束后，每位选手都说对了一半.*/
#include <stdio.h>
#include <stdlib.h>

void guess()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1)
							&& ((b == 2) + (e == 4) == 1)
							&& ((c == 1) + (d == 2) == 1) 
							&& ((e == 4) + (a == 1) == 1))
						{
							if (a*b*c*d*e == 120)
							{
								printf("比赛结果为:\n");
								printf("A 第 %d,  B 第 %d, C 第 %d,  D 第 %d,  E 第 %d\n",
									a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
}

int main()
{
	guess();
	system("pause");
	return 0;
}