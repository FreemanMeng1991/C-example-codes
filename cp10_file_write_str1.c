#include <stdio.h>
#include <stdlib.h>
/*输入一行字符串，并把字符串写入文件并在屏幕上显示*/
int main()
{   FILE *fp;
    char  str[81]; // str用来存放字符串

	printf("Enter strings:\n");      
	gets(str);    // 输入字符串
    
	// 打开磁盘文件 
	if((fp=fopen("string.txt","w"))==NULL)      
	{   printf("can't open file!\n");
		exit(0);
	}

	//将字符串写入文件
	fputs(str,fp);
	fputs("\n",fp); //加入换行号

	printf("\nThe new sequence:\n");
	printf("%s\n",str);   // 在屏幕上显示字符串  
	return 0;
}
