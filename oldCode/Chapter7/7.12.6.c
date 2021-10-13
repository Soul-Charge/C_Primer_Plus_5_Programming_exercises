#include <stdio.h>

int main (void)
{
    char ch,first_ch = 'e',lase_ch = 'i';
    int i = 0;
    
    printf("enter a string end by #\n");
    while ( ( ch = getchar() ) != '#')
        if (first_ch == ch)
            if (lase_ch == (ch = getchar() ))
                i++;
    printf("ei happen %d\n",i);
    
    return 0;
}