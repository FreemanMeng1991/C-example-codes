#include <stdio.h>
int main()
{
	int score,grade=0;
	printf("Type your score here(0--100): ");
	scanf("%d",&score);

	if (score<=100 && score>=90)
	{ grade = 1;
	} 
	if (score<90 && score>=80)
	{ grade = 2;
	}
	if (score<80 && score>=70)
	{ grade = 3;
	}
	if (score<70 && score>=60)
	{ grade = 4;
	}
	if (score<60 && score>=0)
	{ grade = 5;
	}
	
	//观察default的位置以及输入abcd和其他字符的输出。
	switch(grade)
	{
	case 0:printf("Incorrect inputs!\n");break;
	case 1:printf("Grade A: 90--100\n");break;
	case 2:printf("Grade B: 80--89\n");break;
	case 3:printf("Grade C: 70--79\n");break;
	case 4:printf("Grade D: 60--69\n");break;
	case 5:printf("Failing mark: 0--59\n");break;
	}
	return 0;
}