#include <stdio.h>
int main(void)
{
	int m,n;
	float f;
	double d;
	char c;
    
	printf("Type an ASCII character: ");
	scanf("%c", &c);
	printf("%c\n",c);

	printf("Type 2 integers: ");
	scanf("%d%d", &m,&n);
	printf("%d,%d\n",m,n);

	printf("Type a float data: ");
	scanf("%f", &f);
	printf("%f\n",f);

	printf("Type a double data: ");
	scanf("%lf", &d);
	printf("%lf\n",d);

	return 0;
}
