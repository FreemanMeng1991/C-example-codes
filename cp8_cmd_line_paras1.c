#include <stdio.h>
int main(int argc,char *argv[],char *envp[])
{
	int i = 0;
	printf("argc= %d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	for (i = 0; i < argc; i++)
	{
		printf("%s\n\n", envp[i]);
	}
	getchar();
	return 0;
}
