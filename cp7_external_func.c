#include <stdio.h>
//在cp7_greeting.h中进行函数声明
#include "cp7_greeting.h"
int main()
{   
	say_hello(); //在cp7_hello.c中实现
	say_goodbye();//在cp7_bye.c中实现
	return 0;
}

//Note：上述所有文件中的内容可以也写到一个文件中
//      但是逻辑性和可读性较差

