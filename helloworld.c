/*
 * C语言入门，第1个C语言程序，打印 Hello World 字符。
 *
 * 在C语言中，main()函数是程序执行的入口函数。也就是执行C语言程序时，系统会首先
 * main()函数开始。
 *
 * 打印Hello World字符串，需要借助C语言标准库stdio.h中提供的printf函数，因此需要
 * 引入 stdio.h 头文件。
 *
 * 写完代码之后，通过以下命令编译源文件
 * 	cc helloworld.c 
 * 该命令会生成一个可以执行的a.out文件。执行
 * 	./a.out
 * 程序会在控制台输出"Hello World"字样。至此，第1个C语言程序就完成了。
 *
 * 学习目标：
 * (a)懂得简单的编译和执行C语言程序。
 */
#include <stdio.h>

main()
{
	printf("Hello World!\n");
}
