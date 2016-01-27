#include <stdio.h>

/*
 * getchar() 函数的作用，是从stdio流中每次读入一个字符;
 * 如用户在按回车之前输入了不止一个字符，其它字符会保留在键盘缓存区中，
 * 等待后续getchar()调用读取。也就是说，后续的getchar()调用不会等待用户
 * 按键，而直接读取缓冲区中的字符，直到缓冲中的字符读完之后，才等待用户
 * 按键。      
 *	
 * EOF, end of file, 表示一行文本结束的符号。
 * 在一行空字符文本行中，可以使用组合键 Ctrl + D 输入 EOF 。
 * 注意：在新的一行文本中，如果已经有其它字符了，这时组合键 Ctrl + D 只表示本行的结束符，并不是 EOF ; 
 * 必须在没有其它字符的行中, 使用组合键 Ctrl + D 才是 EOF 。
 */
int main () 
{
	int c;
	
	while ((c = getchar()) != EOF)
		putchar(c);
	
	return 0;
}
