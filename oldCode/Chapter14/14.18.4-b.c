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

void showSI_Structure(Social_Insurance structure);

int main(void)
{
    int i;
    //Social Insurance people list
    Social_Insurance SIlist[LISTSIZE] = {
        {123456789, {"ugly", "motherFucker", "fat"}},
        {233333333, {"Lu", "Beng", "Wei"}},
        {114514810, {"Xian", "YeShou", "Bei"}},
        {632425800, {"Sun", "Xiao", "Chuan"}},
        {111111111, {"Sha", .lname = "Bi"}}
    }; 

    for (i = 0; i < LISTSIZE; i++)
    {
        showSI_Structure(SIlist[i]);
    }

    system("pause");
    return 0;
}

void showSI_Structure(Social_Insurance structure)
{
    // print name
    printf("%s, %s ", structure.name.fname, structure.name.lname);
    // print middle name
    if (strlen(structure.name.mname))
        printf("%c. ", structure.name.mname[0]);
    // print number
    printf("- %ld\n", structure.number);
}