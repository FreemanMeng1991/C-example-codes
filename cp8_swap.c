#include <stdio.h>
void swap(int a,int b);
void pswap(int *pa,int *pb);
void pswap2(int *pa,int *pb);
int main()
{   
	int a=1,b=2;
	int *p1,*p2;
	p1 = &a;
	p2 = &b;
	//pswap(p1,pa);
	pswap2(p1,p2);
	printf("a = %d,b = %d\n",a,b);
	return 0;
}

void swap(int a,int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}


/*试图改变指针变量中存储的值，由于函数是值传递的
//因此不会成功，pa、pb在函数退出时被销毁，传入的
//参数p1、p2保持不变。*/
void pswap(int *pa,int *pb)
{
	int *temp;
	temp = pa;
	printf("pa = %d,pb = %d\n",pa,pb);
	pa = pb;
	printf("pa = %d\n",pa);
	pb = temp; 
	printf("pb = %d\n",pb);
}


/*不改变指针变量中存储的值，而是改变指针所
指向是内存单元中的值，即使pa、pb在函数退出
时被销毁，但实际上内存单元中的值却被改变*/
void pswap2(int *pa,int *pb)
{
	int temp;
	temp = *pb;
	printf("*pa = %d,*pb = %d\n",*pa,*pb);
	*pb  = *pa;
	printf("*pb = %d\n",*pb);
	*pa  = temp;
	printf("*pa = %d\n",*pa);
}