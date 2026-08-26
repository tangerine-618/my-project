#include<stdio.h>

int main()
{
    //定义数组存储数据
    //利用冒泡排序把数组中数据按升序排列

    //双重循环本质：就是把内循环重复执行N次
    //先看内循环作用

    //内循环：找到本次循环的较大值，再把较大值放到最右边
    //外循环：把上面这个动作重复四次
    
    int arr[]={3,5,2,1,4};
    int len=sizeof(arr)/sizeof(int);

    for (int i=0;i<len-1;i++)
    {
        for (int j=0;j<len-1-i;j++)
      {
    if (arr[j]>arr[j+1])
    {
        int num=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=num;
    }
       }

    }

    
    for (int i=0;i<len;i++)
{
    printf("%d ",arr[i]);
}
   

    return 0;
}