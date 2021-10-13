#include <stdio.h>
#include <stdlib.h>

int set_mode (int * mode);
void info (int mode);

int main(void)
{
    int mode = 0;
    
    while (set_mode(&mode) >= 0 )
        info(mode);
    
    puts("Done!");
    system("pause");
    return 0;
}

int set_mode (int * mode)
{
    int temp;
    
    printf("Enter 0 for metric mode,1 for US mode (-1 to quit): ");
    scanf("%d",&temp);
    
    if (temp > 1)
    {
        printf("Invalid mode specfied.");
        if (*mode == 0)
            { printf("Mode %d (metric) used\n",*mode);return *mode; }
        if (*mode == 1)
            { printf("Mode %d (US) used\n",*mode);return *mode; }
    }
    *mode = temp;
    return *mode;
}

void info (int mode)
{
    double distance = 0;
    double fuel = 0;
    
    if (0 == mode)
    {
        //get info
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf",&distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf",&fuel);
        // show
        printf("Fuel consumption is %.2f liters per 100 km.\n",fuel / distance * 100);
    }
    if (1 == mode)
    {
        //get info
        printf("Enter distance traveled in miles: ");
        scanf("%lf",&distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf",&fuel);
        // show
        printf("Fuel consumption is %.1f miles per gallon.\n",distance / fuel);
    }
    return;
}
