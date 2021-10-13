//research integer overflow
#include <inttypes.h>
#include <stdio.h>
int main(void)
{
unsigned int max = 4294967295;           //I guss the range is 0-4294967295,so the max is 4294967295
printf("%d\n",max);
printf("%d\n",max+1);                      //Let's add up the max and 1
printf("%d\n",max+2); 
return 0;
}

