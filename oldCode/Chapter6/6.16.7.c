#include <stdio.h>
int main (void)
{
	float a,b;
	printf ("input two float\n");
	while (scanf("%f %f",&a,&b) == 2)
		printf(" (%f - %f) / (%f * %f) = %f\n",a,b,a,b,(a - b) / (a * b));
	printf("End\n");
	return 0;
}
