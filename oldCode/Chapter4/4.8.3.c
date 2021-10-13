//print float
#include <stdio.h>
int main (void)
{
	float a=0;
	printf("Enter a float number.\n");
	scanf("%f",&a);
	printf("The input is %.1f or %.1e.\n",a,a);
	printf("The input is %+.3f or %+.3e.\n",a,a);
	return 0;
}
