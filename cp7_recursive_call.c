#include <stdio.h>
int main(void)
{   void dec_to_bin(unsigned n);
	dec_to_bin(69);
	return 0;
}

//ʹ�õݹ鷽ʽ��ʮ����ת��Ϊ������
void dec_to_bin(unsigned n)
{
	int r;
	r=n%2;
	if(n>=2)
	{
		dec_to_bin(n/2);
	}
	//ֹͣ�ݹ������
	putchar(r==0?'0':'1');
}
