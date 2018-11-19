#include <stdio.h>
int main(void)
{
	int a,b,c,d,e,f,g;
	char c1,c2;

	a = 0;
	printf("a= %d\n",a);
	printf("Before a++: %d\n",a++);
	printf("After a++: %d\n\n",a);

	a = 1;
	printf("a= %d\n",a);
	printf("Before a--: %d\n",a--);
	printf("After a--: %d\n\n",a);

	a = 0;
	printf("a= %d\n",a);
	printf("Before ++a: %d\n",++a);
	printf("After ++a: %d\n\n",a);

	a = 1;
	printf("a= %d\n",a);
	printf("Before --a: %d\n",--a);
	printf("After --a: %d\n\n",a);

	b=9;
	c=6;
	printf("b= %d,c= %d\n",b,c);
	printf("b&c: %d\nb&&c: %d\n",b&c,b&&c);
	printf("b|c: %d\nb||c: %d\nb^c: %d\n",b|c,b^c,b||c);
	printf("b>c?b:c = %d\n",b>c?b:c);
	printf("b<c= %d\n",b<c);
	printf("~0: %d, !0: %d\n\n",~0,!0);

	d=2;
	printf("d= %d\n",d);
	printf("d<<1: %d\nd>>1: %d\n",d<<1,d>>1);

}