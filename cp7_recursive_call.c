#include <stdio.h>
int main(void)
{   void dec_to_bin(unsigned n);
	dec_to_bin(69);
	return 0;
}

//使用递归方式将十进制转换为二进制
void dec_to_bin(unsigned n)
{
	int r;
	r=n%2;
	if(n>=2)
	{
		dec_to_bin(n/2);
	}
	//停止递归的条件
	putchar(r==0?'0':'1');
}
