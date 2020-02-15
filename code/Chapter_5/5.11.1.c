#include <stdio.h>
#include <stdlib.h>
#define MIN_PER_H 60 // one hour has 60 minutes

int main(void)
{
    unsigned int time;

    while (1)
    {
        printf("Enter a time(minutes) (input 0 to quit): ");
        scanf("%d", &time);
        if (time <= 0)
            break;
        printf("time: %02d:%02d:00\n", time / MIN_PER_H, time % MIN_PER_H);
    }

    system("pause");
    return 0;
}