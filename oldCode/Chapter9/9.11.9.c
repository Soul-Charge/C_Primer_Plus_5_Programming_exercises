void to_base_n (unsigned long n,short b) //ʮ����תn���� ��b[2,10]
{
      int r;
      r = n % b;
      if (n >= b)
            to_base_n(n / b,b);
      printf("%d",r);
      return;
}