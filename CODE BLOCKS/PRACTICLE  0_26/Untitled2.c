#include<stdio.h>
#include<math.h>

int isValidTriangle(double a,double b,double c)
{
    if (a + b > c && a + c > b && b + c > a)
        return 1;//valid
    else
        return 0;//invalid
}
double calculateArea(double a,double b,double c)
{
    double a = (a + b + c) / 2;
    double area = sqrt(s * ( s - a) * ( s - b) * (s - c) );
    return area;
}
int main()
{
    double a,b,c;

    printf("enter the length of the sides of the triangle:\n");
    scanf("&lf &lf &lf",&a,&b,&c);
    if(isValidTriangle(a,b,c))
    {
        printf("the sidesform a valid triangle."\n);

        double area = calculateArea(a,b,c);
        printf("the area of the triangle is : &.2lf\n", area);
    }
    else
    {
        printf("the given sides of triangle not form valid triangle,\n");
    }
    return 0;
}
