#include<stdio.h>
#include<string.h>

/*
结构体：
自定义的数据类型
就是由很多数据组合成的一个整体
每一个数据都是结构体的成员
书写位置：
函数里面：局部位置，只能在本函数中使用
函数外面：全局位置，在所有的函数中均可使用
*/


struct girlfriend
{
    char name[100];
    int age;
    char gender;
    double height;

};

int main()
{
    //使用结构体，定义一个女朋友类型的变量
    struct girlfriend gf1;
    strcpy(gf1.name, "jujingyi");
    gf1.age=31;
    gf1.gender='f';
    gf1.height=160;

    //输出打印
    printf("我女朋友的名字为:%s\n",gf1.name);
    printf("我女朋友的年龄为:%d\n",gf1.age);
    printf("我女朋友的性别为:%c\n",gf1.gender);
    printf("我女朋友的身高为:%lf\n",gf1.height);


    //使用结构体，定义一个女朋友类型的变量
    struct girlfriend gf2;
    strcpy(gf2.name, "jianglifei");
    gf2.age=30;
    gf2.gender='f';
    gf2.height=160;

    //输出打印
    printf("我女朋友的名字为:%s\n",gf2.name);
    printf("我女朋友的年龄为:%d\n",gf2.age);
    printf("我女朋友的性别为:%c\n",gf2.gender);
    printf("我女朋友的身高为:%lf\n",gf2.height);

}