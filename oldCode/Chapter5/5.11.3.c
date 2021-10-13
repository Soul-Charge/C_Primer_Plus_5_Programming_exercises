// days to weeks and days
#include <stdio.h>
#define CHANGE 7
int main (void)
{
	int days;
	
	printf("input days I will give you "
	           "weeks and days (integer)\n");
	scanf("%d",&days);
	while (days>0) {
		printf("%d days are %d weeks. %d "
		           "days.\ninput<=0 to end\n",	      days,days/CHANGE,days % CHANGE);
		scanf("%d",&days);
	}
	return 0;
}