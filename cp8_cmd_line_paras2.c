#include <stdio.h>
#include <stdlib.h>

//����������ĸ��д��Ϊ�˱���Ϳ⺯������ͻ
float Add(float a, float b);
float Sub(float a, float b);
float Mul(float a, float b);
float Div(float a, float b);

//���÷�ʽ��������.exe -(a��s��m��d�� ������1  ������2
int main(int argc,char *argv[])
{
	float x = 0;
	float y = 0;
	float ret = 0;
	if (argc != 4)
	{
		printf("�����������");
		return 0;
	}
	//�ж�-a -s -m -d�е���һ��
	x = atof(argv[2]);
	y = atof(argv[3]);

	//toupperΪ����ȥ�����д��ĸ�Ĳ���
	switch (toupper(*(argv[1] + 1)))
	{
	case 'A':
		//Add(*(argv[2]),*(argv[3]));������Ϊchar* ����
		//atoi()���� ���ַ���ת��������   �������ex7�һ����� ������������-a 123 321
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
		printf("��������\n");
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