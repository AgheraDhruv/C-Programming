#include<stdio.h>
#include<math.h>
void collectinput();
void  valid(float a,float b,float c);
float Area(float a,float b,float c);
int main()
{
    printf("Triangle validity and area\n");
    collectinput();
    return 0;
}
void collectinput()
{
    float a,b,c;
    float A_R;
    printf("enter the length of three sides:\n");
    scanf("%f %f %f",&a,&b,&c);
    valid(a,b,c);
}
void  valid(float a,float b,float c)

{
    if((a+b)>c && (b+c)>a && (a+c)>b)
    {
        printf("valid triangle:\n");
        printf("area of triangle is : %f",Area(a,b,c));
    }
    else
    {
        printf("invalid triangle!");
    }
}
float Area(float a,float b,float c)
{
    float s;
    s=(a+b+c)/2;
    float A1;
    A1 = sqrt(s*(s-a)*(s-b)*(s-c));
    return A1;

}
