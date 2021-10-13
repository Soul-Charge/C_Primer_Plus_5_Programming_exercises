#include <stdio.h>
int main(void)
{
float a;
printf("input a number\n");
scanf("%f",&a);
printf("The input is %.6f or %.6e.\n",a,a);
return 0;
}
