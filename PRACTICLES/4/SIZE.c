#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
    int a,b,c,d,e,f;
    a=sizeof(int);
    b=sizeof(float);
    c=sizeof(char);
    d=sizeof(double);
    e=sizeof(long);
    f=sizeof(short);
    printf("The size of int is %zu\n",a);
    printf("The size of float is %zu\n",b);
    printf("The size of char is %zu\n",c);
    printf("The size of double is %zu\n",d);
    printf("The size of long is %zu\n",e);
    printf("The size of short is %zu\n",f);
    printf("%d is minimum limit of integers\n",INT_MIN);

    printf("%d is maximum limit of integers\n",INT_MAX);
    printf("%d is maximum limit of character\n",CHAR_MAX);
    printf("%d is minimum limit of character\n",CHAR_MIN);
    printf("%e is maximum limit of float\n",FLT_MAX);
    printf("%e is minimum limit of float\n",FLT_MIN);
    printf("%e is maximum limit of double\n",DBL_MAX);
    printf("%e is minimum limit of double\n",DBL_MIN);
    printf("%ld is maximum limit of long\n",LONG_MAX);
    printf("%ld is minimum limit of long\n",LONG_MIN);
    printf("%ld is maximum limit of short\n",SHRT_MAX);
    printf("%ld is minimum limit of short\n",SHRT_MIN);
    printf("This Program Is Developed By : DHRUV_25CE001 ");
    return 0;
}

