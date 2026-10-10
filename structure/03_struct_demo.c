#include<stdio.h>

typedef struct jjy
{
    char name[100];
    int attact;
    int defense;
    int blod;

}ju;

int main()
{
    /*
    定义一结构体表示角色人物
    属性：姓名，攻击力，防御力，血量
    要求：把三个人物放到数组当中并遍历数组
    */
    ju role1={"姜黎非",90,100,100};
    ju role2={"露芜衣",90,100,90};
    ju role3={"苏绿夏",100,100,100};

    ju role[3]={role1,role2,role3};

    for (int i = 0; i < 3; i++)
    {
        ju stemp=role[i];
        printf("鞠婧祎饰演角色%s,攻击力:%d,防御力:%d,血量:%d\n",stemp.name,stemp.attact,stemp.defense,stemp.blod);
    }
    
    

}