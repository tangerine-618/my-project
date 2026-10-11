#include<stdio.h>
#include<string.h>

struct message
{
    char phone[15];
    char email[100];
};

struct student
{
    char name[100];
    int age;
    char gender;
    double height;
    struct message msg;
};

int main()
{
    /*
    定义一个结构体表示学生
    名字，年龄，性别，身高，联系方式
    联系方式message也是一个结构体
    手机号，电子邮箱
    */

    //定义
    struct student stu;

    //赋值
    strcpy(stu.name,"鞠婧祎");
    stu.age=30;
    stu.gender='f';
    stu.height=160;
    
    strcpy(stu.msg.phone,"12345678910");
    strcpy(stu.msg.email,"12345678910");

    //打印
    printf("学生的姓名为%s\n",stu.name);
    printf("学生的年龄为%d\n",stu.age);
    printf("学生的性别为%c\n",stu.gender);
    printf("学生的身高为%lf\n",stu.height);
    printf("学生的手机号为%s\n",stu.msg.phone);
    printf("学生的电子邮箱为%s\n",stu.msg.email);

    //另一种赋值方式
    struct student stu2={"露芜衣",31,'f',161,{"12345678901","12345678901"}};

    //打印
    printf("学生的姓名为%s\n",stu2.name);
    printf("学生的年龄为%d\n",stu2.age);
    printf("学生的性别为%c\n",stu2.gender);
    printf("学生的身高为%lf\n",stu2.height);
    printf("学生的手机号为%s\n",stu2.msg.phone);
    printf("学生的电子邮箱为%s\n",stu2.msg.email);

    return 0;

}
