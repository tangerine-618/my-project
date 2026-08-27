#include<stdio.h>

int getremainder(int num1,int num2,int*res);

int main()
{
    int num1=10;
    int num2=0;
    int res=0;
    //等于零是为了防止未初始化，但也可以不赋值写成int res

    int flag=getremainder(num1,num2,&res);

    if(!flag)//flag=0,取反后变1，执行程序
    {
        printf("%d",res);
    }
    if(flag)//flag=1
    {
        printf("除数不能为0");
    }

    return 0;
}
int getremainder(int num1,int num2,int*res)
//函数需要通过指针修改外部变量，必须先有变量存在，才可以把他的地址传给函数
{
    if (num2==0)
    {
        //除数不为0 停止
        return 1;
    }
    *res=num1%num2;
    return 0;
}