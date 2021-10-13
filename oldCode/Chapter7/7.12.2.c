#include <stdio.h>
#define NEWLINE_SIZE 8
int main (void)
{
    char ch;
    int chs = 0;
    
    printf("输入以查看ASCII码输入#以结束\n");
    while ( (ch = getchar() ) != '#' )
    {
        if ('\n' == ch)
            printf("|换行符|-|%d| ",ch);
        else printf("|%c|-|%d| ",ch,ch);
        chs++;
        if (chs % NEWLINE_SIZE == 0)
            putchar('\n');
    }
    
    return 0;
}