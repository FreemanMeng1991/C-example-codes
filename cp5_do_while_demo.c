#include <stdio.h>
#include <math.h>
#define  MAX_ITERATIONS 1000000000
int main()
{
	double iteration = 1;  //改为0，观察运行结果。
	double pi,series = 0;
	double numerator = 1.0;
	
	do 
	{   printf("iteration:  %7.0f\n",iteration); 
		series += numerator/(iteration*iteration);
		pi = sqrt(series*6);
		printf("the pi is approximately %.17f\n\n",pi);
		iteration++;
	}while(iteration<= MAX_ITERATIONS&&iteration>1);

	return 0;
	
}
/*Tips:
  1.iteration应该定义为double类型而不是int，否则（iteration*iteration）过大时会产生溢出。
  2.由于iteration为double循环次数的输出语句若不想输出小数点后的内容，可使用格式控制，且不可用%d。
  3.分子numerator也应使用double型。
  4.去掉printf语句会极大地加快运算速度。
  5.运算1000000000（十亿）次后，精确至7位。
  */