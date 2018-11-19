#include <stdio.h>
int main()
{
	void print_array(int *arr,int length);
	void bubble_sort(int *arr,int length);

	int arr[6] = {6,4,2,3,1,5};
	int arr_size = sizeof(arr)/sizeof(int);

	printf("Initial:");
	print_array(arr,arr_size);
	bubble_sort(arr,arr_size);
	printf("\n");
	return 0;
}

//C语言在处理函数形参时，将int *a、int a[]等价
void print_array(int arr[],int length)
{   int k = 0;
    for (k=0;k<length;k++)
	printf("%3d",*arr++);
}

void swap(int *pa,int *pb)
{
	int temp;
	temp = *pb;
	*pb  = *pa;
	*pa  = temp;
}

void bubble_sort(int *arr,int length)
{   
	int i=0,j=0,temp=0;
	for (i=0;i<length-1;i++)
	{   
		printf("\nRound %d:\n",i+1);
		for (j=0;j<length-i-1;j++)
		{
			if (*(arr+j)>*(arr+j+1))
			{
				swap((arr+j),(arr+j+1));	
			}

			//每进行一次排序，输出一次结果
			printf("Step %d:",j+1);
			print_array(arr,length);
			printf("\n");
		}
	}
}