#include <stdio.h>
#define PI 3.1415926
//����������Ҫ�ӷֺţ���Ϊ���������ڴ�
//const double PI=3.1415926;
int main(void)
{
	double  v,r,h;
	r = 10.0;
	h = 20.0;
	v = PI*r*r*h;
	printf("v=%f\n",v);
	return 0;
}
