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
����ָ��ĺ�����

�ҳ���ά�����е����ֵ��������λ�á����ֵ���С������걣����
main���������results�����У���������ͨ����������find_max��
�����д��results����󷵻�ָ��results�����ָ�롣
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