#include <stdio.h>
int global_var = 0;
int c = 0;
int main()
{
	int change_value(int value);
	int set_value(int value);
	int a=0; //aΪ�ֲ������������ں����ڲ������еĸ�������ڣ��磬for��
	int c=1; //�ֲ�����c��ȫ�ֱ���c���������ڲ������򸲸�ȫ��������
	
	//��������Ϊֵ���ݣ�����ԭֵ�ĸ����������ı�ԭֵ����˲����Ϊ1
	change_value(3);
	printf("a = %d\n",a);
	printf("global_var = %d\n",global_var);

	//�������н����󣬾ֲ�����c���٣�c����main����������
	//����������ȫ�ֱ���c��������
	printf("c = %d\n",c);

	set_value(2);
    //����ִ����󣬾ֲ�������b���٣�����b�����
	//printf("b= %d",b);


	return 0;
}

int change_value(int value)
{
	int a,c;
	a = value;
	//ȫ�ֱ���global_var���κεط������Է���
	global_var = value;

	//�ֲ�����c��ȫ�ֱ���c���������ڲ������򸲸�ȫ��������
	c = value;
	return a;
}

int set_value(int value)
{
	int b = 0;
	b = value;
	return b;
}