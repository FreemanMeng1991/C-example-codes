#include <stdio.h>
/*static�����ڲ�����������static�����ڲ�ͬ
 ����Դ�ļ��ж�����ͬ���Ƶĺ����һ������ţ�
 ����������У�cp7_hello��cp7_bye�и���
 һ��file_name����������������ض������
*/
static void file_name(void)
{
	printf("cp7_bye.c:  ");
}

void say_goodbye(void)
{
	file_name();
	printf("Bye-Bye\n");
}
