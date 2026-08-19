#include<stdio.h>

int main()
{
    long long res=0;
    for(int i=1;i<=10;i++)
    {
        long long row=1;
        for(int j=1;j<=i;j++)
        {
            row=row*i;

        }
        res=res+row;
    }
printf("%lld",res);


    return 0;
}