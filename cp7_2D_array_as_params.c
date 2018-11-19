#include <stdio.h>

#ifndef ROW，COL
#define  ROW 3
#define  COL 4
#endif

int main()
{
	int arr[ROW][COL] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	

	//为保证较好可读性，最好将坐标都加1使序号从1开始而不是0，这样较为自然
	printf("\nFound max %d.\n",find_max(arr));

	return 0;
}

//二维数组作为函数参数时，同样可以忽略第一维的大小
int find_max(int arr[][4])  
{
  
	int i,j,max;
	max = arr[0][0];
	// 不能使用sizeof(arr)/(sizeof(int)*4)自动确定行数，因为arr是形参
	//并非完整的数组，而是数组首地址，也就是数组的第一个元素
	for (i=0;i<3;i++)
	{for (j=0;j<4;j++)
		{if (arr[i][j]>max)
			{max = arr[i][j];
			}
		}
	}
   
	return max;
}