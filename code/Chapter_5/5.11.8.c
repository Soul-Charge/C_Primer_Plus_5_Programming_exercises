#include <stdio.h>
#include <stdlib.h>
#define COINSIZE 10

void Temperature(double temperature)
{
    const char Fcoin[COINSIZE] = {"°F"};
    const char Ccoin[COINSIZE] = {"°C"};
    const char Kcoin[COINSIZE] = {"K"};

    puts("Temperature:");
    printf("        %.2lf %s\n", temperature, Fcoin);
    /* 书中计算公式有误,且0°C = 273.15K 而不是 273.16K */
    printf("        %.2lf %s\n", (temperature - 32) / 1.8, Ccoin);
    printf("        %.2lf %3s\n", (temperature - 32) / 1.8 + 273.15, Kcoin);
}

int main(void)
{
    double temperature;

    printf("Input a temperature(°C): ");
    while (scanf("%lf", &temperature) == 1)
    {
        Temperature(temperature);
        printf("Input a temperature(°C)(q to quit): ");
    }

    system("pause");
    return 0;
}