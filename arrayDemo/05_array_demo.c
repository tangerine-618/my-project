#include<stdio.h>
//循环不一定要从0索引开始，如果max默认值记录的是0索引，循环可以从1开始，提高效率
//max默认值不可以为0，如果数组中所有数都是负数，循环结束最大值是0，易产生误解
//max默认值一般是数组中存在的数据，一般把0索引当默认值
int main()
{
    int arr[]={33,5,22,44,55};

    int max=arr[0];

    int len=sizeof(arr)/sizeof(arr[0]);

    for (int i=0;i<len;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
            //不可以写 int max=arr[i]。这是在创建新变量，不是更新max
        }
        //max=(max<arr[i])?arr[i]:max;想到了这个
    }
    printf("最大值是%d\n",max);


    return 0;
}