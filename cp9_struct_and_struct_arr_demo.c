#include <stdio.h>
//定义一个简单的结构体
struct Date
{
	int year;
	int month;
	int day;
};

//结构体中可以包含另一个或多个结构体
struct Stu_info
{int num;
char name[20];
char sex;
struct Date birthday;
float score[3];
};

int main()
{
    int i=0;
	//定义初始化并一个结构体变量
	struct Stu_info a = {10101,"Li Lin",'M',1991,02,13,78.5,82,85.4};
	//定义初始化并一个结构体数组
	struct Stu_info s[3] = {{10101,"Li Lin",'M',1991,02,13,78.5,82,85.4},
		                    {10102,"Han MeiMei",'F',1991,02,14,78.5,82,85.4},
	                        {10103,"Lin Tao",'M',1991,02,15,78.5,82,85.4}};

	//访问结构体成员
	printf("NO.:%ld\n",a.num);
	printf("Name:%s\n",a.name);
	printf("Sex:%c\n",a.sex);
	printf("Birthday:%d-%d-%d\n",
		    a.birthday.year,a.birthday.month,a.birthday.day);
	printf("Scores:%.2f %.2f %.2f\n\n",
		    a.score[0],a.score[1],a.score[2]);

	for (i=0;i<sizeof(s)/sizeof(s[0]);i++)
	{
	  printf("NO.:%ld\n",s[i].num);
	  printf("Name:%s\n",s[i].name);
	  printf("Sex:%c\n",s[i].sex);
	  printf("Birthday:%d-%d-%d\n",
		     s[i].birthday.year,s[i].birthday.month,s[i].birthday.day);
	  printf("Scores:%.2f %.2f %.2f\n\n",
		     s[i].score[0],s[i].score[1],s[i].score[2]);
	}

    return 0;
}


