#include<stdio.h>

int main()
{
    for(int i=2;i<100;i++)
    {
        
    int count=0;
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {
            count++;
            break;
        }
    
    }
    if(count==0)
    {
        printf("%d是质数",i);
    }
    else
    {
        printf("%d不是质数",i);
    }

    }
    



    return 0;
}