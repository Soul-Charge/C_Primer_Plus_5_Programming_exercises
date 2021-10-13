#include <stdio.h>
 
int main (void)
{
	int r;
	float f_r,a,sum;
	_Bool s;
	
	printf("Enter the number of add\n");

	for (scanf("%d",&r);r > 0;scanf("%d",&r))
	{
		f_r = r;

		printf("1 + 1/2 +...+1/%d = ",r);

		for (a = 0.0,sum = 1.0;a < f_r;a++)
			sum += 1.0 / (a + 2);
		printf("%f\n",sum);
		printf("Enter again (q to quit)\n");
		r = 0;
	
	}
	printf("Done\n");
	return 0;
}
