#include <stdio.h>
void praise(void);
void end(void);

int main(void)
{
praise();
end();

return 0;
}

void praise(void)
{
printf("For he's a jolly good fellow!\n"
           "For he's a jolly good fellow!\n"
           "For he's a jolly good fellow!\n");
}

void end(void)
{
printf("Which nobody can deny!\n");
}
