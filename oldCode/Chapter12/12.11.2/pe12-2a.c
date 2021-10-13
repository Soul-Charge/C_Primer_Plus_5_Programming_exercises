//函数实现
#include <stdio.h>
#include <stdbool.h>

static bool mode = 0;
static double distance = 0;
static double fuel = 0;

void set_mode (int n)
{
    if (0 == n)
    {
        mode = 0;
        return;
    }
    if (1 == n)
    {
        mode = 1;
        return;
    }
    printf("Invalid mode specfied.");
    if (0 == mode)
        printf("Mode 0 (metric) used.\n");
    if (1 == mode)
        printf("Mode 1 (US) used.\n");
    return;
}

void get_info (void)
{
    if (0 == mode)
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf",&distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf",&fuel);
    }
    if (1 == mode)
    {
        printf("Enter distance traveled in miles: ");
        scanf("%lf",&distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf",&fuel);
    }
    return;
}

void show_info (void)
{
    if (0 == mode)
        printf("Fuel consumption is %.2f liters per 100 km.\n",fuel / distance * 100);
    if (1 == mode)
        printf("Fuel consumption is %.1f miles per gallon.\n",distance / fuel);
    return;
}
