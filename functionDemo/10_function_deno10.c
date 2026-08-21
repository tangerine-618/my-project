#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    int num=rand()%100+1;
    int guess;

    while(1)
    {
        printf("请猜一个0~100之间的数:");
        scanf("%d",&guess);

        if(guess>num)
        {
            printf("大了");
        }
        else if(guess<num)
        {
            printf("小了");
        }
        else if(guess==num)
        {
            printf("猜中了");
            break;
        }
        
         
    }


    return 0;
}