#include <stdio.h>
#define SIZE 26
int main (void)
{
	char alphabet[SIZE],letter = 'a';
	short index;
	for (index = 0;index < SIZE;index++,letter++)
	{
		alphabet[index] = letter;
		printf("alphabet[%hd] = %c\n",index,letter);
	}
	return 0;
}
