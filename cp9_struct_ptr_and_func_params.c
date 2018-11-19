#include <stdio.h>

//����һ���򵥵Ľṹ��
struct Date
{
	int year;
	int month;
	int day;
};

//�ṹ���п��԰�����һ�������ṹ��
struct Stu_info
{int num;
char name[20];
char sex;
struct Date birthday;
float score[3];
};

void print_info(struct Stu_info a);
void print_info_arr(struct Stu_info s[],int n);
void print_info_ptr(struct Stu_info *p);
void print_info_arr_ptr(struct Stu_info *p,int n);

int main()
{
    int i=0;
	//�����ʼ����һ���ṹ�����
	struct Stu_info a = {10101,"Li Lin",'M',1991,02,13,78.5,82,85.4};
	//�����ʼ����һ���ṹ������
	struct Stu_info s[3] = {{10101,"Li Lin",'M',1991,02,13,78.5,82,85.4},
		                    {10102,"Han MeiMei",'F',1991,02,14,78.5,82,85.4},
	                        {10103,"Lin Tao",'M',1991,02,15,78.5,82,85.4}};

	//����һ��ָ��ṹ���ָ��
	struct Stu_info *p;
	//����һ��ָ��ṹ���ָ������
	struct Stu_info *ptr;
	//���ʽṹ���Ա
	//print_info(a);
	//print_info_arr(s,sizeof(s)/sizeof(s[0]));
	//print_info_ptr(p=&a);
	print_info_arr_ptr(ptr=s,3);
	

    return 0;
}

//�ṹ��Ϊ��������
void print_info(struct Stu_info a)
{
	printf("NO.:%ld\n",a.num);
	printf("Name:%s\n",a.name);
	printf("Sex:%c\n",a.sex);
	printf("Birthday:%d-%d-%d\n",
		  a.birthday.year,a.birthday.month,a.birthday.day);
	printf("Scores:%.2f %.2f %.2f\n\n",
		  a.score[0],a.score[1],a.score[2]);
}

//�ṹ������Ϊ��������
void print_info_arr(struct Stu_info s[],int n)
{   int i;
	for (i=0;i<n;i++)
	{
		printf("NO.:%ld\n",s[i].num);
		printf("Name:%s\n",s[i].name);
		printf("Sex:%c\n",s[i].sex);
		printf("Birthday:%d-%d-%d\n",
			s[i].birthday.year,s[i].birthday.month,s[i].birthday.day);
		printf("Scores:%.2f %.2f %.2f\n\n",
			s[i].score[0],s[i].score[1],s[i].score[2]);
	}
}

//�ṹ��ָ��Ϊ��������
void print_info_ptr(struct Stu_info *p)
{  
	printf("NO.:%ld\n",(*p).num);
    printf("Name:%s\n",(*p).name);
	printf("Sex:%c\n",(*p).sex);
	printf("Birthday:%d-%d-%d\n",
	       (*p).birthday.year,(*p).birthday.month,(*p).birthday.day);
	printf("Scores:%.2f %.2f %.2f\n\n",
	       (*p).score[0],(*p).score[1],(*p).score[2]);
}

//�ṹ��ָ������Ϊ��������
void print_info_arr_ptr(struct Stu_info *p,int n)
{
	int i=0;
	for (i=0;i<n;i++,*p++)
	{
		printf("NO.:%ld\n",(*p).num);
		printf("Name:%s\n",(*p).name);
		printf("Sex:%c\n",(*p).sex);
		printf("Birthday:%d-%d-%d\n",
			(*p).birthday.year,(*p).birthday.month,(*p).birthday.day);
		printf("Scores:%.2f %.2f %.2f\n\n",
			(*p).score[0],(*p).score[1],(*p).score[2]);
	}	
}