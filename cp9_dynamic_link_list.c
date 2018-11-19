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
	printf("����ѧ�ź�������\n");
	scanf("%d %s",&p1->num,&p1->name);
	p2 = p1; //p1��p2����ָ��ָ��ṹ��

	while((p1->num)!=0)
	{
		count++;
		if (count == 1) //ʹheadָ��ָ�������һ���ڵ�
			head = p1;
		else  //else���ֿ����Ȳ������Ƚ�if����
			p2->next = p1;

		p2 = p1; //p2ָ����������е���һ���ڵ�
		printf("����ѧ�ź�������\n");
		p1 = (struct Student *)malloc(SIZE); //�����½ڵ�
		scanf("%d %s",&p1->num,&p1->name);
	}
	printf("�������\n");
	p2->next = NULL; //��������
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