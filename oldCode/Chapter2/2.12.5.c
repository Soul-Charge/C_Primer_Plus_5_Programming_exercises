#include <stdio.h>
int main(void)
{
int toes;
int toes2; // toes2 is toes*2
int toes3; //toes3 is toes*toes

toes=10;
toes2=toes+toes;
toes3=toes*toes;

printf("%d\n"
          "%d\n"
           "%d\n"
           ,toes,toes2,toes3);
 
return 0;
}
