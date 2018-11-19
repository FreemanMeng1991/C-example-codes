#include <stdio.h>
#define SIZE 2

struct student_type
{  char name[5];
   int num;
   int age;
   char addr[5];
}stud[SIZE];   // 定义全局结构体数组stud，包含10个学生数据  

void save( )   // 定义函数save，向文件输出SIZE个学生的数据  
{
	FILE *fp;
    int i;
	if((fp=fopen ("stu.dat","wb"))==NULL) // 打开输出文件句柄 
	{ printf("cannot open file\n");
	  return;
	}

    for(i=0;i<SIZE;i++)
	if(fwrite (&stud[i],sizeof (struct student_type),1,fp)!=1)
	printf ("file write error\n");
    fclose(fp);
}

int main()
{   int i;
  
	/*二进制写入文件时，此段代码取消注释
	printf("Please enter data of students:\n");
	for(i=0;i<SIZE;i++)           // 输入SIZE个学生的数据，存放在数组stud中  
		scanf("%s%d%d%s",stud[i].name,&stud[i].num,&stud[i].age,stud[i].addr);
	save( );
	fclose (fp); 
	return 0;
	*/
    
	/*二进制读取文件时，此段代码取消注释
    FILE *fp;
	if((fp=fopen ("stu.dat","rb"))==NULL)  // 打开输入文件stu.dat  
	{ printf("cannot open file\n");
	  exit(0);
	}

	for(i=0;i<SIZE;i++)
	{fread (&stud[i],sizeof(struct student_type),1,fp);  // 从fp指向的文件读入一组数据  
	printf ("%-10s %4d %4d  %-15s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
	// 在屏幕上输出这组数据 
	}
	fclose (fp);   // 关闭文件"stu.dat" 
	return 0;
	*/

}

