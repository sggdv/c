#include <stdio.h>

/*
 * 打印在本机的字符集中，字母'a'所代表的整型数。
 */
int main()
{
	char c = 'a';
	printf("a=%c\n", c);
	printf("a=%d\n", c);

	char i = 97;
	printf("i=%c\n", i);
	printf("i=%d\n", i);
	
	return 0;
}