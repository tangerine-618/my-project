#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    malloc   申请空间（连续）
    calloc   申请空间+数据初始化
    realloc  修改空间大小
    free     释放空间

    stdlib
    */

    //1.利用malloc函数申请一片连续的空间
    //需求：申请一片空间，存储10个int类型的整数
    //返回这片空间的首地址
    int* p=malloc(10*sizeof(int));

    //int* p=calloc(10,sizeof(int));
    
    printf("%p\n",p);

    //2.赋值
    for(int i=0;i<10;i++)
    {
        //第一种赋值
        *(p+i)=(i+1)*10;
        //第二种赋值
        p[i]=(i+1)*10;
        //p[i]-->*(p+i) 
    }

    //3.扩容20个int类型的整数
    int* pp=realloc(p,20*sizeof(int));

    //4.遍历
    for(int i=0;i<20;i++)
    {
        //printf("%d\n",*(p+i));
        printf("%d\n",pp[i]);
    }

    //5.释放空间
    //如果申请的空间不在继续使用了，记得释放空间
    free(pp);
    
    return 0;
}