#include<stdio.h>
struct student
{
    char name[100];
    int age;
};

int main()
{
    //定义三个学生，同时进行赋值
    struct student stu1={"jujingyi",31};
    struct student stu2={"jianglifei",30};
    struct student stu3={"sulvxia",18};
    
    //把三个学生放入数组当中
    struct student stuarr[3]={stu1,stu2,stu3};

    //遍历数组得到每一个元素
    for (int i = 0; i < 3; i++)
    {
        struct student temp=stuarr[i];
        printf("学生的信息为：姓名%s,年龄%d\n",temp.name,temp.age);
    }
    
}