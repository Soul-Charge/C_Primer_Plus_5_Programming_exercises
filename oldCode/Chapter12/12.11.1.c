#include <stdio.h>
#include <stdlib.h>

void critic (int * units);

int main(void)
{
    int units = 0;
    
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d",&units);
    while (56 != units)
        critic(&units);
    puts("You must have looked it up!\n");
    system("pause");
    return 0;
}

void critic (int * units)
{
    fputs("No luck,chummy. Try again.\n",stdout);
    scanf("%d",units);
    return;
}