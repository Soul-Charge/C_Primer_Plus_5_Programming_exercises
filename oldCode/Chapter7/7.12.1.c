//ͳ�ƿո񣬻��з��������ַ�
#include <stdio.h>

int main (void)
{
    char ch;
    int blank,newline,other_char;
    blank = newline = other_char = 0;
    
    printf("�������Щʲô�ǵ���#����\n");
    while ( (ch = getchar() ) != '#')
    {
        if (ch == ' ')
            blank++;
        else if (ch == '\n')
            newline++;
        else other_char++;
    }
    printf("�ո�����%d ���з�����%d �����ַ�����%d\n",
        blank,newline,other_char);
        
    return 0;
}