#include <stdio.h>   
int main()
{
	int *p1,*pa_1,*pa_2; //ָ��int�͵�ָ�����
	int a = 1,i=0;
	int arr[4] = {0};
	
	p1 = &a; //ȡ��a���ڴ��ַ������ָ��p1ָ��õ�ַ
	printf("p1: %d\n",p1); //p1�洢��ָ�򣩱���a�ĵ�ַ
	printf("&a = %d\n",&a);

	printf("*p1: %d\n",*p1);//��ȡp1��ָ����ڴ��ַ�е�����
	printf("&p1 = %d\n",&p1);//��ȡָ�����p1���ڴ��еĴ洢��ַ
	printf("*(&p1) = %d\n",*(&p1));//��ȡָ�����p1�ĵ�ַ����ȡ���е�����

	/*ȡ������arr���ڴ��׵�ַ������ָ��pa_1,pa_2ָ��õ�ַ
	���ַ����ǵȼ۵ģ�������arr���ʾ���������׵�ַ*/
	pa_1 = &arr[0];
	pa_2 = arr;
	printf("arr: %d\n",arr);
	printf("pa_1: %d\n",pa_1); 
	printf("pa_2: %d\n\n",pa_2);

	/*printf("Type 4 integers��");
	for (i=0;i<sizeof(arr)/sizeof(int);i++)
	{  scanf("%d",pa_1++);
	}*/

	pa_1 = arr; //������ָ�����ؿ�ͷ����forѭ����������Ԫ��ֵ������
	for (i=0;i<sizeof(arr)/sizeof(int);i++)
	{
	
	 /*����ָ�룬ʹ��ָ����һ������int����Ԫ�أ�
	   �ȼ���*pa_1++��++��*ͬ���ȼ����ҽ��*/   
     printf("%3d ",*(pa_1++));

	 /*����ָ�룬ʹ��ָ����һ������int����Ԫ�أ�*/   
	 //printf("%3d ",*(pa_1+i));

	 /*��ͬ��ǰ������䣬�����ǽ�ָ��pa_1ָ���Ԫ��ֵ��i*/   
	 //printf("%3d ",*pa_1+i);

	 /*����ָ�룬ʹ��ָ����һ������int����Ԫ�أ�*/   
	 //printf("%3d ",*(++pa_1));  

	}
	printf("\n");
	/*����ӦΪpa_2+=1��pa_2++������pa_2+=i�����Ĳ鿴Ч��
	  ����p2_1��ǰ��δ���ƶ�����ʹû��pa_1 = arr�����Ҳ�������
	*/
    for (i=0;i<sizeof(arr)/sizeof (int);i++,pa_2+=1)
	{
		printf("%3d ",*pa_2);  
	}
	return 0;
}