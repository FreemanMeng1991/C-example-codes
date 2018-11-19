#include <stdio.h>
//以一种十分优雅地方式找出三个整数中最大的一个。
int main()
{   
	int a,b,c,max;
	printf_s("Type 3 ints here: ");
	scanf("%d%d%d",&a,&b,&c);
	max = a>b?a:b;
	max = max>c?max:c;
	printf_s("The max is %d\n",max);
	return 0;
}