#include <stdio.h>
double  count (double x,double y);
int main (void)
{
	float a,b;
	printf ("input two float\n");
	while (scanf("%f %f",&a,&b) == 2)
		printf(" (%f - %f) / (%f * %f) = %lf\n",a,b,a,b,count(a,b));
	printf("End\n");
	return 0;
}
double count (double x,double y)
{
	double result = (x - y) / (x * y);
	return result;
}
