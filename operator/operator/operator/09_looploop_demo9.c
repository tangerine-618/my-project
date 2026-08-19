#include<stdio.h>

int main()
{
    int number=17;
    int count=0;
    for(int i=2;i<number;i++)
    {
        if(number%i==0)
        {
            count++;
            break;
        }
    
    }
    if(count==0)
    {
        printf("%d是质数",number);
    }
    else
    {
        printf("%d不是质数",number);
    }



    return 0;
}