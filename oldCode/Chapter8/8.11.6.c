#include <stdio.h>
#include <ctype.h>

char get_fitst (void)
{
    int ch;

    while ( isspace( ch = getchar() ) ) continue;
    while ( getchar() != '\n' )
        continue;
    return ch;
}

int main (void)
{
    int ch;
    
    ch = get_fitst();
    putchar(ch);
    return 0;
    
}