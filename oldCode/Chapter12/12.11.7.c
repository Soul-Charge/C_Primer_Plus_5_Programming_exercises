#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned int) time(0));
    int dice,sides,sets;
    int i,j,total;
    
    
    puts("Enter the number of sets: enter q to stop");
    while ( scanf("%d",&sets) )
    {
        puts("How many sides and how many dice?");
        scanf("%d %d",&sides,&dice);
        printf("Here are %d sets of %d %d-sided throws.\n",
            sets,dice,sides);
    
        for (i = 1;i <= sets;i++) //投掷次数
        {
            for (j = 0,total = 0;j < dice;j++) //计算每次投掷总值
                total += rand() % sides+1;
            
            printf("    ");
            printf("%-3d",total);
            if (!(i % 6))
                putchar('\n');
        }
        putchar('\n');
        puts("Enter the number of sets: enter q to stop");
    }
    putchar('\n');
    system("pause");
    return 0;
}