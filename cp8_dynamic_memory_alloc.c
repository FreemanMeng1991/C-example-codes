#include <stdio.h>
#include <stdlib.h>
/*实现动态开辟内存空间，在运行时临时指定数组大小
  并输入和输出数组中的内容
*/
int main()
{
	int *p,n,i;
	void *start;
	scanf("%d",&n);

	//根据数组大小n，由malloc或calloc动态开辟内存空间
	p = (int *)calloc(n,sizeof(int));
	//p = (int *)malloc(n*sizeof(int));


	//p = start; //错误，不能将空指针赋给已指向确定类型的指针
	start = p; //正确，指向确定类型的指针赋给空指针后，会自动转换类型

	//输入数组元素
	for (i=0;i<n;i++,p++)
	{ scanf("%d",p);
	}

	//输出数组元素
	p = (int *)start; //空指针使用前必须进行类型转换
	for (i=0;i<n;i++,p++)
	{  printf("%3d",*p);
	}

	/*指针p被free之后，若不置为NULL，则会让人误以为p是个合法的指针。free只是把
	指针所指的内存给释放掉，但并没有把指针本身干掉。此时指针指向的就是“垃圾”内存。
	释放后的指针应立即将指针置为NULL，防止产生“野指针”。注意：野指针不同于空指针！！
	*/
	//free( p );
	if ( p != NULL )
		p = NULL;

	return 0;
}