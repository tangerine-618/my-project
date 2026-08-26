#include<stdio.h>
//选择排序
int main()
{
    //定义
    int arr[]={3,5,2,1,4};
    int len=sizeof(arr)/sizeof(int);
    for (int i=0;i<len-1;i++)
    {
        //索引
        //第一轮：i=0 j=1 2 3 4
        //第二轮：i=1 j=2 3 4
        //第三轮：i=2 j=3 4
        //第四轮：i=3 j=4
        for (int j=1+i;j<len;j++)
        {
            if (arr[i]>arr[j])
            {
                int num=arr[i];
                arr[i]=arr[j];
                arr[j]=num;
            
            }
                    
        }
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }
    


    return 0;
}