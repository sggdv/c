#include <stdio.h>

/*
 * 指针，是记录变量地址的变量。
 */

int demoA(void);
int demoB(void);
int demoC(void);

int demoA()
{
	int i = 8;
	printf("%d\n", i);
	printf("%d\n", &i);
}

int demoB()
{
	int i, *ip;
	i = 9;
	ip = &i;
	*ip = 10;
	printf("%d\n", i);
}

/*
 * 指针与数组的关系
 */
int demoC()
{
	int arr[2] = {9, 2};
	int *p;
	p = &arr[0];
	*p = 1;
	*(p + 1) = 3;
	printf("%d\n", p);
	printf("%d\n", *arr);
	printf("%d\n", arr[1]);
}

int main()
{
	demoC();
}
