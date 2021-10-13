//advanced 10.7
#include <stdio.h>
#define MONTHS 12
#define YEARS 5

void year_rainfall (int year,int month,const double ar[year][month]);
void month_rainfall (int year,int month,const double ar[year][month]);

int main (void)
{
//declare the array from 2000 to 2004 rain
    const double rain [YEARS][MONTHS] = {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };
    
    year_rainfall (YEARS,MONTHS,rain);
    month_rainfall (YEARS,MONTHS,rain);
    
    system("pause");
    return 0;
}

void year_rainfall (int year,int month,const double ar[year][month]) //显示每年降水量和年平均降水量
{
    int y,m;
    double subtot,total;
    
    printf(" YEAR   RAINFALL  (inches)\n");
    
    for (y = 0,total = 0;y < year;y++)
    {
        for (m = 0,subtot = 0;m < month;m++)
            subtot += ar[y][m];
        printf("%5d %15.1f\n",2000+y,subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.1f inches.\n\n", total/year);
    
    return;
}

void month_rainfall (int year,int month,const double ar[year][month])  //显示每月平均降水
{
    int y,m;
    double subtot;
    
    printf("MONTHLY AVERAGES: \n\n");
    printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
    
    for (m = 0; m < month;m++)  
    {
        for (y = 0,subtot = 0;y < year;y++)
            subtot += ar[y][m];
        printf("%3.1f ",subtot/year);
    }
    putchar('\n');
    
    return;
}
