#include <stdio.h>
int main()
{
	int arr[6] = {6,4,2,3,1,5};
	int arr_size = sizeof(arr)/sizeof(int);
	int temp,i,j,k;

	printf("Initial:");
	for (k=0;k<arr_size;k++)
		printf("%3d",arr[k]);
	printf("\n");

	for (i=0;i<arr_size-1;i++)
	{   
		printf("\nRound %d:\n",i+1);
		for (j=0;j<arr_size-i-1;j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp     = arr[j];
				arr[j]   = arr[j+1];
				arr[j+1] = temp;
			}

			//每进行一次排序，输出一次结果
		    printf("Step %d:",j+1);
			for (k=0;k<arr_size;k++)
				printf("%3d",arr[k]);
			printf("\n");
		}
	}
	return 0;
}
//Visual demo : https://visualgo.net/zh/sorting