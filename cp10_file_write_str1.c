#include <stdio.h>
#include <stdlib.h>
/*����һ���ַ����������ַ���д���ļ�������Ļ����ʾ*/
int main()
{   FILE *fp;
    char  str[81]; // str��������ַ���

	printf("Enter strings:\n");      
	gets(str);    // �����ַ���
    
	// �򿪴����ļ� 
	if((fp=fopen("string.txt","w"))==NULL)      
	{   printf("can't open file!\n");
		exit(0);
	}

	//���ַ���д���ļ�
	fputs(str,fp);
	fputs("\n",fp); //���뻻�к�

	printf("\nThe new sequence:\n");
	printf("%s\n",str);   // ����Ļ����ʾ�ַ���  
	return 0;
}
