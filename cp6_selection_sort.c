#include <stdio.h>
int main()
{
	int arr[6] = {3,2,4,1,6,5};
	int arr_size = sizeof(arr)/sizeof(int);
	int temp,min,index_min=0,i,j,k;

	//���ԭʼ����
	printf("Initial:");
	for (k=0;k<arr_size;k++)
		printf("%3d",arr[k]);
	printf("\n");

	/*���ڳ���ΪN������,ѡ�����򹲽���N-1������ÿ�˷ֱ�ӵ�n(n=0,1,..N-2)��Ԫ�ؿ�ʼ��
	����Ϊ��n��Ԫ��Ϊ��ǰ��������Сֵ��������ֵ������������N-n-1��ֵ�Ƚϣ��ҳ�����
	����Сֵ�󣬽���Сֵ�������е�n��Ԫ�ضԵ���
	*/
	for (i=0;i<arr_size-1;i++)  //��һ��for����n������
	{   
		min = arr[i];    //��Ϊ��n���е�n��Ԫ��Ϊ��ǰ��������Сֵ��ԭʼ��Сֵ��
		index_min = i;   //��¼�µ�ǰ��Сֵ�������е�λ��
		printf("\nRound %d:\nstart = %d\n",i,min);
       
		for (j=i;j<arr_size-1;j++)
		{    
			//��n��������ɣ�ǰn��Ԫ���ѱ�����,
			//�ʴӵ�n+1��Ԫ�ؿ�ʼ�Ƚϲ��ҳ���Сֵ��
			if (min>arr[j+1])
			{ min = arr[j+1];
			  index_min = j+1;  //��¼���·��ֵ���Сֵ�������е�λ��
			}	
		}
		
		//ÿ�˱Ƚ���Ϻ󣬻����·�����Сֵ��ԭʼ��Сֵ��λ��
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