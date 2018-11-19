#include <stdio.h>

float add(float a,float b);
float sub(float a,float b);
float mul(float a,float b);
float div(float a,float b);
float calc(float a,float b,float (*p)(float,float));

int main()
{   
	int i=0,a=4,b=5;
	float result=0;

	//指向函数的指针 和 指向函数的指针数组
	float (*p)(float,float);
	float (*func[4])(float,float) = {add,sub,mul,div}; 
	
	p = add;
	result = calc(a,b,p);
	printf("%f",result);

	//通过指向函数的指针数组，依次执行所有运算函数
	printf("\n");
	for (i=0;i<4;i++)
	{ printf("%f ",calc(a,b,func[i]));
	}
	return 0;
}

float add(float a,float b)
{ return a+b;}

float sub(float a,float b)
{ return a-b;}

float mul(float a,float b)
{ return a*b;}

float div(float a,float b)
{ return a/b;}

float calc(float a,float b,float (*p)(float,float))
{
	return (*p)(a,b);
}