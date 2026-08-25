#include<stdio.h>

void printfArr(int arr[],int len);

int main()
{
    //定义数组
    int arr[5]={0};
    int len=sizeof(arr)/sizeof(int);
    //录入
    for (int i=0;i<len;i++)
    {
        printf("请输入第%d个数:",i+1);
        scanf("%d",&arr[i]);
    }
    //遍历数组
    printfArr(arr,len);
    //反转
    int j=0;
    int i=len-1;
    while(j<i)
    {
        int num=arr[i];
        arr[i]=arr[j];
        arr[j]=num;
        j++;
        i--;
    }

    //再次遍历数组
    printfArr(arr,len);


    return 0;
}
//用函数遍历数组
void printfArr(int arr[],int len)
{
    for (int i=0;i<len;i++)
    {
       printf("%d\n",arr[i]);
    }
}