#include<stdio.h>
int main(void)
{
	int n,d0,d1,d2;
	printf("Type a 3-digits number: ");
	scanf("%d",&n);
	d0=n%10;         /*����λ����d0*/;
	d1=(n/10)%10;   /*��ʮλ����d1*/
	d2=(n/100)%10;  /*��Ϊn�������λ����Ҳ��дΪd2=(n/100);*/
    printf("%d\n",d0+d1+d2);
	return 0;
}
