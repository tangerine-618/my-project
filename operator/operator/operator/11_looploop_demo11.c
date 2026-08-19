#include<stdio.h>

int main()
{
    for (int i=0;i<=1000;i++)
    {
        int num=i;
        int sum=0;
        while (num!=0)
        {
            int temp=num%10;
            sum=sum+temp;
            num=num/10;
        }
      if(sum==15)
    {
        printf("%d\n",i);

    }  

    }
    return 0;
}