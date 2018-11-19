#include <stdio.h>
#include <string.h>
#ifndef MAX_LENGTH
#define MAX_LENGTH 80
#endif
int main()
{
    char str[] = "\nType a string of characters:";
	char receive_1[MAX_LENGTH] = "";
	char receive_2[MAX_LENGTH] = "";
	int cmp_result,len_1,len_2;

	puts(str);
	gets(receive_1);
	printf("\nStr 1: \n");
	puts(receive_1);
	printf("Length: %2d\n",strlen(receive_1));

	puts(str);
	gets(receive_2);
	printf("\nStr 2: \n");
	puts(receive_2);
	printf("Length: %2d\n",strlen(receive_2));

	cmp_result = strcmp(receive_1,receive_2);
	if (cmp_result == 0)
	{ puts("Str1 = Str2");
	}else if (cmp_result > 0)
	{puts("Str1 > Str2");
	}else if (cmp_result < 0)
	{puts("Str1 < Str2");
	}
	
	printf("\nstrncpy(str1,str2,5): \n");
	puts(strncpy(receive_1,receive_2,5));

	printf("\nstrcpy(str1,str2): \n");
	puts(strcpy(receive_1,receive_2));

	printf("\nstrcat(str1,str2): \n");
	puts(strcat(receive_1,receive_2));

	return 0;
}