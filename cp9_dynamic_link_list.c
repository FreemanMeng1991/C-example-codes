#include <stdio.h>
#include <stdlib.h>
#define  SIZE sizeof(struct Student)
struct Student *add_name(void);
void print_linked_list(struct Student *list);

struct Student
{
	int num;
	char name[20];
	struct Student *next;
};

int main()
{   struct Student *head;
    head = add_name();
	print_linked_list(head);
	return 0;
}

struct Student *add_name(void)
{
	struct Student *head,*p1,*p2;
	int count = 0;

	p1 = (struct Student *)malloc(SIZE);
	printf("输入学号和姓名：\n");
	scanf("%d %s",&p1->num,&p1->name);
	p2 = p1; //p1、p2两个指针指向结构体

	while((p1->num)!=0)
	{
		count++;
		if (count == 1) //使head指针指向链表第一个节点
			head = p1;
		else  //else部分可以先不讲，先讲if部分
			p2->next = p1;

		p2 = p1; //p2指向的是链表中的上一个节点
		printf("输入学号和姓名：\n");
		p1 = (struct Student *)malloc(SIZE); //开辟新节点
		scanf("%d %s",&p1->num,&p1->name);
	}
	printf("链表结束\n");
	p2->next = NULL; //结束链表
	return head;
}

void print_linked_list(struct Student *list)
{
	do
	{
	  printf("%d:%s\n",list->num,list->name);
	  list = list->next;
	}while(list != NULL);
		
}