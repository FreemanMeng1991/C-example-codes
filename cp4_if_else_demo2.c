#include <stdio.h>
int main()
{
	int score;
	printf("Type your score here: ");
	scanf("%d",&score);


	//else-if���ʵ�ַ�֧�ṹ��else-if���ʹ��else���if
	//������д��else�����Ƶ������У�ʹ������Ӽ�࣡
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