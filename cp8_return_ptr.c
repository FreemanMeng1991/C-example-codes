#include <stdio.h>
int main()	
{ 
	int *find_max(int arr[][4], int col, int row, int *results);
	int a[3][4]={12,11,10,9,8,7,6,5,4,3,2,1};
	int results[3] = {0};
	int i,j;

	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{printf("%3d",a[i][j]);
		}
		printf("\n");
	}

	find_max(a,3,4,results);
	printf("%d %d %d",results[0],results[1],results[2]);
	return 0;
}

/*
返回指针的函数：

找出二维数组中的最大值及其坐标位置。最大值、行、列坐标保存在
main函数定义的results数组中，将该数组通过参数传入find_max，
将结果写入results数组后返回指向results数组的指针。
*/

int *find_max(int arr[3][4], int row, int col, int *results)
{   int i,j,max;
    max = arr[0][0];
	*results = max;
	*(results+1) = 0;
	*(results+2) = 0;
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{ if (arr[i][j]>max)
		  { max = arr[i][j];
		    *results = max;
		    *(results+1) = i;
		    *(results+2) = j;
		  }
		}
		printf("\n");
	}
	return results;
}