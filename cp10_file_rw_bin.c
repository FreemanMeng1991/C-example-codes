#include <stdio.h>
#define SIZE 2

struct student_type
{  char name[5];
   int num;
   int age;
   char addr[5];
}stud[SIZE];   // ����ȫ�ֽṹ������stud������10��ѧ������  

void save( )   // ���庯��save�����ļ����SIZE��ѧ��������  
{
	FILE *fp;
    int i;
	if((fp=fopen ("stu.dat","wb"))==NULL) // ������ļ���� 
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
  
	/*������д���ļ�ʱ���˶δ���ȡ��ע��
	printf("Please enter data of students:\n");
	for(i=0;i<SIZE;i++)           // ����SIZE��ѧ�������ݣ����������stud��  
		scanf("%s%d%d%s",stud[i].name,&stud[i].num,&stud[i].age,stud[i].addr);
	save( );
	fclose (fp); 
	return 0;
	*/
    
	/*�����ƶ�ȡ�ļ�ʱ���˶δ���ȡ��ע��
    FILE *fp;
	if((fp=fopen ("stu.dat","rb"))==NULL)  // �������ļ�stu.dat  
	{ printf("cannot open file\n");
	  exit(0);
	}

	for(i=0;i<SIZE;i++)
	{fread (&stud[i],sizeof(struct student_type),1,fp);  // ��fpָ����ļ�����һ������  
	printf ("%-10s %4d %4d  %-15s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
	// ����Ļ������������� 
	}
	fclose (fp);   // �ر��ļ�"stu.dat" 
	return 0;
	*/

}

