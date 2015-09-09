#include <stdio.h>

/*
	getchar() 函数的作用，是读取一行文本;
	
	EOF, end of file, 表示一行文本结束的符号。
	在一行空字符文本行中，可以使用组合键 Ctrl + D 输入 EOF 。
	注意：在新的一行文本中，如果已经有其它字符了，这时组合键 Ctrl + D 只表示本行的结束符，并不是 EOF ; 
	必须在没有其它字符的行中, 使用组合键 Ctrl + D 才是 EOF 。
*/
main () 
{
	int c;
	
	while ((c = getchar()) != EOF)
		putchar(c);
}