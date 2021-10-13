#include <stdio.h>
#define SIZE 6
int main (void)
{
	short row,col,index;
	char lets[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (row = 0;row < SIZE;row++)
	{
		for(col = 0,index = SIZE - 1;col <= row;col++,index--)
			printf("%c",lets[index]);
		printf("\n");
	}

	return 0;
}
