#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	//1.
	int a[5] = { 1, 2, 3, 4, 5 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d\n", *(a + 1), *(ptr - 1));
	//2 5

	//2.
	struct Test
	{
		int Num;
		char* pcName;
		short date;
		char cha[2];
		short Ba[4];
	}*p = 0;
	printf("%x\n", p + 0x1);
	printf("%x\n", (unsigned long)p + 0x1);
	printf("%x\n", (unsigned int*)p + 0x1);
	//14 1 4

	//3.
	int a[4] = { 1, 2, 3, 4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);
	//4 2000000

	//4.
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	int* p;
	p = a[0];
	printf("%d\n", p[0]);
	//1
	
	//5.
	int a[5][5];
	int (*p)[4];
	p = a;
	printf("a_ptr=%#p,p_ptr=%#p\n", &a[4][2], &p[4][2]);
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);

	//6.
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* ptr1 = (int*)(&aa + 1);
	int* ptr2 = (int*)(*(aa + 1));
	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));

	//7.
	char* a[] = { "work", "at", "alibaba" };
	char** pa = a;
	pa++;
	printf("%s\n", *pa);

	//8.
	char*c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	system("pause");

	//һά���� 
	int a[] = {1,2,3,4};
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a+0));
	printf("%d\n", sizeof(*a)); 
	printf("%d\n", sizeof(a+1));
	printf("%d\n", sizeof(a[1]));
	printf("%d\n", sizeof(&a));
	printf("%d\n", sizeof(*&a));
	printf("%d\n", sizeof(&a+1));
	printf("%d\n", sizeof(&a[0]));
	printf("%d\n", sizeof(&a[0]+1));

	//�ַ����� 
	char arr[] = {'a','b','c','d','e','f'};
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr+0));
	printf("%d\n", sizeof(*arr)); 
	printf("%d\n", sizeof(arr[1])); 
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr+1)); 
	printf("%d\n", sizeof(&arr[0] + 1));
	
	char arr[] = {'a','b','c','d','e','f'};
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1])); 
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));

	char arr[] = "abcdef"; 
	printf("%d\n", sizeof(arr)); 
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));

	printf("%d\n", strlen(arr)); 
	printf("%d\n", strlen(arr + 0)); 
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));

	char *p = "abcdef"; 
	printf("%d\n", sizeof(p)); 
	printf("%d\n", sizeof(p + 1));
	printf("%d\n", sizeof(*p));
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p + 1));
	printf("%d\n", sizeof(&p[0] + 1));

	printf("%d\n", strlen(p));
	printf("%d\n", strlen(p + 1)); 
	printf("%d\n", strlen(*p));
	printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));

	//��ά���� 
	int a[3][4] = {0};
	printf("%d\n", sizeof(a)); 
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0])); 
	printf("%d\n", sizeof(a[0]+1)); 
	printf("%d\n", sizeof(*(a[0]+1)));
	printf("%d\n", sizeof(a+1)); 
	printf("%d\n", sizeof(*(a+1)));
	printf("%d\n", sizeof(&a[0] + 1)); 
	printf("%d\n", sizeof(*(&a[0] + 1)));
	printf("%d\n", sizeof(*a)); 
	printf("%d\n", sizeof(a[3]));
	/*�����������壺 
		1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С�� 
		2. &���������������������ʾ�������飬ȡ��������������ĵ�ַ�� 
		3. ����֮�����е�����������ʾ��Ԫ�صĵ�ַ��*/
	system("pause");
	return 0;
}