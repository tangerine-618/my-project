#include<stdio.h>
int main()
{
    /*
    定义一个数组储存5个学生的名字并进行遍历

    字符串的底层其实就是字符数组
    把多个字符数组再放到一个大的数组当中
    二维数组
    */

    //定义一个二维数组，存储多个学生的名字
    char strarr1[5][100]=
    {
        "jujingyi",
        "leichuxia",
        "sulvxia",
        "hanyunxi",
        "adai"

    };
    //遍历二维数组
    for (int i = 0; i < 5; i++)
    {
        char* str=strarr1[i];
        printf("%s\n",str);
    }
    

    //第二种方式

    //把五个字符串的指针放到同一个数组当中
    //指针数组
    char* strarr2[5]=
    {
        "jujingyi",
        "leichuxia",
        "sulvxia",
        "hanyunxi",
        "adai"

    };
    //遍历指针数组
    for (int i = 0; i < 5; i++)
    {
        char* str=strarr2[i];
        printf("%s\n",str);
    }
//这里在各自的循环里用str接收


}