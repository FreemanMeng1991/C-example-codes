#include <stdio.h>
#include <ctype.h>
int main()
{
	char grade;
	printf("Type your grade here: ");
	scanf("%c",&grade);

	grade = toupper(grade);
	
	//观察default的位置以及输入abcd和其他字符的输出。
	switch(grade)
	{
	case 'a':  //若不使用toupper函数，则可避免输入小写时发生错误
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