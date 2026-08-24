#include<stdio.h>

void printfArr(int arr[],int len);

int main()
{
    /*
    数组作为函数参数要注意什么
    实际上传递的是数组的首地址，如果要在函数中对数组进行遍历的话，一定要把数组的长度传递过去
    定义处：arr表示的是完整的数组
    函数中的arr：只是一个变量，用来记录数组的首地址
    */
    //定义数组
    int arr[]={1,2,3,4,5};
    //printf("%zu\n",sizeof(arry));
    int len=sizeof(arr)/sizeof(arr[0]);
    //int len=sizeof(arr)/sizeof(int);这个也可以
    //调用函数遍历数组
    printfArr(arr,len);

    return 0;
}

void printfArr(int arr[],int len)
{
    
    for (int i=0;i<len;i++)
    {
        printf("%d\n",arr[i]);
    }
}