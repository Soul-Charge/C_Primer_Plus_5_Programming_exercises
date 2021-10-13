#include <stdio.h>
#include <stdlib.h>
#define NAMESIZE 30
#define CSIZE 4

typedef struct name
{
    char fname[NAMESIZE];
    char lname[NAMESIZE];
} Name;

typedef struct student
{
    Name name;
    double grade[3]; // three double score
    double average;  // average of grade
} Student;

void get_scores(Student * students);
void count_average(Student * students);
void showStudents(Student * students);
void showTotalAverage(Student * students);

int main(void)
{
    Student students[CSIZE] = {
        {{"Lu","Wei"}, 0, 0},
        {{"Xiao","Chuan"}, 0, 0},
        {{"Sha","BI"}, 0, 0},
        {{"Ruo","Zhi"}, 0, 0},
    };

    get_scores(students);
    count_average(students);
    showStudents(students);
    showTotalAverage(students);

    system("pause");
    return 0;
}

void get_scores(Student * students)
{
    int i;
    for (i = 0; i < CSIZE; i++)
    {
        printf("Student: %s %s\n", students[i].name.fname, students[i].name.lname);
        printf("Enter Her score(three double):");
        scanf("%lf %lf %lf", &(students[i].grade[0]), &(students[i].grade[1]), &(students[i].grade[2]));
    }
}

void count_average(Student * students)
{
    int i;
    for (i = 0; i < CSIZE; i++)
        students[i].average = (students[i].grade[0] + students[i].grade[1] + students[i].grade[2]) / 3;
}

void showStudents(Student * students)
{
    int i;
    for (i = 0; i < CSIZE; i++)
    {
        printf("Sutdent: ");
        printf("%s %s\n", students[i].name.fname, students[i].name.lname);
        printf("Scores: ");
        printf("%.2f %.2f %.2f\n", students[i].grade[0], students[i].grade[1], students[i].grade[2]);
        printf("Average:");
        printf("%.2f\n", students[i].average);
    }
}

void showTotalAverage(Student * students)
{
    double total_scores = 0.0;
    int total_nums = 0;
    int i, j;

    for (i = 0; i < CSIZE; i++)
        for (j = 0; j < 3; j++, total_nums++)
            total_scores += students[i].grade[j];

    printf("Total Average: %.2f\n", total_scores / total_nums);
}