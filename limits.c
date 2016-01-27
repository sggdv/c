#include <limits.h>
#include <stdio.h>

/*
 * 打印与机器实现相关的值。
 */
int main()
{
	printf("-------------------------%s-----------------------------\n", "CHAR");
	printf("CHAR_BIT\t%d\n", CHAR_BIT);	
	printf("SCHAR_MIN\t%d\n", SCHAR_MIN);
	printf("SCHAR_MAX\t%d\n", SCHAR_MAX);
	printf("UCHAR_MAX\t%u\n", UCHAR_MAX);
	printf("CHAR_MIN\t%d\n", CHAR_MIN);
	printf("CHAR_MAX\t%d\n", CHAR_MAX);

	printf("\n-------------------------%s-----------------------------\n", "SHORT");
	printf("SHRT_MIN\t%d\n", SHRT_MIN);
	printf("SHRT_MAX\t%d\n", SHRT_MAX);
	printf("USHRT_MAX\t%u\n", USHRT_MAX);

	printf("\n-------------------------%s-----------------------------\n", "INT");
	printf("INT_MIN\t\t%d\n", INT_MIN);
	printf("INT_MAX\t\t%d\n", INT_MAX);
	printf("UINT_MAX\t%u\n", UINT_MAX);

	printf("\n-------------------------%s-----------------------------\n", "LONG");
	printf("LONG_MIN\t%ld\n", LONG_MIN);
	printf("LONG_MAX\t%ld\n", LONG_MAX);
	printf("ULONG_MAX\t%lu\n", ULONG_MAX);
}
