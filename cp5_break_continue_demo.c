#include <stdio.h>  
int main()  
{  
	int i = 0;  
	do  
	{   i++;  
		printf("before the continue\n");   
		continue;
		printf("after the continue, should never print\n");  
	} while (i < 3); 
	printf("after the while loop\n\n");  

	for (i=0;i<3;i++)
	{   i++;  
		printf("before the break\n");   
		break;
		printf("after the break, should never print\n"); 
	}
	printf("after the for loop\n\n");  
}