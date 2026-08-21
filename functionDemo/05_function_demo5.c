#include<stdio.h>
double getarea(double length,double width)
{
    double area=length*width;
    return area;

}

int main()
{
    double area1=getarea(3.1,2.5);
    double area2=getarea(2.4,1.2);
    if(area1>area2)
    {
        printf("第一个面积大");
    }
    else if (area1<area2)
    {
        printf("第二个面积大");
    }
    else
    {
        printf("面积一样大");
    }
    
    return 0;
}