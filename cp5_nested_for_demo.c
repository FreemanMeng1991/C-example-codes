#include <stdio.h>
//输出乘法口诀表
int main()
{
	int i=1,j=1;
	for (;i<=9;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("%dx%d=%2d\t",i,j,i*j);		
		}
		printf("\n");
	}
	return 0;
}