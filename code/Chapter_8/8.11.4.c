#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
    bool inWord = false;
    char ch;
    int wordsCount = 0;
    int lettersCount = 0;

    printf("Enter something: \n");
    while ((ch = getchar()) != EOF)
    {
        if (!ispunct(ch) && !isspace(ch)) // 单词的字母是除了空白符和标点以外的字
        {
            if (!inWord)
            {
                inWord = true;
                wordsCount++;
            }
            lettersCount++;
        }
        else
            inWord = false;
    }
    printf("Your entered %d words %d letters avg: %f\n",
           wordsCount, lettersCount, (float)lettersCount / (float)wordsCount);

    system("pause");
    return 0;
}