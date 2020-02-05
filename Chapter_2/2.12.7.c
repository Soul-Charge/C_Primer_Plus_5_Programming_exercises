#include <stdio.h>
#include <stdlib.h>

void two(void)
{
    puts("two");
}

void one_three(void)
{
    puts("one");
    two();
    puts("three");
}

int main(void)
{
    puts("starting now:");
    one_three();
    system("pause");
    puts("done!");
    return 0;
}