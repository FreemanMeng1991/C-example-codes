#include <stdio.h>
int main()
{
	int arr[6] = {3,2,4,1,6,5};
	int arr_size = sizeof(arr)/sizeof(int);
	int temp,min,index_min=0,index,j,k;

	//���ԭʼ����
	printf("Initial:");
	for (k=0;k<arr_size;k++)
		printf("%3d",arr[k]);
	printf("\n");

	for(index=1;index<arr_size;index++)
	{   
		int j=i-1;
		int temp = arr[i];//Ҫ���������
		while (temp<arr[j]&&j>=0) 
		{  //���Ҫ��������ݱ�ǰ�������С����ô��ǰ������������
			arr[j+1] = arr[j]; 

			j--;
		}
		arr[++j] = temp;

		for (k=0;k<arr_size;k++)
			printf("%3d",arr[k]);
		printf("\n");
	}

		
	
	return 0;
}
//Visual demo : https://visualgo.net/zh/sorting