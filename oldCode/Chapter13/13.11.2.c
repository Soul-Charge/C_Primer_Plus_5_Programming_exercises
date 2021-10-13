//文件复制程序
#include <stdio.h>
#include <stdlib.h>
#define BUFFER 1024

int main (int argc,char * argv[]) //argv[1]:source         argv[2]:target
{
    FILE *src,*tar;
    char temp[BUFFER];
    int bytes = 0;
    
    //open file
    if ((src = fopen(argv[1],"rb")) == NULL)
    {
        fprintf(stderr,"Can't open file \"%s\"\n",argv[1]);
        puts("Usage:13.11.2.exe sourcefile targetfile");
        exit(1);
    }
    if ((tar = fopen(argv[2],"wb")) == NULL)
    {
        fprintf(stderr,"Can't open file \"%s\"\n",argv[2]);
        puts("Usage:13.11.2.exe sourcefile targetfile");
        exit(2);
    }
    
    //I/O
    while((bytes = fread(temp,sizeof(char),BUFFER,src)) > 0)
        fwrite(temp,sizeof(char),bytes,tar);
    
    fclose(src);
    fclose(tar);
    
    system("pause");
    return 0;
}