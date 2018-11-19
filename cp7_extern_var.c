/*此例程在讲完外部函数和内部函数后再演示！！
  将此文件与cp7_hello.c一同编译*/

#include <stdio.h>
int A = 666;
void print_extern(); //cp7_hello.c中定义

int main()
{   print_extern();
	return 0;
}