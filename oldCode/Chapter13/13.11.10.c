//感觉很简单所以先不写
//好的我回来填坑了 2019.6.6
// start at 21:17
//输入数字以显示第n行内容
//以*n形式输入则跳到第n个字符开始显示直到换行符
//以$n形式输入则在全文中显示一句内容

/*
 *先不写了 2019.6.6;22:01
 *算了就这样吧，全文显示在调试执行就没问题
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define NAMESIZE 80 // size of filename
#define BUFFSIZE 528

// deal_input 内的设定
bool show_in_file = false;
bool input_is_char_n = false; // input means showing content start nth characters.

void eat_line(void);
bool deal_input(int * input);

int main(void)
{
    char filename[NAMESIZE];
    FILE * fp;
    int i = 0;
    int pos; // position of file
    char buffer[BUFFSIZE];

    // get filename
    puts("Enter a filename which you want to open.");
    fgets(filename, NAMESIZE, stdin);
    filename[strlen(filename)-1] = '\0'; // delete the \n in the end
    puts("Well done!");

    // open file
    if ((fp = fopen(filename, "r")) == NULL)
    {
        fprintf(stderr, "Can't open the file:\"%s\".\n", filename);
        system("pause");
        exit(1);
    }
    fprintf(stdout, "You have opened the file:\"%s\".\n", filename);

    // interact
    puts("Which line do you want to see? (enter an integer.)\n");
    while (deal_input(&pos))
    {
        if (show_in_file)
        {
            char ch;

            // 输出整个文件
            bool font = true;
            bool rear = true;
            while ((ch = getc(fp)) != EOF)
            {
                if (ch == '\n')
                    i++;
                if (i == pos - 1 && font) //i从0开始
                {
                    font = false;
                    printf("$$$");
                }

                putchar(ch);

                if (i == pos && rear)
                {
                    rear = false;
                    printf("$$$");
                }
            }

            rewind(fp);
        }
        else if (input_is_char_n)
        {
            // 定位到第n个字符处
            for (i = 1; i < pos; i++)
                getc(fp);
            // 输出文件内容
            fgets(buffer, BUFFSIZE, fp);
            fputs(buffer, stdout);

            rewind(fp);
        }
        else
        {
            // 跳转到第n个换行符处
            for (i = 1; i < pos;)
                if (getc(fp) == '\n')
                    i++;
            // 从打开文件获取一句内容并显示
            fgets(buffer, BUFFSIZE, fp);
            fputs(buffer, stdout);

            rewind(fp);
        }
    puts("\nWhich line do you want to see too? (enter an integer.) (q to quit)\n");
    }
    puts("Bye!");

    // wind up
    fclose(fp);

    system("pause");
    return 0;
}

bool deal_input(int * input)
{
    char temp;
    temp = getc(stdin);

    if (temp == '*')
    {
        input_is_char_n = true;
    }
    else if (temp == '$')
    {
        show_in_file = true;
    }
    else
        ungetc(temp, stdin);

    if (!fscanf(stdin, "%d", input))
    {
        eat_line();
        return 0; //有数字输入则返回1不然返回0
    }
    else
    {
        eat_line();
        return 1;
    }
}

void eat_line(void)
{
    while (getchar() != '\n')
        continue;
}