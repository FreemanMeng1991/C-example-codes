/*此示例程序用于演示指向字符数组的指针*/
#include <stdio.h>
int Strlen(char *str);
int Strcpy(char *from, char *to);
void print_str(char *str);

int  main()
{
	char str[] = "I love you!";
	char str2[20] = "";
	print_str(str);
	printf("\n%d\n",Strlen(str));

	Strcpy(str,str2);
	print_str(str2);
	return 0;
}

void print_str(char *str)
{
	while (*str != '\0')
	{ putchar(*str++);
	}
}

int Strlen(char *str)
{
	int length = 0;
	while (*str != '\0')
	{   length++;
	    *str++;
	}
	return length;
}

int Strcpy(char *from, char *to)
{   
	int count =0 ;
	while (*from != '\0')
	{   
	   *to++ = *from++;
		count++;
	}
	return count;
}
