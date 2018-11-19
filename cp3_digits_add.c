#include<stdio.h>
int main(void)
{
	int n,d0,d1,d2;
	printf("Type a 3-digits number: ");
	scanf("%d",&n);
	d0=n%10;         /*将个位存入d0*/;
	d1=(n/10)%10;   /*将十位存入d1*/
	d2=(n/100)%10;  /*因为n最多是三位数，也可写为d2=(n/100);*/
    printf("%d\n",d0+d1+d2);
	return 0;
}
