#include <stdio.h>
int main()
{
	int score;
	printf("Type your score here: ");
	scanf("%d",&score);


	//else-if语句实现分支结构，else-if语句使得else后的if
	//不用再写到else所控制的语句块中，使代码更加简洁！
	if (score<=100 && score>=90)
	{ printf("Grade A!\n");
	} 
	else if (score<90 && score>=80)
	{ printf("Grade B!\n");
	}
	else if (score<80 && score>=70)
	{ printf("Grade C!\n");
	}
	else if (score<70 && score>=60)
	{ printf("Grade D!\n");
	}
	else if (score<60 && score>=0)
	{printf("Failing Mark !\n");
	}
	
	return 0;
}