#include <stdio.h>

/*
	C语言入门，第1个C语言程序，打印 Hello World 字符。

	在C语言中，main()函数是程序执行的入口函数。printf 是stdio.h中提供的函数，因此需要引入
	stdio.h 头文件。

	注意：

	#include <stdio.h>   
	#include "stdio.h"

	以上2种include的不同之处在于，使用尖括号的<stdio.h>时，程序会先从系统目录中找stdio.h;
	而使用双引号的"stdio.h"时，程序是从当前目录中找stdio.h。本例中，由于 stdio.h 这个文件
	是在系统目录内，因此使用 <stdio.h> 要比 "stdio.h" 的执行效率要快。

	结论: 对于系统自带的头文件，使用 #include <*.h> 方式引入；其他的使用 #include "*.h" 
	方式引入。
*/
/*
 * 一个C语言程序，不论其大小如何，都是由函数和变量组成的。
 * 函数中包含一些语句，以指定所要执行的计算操作；
 * 变量，则用于存储计算过程中使用的值；
 *
 * 关于代码风格：
 * 由于制表符为8个字符，所以缩进也为8个字符。
 */
main()
{
	printf("Hello World\n");
}
