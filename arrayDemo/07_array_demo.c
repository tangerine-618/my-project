#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int contains (int arr[],int len,int num);//加上int

int main()
{
    int arr[10]={0};
    int len=sizeof(arr)/sizeof(int);
    srand(time(NULL));
    //遍历数组
    for (int i=0;i<len;)
    {
        int num=rand()%100+1;
        //数据存入前先做判断，不重复再添加
        int flag=contains (arr,len,num);//不加int
        if(!flag)
        {
            arr[i]=num;
            printf("%d\n",arr[i]);
            i++;
        }
        
    }
    //求和
    int sum=0;

    for (int i=0;i<len;i++)
    {
      sum=sum+arr[i];
    }
    
    //求平均值
    int avg=sum/len;
    //double avg = (double)sum / len;   得到带小数的平均数
    //求大于平均数的个数
    int count=0;
    for (int i=0;i<len;i++)
    {
        if (arr[i]<avg)
        count++;
    }
    //输出
    printf("和为%d\n",sum);
    printf("平均数为%d\n",avg);
    printf("小于平均数的数有%d\n个",count);

    return 0;
}
//判断num在函数当中是否存在
//0假 1等真
//存在返回1
//不存在返回0
int contains (int arr[],int len,int num)//加上int
{
    for (int i=0;i<len;i++)
    {
        //i:依次表示数组中的每一个索引，
        //arr[i]:依次表示数组里面的每一个数据
        //将新生成的数与数组中的旧数依次比较
        if (arr[i]==num)
        return 1;
    }
    return 0;
}
