#include <stdio.h>
int global_var = 0;
int c = 0;
int main()
{
	int change_value(int value);
	int set_value(int value);
	int a=0; //a为局部变量，定义在函数内部或函数中的复合语句内（如，for）
	int c=1; //局部变量c与全局变量c重名，则内部作用域覆盖全局作用域
	
	//函数参数为值传递，传入原值的副本，并不改变原值，因此不会变为1
	change_value(3);
	printf("a = %d\n",a);
	printf("global_var = %d\n",global_var);

	//函数运行结束后，局部变量c销毁，c进入main函数作用域，
	//并继续覆盖全局变量c的作用域
	printf("c = %d\n",c);

	set_value(2);
    //函数执行完后，局部变量被b销毁，访问b会出错
	//printf("b= %d",b);


	return 0;
}

int change_value(int value)
{
	int a,c;
	a = value;
	//全局变量global_var在任何地方都可以访问
	global_var = value;

	//局部变量c与全局变量c重名，则内部作用域覆盖全局作用域
	c = value;
	return a;
}

int set_value(int value)
{
	int b = 0;
	b = value;
	return b;
}