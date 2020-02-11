#include <stdio.h>
#include <stdlib.h>
#define QUART 950 // 1 quart == 950g water
#define MOLECULE 3.0E-23 // a water molecule has 3.0E-23g

int main(void)
{
    double quarts;
    printf("Input the quart of water:");
    scanf("%lf", &quarts);
    printf("%lf quarts water has %e water molecule.\n", quarts, (quarts * QUART) / MOLECULE);

    system("pause");
    return 0;
}