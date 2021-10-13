#include <stdio.h>
#define EARN 0.08
#define TAKE 100000
#define START 1000000

int main (void)
{
	long long total = START;
	short years = 0;
	
	do
	{
		total += total * EARN;
		total -= TAKE;
		years++;
	}
	while (total >= 0);
	
	printf("left no money after %d years\n",
   			years);
   
	return 0;
}