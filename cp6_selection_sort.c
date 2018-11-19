#include <stdio.h>
int main()
{
	int arr[6] = {3,2,4,1,6,5};
	int arr_size = sizeof(arr)/sizeof(int);
	int temp,min,index_min=0,i,j,k;

	//输出原始数组
	printf("Initial:");
	for (k=0;k<arr_size;k++)
		printf("%3d",arr[k]);
	printf("\n");

	/*对于长度为N的数组,选择排序共进行N-1趟排序，每趟分别从第n(n=0,1,..N-2)个元素开始，
	并认为第n个元素为当前数组中最小值，并将此值与数组中其他N-n-1个值比较，找出最终
	的最小值后，将最小值与数组中第n个元素对调。
	*/
	for (i=0;i<arr_size-1;i++)  //第一个for控制n趟排序
	{   
		min = arr[i];    //认为第n趟中第n个元素为当前数组中最小值（原始最小值）
		index_min = i;   //记录下当前最小值在数组中的位置
		printf("\nRound %d:\nstart = %d\n",i,min);
       
		for (j=i;j<arr_size-1;j++)
		{    
			//第n趟排序完成，前n个元素已被排序,
			//故从第n+1个元素开始比较并找出最小值。
			if (min>arr[j+1])
			{ min = arr[j+1];
			  index_min = j+1;  //记录下新发现的最小值在数组中的位置
			}	
		}
		
		//每趟比较完毕后，互换新发现最小值与原始最小值的位置
		temp           = arr[i];
		arr[i]         = arr[index_min];
		arr[index_min] = temp;  
		
		printf("Minimum:%2d Position:%2d\n",min,index_min);
		for (k=0;k<arr_size;k++)
			printf("%3d",arr[k]);
		printf("\n");
	}
	return 0;
}
//Visual demo : https://visualgo.net/zh/sorting