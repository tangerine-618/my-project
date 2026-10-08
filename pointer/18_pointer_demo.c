#include<stdio.h>

int add(int num1,int num2);
int subtract(int num1,int num2);
int multiply(int num1,int num2);
int divide(int num1,int num2);

int main()
{
    /*
    定义加减乘除四个函数
    用户键盘录入三个数字
    前二表示参与计算的数字
    第三个表示调用的函数
    1加2减3乘4除
    细节：只有形参完全相同而且返回值也要一样的函数，才能放到同一个函数指针数组当中
    */
   //1.定义一个数组去装四个函数的指针
   //函数指针数组
   int (*arr[4])(int,int)={add,subtract,multiply,divide};
   
   //用户键盘录入三个数据
   int num1;
   int num2;
   printf("请输入两个数字参与计算：\n");
   scanf("%d%d",&num1,&num2);
   
   int choose;
   printf("请录入一个数组表示要进行的计算：\n");
   scanf("%d",&choose);
   //根据用户选择来调用不同的函数
   int res=(arr[choose-1])(num1,num2);//还是调用函数的格式add(num1,num2)
   
   printf("%d\n",res);
 
   return 0;
}
int add(int num1,int num2)
{
   return num1+num2;
}
int subtract(int num1,int num2)
{
   return num1*num2;
}
int multiply(int num1,int num2)
{
   return num1*num2;
}
int divide(int num1,int num2)
{
   return num1/num2;
}
