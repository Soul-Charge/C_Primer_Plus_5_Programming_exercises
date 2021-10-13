#include <stdio.h>
#include <string.h>

int main (void)
{
	char word[20];
	short index;
	printf("input a word\n");
	scanf("%s",word);
	strlen(word);
	for (index = strlen(word);index >=0;index--)
		printf("%c",word[index]);
	printf("\n");
	return 0;
}
