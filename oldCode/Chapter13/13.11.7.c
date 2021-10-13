#include <stdio.h>
#include <stdlib.h>
#define NAME_SIZE 81
#define LINE_SIZE 257

int main (int argc,char * argv[])
{
    FILE *file1,*file2;
    char name1[NAME_SIZE];
    char name2[NAME_SIZE];
    char line1[LINE_SIZE];
    char line2[LINE_SIZE];
    char *return1,*return2;
    int i;
    
    // open files
    if (argc == 3)
    {
        if ((file1 = fopen(argv[1],"r")) == NULL)
        {
            fprintf(stderr,"Can't open \"%s\"\n",argv[1]);
            exit(1);
        }
        if ((file2 = fopen(argv[2],"r")) == NULL)
        {
            fprintf(stderr,"Can't open \"%s\"\n",argv[2]);
            exit(2);
        }
    }
    else
    {
        puts("Enter first filename");
        gets(name1);
        if ((file1 = fopen(name1,"r")) == NULL)
        {
            fprintf(stderr,"Can't open \"%s\"\n",name1);
            exit(1);
        }
        
        puts("Enter second filename");
        gets(name2);
        if ((file2 = fopen(name2,"r")) == NULL)
        {
            fprintf(stderr,"Can't open \"%s\"\n",name2);
            exit(2);
        }
    }
    
    // a
    puts("-------------------------------------------------------");
    for (i = 1;1;i++)
    {  
        return1 = fgets(line1,LINE_SIZE,file1);
        return2 = fgets(line2,LINE_SIZE,file2);
        
        if (return1 == NULL && return2 == NULL)
            break;
        
        printf("Line:%d\n",i);
        if (return1 != NULL)
            fputs(line1,stdout);
        
        if (return2 != NULL)
            fputs(line2,stdout);
        
        putchar('\n');
    }
    
    // b
   
    
    fclose(file1);
    fclose(file2);
    
    system("pause");
    return 0;
}