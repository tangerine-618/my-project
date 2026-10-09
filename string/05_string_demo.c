#include<stdio.h>
#include<string.h>

int main()
{
    /*
    已知正确的用户名和密码，请用程序实现模拟用户登录
    总共三次机会，登录后给出相应提示
    */
    //定义两个变量表示正确的用户名和密码
        char* rightusername="jujingyi";
        char* rightpassword="jjy618";

    for (int i = 0; i <=3; i++)
    {    
        //录入
        char username[100];
        char password[100];
        printf("请输入用户名：\n");
        scanf("%s",username);
        printf("请输入密码：\n");
        scanf("%s",password);

        printf("确认用户名：%s\n",username);
        printf("确认密码：%s\n",password);
    
    
        if (!strcmp(rightusername,username)&&!strcmp(rightpassword,password))
        {
            printf("登录成功\n");
            break;
        }
        else
        {
            if (i==3)
            {
                printf("用户%s账号已被锁定\n",username);
            }
            else
            {
                printf("登录失败，剩余%d次机会\n",3-i);
            }
        }
    } 
    
}