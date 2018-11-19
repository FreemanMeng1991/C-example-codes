#include <stdio.h>
#include <stdlib.h>

//函数名首字母大写是为了避免和库函数名冲突
float Add(float a, float b);
float Sub(float a, float b);
float Mul(float a, float b);
float Div(float a, float b);

//调用方式：程序名.exe -(a、s、m、d） 操作数1  操作数2
int main(int argc,char *argv[])
{
	float x = 0;
	float y = 0;
	float ret = 0;
	if (argc != 4)
	{
		printf("请检查参数个数");
		return 0;
	}
	//判断-a -s -m -d中的哪一种
	x = atof(argv[2]);
	y = atof(argv[3]);

	//toupper为了免去输入大写字母的不便
	switch (toupper(*(argv[1] + 1)))
	{
	case 'A':
		//Add(*(argv[2]),*(argv[3]));错误，因为char* 类型
		//atoi()函数 把字符串转换成整数   解决方案ex7右击属性 命令参数里加入-a 123 321
		ret = Add(x, y);
		break;
	case 'S':
		ret = Sub(x, y);
		break;
	case 'M':
		ret = Mul(x, y);
		break;
	case 'D':
		ret = Div(x, y);
		break;
	default:
		printf("参数有误\n");
		break;
	}
	printf("%f\n", ret);
	system("pause");
	return 0;
}

float Add(float a, float b)
{
	return a + b;
}
float Sub(float a, float b)
{
	return a - b;
}
float Mul(float a, float b)
{
	return a * b;
}
float Div(float a, float b)
{
	return a / b;
}