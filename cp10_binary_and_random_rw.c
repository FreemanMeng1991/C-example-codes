#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
struct student_type
{	char name[10];
	int num;
	int age;
	char addr[15];
}stud[SIZE];  // 定义全局结构体数组stud，包含size个学生数据  

void save( )   // 定义函数save，向文件输出SIZE个学生的数据  
{	FILE *fp;
	int i;
	if((fp=fopen ("stu.dat","wb"))==NULL)  
	{	printf("cannot open file\n");
       	return;
	}
   for(i=0;i<SIZE;i++)
//   fprintf(fp,"%s %d %d %s",
//			 stud[i].name,stud[i].num,stud[i].age,stud[i].addr); 
      if(fwrite (&stud[i],sizeof (struct student_type),1,fp)==1)
        	printf ("Pos: %d\n",ftell(fp));
      else
    		printf ("Fail to Write File!");
      
	fclose(fp);
}

void random_read()
{ 	int i,position;
  	FILE  *fp; 
	
	if((fp=fopen ("stu.dat","wb"))==NULL)  
    {	printf("cannot open file\n");
    	return;
    }
      
	for(i=0;i<SIZE;i++)
	{	position = rand()%SIZE;
	    fseek(fp,position*sizeof(struct student_type),0);
		fread(&stud[position],sizeof(struct student_type),1,fp);  // 读一个数据块到结构体变量 fseek(fp,i*sizeof(struct student_type),0); // 移动位置指针 
		printf("%-10s %4d %4d %-15s\n",
				stud[position].name,stud[position].num,
				stud[position].age,stud[position].addr);
	}   
	fclose(fp);   
}

int main()
{
	int i;      
 
	srand(time(NULL));
	printf("Enter data:\n");
	
	for(i=0;i<SIZE;i++)  // 输入SIZE个学生的数据，存放在数组stud中  
		scanf("%s%d%d%s",
		stud[i].name,&stud[i].num,&stud[i].age,stud[i].addr);
	save();
	random_read();         
	return 0;                   
}
