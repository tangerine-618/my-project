#include<stdio.h>

void myswap(int* p1,int* p2);

int main()
{
    int a=10;
    int b=20;
    printf("改前%d,%d",a,b);
    myswap(&a,&b);
    printf("改后%d,%d",a,b);

    return 0;
}
void myswap(int* p1,int* p2)
{
    
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}