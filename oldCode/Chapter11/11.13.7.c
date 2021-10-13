#include <string.h>
char * string_in (char * str1,char * str2)
{
    int length = strlen(str2);
    int start,end;
    start = 0;
    end = length - 1;
    while ( *(str1+end) )
    {
        if ( !strncmp(str1+start,str2,end) )
            return str1+start;
        start++;
    }
    return NULL;
}