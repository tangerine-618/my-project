#include<stdio.h>

int main()
{
    //定义数组并初始化
    int arr[]={1,2,3,4,5};
    //获取索引为0,2,4的元素并求和
    int num1=arr[0];
    int num2=arr[2];
    int num3=arr[4];
    int sum=num1+num2+num3;
    printf("%d\n",sum);
    //最后一个索引上的元素改为0
    printf("改前%d\n",arr[4]);
    arr[4]=10;
    printf("改后%d\n",arr[4]);

          

    return 0;
}