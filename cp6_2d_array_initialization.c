#include <stdio.h>

#ifndef ROW��COL
#define  ROW 3
#define  COL 4
#endif

int main()
{
	// !! ���󣬲��ܹ���ʱ���������С !!
	/*int r = 3;
	int c = 4;
	int a[r][c] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};*/

	int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}; //��������ʽ��ָ��ÿ��Ԫ��
	int b[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; //����ά�����ڶ�ά����ʽ��ȷ��ÿ��Ԫ��

	//����ʹ�ú궨��ָ������ά������Ϊ�궨����Ԥ����׶ξ��Ѵ�����ROW��COL��ȷ����

	int c[ROW][COL] = {{1},{2,3},{4,5,6,7}}; //���Բ��ֵ�ָ��ÿ��Ԫ��ֵ��δָ��Ĭ��0
	//int c[ROW][COL] = {{1},{},{4,5,6,7}}; //ÿһ�б��븳��ֵ���������

	int d[ROW][COL] = {0};//���ٵؽ�����Ԫ�س�ʼ��Ϊ0
	
	//���Բ�ָ����ά����ĵ�һά��С��������ָ���ڶ�ά��С����������ݴ��Զ�ȷ����һά��С��
	int e[][COL]  = {{1},{2,3},{4,5,6}}; //ͨ����������ʽ��ָ���˵�һά��С

	//ͨ���ڶ�ά�Զ��������һά��С��Ԫ����������Ϊ�ڶ�ά�����������������
	int f[][COL]  = {1,2,3,4,5,6,7,8}; 
	
	//�����ά����
	int i,j;
	for (i=0;i<ROW;i++)
	{ 
		for (j=0;j<COL;j++)
		{printf("%4d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}