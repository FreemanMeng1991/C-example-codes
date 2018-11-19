#include <stdio.h>

struct student                                  // 声明结构体类型struct student  
{int num;
 float score;
 struct student *next;
};

int main()
{   
	// 定义3个结构体变量作为链表的结点  
	struct student a,b,c;
	//指向结构体的指针，稍后用于操作链表
	struct student *head,*p; 

	//对各个结构体成员进行初始化
	a. num=10101; a.score=89.5;                 
	b. num=10103; b.score=90;                        
	c. num=10107; c.score=85;    

	head=&a;     // 将结点a的起始地址赋给头指针head  
	a.next=&b;   // 将结点b的起始地址赋给a结点的next成员  
	b.next=&c;   // 将结点c的起始地址赋给a结点的next成员  
	c.next=NULL; // c结点的next成员不存放其他结点地址  

	p=head;                                       
	do        
	{
      printf("%ld %5.1f\n",p->num,p->score); // 也可使用 (*p).num (*p).score
	  p=p->next;      // 使p指向下一结点  
	}while(p!=NULL);  // 输出完c结点后p的值为NULL，循环终止  
return 0;
}
