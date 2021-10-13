#include <stdio.h>

int main (void)
{
    int i = 0;
    char ch;
    
    while ( (ch = getchar() ) != EOF )
        i++;
    printf("character:%d\n",i);
    
    return 0;
}