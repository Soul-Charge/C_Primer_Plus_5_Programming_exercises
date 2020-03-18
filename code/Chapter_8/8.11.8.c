#include <stdio.h>
#include <stdlib.h>

void ShowMenu(void);
char GetChoice(void);
double GetFloatVal(void);

int main(void)
{
    char choice;
    float operand_1;
    float operand_2;

    while (1)
    {
        ShowMenu();
        switch (choice = GetChoice())
        {
            case 'a':
                printf("Enter first number: ");
                operand_1 = GetFloatVal();
                printf("Enter second number: ");
                operand_2 = GetFloatVal();
                printf("%.2f + %.2f = %.2f\n", operand_1, operand_2, operand_1 + operand_2);
                break;
            case 's':
                printf("Enter first number: ");
                operand_1 = GetFloatVal();
                printf("Enter second number: ");
                operand_2 = GetFloatVal();
                printf("%.2f - %.2f = %.2f\n", operand_1, operand_2, operand_1 - operand_2);
                break;
            case 'm':
                printf("Enter first number: ");
                operand_1 = GetFloatVal();
                printf("Enter second number: ");
                operand_2 = GetFloatVal();
                printf("%.2f * %.2f = %.2f\n", operand_1, operand_2, operand_1 * operand_2);
                break;
            case 'd':
                printf("Enter first number: ");
                operand_1 = GetFloatVal();
                printf("Enter second number: ");
                while (( operand_2 = GetFloatVal() ) == 0)
                    printf("Enter a number than 0: ");
                printf("%.2f / %.2f = %.2f\n", operand_1, operand_2, operand_1 / operand_2);
                break;
            case 'q':
                goto end;
                break;
            default :
            if (choice != '\n')
            {
                printf("'%c' is not a valid input.\n", choice);
            }
                break;
        }
    }

    end:puts("Bye!");
    system("pause");
    return 0;
}

void ShowMenu(void)
{
    puts("Enter the operation of your choice: ");
    puts("a. add         s. subtract");
    puts("m. multiply    d. divide");
    puts("q. quit");
}

char GetChoice(void)
{
    char ch = getchar();
    while (getchar() != '\n')
        continue;
    return ch;
}

double GetFloatVal(void)
{
    float val;
    char ch;

    while (scanf("%f", &val) == 0)
    {
        putchar('"');
        while ((ch = getchar()) != '\n')
            putchar(ch);
        putchar('"');
        puts("is not a valid input.");
        printf("Please enter a number, such as 2.5 1.78E8, or 3: ");
    }
    while (getchar() != '\n') // 清除输入产生的换行符
        continue;
    return val;
}