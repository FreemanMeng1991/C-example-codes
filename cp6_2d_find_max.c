#include <stdio.h>

#ifndef ROW，COL
#define  ROW 3
#define  COL 4
#endif

int main()
{
	int arr[ROW][COL] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int x_y[2] = {0,0};
	
	int i,j,max;

	max = arr[0][0];
	for (i=0;i<ROW;i++)
	{
		for (j=0;j<COL;j++)
		{
			if (arr[i][j]>max)
			{ max = arr[i][j];
			  x_y[0] = i;
			  x_y[1] = j;
			}
		}
	}

	for (i=0;i<ROW;i++)
	{ 
		for (j=0;j<COL;j++)
		{printf("%4d",arr[i][j]);
		}
		printf("\n");
	}

	//为保证较好可读性，最好将坐标都加1使序号从1开始而不是0，这样较为自然
	printf("\nFound max %d at row %d column %d. \n",max,x_y[0],x_y[1]);
	
	return 0;
}