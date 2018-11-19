#include <stdio.h>
int main()
{
	int score;
	printf("Type your score here: ");
	scanf("%d",&score);

	//仅使用if语句实现分支结构
	if (score<=100 && score>=90)
	{ printf("Grade A!\n");
	} 
	if (score<90 && score>=80)
	{ printf("Grade B!\n");
	}
	if (score<80 && score>=70)
	{ printf("Grade C!\n");
	}
	if (score<70 && score>=60)
	{ printf("Grade D!\n");
	}
	if (score<60 && score>=0)
	{printf("Failing Mark !\n");
	}

	return 0;
}