#include <stdio.h>

/*static�����ڲ�����������static�����ڲ�ͬ
 ����Դ�ļ��ж�����ͬ���Ƶĺ����һ������ţ�
 ����������У�cp7_hello��cp7_bye�и���
 һ��file_name����������������ض������
*/
static void file_name(void)
{
	printf("cp7_hello.c:  ");
}

void say_hello(void)
{
	file_name(); //�����ڲ�����
	printf("Hello world.\n");
}


/*��ʾcp7_extern_var.c����ʱȡ��ע��

extern int A; //��cp7_extern_var.c�ж���ı�������������չ�����ļ�
void print_extern(void)
{
	file_name(); //�����ڲ�����
	//�����ⲿ����
	printf("External value: %d\n",A);
}*/
