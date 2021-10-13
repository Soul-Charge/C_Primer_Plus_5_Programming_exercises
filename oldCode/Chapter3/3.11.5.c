#include <stdio.h>
int main(void)
{
long double age;
printf("input your age:___\b\b\b");
scanf("%llf",&age);
printf("your age is %.0llf years old.\nso "
          "you has lived %.0llf s.haven't you?\n",age,age*3.156e7);
return 0;
}
