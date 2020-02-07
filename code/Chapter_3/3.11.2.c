#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int input;
    puts("input a ASCII value:");
    scanf("%d", &input);
    printf("The ASCII character is: %c\n", input);

    system("pause");
    return 0;
}