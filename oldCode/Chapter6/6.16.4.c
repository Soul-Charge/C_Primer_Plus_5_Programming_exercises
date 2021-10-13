#include <stdio.h>

int main (void)
{
	short i,j,k;
	char letter;
	printf("Input a letter capital\n");
	scanf("%c",&letter);
	k = letter - 'A' + 1;
	for (i = 0;i < k;i++)
	{
		for(j = 0;j < k - i;j++)
			printf(" ");
		for(j = 0; j <= i;j++)
			printf("%c",'A' + j);
		for(j = i - 1;j >= 0;j--)
			printf("%c",'A' + j);

		printf("\n");
	}


	return 0;
}
