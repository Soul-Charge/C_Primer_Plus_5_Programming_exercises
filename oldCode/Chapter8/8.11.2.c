#include <stdio.h>

int main (void)
{
    int ch,i = 0;
    
    
    while ( (ch = getchar() )!=EOF )
    {
        if ( ch == '\n' )
            printf("|%c-\n| ",ch);
        else if ( ch == '\t' )
            printf("|%c-\t| ",ch);
        else if ( ch < ' ' )
            printf("|%c-^%c| ",ch,ch + 64);
        else printf("|%c-%d| ",ch,ch);
        i++;
        if ( i % 8 == 0 )
            putchar('\n');
    }
    
    return 0;
}