#include<stdio.h>
#include<string.h>
int main()
{
    /*
    键盘录入一个字符串，统计该字符串中大写字母字符，小写字母字符，数字字符出现的次数
    */

    //键盘录入一个字符串
    printf("请录入一个字符串:\n");
    char str[100];
    scanf("%s",str);
    printf("确认此字符串:%s\n",str);

    int bigcount=0;
    int smallcount=0;
    int numcount=0;

    int len=strlen(str);
    for (int i = 0; i < len; i++)
    //for (int i = 0; i < strlen(str); i++)有一点不严谨
    {
        char c=str[i];
        if(c>='a'&&c<='z')
        {
            smallcount++;
        }
        if(c>='A'&&c<='Z')
        {
            bigcount++;
        }
        if(c>='0'&&c<='9')
        {
            numcount++;
        }

    }
    printf("大写字母出现了%d次\n",bigcount);
    printf("小写字母出现了%d次\n",smallcount);
    printf("数字出现了%d次\n",numcount);
      
}