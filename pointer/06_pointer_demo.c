#include<stdio.h>


int main()
{
    int a=10;
    int*p=&a;

    printf("%p\n",p);
    printf("%p\n",p+1);
    printf("%p\n",p-1);
    //-+是移动的步长，移动的步长和数据类型有关

    return 0;
}