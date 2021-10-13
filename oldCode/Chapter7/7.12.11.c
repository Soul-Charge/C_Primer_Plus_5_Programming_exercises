//Ð¡Ð¡¹ºÎïÏµÍ³
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define GLOBE_ARTICHOKE 1.25
#define BEET 0.65
#define CARROT 0.89
//----------------price--------------------------
#define DISCOUNTS 100
#define DISCOUNTS_LV 0.05
//----------------discounts----------------------
#define UNDER_5_TRANSPORT 3.50
#define UNDER_20_TRANSPORT 10.00
#define GTE_20_TRANSPORT 8
#define GTE_20_TRANSPORT_ADD 0.1
//----------------fare---------------------------

int main (void)
{
    int globe_artichoke_num,beet_num,carrot_num,total_num;
    bool transport;
    char ch;
    double final_total_price,total_price,discounts,fare,globe_artichoke_price,beet_price,carrot_price;
    
    globe_artichoke_num = beet_num = carrot_num = total_num = 0;
    final_total_price = total_price = discounts = fare = globe_artichoke_price = beet_price = carrot_price = 0;
    
    
    printf("*****************************\n");
    printf("*a) ³¯ÏÊ¼»£º%.2f$/pound     *\n",GLOBE_ARTICHOKE);
    printf("*b) Ìð  ²Ë£º%.2f$/pound     *\n",BEET);
    printf("*c) ºúÂÜ²·£º%.2f$/pound     *\n",CARROT);
    printf("*q) quit and count your fee.*\n");
    printf("*****************************\n");
    printf("input:");
    
    while ( ch = getchar() )
    {
        if ( !isalpha(ch) )
        {    
            continue;
        }
        
        switch (ch)
        {
            case 'a' :printf("How pound globe artichoke do you need\n");
                      scanf("%d",&globe_artichoke_num);
                      globe_artichoke_price = globe_artichoke_num * GLOBE_ARTICHOKE;
                      printf("OK! you select %d pound globe artichoke, it will take you %.2f$\n",globe_artichoke_num,globe_artichoke_price);
                      printf("you can continue or count your fee.\n");
                break;
            case 'b' :printf("How pound beet do you need\n");
                      scanf("%d",&beet_num);
                      beet_price = beet_num * BEET;
                      printf("OK! you select %d pound beet, it will take you %.2f$\n",beet_num,beet_price);
                      printf("you can continue or count your fee.\n");
                break;
            case 'c' :printf("How pound carrot do you need\n");
                      scanf("%d",&carrot_num);
                      carrot_price = carrot_num * CARROT;
                      printf("OK! you select %d pound carrot, it will take you %.2f$\n",carrot_num,carrot_price);
                      printf("you can continue or count your fee.\n");
                break;
            case 'q' :printf("Do you need transport?(1 is yes 0 is no)\n");
                      scanf("%d",&transport);
                      goto count;
                      
            default :printf("You should enter others!\n");
            
        }
        
        
    }
    
    count: total_num = globe_artichoke_num + beet_num + carrot_num;
    if (transport)
    {
        if (total_num <= 5)
            fare = UNDER_5_TRANSPORT;
        else if (total_num < 20)
            fare = UNDER_20_TRANSPORT;
        else fare = GTE_20_TRANSPORT + total_num * GTE_20_TRANSPORT_ADD;
    }
    
    total_price = globe_artichoke_price + beet_price + carrot_price;
    
    if (total_price >= DISCOUNTS)
        discounts = total_price * DISCOUNTS_LV;
    else discounts = 0;
    
    final_total_price = total_price - discounts;
    
    putchar('\n');
    printf("----------------------------------------\n");
    
    if (globe_artichoke_price != 0)
    {   
        printf(" globe artichoke:%d pound\n",globe_artichoke_num);
        printf("-----------------%.2f$\n",globe_artichoke_price);
    }
    if (beet_price != 0)
    {
        printf(" beet:%d pound\n",beet_num);
        printf("-----------------%.2f$\n",beet_price);
    }
    if (carrot_price != 0)
    {
        printf(" carrot:%d pound\n",carrot_num);
        printf("-----------------%.2f$\n",carrot_price);
    }
    
    printf("total price:%.2f$\n",total_price);
    printf("discounts:%.2f$\n",discounts);
    printf("transport fare %.2f$\n",fare);
    printf("You need pay %.2f$\n",final_total_price + fare);
    
    printf("----------------------------------------\n");
    
    printf("\nSee you next time!\n");
    
    return 0;
}