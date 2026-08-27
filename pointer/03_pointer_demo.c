#include<stdio.h>
int*method();
int main()
{
    int*p=method();
    
    printf("拖点时间\n");
    printf("拖点时间\n");
    printf("拖点时间\n");
    printf("拖点时间\n");
    printf("拖点时间\n");

    printf("%d",*p);




    return 0;
}
int*method()
{
    static int a=10;//此时的变量一直保存到程序结束
    return &a;
}