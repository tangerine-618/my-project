#include<stdio.h>

// 返回值类型 函数名（形参）
// {
//      函数体；
//      return 返回值；
// }

int sum(int base,int addation)//这里的sum是函数名
{
    int sum=base+addation;//这里的sum是变量名，和第9行的sum不一样，一般应该用不同的字母标示
    return sum;//返回变量sum本身，将计算结果带回调用处
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