#include <stdio.h>
int main(void)
{
 int int_1,int_2,int_3,int_4,int_5;
 float f_1,f_2,f_3,f_4,f_5,f_6;

 int_1 = 5;
 int_2 = 2;
 int_3 = 1.5; // int = float 精度损失！
 f_1 = 1.5;   // float = float 精度无损
 f_4 = 3.1415926;

 int_3 = int_1/int_2;  //2
 f_1   = int_2/int_1;  //0
 f_2   = 2.0/5;        //0.4
 f_3   = (float)int_2/int_1;  //0.4 强制转换
 f_5   = (int)f_4;    //高精度转换低精度赋给高精度
 f_6   = (float)int_1;//低精度转换高精度赋给低精度



 printf("int = int/int\n%d = %d/%d\n\n",int_3,int_1,int_2);
 printf("float = int/int\n%f = %d/%d\n\n",f_1,int_2,int_1);
 printf("float = float/int\n%f = 2.0/5\n\n",f_2);
 printf("float = (float)int/int\n%f = (float)%d/%d\n\n",f_3,int_2,int_1);
 printf("float = (int)float\n%f = (int)%f\n\n",f_5,f_4);
 printf("float = (float)int\n%f = (float)%d\n",f_6,int_1);

 return 0;
}