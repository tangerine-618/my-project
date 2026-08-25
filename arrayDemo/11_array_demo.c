#include<stdio.h>

int binarysearch (int arr[],int len,int num);

int main()
{
    //定义
    int arr[]={7,23,79,81,103,127,131,147};
    int len=sizeof(arr)/sizeof(int);
    int num=131;
    //调用函数查找数据
    int index=binarysearch (arr,len,num);
    //打印
    printf("%d",index);

    return 0;
}
//定义函数
//利用二分查找法查找数据
//找到了返回真实的索引，没找到返回-1
int binarysearch (int arr[],int len,int num)
{
    //min max mid为索引数
    int min=0;
    int max=len-1;
    
    while (min<=max)
    {
        int mid=(min+max)/2;//放到内部
        if (arr[mid]<num)
        {
            min=mid+1;
        }
        else if (arr[mid]>num)
        {
            max=mid-1;
        }
        else// (=)
        {
            return mid;
        }
    }
    return -1;
}
//二分查找可以提高效率
//前提条件是数据必须有序
//如果数据是乱的，先排序再用二分查找得到的索引没有实际意义，
//只能确定当前数字在数组中是否存在，因排序之后数字位置可能发生变化
