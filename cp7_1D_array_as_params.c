#include <stdio.h>
#define LENGTH 6
int main()
{
	int find_max(int arr[],int );  
	int arr[LENGTH] = {1,2,3,4,5,6};
	printf("\nFound max %d.\n",find_max(arr,LENGTH));
	return 0;
}

// ����ʹ��sizeof(arr)/(sizeof(int))�Զ�ȷ����������Ϊarr���β�
//�������������飬���������׵�ַ��Ҳ��������ĵ�һ��Ԫ�أ������ڲ���
//�б�����ȷ��ָ�������ά����Ҳ����Ϊ��ˣ������б��е������ββ���
//ָ�����С��
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