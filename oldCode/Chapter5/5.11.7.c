// count a float's lifang
#include <stdio.h>
void count(float input)
{
	input = input * input * input;
	printf("它的三次方是 %f\n",input);
}
int main (void)
{
	float a;
	printf("输入一个带小数点的数\n");
	scanf("%f",&a);
	count(a);
	return 0;
}