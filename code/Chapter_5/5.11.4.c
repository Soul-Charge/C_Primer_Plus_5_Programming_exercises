#include <stdio.h>
#include <stdlib.h>
#define CM_PER_FT 30.48
#define IN_PER_FT 12

int main(void)
{
    double cm;

    printf("Enter a hight in centimeters:");
    
    while (scanf("%lf", &cm) == 1 && cm > 0)
    {
        /* 将厘米值转英尺值后减其整数留小数部分，将小数部分转为英寸 */
        printf("%.1lf cm = %d feet, %.1lf inches\n", cm, (int)(cm/CM_PER_FT), ((cm/CM_PER_FT) - (int)(cm/CM_PER_FT)) * IN_PER_FT);
        printf("Enter a hight in centimeters (<=0 to quit):");
    }
    puts("bye");

    system("pause");
    return 0;
}