#include <stdio.h>

/*
	函数原型。必须放置在文件的开头。
	使用函数原型是ANSI C的一个重要特点。它的作用主要是利用它在程序的编译阶段对调用函数的合法
	性进行全面检查。
*/
int power(int base, int n);

int main()
{
	int i;

	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2, i), power(-3, i));

	return 0;
}

/*
	函数的作用是，求底数base的n次冥。

	在C语言的函数定义中，参数列表中的参数为局部参数，其作用范围只限函数内部。
*/
int power(int base, int n)
{
	int i, p;
	p = 1;
	for (i = 1; i <= n; ++i)
		p = p * base;
	return p;
}
