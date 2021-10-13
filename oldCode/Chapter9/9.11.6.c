#include <stdio.h>
#include <ctype.h>

int alpha_order (char ch);

int main (void)
{
    char ch,universal_ch;
    
    while ( ( ch = getchar() ) != EOF )
    {
        if ( !isalpha(ch) )
            printf("%c is not a alpha\n",ch);
        else
        {
            universal_ch = tolower(ch); //����дת��ΪСд
            printf("%c's order is %d\n",ch,alpha_order(universal_ch) );
        }
    }
    printf("Done!\n");
    getchar();
    return 0;
}

int alpha_order (char ch) //����Сд��ĸ���
{
    return ch - 'a' + 1;
}