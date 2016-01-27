## C语言学习
一个C语言程序，不管其大小如何，都是由函数和变量组成的。
函数中包含一些语句，以指定所要执行的计算操作；
变量，则用于存储计算过程中使用的值；

## 函数
函数应该简短而漂亮，并且只完成一件事情。函数应该可以在一屏或者两屏显示完，
只做一件事情，而且把它做好。

## 变量
在C语言的函数定义中，参数列表中的参数为局部参数，其作用范围只限函数内部。

## 指针
指针，是记录变量地址的变量。

## 函数原型
使用函数原型是ANSI C的一个重要特点。它的作用主要是利用它在程序的编译阶段
对调用函数的合法性进行全面检查。

## 宏定义
效果是字符的代换。

## 代码风格
由于制表符为8个字符，所以缩进也为8个字符。

## 数据类型与长度
char 字符型，占用一个字节，可以存放本地字符集中的一个字符
int 整型，通常反映了所用机器中整数的最自然长度
float 单精度浮点型
double 双精度浮点型

在这些基本数据类型的前面还可以加上一些限定符。short与long两个限定符用于限定整型。
'''
short int sh;
long int counter;
'''
在上述这种类型的声明中，关键字int可以省略。通常很多人也习惯这么做。
