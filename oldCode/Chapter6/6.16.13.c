#include <stdio.h>

int main ( void )
{
	const SIZE = 8;
	double number_1 [SIZE];
	double number_2 [SIZE];
	short i,j;
	
	for (i = 0;i < SIZE;i++)
	{
		printf("Enter an number (%d leave)",
			SIZE - i);
		scanf("%lf",&number_1[i]);
		for (j = 0,number_2[i] = 0;j <= i;
			j++)
			number_2 [i] += number_1 [j];
	}
	for (i = 0;i < SIZE;i++)
		printf("%.3f ",number_1 [i]);
	printf("\n");
	for (i = 0;i < SIZE;i++)
		printf("%.3f ",number_2 [i]);
	return 0;
}