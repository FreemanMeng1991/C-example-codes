#include <stdio.h>
int main()
{   int fac(int n);
	int i = 10;
	for (i=1;i<=5;i++)
	{
		printf("%d! = %d\n",i,fac(i));
	}
	
	return 0;
}


int fac(int n)
{
	/*static���͵ı����ڴ�����ֱ���������н����Ż�����
	  ������auto��������������������Ϻ��ͷŴ洢�ռ䣬
	  ���f��һֱפ�����ڴ��У�����ÿ�κ������ý�����
	  ���浱ǰ������ֵ�����´ν��뺯��ʱ����ʹ����һ�ε�ֵ*/
	static int f = 1;
	f = f*n;
	return f;
}