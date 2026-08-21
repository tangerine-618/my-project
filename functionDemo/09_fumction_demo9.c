#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    //范围内取随机数
    //1.将此范围变成包头不包尾，包左不包右  1~101  7~16
    //2.尾巴减去开头  101-1=100  16-7=9

    srand(time(NULL));
    int num=rand()%100+1;
    //int num=rand()%9+7;余数0~8 统一+7 范围7~15
    printf("%d",num);    

    return 0;
}
