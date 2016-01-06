#include <stdio.h>

/*
 * 使用按位异或 ^ 交换两个数的值。
 */
int main() 
{
	int a = 1;
	int b = 3;
	printf("a=%d\tb=%d\n", a, b);
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	printf("a=%d\tb=%d\n", a, b);
}
