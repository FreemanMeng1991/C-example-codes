#include <stdio.h>

#ifndef ROW£¬COL
#define  ROW 3
#define  COL 4
#endif

int main()
{
	int arr[ROW][COL] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int arr_t[COL][ROW] = {0};
	int i,j;

	for (i=0;i<COL;i++)
	{
		for (j=0;j<ROW;j++)
		{
			arr_t[i][j] = arr[j][i];
		}
	}


	printf("Original: \n");
	for (i=0;i<ROW;i++)
	{ 
		for (j=0;j<COL;j++)
		{printf("%4d",arr[i][j]);
		}
		printf("\n");
	}

	printf("\nTransposition: \n");
	for (i=0;i<COL;i++)
	{  
		for (j=0;j<ROW;j++)
		{printf("%4d",arr_t[i][j]);
		}
		printf("\n");
	}

	return 0;
}