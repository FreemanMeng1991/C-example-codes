#include <stdio.h>
int main(void)
{
	int size_int,size_short,size_long,
		size_float,size_double,size_ldouble,size_char;

	int i = 123;
	int arr[3] = {1,2,3};

	char c = 'a';
	float f = 1.12345678901234567;
	double d = 1.123456789012345678;

	//测试各数据类型所占内存的大小
	size_char = sizeof(char);
	size_int = sizeof(int);
	size_short = sizeof(short);
	size_long = sizeof(long);
	size_float = sizeof(float);
	size_double = sizeof(double);
	size_ldouble = sizeof(long double);

	printf("%d,%d,%d\n",&arr[0],&arr[1],&arr[2]);
	
	printf("Char: %d\nInt: %d\nShort: %d\nLong: %d\nFloat: %d\nDouble: %d\nLong double: %d\n",size_char,size_int,size_short,size_long,size_float
		   ,size_double,size_ldouble);
	
	 //测试单精度和双精度的区别
	 printf("%15.10f\n",f);
	 printf("%15.10f\n",d);

	 //测试printf的格式控制功能
     printf("%-10.3f\n",2.34567);
}
