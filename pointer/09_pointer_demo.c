#include<stdio.h>

void swap(void* p1,void* p2,int len);

int main()
{
    /*
    void 类型的指针
    */

    //定义两个不同类型的变量
    int a=10;
    short b=20;
    //定义两个指针
    int* p1=&a;
    short* p2=&b;
    //输出打印
    printf("%d\n",* p1);
    printf("%d\n",* p2);
    /*不同类型的指针之间不能相互赋值
    void类型指针打破上面规则
    void表示没有任何类型
    好处 可以接受任意类型指针记录的内存地址
    */
   //void*p3=p1;
   //void*p4=p2;
    //缺点 无法获得变量里面的数据也不能进行加减的计算
    
    int c=100;
    int d=200;
    //long long c=100;
    //long long d=200;
    

    swap(&c,&d,4);
    //void* p1,void* p2要接收地址
    //swap(&c,&d,8);

    printf("c=%d,d=%d",c,d);//这里打印的是改后的值，&c是在取地址
    //printf("c=%lld,d=%lld",c,d);  
    //配合改多类型可用  
    return 0;
}
//用函数来交换两个变量记录的数据
//用void修改函数使其更具有通用性
void swap(void* p1,void* p2,int len)//len 为字节长度
//里面的p1 p2是形参名，只是代指，占位置，也可以起别的名
{
    //把void类型的指针转化为char类型的指针
    char* pc1=p1;
    char* pc2=p2;
    //char* pc2=(char*)p2;强制转换
    char temp=0;
    //以字节为单位，一个字节一个字节地进行交换
    for (int i = 0; i < len; i++)
    {
        temp=* pc1;
        * pc1=* pc2;
        * pc2=temp;

        pc1++;//等价*（pc1++）;先取pc1指向的值，再让指针加一
        pc2++;

    }
  
}