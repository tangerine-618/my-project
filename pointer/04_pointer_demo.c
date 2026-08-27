#include<stdio.h>

void getmaxandmin(int arr[],int len,int* max,int* min);

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(int);

    int max=arr[0];
    int min=arr[0];

    getmaxandmin(arr,len,& max,& min);

    printf("数组的最大值为：%d\n",max);
    printf("数组的最小值为：%d\n",min);


    return 0;
}
void getmaxandmin(int arr[],int len,int* max,int* min)
{
    *max=arr[0];
    for (int i = 0; i < len; i++)
    {
       if (*max<arr[i])
       {
        *max=arr[i];
       }
    }
    
    *min=arr[0];
     for (int i = 0; i < len; i++)
    {
       if (*min>arr[i])
       {
        *min=arr[i];
       }
    }
}