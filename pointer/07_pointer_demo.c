#include<stdio.h>


int main()
{
    /*指针运算有意义的操作
    指针和整数进行加减（每次移动一个步长
    指针和指针进行减操作（间隔步长
    */

   //前提条件：保证内存空间是连续的
   //数组
   int arr[]={1,2,3,4,5,6,7,8,9,10};

   //获取0索引的内存地址
   int*p1=&arr[0];
   //通过内存地址（指针P)获取数据
   printf("%d\n",*p1);
   //获取后面的数据
   printf("%d\n",*(p1+1));
   //获取地址
   printf("%p\n",p1);

   //获取5索引的内存地址
   int*p2=&arr[5];
   //通过内存地址（指针P)获取数据
   printf("%d\n",*p2);
   //获取地址
   printf("%p\n",p2);
   //p2-p1间隔多少步长
   printf("%td\n",p2-p1);
   //printf("%d\n",p2-p1);
   printf("%p\n",p2);
   printf("%p\n",p1);

    return 0;
}