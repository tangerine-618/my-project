#include<stdio.h>

int main()
{
    /*

    打开文件：fopen

    写出数据：fgetc 一次读一个字符，读不到返回-1
             fgets 一次读一行，读不到返回null
             fread 一次读多个

    关闭文件：fclose
    
    C:\Users\zhang\Desktop\file618.txt
    文件名要打全

    */

    //1.打开文件
    FILE* file=fopen("C:\\Users\\zhang\\Desktop\\file618.txt","r");

    //2.读取数据 一次读一个字符
    //fgets细节：每次读取一行数据，以换行符为准，读不到返回null

    //第一种获取

    // char arr[1024];

    // char* str1=fgets(arr,1024,file);
    // printf("%s",str1);

    // char* str2=fgets(arr,1024,file);
    // printf("%s",str2);

    // char* str3=fgets(arr,1024,file);
    // printf("%s",str3); 
   
    //第二种利用循环
    char arr[1024];
    char* str;
    while ((str=fgets(arr,1024,file))!=NULL)
    {
        printf("%s",str); 
    }
    

    //3.关闭文件
    fclose(file);
    
    return 0;
}