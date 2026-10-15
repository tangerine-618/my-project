#include<stdio.h>

int main()
{
    /*

    绝对路径
    以盘符开始，c:\aaa\a.tet

    相对路径
    参照物：当前项目
    不以盘符开始 aaa\a.tet

    路径是以字符串的形式来表示的

    \ : 转义字符

    */

    //printf("\\");

    //printf("\"");

    //定义字符串表示文件路径
    char* file="c:\\aaa\\a.tet";
    printf("%s\n",file);


    return 0;
}