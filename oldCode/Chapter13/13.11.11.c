#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINE_SIZE 257

int main (int argc,char * argv[]) //argv[1]:string   argv[2]:filename
{
    FILE * fp;
    char line[LINE_SIZE];
    int i;
    
    if (argc != 3)
    {
        fprintf(stderr,"Error arguments number\n");
        puts("Usage:13.11.11.exe string filename");
        exit(1);
    }
    
    if ((fp = fopen(argv[2],"r")) == NULL)
    {
        fprintf(stderr,"Can't open \"%s\"\n",argv[2]);
        exit(2);
    }
    
    for (i = 0;fgets(line,LINE_SIZE,fp) != NULL;i++)
        if (strstr(line,argv[1]) != NULL)
            fprintf(stdout,"Line:%d %s",i,line);

    system("pause");
    return 0;
}