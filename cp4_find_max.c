#include <stdio.h>
int main()
{
	int a,b,c,max;
	printf("Type 3 ints:");
	scanf("%d%d%d",&a,&b,&c);

	if(a==b&&a==c)  //����ɾ�������ţ�������������ȫ��ȵ����֣��۲�����
    {printf("The max is %d\n",a);
	 printf("All the ints are equal.\n");
     return 0;
	}

	if(a>b)
	{max = a;	
	}
	else
	{max = b;
	}
	if(max>c)
		;
	else
		max = c;

	printf("The max is %d\n",max);

 return 0;
}

