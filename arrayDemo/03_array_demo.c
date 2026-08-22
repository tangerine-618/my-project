#include<stdio.h>

int main()
{
    //获取变量的内存地址
    // int a=10;
    // printf("%p\n",&a);
    // int b=10;
    // printf("%p\n",&b);
    // int c=10;
    // printf("%p\n",&c);
    int arr[]={1,2,3};
    printf("%p\n",&arr);
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);


    return 0;
}