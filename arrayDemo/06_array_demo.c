#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int arr[10]={0};
    int len=sizeof(arr)/sizeof(int);
    srand(time(NULL));

    for (int i=0;i<len;i++)
    {
        int num=rand()%100+1;
        arr[i]=num;
        //arr[i]=rand()%100+1;也可以
        //但用num可以方便调试，方便重复使用，初学分开写清晰易理解
    }
    int sum=0;

    for (int i=0;i<len;i++)
    {
      sum=sum+arr[i];
    }
    printf("和为%d\n",sum);



    return 0;
}