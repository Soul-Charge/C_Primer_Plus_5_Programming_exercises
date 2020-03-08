#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int years = 0;
    int Daphne_start = 100;
    int Daphne = 100;
    double Deirdre = 100;

    while (Daphne >= Deirdre)
    {
        Daphne += Daphne_start * 0.1;
        Deirdre += Deirdre * 0.05;
        years++;
    }
    printf("%d years later\n", years);
    printf("Daphne:  %d\n", Daphne);
    printf("Deirdre: %lf\n", Deirdre);

    system("pause");
    return 0;
}