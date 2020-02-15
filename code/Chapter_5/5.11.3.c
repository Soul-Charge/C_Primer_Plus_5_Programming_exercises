#include <stdio.h>
#include <stdlib.h>
#define DAYS_PER_WEEK 7 // one week has 7 days

int main(void)
{
    unsigned int date;

    while (1)
    {
        printf("Enter days (input 0 to quit): ");
        scanf("%d", &date);
        if (date <= 0)
            break;
        printf("%d days are %d weeks, %d days.\n", date, date / DAYS_PER_WEEK, date % DAYS_PER_WEEK);
    }

    system("pause");
    return 0;
}