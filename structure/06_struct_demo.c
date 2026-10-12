#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//定义一个景点的结构体
struct spot
{
    char name[10];
    int count;
};

int main()
{
    /*
    某班组织郊游，在ABCD四个景点择其一
    班上80个同学投票，找出票数最多的景点
    PS：
    投票用随机数模拟
    如果多个景点票数一样的话，A优先于B,B优先于C，C优先于D
    */

   //定义一个数组存景点
   struct spot arr[4]={{"A",0},{"B",0},{"C",0},{"D",0}};

   //模拟学生投票
   srand(time(NULL));

   for(int i=0;i<80;i++)
   {
    int choose=rand()%4;
    arr[choose].count++;
   }

   //遍历数组
   for(int i=0;i<4;i++)
   {
    printf("景点名:%s,景点人数:%d\n",arr[i].name,arr[i].count);
   }


   //找和定位最大值(这是我改的更简洁的呢)
   struct spot max=arr[0];
   for(int i=0;i<4;i++)
   {   
    if(arr[i].count>max.count)
    {
        max=arr[i];
    }
   }

   printf("票数最多的景点为:%s\n",max.name);

   /*
   这是示范
   // 找最大值
    int max = arr[0].count;
    for (int i = 1; i < 4; i++)
    {
        struct spot temp = arr[i];
        if (temp.count > max)
        {
            max = temp.count;
        }
    }

    // 遍历数组，看谁的票数刚好是最大值
    for (int i = 0; i < 4; i++)
    {
        struct spot temp = arr[i];
        if (temp.count == max)
        {
            printf("投票最多的景点为：%s，共计： %d张票\n", temp.name, temp.count);
            break;
        }
    }

   */
 
    return 0;
}

/*

内存对齐：
不管是结构体，还是普通的变量都存在内存对齐
规则：
只能放在自己类型整数倍的的内存地址上
即  内存地址/占用字节=结果可以整除

举例：
int 存放的位置int存放的位置:内存地址一定能被4整除
long long存放的位置:内存地址一定能被8整除
double存放的位置:内存地址一定能被8整除

结构体的内存对齐：
结构体在上面的基础上又多了一条，结构体的总大小，是最大类型的整数倍(用来确定最后一个数据补位的情况)
切记！！
对齐的时候会补空白字节，但是不会改变原本字节的大小。char补位之后，本身还是1个字节

心得：
我们会把小的数据类型，写在最上面，大的数据类型，写在最下面 (节约空间)

*/