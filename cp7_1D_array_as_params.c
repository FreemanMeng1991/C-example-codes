#include <stdio.h>
#define LENGTH 6
int main()
{
	int find_max(int arr[],int );  
	int arr[LENGTH] = {1,2,3,4,5,6};
	printf("\nFound max %d.\n",find_max(arr,LENGTH));
	return 0;
}

// 不能使用sizeof(arr)/(sizeof(int))自动确定行数，因为arr是形参
//并非完整的数组，而是数组首地址，也就是数组的第一个元素，必须在参数
//列表中明确地指定数组的维数。也正因为如此，参数列表中的数组形参不必
//指明其大小。
int find_max(int arr[LENGTH],int length)  
{
  
	int i,max;
	max = arr[0];
	//length = sizeof(arr)/(sizeof(int); // Error!!
	for (i=0;i<length;i++)
	{if (arr[i]>max)
	  {max = arr[i];
	   }
	}
	return max;
}