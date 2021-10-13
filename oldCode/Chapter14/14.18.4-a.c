#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LISTSIZE 5

typedef struct name
{
    char fname[20];
    char mname[20];
    char lname[20];
} Name;

typedef struct social_insurance
{
    long number;
    Name name;
} Social_Insurance;

void showSIlist(Social_Insurance *);

int main(void)
{
    //Social Insurance people list
    Social_Insurance SIlist[LISTSIZE] = {
        {123456789, {"ugly", "motherFucker", "fat"}},
        {233333333, {"Lu", "Beng", "Wei"}},
        {114514810, {"Xian", "YeShou", "Bei"}},
        {632425800, {"Sun", "Xiao", "Chuan"}},
        {111111111, {"Sha", .lname = "Bi"}}
    }; 

    showSIlist(SIlist);

    system("pause");
    return 0;
}

void showSIlist(Social_Insurance  * list)
{
    int i;
    for (i = 0; i < LISTSIZE; i++)
    {
        if (strlen(list[i].name.mname)) // 有mname
        {
            printf("%s, %s %c. - %ld\n",
                list[i].name.fname, list[i].name.lname, list[i].name.mname[0], list[i].number);
        }
        else
        {
            printf("%s, %s - %ld\n",
                list[i].name.fname, list[i].name.lname, list[i].number);
        }
    }
}