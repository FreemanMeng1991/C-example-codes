#include <stdio.h>
#include <string.h>
#ifndef MAX_LENGTH
#define MAX_LENGTH 81
#endif

int main()
{
	char str[MAX_LENGTH];
	int i=0,upper=0,lower=0,number=0,space=0,others=0;
	puts("Type a string:");
	gets(str);
	for (i=0;str[i]!='\0';i++)
	{
		if (str[i]>=65&&str[i]<=90)
		{ ++upper;
		}else if (str[i]>=97&&str[i]<=122)
		{ ++lower;
		}else if (str[i] == 32)
		{ ++space;
		}else if (str[i]>=48&&str[i]<=57)
		{++number;
		}else 
		{++others;
		}
	}
	
	printf("Upper:%3d\n",upper);
	printf("Lower:%3d\n",lower);
	printf("Number:%3d\n",number);
	printf("Space:%3d\n",space);
	printf("Others:%3d\n",others);

	return 0;
}