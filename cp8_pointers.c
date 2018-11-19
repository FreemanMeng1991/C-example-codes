#include <stdio.h>   
int main()
{
	int *p1,*pa_1,*pa_2; //指向int型的指针变量
	int a = 1,i=0;
	int arr[4] = {0};
	
	p1 = &a; //取得a的内存地址，并用指针p1指向该地址
	printf("p1: %d\n",p1); //p1存储（指向）变量a的地址
	printf("&a = %d\n",&a);

	printf("*p1: %d\n",*p1);//获取p1所指向的内存地址中的内容
	printf("&p1 = %d\n",&p1);//获取指针变量p1在内存中的存储地址
	printf("*(&p1) = %d\n",*(&p1));//获取指针变量p1的地址，并取其中的内容

	/*取得数组arr的内存首地址，并用指针pa_1,pa_2指向该地址
	两种方法是等价的，数组名arr本质就是数组的首地址*/
	pa_1 = &arr[0];
	pa_2 = arr;
	printf("arr: %d\n",arr);
	printf("pa_1: %d\n",pa_1); 
	printf("pa_2: %d\n\n",pa_2);

	/*printf("Type 4 integers：");
	for (i=0;i<sizeof(arr)/sizeof(int);i++)
	{  scanf("%d",pa_1++);
	}*/

	pa_1 = arr; //若不将指针拉回开头，则for循环输出数组各元素值将出错
	for (i=0;i<sizeof(arr)/sizeof(int);i++)
	{
	
	 /*操作指针，使其指向下一个对象（int数组元素）
	   等价于*pa_1++，++和*同优先级，右结合*/   
     printf("%3d ",*(pa_1++));

	 /*操作指针，使其指向下一个对象（int数组元素）*/   
	 //printf("%3d ",*(pa_1+i));

	 /*不同于前两个语句，这里是将指针pa_1指向的元素值加i*/   
	 //printf("%3d ",*pa_1+i);

	 /*操作指针，使其指向下一个对象（int数组元素）*/   
	 //printf("%3d ",*(++pa_1));  

	}
	printf("\n");
	/*这里应为pa_2+=1或pa_2++而不是pa_2+=i，更改查看效果
	  由于p2_1此前并未被移动，即使没有pa_1 = arr，输出也不会出错
	*/
    for (i=0;i<sizeof(arr)/sizeof (int);i++,pa_2+=1)
	{
		printf("%3d ",*pa_2);  
	}
	return 0;
}