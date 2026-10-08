#include<stdio.h>
int main()
{
    //利用指针遍历数组
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(int);
    //获取数组指针，实际获取的数组首地址
    int*p1=arr;//arr退化成&arr[0];详见12
    int*p2=&arr[0];

    printf("%p\n",p1);
    //printf("%p\n",arr);
    printf("%p\n",p2);
    //printf("%p\n",&arr[0]);

    //利用循环和指针遍历数组获取数组里的每一个元素
    for (int i = 0; i < len; i++)
    {
        printf("%d\n",*p1);
        
        p1++;
        // 可直接printf("%d\n",*(p1++));
        //                就是 *p1++

    }
    return 0;
    
}