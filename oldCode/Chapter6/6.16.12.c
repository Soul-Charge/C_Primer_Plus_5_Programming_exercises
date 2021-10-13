#include <stdio.h>
#include <math.h>

int main (void)
{
	const SIZE = 8;
	int number [SIZE],index;
	
	for (index = 0;index < SIZE;index++)
		number[index] = pow(2.0,(double)(index + 1));

	index = 0;

	do
		printf("%d ",number[index]);
	while (++index < SIZE);

	return 0;
}
