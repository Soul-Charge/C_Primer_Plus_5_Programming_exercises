#include <stdio.h>

float get_float (void);
void menu (void);
char get_fitst (void);

int main (void)
{
    float f_n,s_n;   //first number and second number
    char list;
    
    menu();
    
    while (1)
    {
        list = get_fitst();
        switch (list)
        {
            case 'a':printf("Enter first number:");
                    f_n = get_float();
                    printf("Enter second number:");
                    s_n = get_float();
                    printf("%.2f + %.2f = %.2f\n",f_n,s_n,f_n + s_n);
                    menu();
                break;
            case 's':printf("Enter first number:");
                    f_n = get_float();
                    printf("Enter second number:");
                    s_n = get_float();
                    printf("%.2f - %.2f = %.2f\n",f_n,s_n,f_n - s_n);
                    menu();
                break;
            case 'm':printf("Enter first number:");
                    f_n = get_float();
                    printf("Enter second number:");
                    s_n = get_float();
                    printf("%.2f * %.2f = %.2f\n",f_n,s_n,f_n * s_n);
                    menu();
                break;
            case 'd':printf("Enter first number:");
                    f_n = get_float();
                    printf("Enter second number:");
                    s_n = get_float();
                    while ( s_n == 0 )
                    {
                        printf("The second number can't be 0!\n");
                        printf("Enter again:");
                        s_n = get_float();
                    }
                    printf("%.2f / %.2f = %.2f\n",f_n,s_n,f_n / s_n);
                    menu();
                break;
            case 'q':goto end;
            default :printf("You shoule Enter others!\n");
        }
    }
    end:printf("Done!");
    
    return 0;
}

float get_float (void)
{
    float input;
    char ch;
    while ( scanf("%f",&input) != 1 )
    {
        while( (ch = getchar() ) != '\n')
            putchar(ch);
        printf(" is not an integer.\n");
       printf("Please enter an float value,such as 25.3,-178.666,or 3.14:");
    }
    return input;
}

char get_fitst (void)
{
    int ch;

    while ( isspace( ch = getchar() ) ) continue;
    while ( getchar() != '\n' )
        continue;
    return ch;
}

void menu (void)
{
    printf("Enter the operation of your choice:\n"
           "a.add           s.subtract\n"
           "m.multiply      d.divide\n"
           "q.quit\n");
}