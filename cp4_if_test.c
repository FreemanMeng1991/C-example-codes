#include <stdio.h>
int main()
{   
	int n = 15;
	if (n > 0)
		printf("%d is positive.\n",n);
			if (n <= 10) 
			{printf(" and %d is no greater than 10.\n",n);
			}
	
	else /* WRONG */
	  printf("%d is negative.\n",n);
	return 0;
}