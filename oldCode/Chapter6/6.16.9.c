#include <stdio.h>

int main (void)
{
	int lower,upper,sum;

	printf("Enter lower and upper integer limits :");
	scanf("%d %d",&lower,&upper);
	while (lower < upper)
	{
		printf("The sums of the squares form %d to %d is ",
			lower * lower,upper * upper);
		for (;lower <= upper;lower++)
			sum += lower * lower;
		printf("%d\n",sum);
		lower = upper = sum = 0;
		printf("Enter next set of limits :");
		scanf("%d %d",&lower,&upper);
	}
	printf("Done\n");
	return 0;
}
