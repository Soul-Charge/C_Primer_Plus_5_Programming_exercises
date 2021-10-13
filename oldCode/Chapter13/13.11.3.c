//文件转大写
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define NAME_SIZE 100

int main(void)
{
    FILE * src,* out;
    long count;
    char source[NAME_SIZE];
    char output[NAME_SIZE];
    char ch;
    
    printf("Enter the filename of source file\n");
    gets(source);
    printf("Enter the filename of output file\n");
    gets(output);
    
    //open source and output
    if ((src = fopen(source,"r")) == NULL)
    {
        fprintf(stderr,"Can't open file \"%s\"\n",source);
        puts("Usage:13.11.3.exe source-file output-file");
        exit(1);
    }
    if ((out = fopen(output,"w")) == NULL)
    {
        fprintf(stderr,"Can't open file \"%s\"\n",output);
        puts("Usage:13.11.3.exe source-file output-file");
        exit(2);
    }
    
    for (count = 0;(ch = getc(src)) != EOF;count++)
        putc(toupper(ch),out);
    
    printf("File %s has %ld characters\n",source,count);
    
    system("pause");
    return 0;
}