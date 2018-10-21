#include <stdio.h>
#include <stdlib.h>

void Print(int x)
{
	if (x > 9)
	{
		Print(x / 10);
	}
	printf("%d\n", x % 10);

}

int main()
{
	Print(4321);
	system("pause");
	return 0;
}