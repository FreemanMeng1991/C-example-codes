#include <stdio.h>

/*��ע�͵������л����޸ķ������ͻ����
  ��������ڵ���ǰ�������򲻻����*/
void fun_1();
void fun_2();

/*������������ʡ�Բ����б��еĲ�����ʶ��,��������������
  C���Բ�Ҫ��int�������͵ĺ�����ԭ�ͣ�����������м�ʹ
  ɾȥҲ��������⣬���Ƽ�����*/
int max(int a,int b);
int min(int,int);

int main()
{
	fun_1();
	fun_2();
	printf("max(4,1) is %d\n",max(4,1));
	printf("min(4,1) is %d\n",min(4,1));
	return 0;
}

void fun_1(void)
{
	printf("This is fun_1 \n");
	//void���ͳ��ַ���ֵ���������
	//return 0; 
}

void fun_2(void)
{
	printf("This is fun_2 \n");
}

int max(int a, int b)
{
	return a>b?a:b;
}

int min(int a, int b)
{
	return a<b?a:b;
}