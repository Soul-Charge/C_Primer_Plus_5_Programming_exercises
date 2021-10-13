#include <stdio.h>

int main (void)
{
    int num,even_num,odd_num,num_of_en,num_of_on;
    num = even_num = odd_num = num_of_en = num_of_on = 0;
    
    printf("输入一组数，用0来结束\n");
    
    for ( scanf("%d",&num);num != 0;scanf("%d",&num))
    {
        if(num % 2 == 0)
        {
            even_num += num;
            num_of_en++;
        }
        else if (num % 3 == 0)
        {
            odd_num += num;
            num_of_on++;
        }
    }   
    printf("偶数有%d个，它们的平均值为%d。奇数有%d个，它们的平均值为%d。\n",
        num_of_en,even_num / num_of_en,num_of_on,odd_num / num_of_on); //不要使除数为0
    
    return 0;
}
//0x011119F6 处有未经处理的异常(在 test1.exe 中): 0xC0000094: Integer division by zero。 出现了 