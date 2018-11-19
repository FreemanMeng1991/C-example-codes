#include <stdio.h>
/*static修饰内部函数，加上static可以在不同
 程序源文件中定义相同名称的函数且互不干扰，
 在这个例子中，cp7_hello和cp7_bye中各有
 一个file_name函数，但不会出现重定义错误。
*/
static void file_name(void)
{
	printf("cp7_bye.c:  ");
}

void say_goodbye(void)
{
	file_name();
	printf("Bye-Bye\n");
}
