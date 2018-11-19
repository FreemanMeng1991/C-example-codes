#include <stdio.h>
#include <math.h>
#define  MAX_ITERATIONS 1000000000
int main()
{
	double iteration = 0;  //��ʹ�˴�iterationΪ0����for����л��ٴθ�ֵ
	double pi,series = 0;
	double numerator = 1.0;
	
	for(iteration = 1;iteration<= MAX_ITERATIONS;iteration++)
	{   printf("iteration:  %7.0f\n",iteration); 
		series += numerator/(iteration*iteration);
		pi = sqrt(series*6);
		printf("the pi is approximately %.17f\n\n",pi);
	}

	return 0;
	
}
/*Tips:
  1.iterationӦ�ö���Ϊdouble���Ͷ�����int������iteration*iteration������ʱ����������
  2.����iterationΪdoubleѭ�����������������������С���������ݣ���ʹ�ø�ʽ���ƣ��Ҳ�����%d��
  3.����numeratorҲӦʹ��double�͡�
  4.ȥ��printf���Ἣ��ؼӿ������ٶȡ�
  5.����1000000000��ʮ�ڣ��κ󣬾�ȷ��7λ��
  */