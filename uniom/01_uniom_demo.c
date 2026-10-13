#include<stdio.h>
#include<string.h>

union moneytype
{
    int moneyi;
    double moneyd;
    char moneystr[100];
};

int main()
{
    union moneytype money; 

    //money.moneyi=100;
    //money.moneyd=1.98;
    strcpy(money.moneystr,"100万");

    //printf("%d\n",money.moneyi);
    //printf("%lf\n",money.moneyd);
    printf("%s\n",money.moneystr);

    return 0;
}