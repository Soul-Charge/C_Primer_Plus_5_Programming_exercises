#include <stdio.h>
int main (void)
{
    char ch;
    int i = 0;
    
    printf("in a string(end by #)\n");
    while ( (ch = getchar() ) != '#')
    {
        if ( '.' == ch)
        {   
            ch = '!';
            i++;
        }
        else if ('!' == ch)
        {
            putchar(ch);
            i++;
        }
        putchar(ch);
    }
    printf("%d exchange\n",i);
    
    return 0;
}