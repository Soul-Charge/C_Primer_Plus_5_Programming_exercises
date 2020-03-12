// 用了下Windows API里的变量命名风格，在小型程序是不是反而太复杂了
#include <stdio.h>
#include <stdlib.h>
#define BASESAYLEV 10.0     // 基本工资水平：10美元/小时
#define OVERTIMESTD 40      // 达到加班标准的小时数
#define EXWORKTIMERATE 1.5  // 加班工作时间转换率
#define TAXLEV_1 300        // 税率等级1
#define TAXLEV_2 450        // 税率等级1
#define TAXRATE_1 0.15      // 前TAXLEV_1美元的税率
#define TAXRATE_2 0.2       // TAXLEV_1到TAXLEV_2之间美元的税率
#define TAXRATE_3 0.25      // 450美元之后的税率

double countTotalSalary(double dWeekWorkHours);
double countTax(double dTotalSalary);

int main(void)
{
    double dWeekWorkHours; // 一周工作小时数
    double dTotalSalary; // 总工资
    double dTax;        // 税金

    printf("Enter your week working hours: ");
    scanf("%lf", &dWeekWorkHours);

    dTotalSalary = countTotalSalary(dWeekWorkHours);
    dTax = countTax(dTotalSalary);

    printf("Your total salary is: %.2lf$\n", dTotalSalary);
    printf("Your Tax is: %.2lf$\n", dTax);
    printf("Your ATsalary is: %.2lf$\n", dTotalSalary - dTax);

    system("pause");
    return 0;
}

// 计算总工资
double countTotalSalary(double dWeekWorkHours)
{
    if (dWeekWorkHours > OVERTIMESTD)
        dWeekWorkHours = OVERTIMESTD + (dWeekWorkHours - OVERTIMESTD) * EXWORKTIMERATE;
    return dWeekWorkHours * BASESAYLEV;
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