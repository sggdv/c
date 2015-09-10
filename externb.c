#include <stdio.h>
#include "externa.c"

/*
	声明（Declaration）和定义（Definition）之间的区别. 声明一个变量只是宣布这个
	变量的属性，也就是说告诉编译器这个变量时什么类型（如int, long, string 等）. 而
	定义一个变量不仅是声明了变量的属性，同时也告诉编译器给变量分配相应的存储
	空间. 例如：
	
	//定义一个变量名为value，并分配相应存储空间
	int value; 

	//定义数组变量名为arr，并分配相应的存储空间
	double arr[MAX_INTEGER];

	//声明变量名为value1且这个变量在其他文件中定义的，没有分配存储空间
	extern int value1;
*/

extern int a;
extern void demoa();

main() 
{
	demoa();
	printf("%s\n", "bb");
	printf("%d\n", a);
	return 0;
}