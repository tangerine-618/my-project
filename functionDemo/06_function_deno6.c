#include <stdio.h>
#include <math.h>   // 必须加这一行

int main()
{
    
    /*
    math.h:
    pow() 幂
    sqrt() 平方根
    ceil() 向上取整
    floor() 向下取整
    abs() 绝对值
    不会格式可以看提示
    time.h:
    time() 获取当前时间
    */
    double res1=pow(2.0,3.0);
    printf("%lf\n",res1);
    double res2=sqrt(4.0);
     printf("%lf\n",res2);

    return 0;
}