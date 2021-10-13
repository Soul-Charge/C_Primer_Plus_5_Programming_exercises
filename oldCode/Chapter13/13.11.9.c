#include <stdio.h>
#include <stdlib.h>
#define MAX 40

int main (void)
{
    FILE * fp;
    char words[MAX];
    int i = 0;
    char ch;
    
    if ((fp = fopen("words.txt","a+")) == NULL)
    {
        fprintf(stderr,"Can't open \"words\" file.\n");
        exit(1);
    }
    
    puts("Enter words to add to the file;press the Enter");
    puts("key at the begining of a line to terminate.");
    while ((ch = getc(fp)) != EOF)
        if (ch == ' ')
            i++;
    while (gets(words) != NULL && words[0] != '\0')
    {
        fprintf(fp,"%d.%s ",i,words);
        i++;
    }
    
    puts("File contents: ");
    rewind(fp);
    while (fscanf(fp,"%s",words) == 1)
        puts(words);
    if (fclose(fp) != 0)
        fprintf(stderr,"Error closing file\n");
    
    system("pause");
    return 0;
}