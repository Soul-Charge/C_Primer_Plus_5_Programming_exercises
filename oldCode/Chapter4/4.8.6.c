//I can't say
#include <stdio.h>
#include <float.h>
int main(void)
{
	float a = 1.0/3.0;
	double b = 1.0/3.0;
	printf("FLT_DIG is %f\n",FLT_DIG);
	printf("DBL_DIG is %f\n",DBL_DIG);
	printf("var_a is %.4f,var_b is %.4f\n",a,b);
	printf("var_a is %.12f\nvar_b is %.12f\n",a,b);
	printf("var_a is %.16f\nvar_b is %.16f\n",a,b);
	return 0;
}
