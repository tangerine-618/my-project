#include<stdio.h>
#include<string.h>

union moneytype
{
    int moneyi;
    double moneyd;
    char moneystr[100];
};

int main()
{
    /*
    共用体的特点：
    1.共用体也叫联合体，共同体
    2.所有的变量都使用同一个内存空间
    3.每次只能给一个变量进行赋值，因为第二次赋值时会覆盖原有的数据
    细节：存的哪里的就获取哪里的
    4.所占的内存大小=最大成员的长度（也受内存对齐影响）
    细节：以最大的单个成员的长度为准
         总大小一定是单个成员的整数倍
    */
    union moneytype money;
    
    //获取内存地址
    printf("%p\n",&(money.moneyi));
    printf("%p\n",&(money.moneyd));
    printf("%p\n",&(money.moneystr));

    //占用内存大小
    printf("%zu\n",sizeof(money.moneyi));
    printf("%zu\n",sizeof(money.moneyd));
    printf("%zu\n",sizeof(money.moneystr));
    printf("%zu\n",sizeof(money));


    //money.moneyi=100;
    //money.moneyd=1.98;
    strcpy(money.moneystr,"100万");

    //printf("%d\n",money.moneyi);
    //printf("%lf\n",money.moneyd);
    printf("%s\n",money.moneystr);

    return 0;
}