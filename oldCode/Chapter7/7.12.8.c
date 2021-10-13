#include <stdio.h>
#define SALARY_LV_1 8.75
#define SALARY_LV_2 9.33
#define SALARY_LV_3 10.00
#define SALARY_LV_4 11.20
#define OVER_TIME_LV 1.5  
#define TAX_BREAK_1 300
#define TAX_BREAK_1_LV 0.15
#define TAX_BREAK_2 450
#define TAX_BREAK_2_LV 0.20
#define TAX_LV_MAX 0.25

int main (void)
{
    int list;
    double total_salary,tax,salary,hour_in_week,over_time,salary_lv;
    
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $SALARY_LV_1/hr              2)$SALARY_LV_2/hr\n"
           "3) $SALARY_LV_3/hr              4)$SALARY_LV_4/hr\n"
           "5) quit\n");
    printf("*****************************************************************\n");
    
    while ( scanf("%d",&list) )
    {
        switch (list)
        {
            case 1 :salary_lv = SALARY_LV_1;
                printf("Enter your work time in hour every week.(without over time)\n");
                scanf("%lf",&hour_in_week);
                printf("Enter your over time in hour\n");
                scanf("%lf",&over_time);
                //----------------count-------------------------------------------------
                hour_in_week += over_time * OVER_TIME_LV;  
    
                total_salary = hour_in_week * salary_lv;
    
                if (total_salary <= TAX_BREAK_1)
                tax = total_salary * TAX_BREAK_1_LV;
                else if (total_salary <= TAX_BREAK_2)
                tax = total_salary * TAX_BREAK_2_LV;
                else tax = total_salary * TAX_LV_MAX;
    
                salary = total_salary - tax;
    
                printf("Your total salary is %.2f$ but you need be take %.2f$ tax so you can get %.2f$\n",
                total_salary,tax,salary);
                //----------------count-------------------------------------------------
                break;
            case 2 :salary_lv = SALARY_LV_2;
                printf("Enter your work time in hour every week.(without over time)\n");
                scanf("%lf",&hour_in_week);
                printf("Enter your over time in hour\n");
                scanf("%lf",&over_time);
                //----------------count-------------------------------------------------
                hour_in_week += over_time * OVER_TIME_LV;  
    
                total_salary = hour_in_week * salary_lv;
    
                if (total_salary <= TAX_BREAK_1)
                tax = total_salary * TAX_BREAK_1_LV;
                else if (total_salary <= TAX_BREAK_2)
                tax = total_salary * TAX_BREAK_2_LV;
                else tax = total_salary * TAX_LV_MAX;
    
                salary = total_salary - tax;
    
                printf("Your total salary is %.2f$ but you need be take %.2f$ tax so you can get %.2f$\n",
                total_salary,tax,salary);
                //----------------count-------------------------------------------------
                break;
            case 3 :salary_lv = SALARY_LV_3;
                printf("Enter your work time in hour every week.(without over time)\n");
                scanf("%lf",&hour_in_week);
                printf("Enter your over time in hour\n");
                scanf("%lf",&over_time);
                //----------------count-------------------------------------------------
                hour_in_week += over_time * OVER_TIME_LV;  
    
                total_salary = hour_in_week * salary_lv;
    
                if (total_salary <= TAX_BREAK_1)
                tax = total_salary * TAX_BREAK_1_LV;
                else if (total_salary <= TAX_BREAK_2)
                tax = total_salary * TAX_BREAK_2_LV;
                else tax = total_salary * TAX_LV_MAX;
    
                salary = total_salary - tax;
    
                printf("Your total salary is %.2f$ but you need be take %.2f$ tax so you can get %.2f$\n",
                total_salary,tax,salary);
                //----------------count-------------------------------------------------
                break;
            case 4 :salary_lv = SALARY_LV_4;
                printf("Enter your work time in hour every week.(without over time)\n");
                scanf("%lf",&hour_in_week);
                printf("Enter your over time in hour\n");
                scanf("%lf",&over_time);
                //----------------count-------------------------------------------------
                hour_in_week += over_time * OVER_TIME_LV;  
    
                total_salary = hour_in_week * salary_lv;
    
                if (total_salary <= TAX_BREAK_1)
                tax = total_salary * TAX_BREAK_1_LV;
                else if (total_salary <= TAX_BREAK_2)
                tax = total_salary * TAX_BREAK_2_LV;
                else tax = total_salary * TAX_LV_MAX;
    
                salary = total_salary - tax;
    
                printf("Your total salary is %.2f$ but you need be take %.2f$ tax so you can get %.2f$\n",
                total_salary,tax,salary);
                //----------------count-------------------------------------------------
                break;
            case 5 :goto end;
            default :printf("You should input others!\n");
        }
        
    }
    
    end:printf("Done!\n");
    return 0;
}