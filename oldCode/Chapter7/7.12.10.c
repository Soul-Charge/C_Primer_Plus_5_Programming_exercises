#include <stdio.h>
#define SINGLE 17850 
#define HOUSEHOLD 23900
#define MARRIED 29750
#define DIVORCED 14875

int main (void)
{
    int list;
    double tax,income;
    
    printf("_____________________________________________________________\n");
    printf("              ����     |              ˰��                   \n");
    printf("_____________________________________________________________\n");
    printf("1) ����                | ǰ%d��Ԫ��15%%,�������ְ�28%%   \n",SINGLE);
    printf("_____________________________________________________________\n");
    printf("2) ����                | ǰ%d��Ԫ��15%%,�������ְ�28%%\n",HOUSEHOLD);
    printf("_____________________________________________________________\n");
    printf("3) �ѻ飬����          | ǰ%d��Ԫ��15%%,�������ְ�28%%  \n",MARRIED);
    printf("_____________________________________________________________\n");
    printf("4) �ѻ飬����          | ǰ%d��Ԫ��15%%,�������ְ�28%% \n",DIVORCED);
    printf("_____________________________________________________________\n");
    
    while (1)
    {    
        printf("Enter the number(0 to quit):");
        scanf("%d",&list);
    
        switch (list)
        {
            case 0 :goto end;break;
            case 1 :printf("Enter your income:");
                    scanf("%lf",&income);
                    
                    if (income <= SINGLE)
                        tax = income * 0.15;
                    else tax = (income - SINGLE) * 0.28;
                    
                    printf("You need pay taxes %.2f $\n",tax);
                break;
            case 2 :printf("Enter your income:");
                    scanf("lf",&income);
                    
                    if (income <= HOUSEHOLD)
                        tax = income * 0.15;
                    else tax = (income - HOUSEHOLD) * 0.28;
                    
                    printf("You need pay taxes %.2f $\n",tax);
                break;
            case 3 :printf("Enter your income:");
                    scanf("%lf",&income);
                    
                    if (income <= MARRIED)
                        tax = income * 0.15;
                    else tax = (income - MARRIED) * 0.28;
                    
                    printf("You need pay taxes %.2f $\n",tax);
                break;
            case 4 :printf("Enter your income:");
                    scanf("%lf",&income);
                    
                    if (income <= DIVORCED)
                        tax = income * 0.15;
                    else tax = (income - DIVORCED) * 0.28;
                    
                    printf("You need pay taxes %.2f $\n",tax);
                break;
            default :printf("You should enter others!\n");
        }
    }
    
    end:printf("Done!\n");
    
    return 0;
}