//统计空格，换行符和其他字符
#include <stdio.h>

int main (void)
{
    char ch;
    int blank,newline,other_char;
    blank = newline = other_char = 0;
    
    printf("随便输入些什么记得以#结束\n");
    while ( (ch = getchar() ) != '#')
    {
        if (ch == ' ')
            blank++;
        else if (ch == '\n')
            newline++;
        else other_char++;
    }
    printf("空格数：%d 换行符数：%d 其他字符数：%d\n",
        blank,newline,other_char);
        
    return 0;
}