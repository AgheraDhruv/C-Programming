// PROGRAM TO UNDER STAND THE SIZE OF DATA TYPES
#include<limits.h>
#include<float.h>
void main()
{
    printf("the size of character is : %zu",sizeof(int));
    printf("\nthe range of character is : %d to %d ",CHAR_MIN,CHAR_MAX);
    printf("\nthe size of int is :%zu",sizeof( int));
    printf("\nthe range of int is : %d to %d ",INT_MIN,INT_MAX);
    printf("\nthe size of unsigned int is :%zu",sizeof(unsigned int));
    printf("\nthe range of unsigned int is: 0 to %u ",UINT_MAX);
    printf("\nthe size of long is :%zu",sizeof(long));
    printf("\nthe range of long is:%ld to %ld ",LONG_MIN,LONG_MAX);
    printf("\nthe size of unsigned long is :%zu",sizeof(unsigned long));
    printf("\nthe range of unsigned long is:%ld to %ld ",ULONG_MAX);
    printf("\nthe size of long long is :%zu",sizeof(long long));
    printf("\nthe range of long long is:%lld to %lld ",LLONG_MIN,LLONG_MAX);
    printf("\nthe size of unsigned long long is :%zu",sizeof(unsigned long long));
    printf("\nthe range of unsigned long long is:%llu to %llu ",ULLONG_MAX);
    printf("\nthe size of float is :%zu",sizeof(float));
    printf("\nthe range of float is : %e to %e ",FLT_MIN,FLT_MAX);
    printf("\nthe size of double is :%zu",sizeof(double));
    printf("\nthe range of double,is : %e to %e ",FLT_MIN,FLT_MAX);
    printf("\nthe size of long double is :%zu",sizeof(long double));
    printf("\nthe range of double,is : %Le to %Le ",LDBL_MIN,LDBL_MAX);
    printf("\nThe Program Is Devloped BY:DHRUV AGHERA_25TCEXT7");
}
