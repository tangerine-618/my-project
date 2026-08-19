#include<stdio.h>

int main()
{
	int num;
	printf("请输入一个两位数:");
	scanf("%d",&num);
	printf("您输入的两位数是:%d\n",num);

	int ge = num % 10;
	int shi = num / 100 % 10;

	printf("%d\n",ge != 7 && shi != 7);


	return 0;
}