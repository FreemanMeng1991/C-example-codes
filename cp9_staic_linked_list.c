#include <stdio.h>

struct student                                  // �����ṹ������struct student  
{int num;
 float score;
 struct student *next;
};

int main()
{   
	// ����3���ṹ�������Ϊ����Ľ��  
	struct student a,b,c;
	//ָ��ṹ���ָ�룬�Ժ����ڲ�������
	struct student *head,*p; 

	//�Ը����ṹ���Ա���г�ʼ��
	a. num=10101; a.score=89.5;                 
	b. num=10103; b.score=90;                        
	c. num=10107; c.score=85;    

	head=&a;     // �����a����ʼ��ַ����ͷָ��head  
	a.next=&b;   // �����b����ʼ��ַ����a����next��Ա  
	b.next=&c;   // �����c����ʼ��ַ����a����next��Ա  
	c.next=NULL; // c����next��Ա�������������ַ  

	p=head;                                       
	do        
	{
      printf("%ld %5.1f\n",p->num,p->score); // Ҳ��ʹ�� (*p).num (*p).score
	  p=p->next;      // ʹpָ����һ���  
	}while(p!=NULL);  // �����c����p��ֵΪNULL��ѭ����ֹ  
return 0;
}
