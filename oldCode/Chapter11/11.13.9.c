#include <string.h>
void delBlank (char * str)
{
    int length = strlen(str);
    int i,j;
    char arr[length];
    for (i = 0,j = 0;i < length;i++)
    {
        if (str[i] != ' ')
            arr[j++] = str[i];
    }
    for (i = 0;i <= j;i++)
        str[i] = arr[i];
    str[i] = '\0';
    return;
}