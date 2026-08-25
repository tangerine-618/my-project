#include<stdio.h>

int order(int arr[],int len,int num);

int main()
{
    //定义
    int arr[]={11,22,55,77,44};
    int len=sizeof(arr)/sizeof(int);
    int num=55;
    //使用
    int num2=order(arr,len,num);
    //输出索引
    printf("%d\n",num2);

    return 0;
}
//定义函数
int order(int arr[],int len,int num)
{
    for (int i=0;i<len;i++)
    {
        if (arr[i]==num)
        {
            return i;
        }
    }
    return -1;
}