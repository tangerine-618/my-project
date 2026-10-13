#include<stdio.h>
#include<string.h>

//定义结构体并取别名
typedef struct student 
{
    char name[100];
    int age;
}s;

//因为函数用到了结构体，所以函数声明必须写在结构体下面，否则会报错
void method1(s st);
void method2(s* st2);

int main()
{
    //定义一个学生
    s stu;
    //给学生赋初始值
    strcpy(stu.name,"aaa");
    stu.age=0;
    //输出打印初始数据
    printf("学生初始姓名为:%s,初始年龄为:%d\n",stu.name,stu.age);
    //调用method1
    method1(stu);
    printf("调用method1后学生姓名为:%s,年龄为:%d\n",stu.name,stu.age);
    //调用method2
    method2(&stu);
    printf("调用method2后学生姓名为:%s,年龄为:%d\n",stu.name,stu.age);
}
//值传递
void method1(s st)
{
    printf("接收到学生初始姓名为:%s,初始年龄为:%d\n",st.name,st.age);
    printf("请输入修改的学生名字:");
    scanf("%s",st.name);
    printf("请输入修改的学生年龄:");
    scanf("%d",&(st.age));
    printf("函数method1修改后学生姓名为:%s,年龄为:%d\n",st.name,st.age);
}
/*
如果函数中写的是结构体类型的变量，相当于是定义了一个新变量
此时是把main函数中stu的数据传给了method函数，并把stu的数据赋值给了新变量st
在函数中仅仅修改了变量st的值，对main函数stu的值没有进行修改
*/
//址传递
void method2(s* st2)//st2可改为p理解，为变量名接收stu内存地址
{
    printf("接收到学生初始姓名为:%s,初始年龄为:%d\n",(*st2).name,(*st2).age);
    printf("请输入修改的学生名字:");
    scanf("%s",(*st2).name);
    printf("请输入修改的学生年龄:");
    scanf("%d",&((*st2).age));
    printf("函数method1修改后学生姓名为:%s,年龄为:%d\n",(*st2).name,(*st2).age);
    
    return 0;
}

