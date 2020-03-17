#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SAYLEV_1 8.75       // 工资水平1-4
#define SAYLEV_2 9.33
#define SAYLEV_3 10.00
#define SAYLEV_4 11.20
#define OVERTIMESTD 40      // 达到加班标准的小时数
#define EXWORKTIMERATE 1.5  // 加班工作时间转换率
#define TAXLEV_1 300        // 税率等级1
#define TAXLEV_2 450        // 税率等级1
#define TAXRATE_1 0.15      // 前TAXLEV_1美元的税率
#define TAXRATE_2 0.2       // TAXLEV_1到TAXLEV_2之间美元的税率
#define TAXRATE_3 0.25      // 450美元之后的税率

typedef unsigned short Choice;

Choice GetChoice(void);
double GetWeekWorkHours(void);
double countTotalSalary(double dWeekWorkHours, double SAYLEV);
double countTax(double dTotalSalary);
void ShowResult(double dTotalSalary, double dTax);

void ShowMenu(void);

int main(void)
{
    double dWeekWorkHours; // 一周工作小时数
    double dTotalSalary; // 总工资
    double dTax;        // 税金

    ShowMenu();
    while (1)
    {
        switch (GetChoice())
        {
        case 'a':
            dWeekWorkHours = GetWeekWorkHours();
            dTotalSalary = countTotalSalary(dWeekWorkHours, SAYLEV_1);
            dTax = countTax(dTotalSalary);
            ShowResult(dTotalSalary, dTax);
            break;
        case 'b':
            dWeekWorkHours = GetWeekWorkHours();
            dTotalSalary = countTotalSalary(dWeekWorkHours, SAYLEV_2);
            dTax = countTax(dTotalSalary);
            ShowResult(dTotalSalary, dTax);
            break;
        case 'c':
            dWeekWorkHours = GetWeekWorkHours();
            dTotalSalary = countTotalSalary(dWeekWorkHours, SAYLEV_3);
            dTax = countTax(dTotalSalary);
            ShowResult(dTotalSalary, dTax);
            break;
        case 'd':
            dWeekWorkHours = GetWeekWorkHours();
            dTotalSalary = countTotalSalary(dWeekWorkHours, SAYLEV_4);
            dTax = countTax(dTotalSalary);
            ShowResult(dTotalSalary, dTax);
            break;
        case 'q':
            goto end;
        default:
            puts("Please enter a valid potion.");
        }
    }

    end:puts("Bye!");
    system("pause");
    return 0;
}

void ShowMenu(void)
{
    puts("*****************************************************************");
    puts("Enter the number corresponding to the desired pay rate or action:");
    printf("a) $%-.2lf/hr\t\t\tb) $%-.2lf/hr\n", SAYLEV_1, SAYLEV_2);
    printf("c) $%-.2lf/hr\t\t\td) $%-.2lf/hr\n", SAYLEV_3, SAYLEV_4);
    puts("q) quit");
    puts("*****************************************************************");
}

// 从输入中获取选择
// 所谓选择起始就是一个char类型值，非空白字符
Choice GetChoice(void)
{
    char choice;
    while (isspace(choice = getchar())) // 是空白字符就继续获取
        continue;
    while (getchar() != '\n') // 清除之后的输入
        continue;
    return choice;
}

// 获取每周工作时间
double GetWeekWorkHours(void)
{
    char ch;
    double dWeekWorkHours;
    printf("Enter your week working hours: ");
    while (scanf("%lf", &dWeekWorkHours) == 0 && (ch = getchar()) != '\n')
        printf("%c is not a valid input.\n", ch);
    return dWeekWorkHours;
}

// 计算总工资
// 接受一周工作时间和薪水等级(每小时多少美元)
double countTotalSalary(double dWeekWorkHours, double SAYLEV)
{
    if (dWeekWorkHours > OVERTIMESTD)
        dWeekWorkHours = OVERTIMESTD + (dWeekWorkHours - OVERTIMESTD) * EXWORKTIMERATE;
    return dWeekWorkHours * SAYLEV;
}

// 计算税金
double countTax(double dTotalSalary)
{
    double dTax;
    if (dTotalSalary <= TAXLEV_1)
        dTax = dTotalSalary * TAXRATE_1;
    else if (dTotalSalary <= TAXLEV_2) // 大于税金等级1但小于2时
    {
        dTax = TAXLEV_1 * TAXRATE_1;
        dTax += (dTotalSalary - TAXLEV_1) * TAXRATE_2;
    }
    else
    {
        dTax = TAXLEV_1 * TAXRATE_1;
        dTax += (TAXLEV_2 - TAXLEV_1) * TAXRATE_2;
        dTax += (dTotalSalary - TAXLEV_2) * TAXRATE_3;
    }
    return dTax;
}

void ShowResult(double dTotalSalary, double dTax)
{
    printf("Your total salary is: %.2lf$\n", dTotalSalary);
    printf("Your Tax is: %.2lf$\n", dTax);
    printf("Your ATsalary is: %.2lf$\n", dTotalSalary - dTax);
}