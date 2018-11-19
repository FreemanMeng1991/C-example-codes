#include <stdio.h>
int main()
{
	int arr_1[5] = {1,2,3,4,5};
	int arr_2[] = {1,2,3,4,5};
	int arr_3[5] = {1,2};
	int arr_4[5] = {0};
	char c_arr_1[8] = {'L','o','v','e',' ','y','o','u'};
	char c_arr_2[9] = {'L','o','v','e',' ','y','o','u','\0'};
	char c_arr_3[9] = {'L','o','v','e','\0','y','o','u','\0'};
	char c_arr_4[ ] = "Love you";
	int i = 0;

	printf("arr_1[5] = {1,2,3,4,5}\narr_1:");
	for (i=0;i<sizeof(arr_1)/sizeof(int);i++)
	{ printf("%3d",arr_1[i]);
	}

	printf("\n\narr_2[] = {1,2,3,4,5}\narr_2:");
	for (i=0;i<sizeof(arr_2)/sizeof(int);i++)
	{ printf("%3d",arr_2[i]);
	}

	printf("\n\narr_3[5] = {1,2}\narr_3:");
	for (i=0;i<sizeof(arr_3)/sizeof(int);i++)
	{ printf("%3d",arr_3[i]);
	}

	printf("\n\narr_4[5] = {0}\narr_4:");
	for (i=0;i<sizeof(arr_4)/sizeof(int);i++)
	{ printf("%3d",arr_4[i]);
	}

	//没有指定结束符，输出出错
	printf("\n\nc_arr_1[8] = {'L','o','v','e',' ','y','o','u'}\nc_arr_1:");
	printf("%s\n",c_arr_1);
	printf("Length: %d",sizeof(c_arr_1)/sizeof(char));

	//指定了结束符，输出正确
	printf("\n\nc_arr_2[9] = {'L','o','v','e',' ','y','o','u','\\0'}\nc_arr_2:");
	printf("%s\n",c_arr_2);
	printf("Length: %d",sizeof(c_arr_2)/sizeof(char));

	//提前遇到结束符，输出错误
	printf("\n\nc_arr_3[9] = {'L','o','v','e','\\0','y','o','u','\\0'}\nc_arr_2:");
	printf("%s\n",c_arr_3);
	printf("Length: %d",sizeof(c_arr_3)/sizeof(char));

	//自动添加结束符，长度为字符串长度+1
	printf("\n\nc_arr_4[ ] = \"Love you\"\nc_arr_4:");
	printf("%s\n",c_arr_4);
	printf("Length: %d",sizeof(c_arr_4)/sizeof(char));

	printf("\n\n");
	return 0;
}