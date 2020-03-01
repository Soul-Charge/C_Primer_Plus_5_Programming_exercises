#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char letter;

    printf("Input a letter: ");
    scanf("%c", &letter);
    for (char rows = 'A'; rows <= letter; rows++) //控制行
    {
        for (char spaces = letter; spaces > rows; spaces--) //处理空格
            putchar(' ');
        for (char upper = 'A'; upper <= rows; upper++) //升序打印字母
            putchar(upper);
        for (char lower = rows-1; lower >= 'A'; lower--) //降序打印字母
            putchar(lower);
        putchar('\n');
    }

    system("pause");
    return 0;
}