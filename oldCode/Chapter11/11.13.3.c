#include <stdbool.h>

void getWord (char * str)
{
    char ch;
    bool inWord = 0,haveRead = 0;
    while ((ch = getchar()) != '\n')
    {
        if (ch != '\t' && ch != ' ')
            inWord = 1;
        else inWord = 0;
        
        if (inWord)
        {
            *str++ = ch;
            haveRead = 1;
        }
        else if (haveRead)
            break;
    }
    while ((ch = getchar()) != '\n')
        continue;
    
    return;
}