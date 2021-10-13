#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (int argc,char * argv[])
{
    char ch;
    
    if (argc != 2)
    {
        puts("-p putsoure");
        puts("-u putupper");
        puts("-l putlower");
        puts("I just get one argument");
        return 0;
    }
    
    if ( !strcmp(argv[1],"-p") )
    {
        while ( ( ch = getchar() ) != EOF )
            putchar(ch);
    }
    else if ( !strcmp(argv[1],"-u") )
    {
        while ( ( ch = getchar() ) != EOF )
            putchar( toupper(ch) );
    }
    else if ( !strcmp(argv[1],"-l") )
    {
        while ( ( ch = getchar() ) != EOF )
            putchar( tolower(ch) );
    }
    else
    {
        puts("-p putsoure");
        puts("-u putupper");
        puts("-l putlower");
    }
    return 0;
}