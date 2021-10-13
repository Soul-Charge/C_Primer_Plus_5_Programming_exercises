#include <stdio.h>
void one_three(void);
void two(void);

int main(void)
{
printf("Starting now:\n"); // Starting now:

one_three();                    //one
                                        //two
                                       //three
printf("done!\n");                          //done!

return 0;

}

void one_three(void)
{
printf("one\n");
two();
printf("three\n");
}

void two(void)
{
printf("two\n");
}

