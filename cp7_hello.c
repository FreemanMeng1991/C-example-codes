#include <stdio.h>

/*static修饰内部函数，加上static可以在不同
 程序源文件中定义相同名称的函数且互不干扰，
 在这个例子中，cp7_hello和cp7_bye中各有
 一个file_name函数，但不会出现重定义错误。
*/
static void file_name(void)
{
	printf("cp7_hello.c:  ");
}

void say_hello(void)
{
	file_name(); //调用内部函数
	printf("Hello world.\n");
}


/*演示cp7_extern_var.c代码时取消注释

extern int A; //将cp7_extern_var.c中定义的变量的作用域扩展至此文件
void print_extern(void)
{
	file_name(); //调用内部函数
	//调用外部变量
	printf("External value: %d\n",A);
}*/
