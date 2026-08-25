#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    //录入
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(int);
    //定义种子
    srand(time(NULL));
    
    for (int i=0;i<len;i++)
    {
        //随机生一个索引数
        int index=rand()%len;
        //        rand()%5
        //与随机索引互换
        int temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
      
    }

    for (int i=0;i<len;i++)
    {
        printf("%d\n",arr[i]);
      
    }
    
    



    return 0;
}