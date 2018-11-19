#include <stdio.h>
#include <math.h>
#define  MAX_ITERATIONS 1000000000
int main()
{
	double iteration = 1;  //��Ϊ0���۲����н����
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
  1.iterationӦ�ö���Ϊdouble���Ͷ�����int������iteration*iteration������ʱ����������
  2.����iterationΪdoubleѭ�����������������������С���������ݣ���ʹ�ø�ʽ���ƣ��Ҳ�����%d��
  3.����numeratorҲӦʹ��double�͡�
  4.ȥ��printf���Ἣ��ؼӿ������ٶȡ�
  5.����1000000000��ʮ�ڣ��κ󣬾�ȷ��7λ��
  */