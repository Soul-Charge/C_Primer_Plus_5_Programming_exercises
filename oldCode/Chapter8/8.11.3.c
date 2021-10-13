#include <stdio.h>
#include <ctype.h>

int main (void)
{
    int upper = 0,lower = 0;
    char ch;
    
    while ( (ch = getchar() ) != EOF )
    {
        if ( islower(ch) )
            lower++;
        else if ( isupper(ch) )
            upper++;
    }
    printf("lower:%dupper:%d\n",lower,upper);
    
    return 0;
}