#include <stdio.h>
#define NEWLINE_SIZE 8
int main (void)
{
    char ch;
    int chs = 0;
    
    printf("�����Բ鿴ASCII������#�Խ���\n");
    while ( (ch = getchar() ) != '#' )
    {
        if ('\n' == ch)
            printf("|���з�|-|%d| ",ch);
        else printf("|%c|-|%d| ",ch,ch);
        chs++;
        if (chs % NEWLINE_SIZE == 0)
            putchar('\n');
    }
    
    return 0;
}