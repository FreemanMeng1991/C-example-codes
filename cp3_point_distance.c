#include<stdio.h> 
#include<math.h> 
int main(void) 
{ 
	double x1, y1, x2, y2, dist; 
	printf("Type the coordinate of P1: "); 
	scanf("%lf%lf", &x1, &y1); 
	printf("Type the coordinate of P2: "); 
	scanf("%lf%lf", &x2, &y2); 

	dist= sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
	printf("%.2f\n", dist); 
	return 0;
} 
