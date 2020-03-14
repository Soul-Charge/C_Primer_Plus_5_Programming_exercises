#include <stdio.h>
#include <stdlib.h>
// 商品价格
#define ARTICHOKE_PRICE 1.25 // 每磅单价(美元)
#define BEET_PRICE      0.65
#define CARROT_PRICE    0.89
#define DISCOUNT_PRICE  100  // 100美元开始打折
#define DISCOUNT_RATE   0.05 // 折扣率
// 运费
#define FREIGHTSTD_1    5.0  // 运费标准1：5磅及以下
#define FREIGHTSTD_2    20.0 // 运费标准2： 超过5磅不足20磅
#define FREIGHT_1       3.50 // 5磅及以下收3.5
#define FREIGHT_2       10.0 // 5磅以上20一下
#define FREIGHT_3BASE   8.0  // 20磅以上先收基础费用
#define FREIGHT_3ADD    0.1  // 每磅加收

double GetPound(char *message);

void ShowMenu(void);
char GetChoice(void);

int main(void)
{
    char   choice;
    double dArtichokePounds = 0;
    double dBeetPounds      = 0;
    double dCarrotPounds    = 0;
    double dTotalPounds     = 0;
    double dArtichokePrice  = 0;
    double dBeetPrice       = 0;
    double dCarrotPrice     = 0;
    double dTotalPrice      = 0;
    double dDiscountVal     = 0;
    double dFreight         = 0;

    ShowMenu();
    while (1)
    {
        printf("Enter your choice to order(q to account): ");
        switch (choice = GetChoice())
        {
        case 'a':
            dArtichokePounds = GetPound("Enter the pounds of artichokes: ");
            printf("You have ordered %.2lf pounds artichoke\n", dArtichokePounds);
            break;
        case 'b':
            dBeetPounds = GetPound("Enter the pounds of beets: ");
            printf("You have ordered %.2lf pounds beets\n", dBeetPounds);
            break;
        case 'c':
            dCarrotPounds = GetPound("Enter the pounds of carrot: ");
            printf("You have ordered %.2lf pounds carrot\n", dCarrotPounds);
            break;
        case 'q': // 计算账单并显示
            // 判断是否没有订购
            if (!dArtichokePounds && !dBeetPounds && !dCarrotPounds)
            {
                puts("You ordered nothing.");
                goto end;
            }
            // 计算start
            dArtichokePrice = dArtichokePounds * ARTICHOKE_PRICE;
            dBeetPrice      = dBeetPounds * BEET_PRICE;
            dCarrotPrice    = dCarrotPounds * CARROT_PRICE;
            dTotalPrice     = dArtichokePrice + dBeetPrice + dCarrotPrice;
            dTotalPounds    = dArtichokePounds + dBeetPounds + dCarrotPounds;
            // 计算折扣
            if (dTotalPrice >= DISCOUNT_PRICE)
                dDiscountVal = dTotalPrice * DISCOUNT_RATE;
            // 计算运费
            if (dTotalPounds <= FREIGHTSTD_1)
                dFreight = 3.50;
            else if (dTotalPounds < FREIGHTSTD_2)
                dFreight = 10.0;
            else
                dFreight = FREIGHT_3BASE + FREIGHT_3ADD * dTotalPounds;
            // 计算end
            // 显示账单
            puts("=================Your order=================");
            if (dArtichokePounds)
            {
                printf("artichoke");
                printf("--------------------------");
                printf("%.2lf $/lb\n", ARTICHOKE_PRICE);
                printf("%37.2lf pounds\n", dArtichokePounds);
                printf("%42.2lf $\n", dArtichokePrice);
                putchar('\n');
            }
            if (dBeetPounds)
            {
                printf("beet");
                printf("-------------------------------");
                printf("%.2lf $/lb\n", BEET_PRICE);
                printf("%37.2lf pounds\n", dBeetPounds);
                printf("%42.2lf $\n", dBeetPrice);
                putchar('\n');
            }
            if (dCarrotPounds)
            {
                printf("carrot");
                printf("-----------------------------");
                printf("%.2lf $/lb\n", CARROT_PRICE);
                printf("%37.2lf pounds\n", dCarrotPounds);
                printf("%42.2lf $\n", dCarrotPrice);
                putchar('\n');
            }
            // 以上总价和折扣
            puts("--------------------------------------------");
            printf("Subtotal");
            printf("%34.2lf $\n", dTotalPrice);
            if (dDiscountVal)
            {
                printf("%+34.2lf $(%.0lf%% off)\n", -dDiscountVal, DISCOUNT_RATE * 100);
                printf("%42.2lf $\n", dTotalPrice - dDiscountVal);
            }
            // 运费
            puts("--------------------------------------------");
            printf("TotalPounds");
            printf("%26.2lf pounds\n", dTotalPounds);
            printf("Freight");
            printf("%35.2lf $\n", dFreight);
            // 合计
            puts("--------------------------------------------");
            printf("Total");
            printf("%37.2lf $\n", dTotalPrice - dDiscountVal + dFreight);
            puts("============================================");
            goto end;
            break;
        default:
            if (choice != '\n')
                printf("%c is not a valid input.\n", choice);
            break;
        }
    }

    end:puts("Bye!");
    system("pause");
    return 0;
}

void ShowMenu(void)
{
      puts("|----------------------------------|");
      puts("|      ABC Mail Order Grocery      |");
      puts("|----------------------------------|");
      puts("|   Goods       |     Price        |");
      puts("|----------------------------------|");
    printf("| (a)artichoke   |    %.2lf$/lb     |\n", ARTICHOKE_PRICE);
    printf("| (b)beet        |    %.2lf$/lb     |\n", BEET_PRICE);
    printf("| (c)carrot      |    %.2lf$/lb     |\n", CARROT_PRICE);
      puts("|----------------------------------|");
}

char GetChoice(void)
{
    char ch;
    if ((ch = getchar()) != '\n')
        while (getchar()  != '\n')
            continue;
    return ch;
}

// 获取质量(英镑数)
// message: 输入的提示消息
double GetPound(char * message)
{
    double val;
    char ch;

    while (1)
    {
        printf(message);
        if ((ch = getchar()) != '\n')
        {
            ungetc(ch, stdin); // 将用于检测的输入放回
            if (scanf("%lf", &val) != 0) // 读取成功就退出
            {
                while (getchar() != '\n') // 清空剩余的输入
                    continue;
                break;
            }
            // 读取失败则把输入清空并提示
            putchar('"');
            while ((ch = getchar()) != '\n')
                putchar(ch);
            putchar('"');
            puts("is not a valid input.");
        }
    }
    return val;
}