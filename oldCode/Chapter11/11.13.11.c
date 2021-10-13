#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main (void)
{
    bool isWord = 0;
    int words,upperAlpha,lowerAlpha,punc,num;
    char ch;
    words = upperAlpha = lowerAlpha = punc = num = 0;
    
    puts("Input ([Ctrl+z] to end)");
    
    while (( ch = getchar() ) != EOF)
    {
        if ( !isWord && isalpha(ch) )
        {
            words++;
            isWord = 1;
        }
        if ( !isalpha(ch) )
            isWord = 0;
        if ( isupper(ch) )
            upperAlpha++;
        if ( islower(ch) )
            lowerAlpha++;
        if ( ispunct(ch) )
            punc++;
        if ( isdigit(ch) )
            num++;
    }
    
    printf("You enterd %d words %d upper-alpha %d lower-alpha %d punctuations and %d number\n",
        words,upperAlpha,lowerAlpha,punc,num);
    
    system("pause");
    return 0;
}