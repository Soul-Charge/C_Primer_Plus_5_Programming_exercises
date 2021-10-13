#include <stdio.h>
#include <string.h>
int main (void)
{
	char number[10];
	short index;

	printf("input 8 integer\n");
	scanf("%s",number);
	strlen(number);
	for (index = strlen(number);index >=0;index--)
		printf("%c",number[index]);
	printf("\n");
	return 0;
}
