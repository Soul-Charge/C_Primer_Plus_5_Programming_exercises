#include <stdio.h>

int main (void)
{
    int num,even_num,odd_num,num_of_en,num_of_on;
    num = even_num = odd_num = num_of_en = num_of_on = 0;
    
    printf("����һ��������0������\n");
    
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
    printf("ż����%d�������ǵ�ƽ��ֵΪ%d��������%d�������ǵ�ƽ��ֵΪ%d��\n",
        num_of_en,even_num / num_of_en,num_of_on,odd_num / num_of_on); //��Ҫʹ����Ϊ0
    
    return 0;
}
//0x011119F6 ����δ��������쳣(�� test1.exe ��): 0xC0000094: Integer division by zero�� ������ 