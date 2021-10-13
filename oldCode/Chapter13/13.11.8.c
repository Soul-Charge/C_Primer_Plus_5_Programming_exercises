#include <stdio.h>
#include <stdlib.h>

int main (int argc,char * argv[]) //argv[1]:ch  argv[2]:filename 
{
    FILE * fp;
    char ch;
    int ch_num;
    
    
    if (argc < 2)
    {
        fprintf(stderr,"Too few arguments\n");
        exit(1);
    }
    
    if (argc < 3)
    {
        for(ch_num = 0;(ch = getchar()) != EOF;)
            if (ch == argv[1][0])
                ch_num++;
        printf("There are %d '%c' from stdin(keyboard input)",ch_num,argv[1][0]);
    }
    
    for (int i = 2;i < argc;i++)
    {
        ch_num = 0;
        
        // open file
        if ((fp = fopen(argv[i],"r")) == NULL)
        {
            fprintf(stderr,"Can't open \"%s\"\n",argv[i]);
            exit(2);
        }
        
        //deal with
        while ((ch = getc(fp)) != EOF)
            if (ch == argv[1][0])
                ch_num++;
        printf("The character '%c' have appeared %d,in the file \"%s\"\n",argv[1][0],ch_num,argv[i]);
        fclose(fp);
    }
    
    system("pause");
    return 0;
}