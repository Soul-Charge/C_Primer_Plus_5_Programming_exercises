#include <stdio.h>
#include <stdlib.h>
#define SINGLESTD   17850
#define HOSTSTD     23900
#define MARRIEDSTD  29750
#define DIVORCEDSTD 14875
#define BASICRATE   0.15
#define EXCESSRATE  0.28

double CountTax(double income, int TaxStd);
char GetChoice(void);
double GetIncome(void);

void ShowMenu(void);

int main(void)
{
    char choice;
    double income;

    ShowMenu();
    while (1)
    {
        printf("Enter your choice(q to quit): ");
        switch (choice = GetChoice())
        {
        case 'a':
            income = GetIncome();
            printf("Your income: %.2lf$\tTax: %.2lf$\n", income, CountTax(income, SINGLESTD));
            break;
        case 'b':
            income = GetIncome();
            printf("Your income: %.2lf$\tTax: %.2lf$\n", income, CountTax(income, HOSTSTD));
            break;
        case 'c':
            income = GetIncome();
            printf("Your income: %.2lf$\tTax: %.2lf$\n", income, CountTax(income, MARRIEDSTD));
            break;
        case 'd':
            income = GetIncome();
            printf("Your income: %.2lf$\tTax: %.2lf$\n", income, CountTax(income, DIVORCEDSTD));
            break;
        case 'q':
            goto end;
            break;
        default:
            if (choice != '\n')
                printf("%c is not a valid choice\n", choice);
            break;
        }
    }

    end:puts("Bye!");
    system("pause");
    return 0;
}

void ShowMenu(void)
{
    puts("-------------------------------------------------------");
    puts("        Type   |                  Tax");
    puts("-------------------------------------------------------");
    printf("(a)单身        | 前%d美元按%.0lf%%，超出部分按%.0lf%%\n", SINGLESTD, BASICRATE*100, EXCESSRATE*100);
    printf("(b)户主        | 前%d美元按%.0lf%%，超出部分按%.0lf%%\n", HOSTSTD, BASICRATE*100, EXCESSRATE*100);
    printf("(c)已婚，共有  | 前%d美元按%.0lf%%，超出部分按%.0lf%%\n", MARRIEDSTD, BASICRATE*100, EXCESSRATE*100);
    printf("(d)已婚，离异  | 前%d美元按%.0lf%%，超出部分按%.0lf%%\n", DIVORCEDSTD, BASICRATE*100, EXCESSRATE*100);
    puts("-------------------------------------------------------");
}

// 计算税金
// income: 要计算的收入
// TaxStd: 基本征税标准(前多少美元)
double CountTax(double income, int TaxStd)
{
    if (income <= TaxStd)
        return income * BASICRATE;
    else
        return TaxStd * BASICRATE + (income - TaxStd) * EXCESSRATE;
}

char GetChoice(void)
{
    char ch;
    if ((ch = getchar()) != '\n')
        while (getchar()  != '\n')
            continue;
    return ch;
}

double GetIncome(void)
{
    double val;
    char ch;

    while (1)
    {
        printf("Enter your income: ");
        if ((ch = getchar()) != '\n')
        {
            ungetc(ch, stdin); // 将用于检测的输入放回
            if (scanf("%lf", &val) != 0) // 读取成功就退出
            {
                while (getchar() != '\n') // 清空剩余的输入
                    continue;
                break;
            }
            // 读取失败则把输入清空并提示
            putchar('"');
            while ((ch = getchar()) != '\n')
                putchar(ch);
            putchar('"');
            puts("is not a valid input.");
        }
    }
    return val;
}