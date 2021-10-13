#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#define ROWS 10
#define COLS 81

void menu(void);
char get_choice (void);
int word_length (const char * str);
void show_initial (int rows,int cols,const char str[rows][cols]);
void ASCII_order (int rows,int cols, const char str[rows][cols]);
void length_order (int rows,int cols,const char str[rows][cols]);
void word_order (int rows,int cols,const char str[rows][cols]);

int main (void)
{
    char string[ROWS][COLS];
    char choice;
    int i,read;
    
    printf("Input %d strings or enter [Ctrl+z] to end\n",ROWS);
    for (i = read = 0;i < ROWS && gets(string[i]) != NULL;i++) //数组存储完成
        read++; //读取的字符串数
    putchar('\n');
        
    menu();
    while ( ( choice = get_choice() ) != 'q' )
    {
        switch (choice)
        {
            case 'a':putchar('\n');
                show_initial(read,COLS,string);
                putchar('\n');
                break;
            case 'b':putchar('\n');
                ASCII_order(read,COLS,string);
                putchar('\n');
                break;
            case 'c':putchar('\n');
                length_order(read,COLS,string);
                putchar('\n');
                break;
            case 'd':putchar('\n');
                word_order(read,COLS,string);
                putchar('\n');
                break;
        }
        menu();
        
    }

    puts("Done!");
    
    system("pause");
    return 0;
}

void menu (void)
{ //菜单完成
    puts("a. show initial string.");
    puts("b. show string with order of ASCII.");
    puts("c. show string with order of length.");
    puts("d. show string with order of first word's length.");
    puts("q. quit.");
    return;
}


char get_choice (void)
{ //获取选项完成
    char ch;
    
    while ( (ch = getchar())!='a' && ch!='b' && ch!='c' && ch!='d' && ch!='q')
        puts("Please enter others.");
    return ch;
}


int word_length (const char * str)
{ //返回字符串首单词长度完成
    int word_start,length;
    
    for (word_start = 0;!isalpha(str[word_start]);word_start++) //跳过开头非字母符
        continue;
    
    for (length = 0;isalpha(str[word_start]) && str[word_start]!='\0';word_start++,length++)
        continue;
    
    return length;
}


void show_initial (int rows,int cols,const char str[rows][cols])
{ //显示初始字符串完成
  //调用方式：show_initial(行数,列数,数组名); 读入的行应以初始化
    int i;
    for (i = 0;i < rows;i++)
        puts(str[i]);
    return;
}

void ASCII_order (int rows,int cols, const char str[rows][cols])
{ //ASCII顺序显示字符串完成
  //调用方式：length_order(行数,列数,数组名);读入的行应以初始化
    const char *pStr[rows];
    int top,seek;
    int i;
    const char * temp;
    
    for (i = 0;i < rows;i++)
        pStr[i] = str[i];
    
    for (top = 0;top < rows-1;top++) //从第一个元素开始
        for (seek = top+1;seek < rows;seek++) //轮流与第一个元素比较
            if ( strcmp(pStr[top],pStr[seek]) < 0 )
            {
                temp = pStr[seek];
                pStr[seek] = pStr[top];
                pStr[top] = temp;
            }
    for (i = 0;i < rows;i++)
        puts(pStr[i]);
    return;
}

void length_order (int rows,int cols,const char str[rows][cols])
{ //长度顺序显示字符串完成
  //调用方式：length_order(行数,列数,数组名);读入的行应以初始化
    const char *pStr[rows];
    int top,seek;
    int i;
    const char * temp;
    
    for (i = 0;i < rows;i++)
        pStr[i] = str[i];
    
    for (top = 0;top < rows-1;top++) //从第一个元素开始
        for (seek = top+1;seek < rows;seek++) //轮流与第一个元素比较
            if ( strlen(pStr[top]) > strlen(pStr[seek]) )
            {
                temp = pStr[seek];
                pStr[seek] = pStr[top];
                pStr[top] = temp;
            }
    for (i = 0;i < rows;i++)
        puts(pStr[i]);
    return;
}


void word_order (int rows,int cols,const char str[rows][cols])
{ //首单词长度顺序显示字符串完成
  //调用方式：length_order(行数,列数,数组名);读入的行应以初始化
    const char *pStr[rows];
    int top,seek;
    int i;
    const char * temp;
    
    for (i = 0;i < rows;i++)
        pStr[i] = str[i];
    
    for (top = 0;top < rows-1;top++) //从第一个元素开始
        for (seek = top+1;seek < rows;seek++) //轮流与第一个元素比较
            if ( word_length(pStr[top]) > word_length(pStr[seek]) )
            {
                temp = pStr[seek];
                pStr[seek] = pStr[top];
                pStr[top] = temp;
            }
    for (i = 0;i < rows;i++)
        puts(pStr[i]);
    return;
}
