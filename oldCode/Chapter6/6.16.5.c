#include <stdio.h>

int main (void)
{
	int limit,floor;
	printf("input limit and floor (integer)\n");
	scanf("%d %d",&limit,&floor);
	for (printf("Your number        his pow        his cube\n");floor <= limit;floor++)
		printf("%11d        %7d        %8d\n",floor,floor * floor,floor * floor * floor);
	return 0;
}
