#include <stdio.h>

int main (int argc,char * argv[])
{
    int i;
    
    for (i = argc-1;i > 0;i--)
    {    
        fputs(argv[i],stdout);
        putchar(' ');
    }
    return 0;
}