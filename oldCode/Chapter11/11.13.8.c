#include <string.h>
void str_reverse (char * str)
{
    char * str2 = str + strlen(str)-1;
    int i,end = strlen(str) / 2;
    
    for (i = 0;i < end;i++)
        exchange_ch(str++,str2--);
    return;
}

void exchange_ch (char * str1,char * str2)
{
    char temp = *str1;
    *str1 = *str2;
    *str2 = temp;
    
}