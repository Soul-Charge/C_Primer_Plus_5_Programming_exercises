#include <stdio.h>
#define SALARY_LV 10.00
#define OVER_TIME_LV 1.5  
#define TAX_BREAK_1 300
#define TAX_BREAK_1_LV 0.15
#define TAX_BREAK_2 450
#define TAX_BREAK_2_LV 0.20
#define TAX_LV_MAX 0.25

int main (void)
{
    double total_salary,tax,salary,hour_in_week,over_time;
    
    printf("Enter your work time in hour every week.(without over time)\n");
    scanf("%lf",&hour_in_week);
    printf("Enter your over time in hour\n");
    scanf("%lf",&over_time);
    
    hour_in_week += over_time * OVER_TIME_LV;  
    
    total_salary = hour_in_week * SALARY_LV;
    
    if (total_salary <= TAX_BREAK_1)
        tax = total_salary * TAX_BREAK_1_LV;
    else if (total_salary <= TAX_BREAK_2)
        tax = total_salary * TAX_BREAK_2_LV;
    else tax = total_salary * TAX_LV_MAX;
    
    salary = total_salary - tax;
    
    printf("Your total salary is %.2f$ but you need be take %.2f$ tax so you can get %.2f$\n",
        total_salary,tax,salary);
    
    
    return 0;
}