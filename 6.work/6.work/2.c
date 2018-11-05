//Çón^k
#include <stdio.h>
#include <stdlib.h>

int Mi(int n,int k)
{
	if (k == 0)
	{
		return 1;
	}
	return n * Mi(n, k - 1);
}

int main()
{ 
	printf("%d\n",Mi(5,3));
	system("pause");
	return 0;
}