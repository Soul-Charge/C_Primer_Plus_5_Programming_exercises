#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int alphabetPos(char ch);

int main(void)
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (alphabetPos(ch) == -1)
            printf("%c is not in alphabet\n", ch);
        else
            printf("%c:%d\n", ch, alphabetPos(ch));
    }

    system("pause");
    return 0;
}

// 字符是字母则返回在字母表中的位置，否则返回-1
int alphabetPos(char ch)
{
    if (isalpha(ch))
        return toupper(ch) - 'A' + 1;
    else
        return -1;
}