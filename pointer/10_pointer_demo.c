//指针数据类型：跟指向的空间中数据的类型是保持一致的
#include<stdio.h>


int main()
{
    //定义变量
    int a=10;
    int b=20;
    //定义一级指针
    int* p=&a;
    //定义二级指针
    int** pp=&p;
    //作用一：利用二级指针修改一级指针里面的内存地址
    * pp=&p;


    
    //输出打印
    printf("%p\n",&a);
    printf("%p\n",&b);
    printf("%p\n",p);
    //利用二级指针获取到变量中记录的数据
    printf("%d\n",**pp);


    return 0;
}