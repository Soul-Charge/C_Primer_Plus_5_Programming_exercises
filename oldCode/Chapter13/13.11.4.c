//ÎÄ¼şÏÔÊ¾
#include <stdio.h>
#include <stdlib.h>
#define BUFFER 1024

int main (int argc,char * argv[])
{  
    int i;
    FILE * fp;
    char ch;
    
    if (argc < 2)
    {
        fprintf(stderr,"Usage:13.11.4.exe filename ...");
        system("pause");
        exit(1);
    }
    
    for (i = 1;i < argc;i++)
    {
        //open file
        if ((fp = fopen(argv[i],"r")) == NULL)
        {
            fprintf(stderr,"Can't open \"%s\"\n",argv[i]);
            system("pause");
            exit(i+1);
        }
        
        //show file
        printf("---------File: \"%s\"---------\n",argv[i]);
        while ((ch = getc(fp)) != EOF)
            putc(ch,stdout);
        putchar('\n');
        
        fclose(fp);
    }
    
    system("pause");
    return 0;
}