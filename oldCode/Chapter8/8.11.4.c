#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main (void)
{
    int word = 0,word_alpha = 0;
    char ch;
    bool isword = 0;
    
    while ( (ch = getchar() ) != EOF )
    {
        if ( isalpha(ch) && !isword )
        {
            isword = 1;
            word++;
        }
        if ( isalnum(ch) && isword )
            word_alpha++;
        
        if ( isspace(ch) || ispunct(ch) )
            isword = 0;
        
    }
    printf("word:%d alpha:%d average:%.2f\n",word,word_alpha,(float)word_alpha / (float)word);
    
    return 0;
}