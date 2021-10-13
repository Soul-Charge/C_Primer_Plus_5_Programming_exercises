// output a number which is bigger than 
// input 10 
#include <stdio.h>
int main (void)
{
	int integer,bigger;
	printf("input a integer,"
	       "I will add it 10\n");
    scanf("%d",&integer);
    bigger = integer + 10;
    while (integer<=bigger)
    	printf("%d ",integer++);
    printf("\n");
    return 0;
}
    