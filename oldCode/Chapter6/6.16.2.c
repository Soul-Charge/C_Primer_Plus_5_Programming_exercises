#include <stdio.h>
#define SIZE 5
int main (void)
{
	short row,col;
	for (row = 0;row < SIZE;row++)
	{
		for(col = 0;col <= row;col++)
			printf("$");
		printf("\n");
	}

	return 0;
}
