#include<stdio.h>

int main()
{
    //利用指针去获取变量中的数据、存储数据
    int a=10;
    //1.定义一个指针去指向变量a
    int*p=&a;
    //利用指针去获取变量中的数据
    printf("%d\n",*p);
    //利用指针去存储数据修改数据
    *p=200;
    //输出打印
    printf("%d\n",*p);
    printf("%d\n",a);
//看存储空间
    char c='a';
    char*p1=&c;

    long long n=100;
    long long*p2=&n;
    
    printf("%zu\n",sizeof(p1));
    printf("%zu\n",sizeof(p2));

    return 0;
}