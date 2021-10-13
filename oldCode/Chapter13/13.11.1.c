//文件字符计数器
#include <stdio.h>
#include <stdlib.h>
#define NAME_SIZE 100

int main(void)
{
    FILE * fp;
    long count;
    char filename[NAME_SIZE];
    char ch;
    
    printf("Enter the filename which you want to open\n");
    gets(filename);
    
    if ((fp = fopen(filename,"r")) == NULL)
    {
        fprintf(stderr,"Can't open file\n");
        exit(1);
    }
    
    for (count = 0;(ch = getc(fp)) != EOF;count++)
        putc(ch,stdout);
    printf("File %s has %ld characters\n",filename,count);
    
    system("pause");
    return 0;
}