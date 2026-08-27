#include<stdio.h>
int* method();
int main()
{
    /*野指针：指针指向的空间未分配
    悬空指针：指针指向的空间已分配，但是被释放了
    */

    //不野指针
   int a=10;
   int*p1=&a;
   printf("%p\n",p1);
   printf("%d\n",*p1);
   //野指针
   int*p2=p1+10;
   printf("%p\n",p2);
   printf("%d\n",*p2);

   //悬空指针
   int*p3=method();
   printf("依旧拖时间\n");
   printf("%p\n",p3);
   printf("%d\n",*p3);

    return 0;
}
//当要返回一个地址（指针）时，函数名前要加*
//表示这个函数返回一个int类型的指针
int* method()
{
    static int num=10;
    int*p=&num;
    return p;
}