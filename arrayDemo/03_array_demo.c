#include<stdio.h>

int main()
{
    //获取变量的内存地址
    int a=10;
    printf("%p\n",&a);
    int b=10;
    printf("%p\n",&b);
    int c=10;
    printf("%p\n",&c);


    return 0;
}