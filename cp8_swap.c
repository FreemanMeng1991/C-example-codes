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


/*��ͼ�ı�ָ������д洢��ֵ�����ں�����ֵ���ݵ�
//��˲���ɹ���pa��pb�ں����˳�ʱ�����٣������
//����p1��p2���ֲ��䡣*/
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


/*���ı�ָ������д洢��ֵ�����Ǹı�ָ����
ָ�����ڴ浥Ԫ�е�ֵ����ʹpa��pb�ں����˳�
ʱ�����٣���ʵ�����ڴ浥Ԫ�е�ֵȴ���ı�*/
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