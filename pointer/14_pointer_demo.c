#include<stdio.h>
int main()
{
    /*
    二维数组定义格式二和索引遍历
    2.
    核心：事先把所有一维数组定义完毕，再放到二维数组当中
    */

    //1.定义三个一维数组
    int arr1[3]={1,2,3};
    int arr2[5]={1,2,3,4,5};
    int arr3[9]={1,2,3,4,5,6,7,8,9};

    //预先计算每一个数组真实长度
    int len1=sizeof(arr1)/sizeof(int);
    int len2=sizeof(arr2)/sizeof(int);
    int len3=sizeof(arr3)/sizeof(int);

    //定义一个数组，装所有数组的长度
    int lenarr[3]={len1,len2,len3};

    //2.把三个一维数组放到二维数组当中
    //数组的数据类型，跟内部存储的元素保持一致
    
    int* arr[3]={arr1,arr2,arr3};//相当于把一维数组的指针传递过去,这是一个指针数组 对应下面/* */中内容
    //3.利用索引遍历arr
    for(int i=0;i<3;i++)
    {
        //i:依次表示二维数组的索引
        /*
        int len=sizeof(arr[i])/sizeof(int);不可
        arr1:使用数组名进行计算的时候，退化为指向第一个元素的指针，此时不再表示数组那个整体了
        指针--内存地址 64位win 64个bit（0101...)即八个字节
        */
       
        for(int j=0;j< lenarr[i];j++)
        {
            printf("%d ",arr[i][j]);
        
        }
        printf("\n");
    }
   return 0;
}