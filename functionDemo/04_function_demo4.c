#include<stdio.h>

// 返回值类型 函数名（形参）
// {
//      函数体；
//      return 返回值；
// }

int sum(int base,int addation)
{
    int sum=base+addation;
    return sum;
}

int main()
{
    int score1=sum(93,10);
    int score2=sum(87,9);

    if(score1>score2)
    {
        printf("小猫");
    }
    else if(score1<score2)
    {
        printf("小狗");
    }
    else
    {
         printf("小猫小狗");
    }

    return 0;
}