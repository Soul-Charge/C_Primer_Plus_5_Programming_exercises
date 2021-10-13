#include <stdio.h>

int main (void)
{
	char a [255];
	short Long,i;
	
	printf("How long do you need\n");
	scanf("%hd",&Long);
	
	for (i = 0;i < Long;i++)
		scanf("%c",&a [i] );
	for (i = Long - 1;i >= 0;i--)
		printf("%c",a [i] );
	printf("Done\n");
	return 0;
}