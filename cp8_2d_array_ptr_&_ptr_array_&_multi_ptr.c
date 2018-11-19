#include <stdio.h>
int main()	
{ 
	void print_arr(int *ptr, int row, int col);
	void print_arr_aptr(int (*ptr)[4], int row, int col);

	int a[3][4]={12,11,10,9,8,7,6,5,4,3,2,1};
	int i,j;

	//输出各行的首地址（首个元素的地址）   
	printf("\n%d %d %d\n",a[0],a[1],a[2]);  
	printf("%d %d %d\n\n",*a,*(a+1),*(a+2)); //a和*a的值是一样的


	//输出各行第1列元素的值
	printf("%d %d %d\n",a[0][1],a[1][1],a[2][1]);                     
	printf("%d %d %d\n",*(*a+1),*(*(a+1)+1),*(*(a+2)+1)); //a和*a的值是一样的

	//输出各行第1列的元素的地址
	printf("%d %d %d\n",&a[0][1],&a[1][1],&a[2][1]);                     
	printf("%d %d %d\n\n",*(a)+1,*(a+1)+1,*(a+2)+1); 

	//几种不同的输出二维数组的方法和函数

	/*for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{printf("%3d",a[i][j]);
		}
		printf("\n");
	}*/

	/*使用指向数组元素指针变量输出二维数组
	  为了避免第一行只有一个数，把if放在了打印元素之前*/
	/*for (;ptr<a[0]+12;ptr++)
	{ 
	  if (!((ptr-a[0])%4))
	  {
		  printf("\n");
	  }
	  printf("%10d",*ptr);
	}*/


	//使用指向一维数组的指针变量输出二维数组
	//for (i=0;i<3;i++)
	//{
	//	for (j=0;j<4;j++)
	//	{printf("%3d",*(*(a+i)+j));
	//	}
	//	printf("\n");
	//}
	//

	// a为int (*)[4]类型，*a为 int *类型，去掉*查看错误信息

	//print_arr(*a,3,4);
    print_arr_aptr(a,3,4);
	return 0;
}

/*指针可以作为函数的参数，一种是指向变量或数组元素的指针(print_arr)，
 一种是指向一维数组的指针(print_arr_aptr)，同一个函数功能，由于指针的
 类型不同，其实现的方式也有所差异。

 int *ptr：指向变量或数组元素的指针，数组（一维或多维）在内存
           中是连续存储的，因此可以贯穿的二维数组始终

 int (*p)[4]：指向数组的指针，只能在其指向的数组范围内进行操作，
            而不能像指向变量的指针那样贯彻多维数组的始终，在操作
			二维数组时，只能以行和列为单位进行步进。即，遍历完第0行
			的4个元素后，再步进到第1行遍历另外4个元素。


  一维数组和多维数组的数组名也可作为参数
*/
void print_arr(int *ptr, int row, int col)
{
	int *start = ptr;//保存数组开始位置
	for (;ptr<start+row*col;ptr++)
	{ 
		if (!((ptr-start)%4))
		{
			printf("\n");
		}
		printf("%10d",*ptr);
	}
}

void print_arr_aptr(int (* ptr)[4], int row, int col)
{   int i,j;
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{printf("%3d",*(*(ptr+i)+j));
		}
		printf("\n");
	}
}