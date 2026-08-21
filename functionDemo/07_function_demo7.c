#include <stdio.h>
#include <stdlib.h>  

int main()
{
/*
随机数<stdlib.h>  standard library 标准库
srand()    设置种子
rand()      获取随机数
*/
srand(1);
for (int i=1;i<=10;i++)
{
int num=rand();
printf("%d\n",num);
}

    return 0;
}