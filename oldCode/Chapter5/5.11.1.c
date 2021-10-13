//minutes to hour and minutes
#include <stdio.h>
#define CHANGE 60
int main(void)
{
	int minutes;
	
	printf("input minutes.\n");
	scanf("%d",&minutes);
	while (minutes>0) {
		printf("%d h %d min\n",minutes/60,minutes % 60);
		printf("input a number which is <=0 to end.\n");
		scanf("%d",&minutes);
	}
	return 0;
}

