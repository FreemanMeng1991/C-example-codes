#include <stdio.h>

#ifndef ROW��COL
#define  ROW 3
#define  COL 4
#endif

int main()
{
	int arr[ROW][COL] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	

	//Ϊ��֤�Ϻÿɶ��ԣ���ý����궼��1ʹ��Ŵ�1��ʼ������0��������Ϊ��Ȼ
	printf("\nFound max %d.\n",find_max(arr));

	return 0;
}

//��ά������Ϊ��������ʱ��ͬ�����Ժ��Ե�һά�Ĵ�С
int find_max(int arr[][4])  
{
  
	int i,j,max;
	max = arr[0][0];
	// ����ʹ��sizeof(arr)/(sizeof(int)*4)�Զ�ȷ����������Ϊarr���β�
	//�������������飬���������׵�ַ��Ҳ��������ĵ�һ��Ԫ��
	for (i=0;i<3;i++)
	{for (j=0;j<4;j++)
		{if (arr[i][j]>max)
			{max = arr[i][j];
			}
		}
	}
   
	return max;
}