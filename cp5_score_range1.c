#include <stdio.h>
#include <ctype.h>
int main()
{
	char grade;
	printf("Type your grade here: ");
	scanf("%c",&grade);

	grade = toupper(grade);
	
	//�۲�default��λ���Լ�����abcd�������ַ��������
	switch(grade)
	{
	case 'a':  //����ʹ��toupper��������ɱ�������Сдʱ��������
	case 'A':printf("Grade A: 90--100\n");

	case 'b':
	case 'B':printf("Grade B: 80--89\n");

	case 'c':
	case 'C':printf("Grade C: 70--79\n");

	case 'd':
	case 'D':printf("Grade D: 60--69\n");

	case 'e':
	case 'E':printf("Failing mark: 0--59\n");

	default:printf("Incorrect inputs!\n");

	}
	return 0;
}