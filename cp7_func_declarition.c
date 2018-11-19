#include <stdio.h>

/*若注释掉这两行或者修改返回类型会出错
  如果函数在调用前被定义则不会出错*/
void fun_1();
void fun_2();

/*函数声明可以省略参数列表中的参数标识符,仅保留参数类型
  C语言不要求int返回类型的函数有原型，因此下面两行即使
  删去也不会出问题，但推荐保留*/
int max(int a,int b);
int min(int,int);

int main()
{
	fun_1();
	fun_2();
	printf("max(4,1) is %d\n",max(4,1));
	printf("min(4,1) is %d\n",min(4,1));
	return 0;
}

void fun_1(void)
{
	printf("This is fun_1 \n");
	//void类型出现返回值会产生警告
	//return 0; 
}

void fun_2(void)
{
	printf("This is fun_2 \n");
}

int max(int a, int b)
{
	return a>b?a:b;
}

int min(int a, int b)
{
	return a<b?a:b;
}