#include <stdio.h>
int main()
{   int fac(int n);
	int i = 10;
	for (i=1;i<=5;i++)
	{
		printf("%d! = %d\n",i,fac(i));
	}
	
	return 0;
}


int fac(int n)
{
	/*static类型的变量在创建后，直到程序运行结束才会销毁
	  并不像auto变量那样，函数运行完毕后即释放存储空间，
	  因此f会一直驻留在内存中，并在每次函数调用结束后，
	  保存当前变量的值，在下次进入函数时接着使用上一次的值*/
	static int f = 1;
	f = f*n;
	return f;
}