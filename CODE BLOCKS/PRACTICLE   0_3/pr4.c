#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{ printf("------\n");
printf("Data type size & ranges\n");
printf("--------\n");
//character Data type
printf("character data type\n");
printf(size    :%zu bytes\n" , sizeof(char));
printf("min value   :%d\n", CHAR_MIN);
printf("min value   :%d\n", CHAR_MAX);
printf("-----------");


//unsigned character data type
printf("unsigned character data type\n");
printf(size    :%zu bytes\n" , sizeof(unsigned char));
//printf("min value   :%d\n", CHAR_MIN);
printf("min value   :%u\n", UCHAR_MAX);
printf("-----------");

//INTEGER DATA TYPE
printf("integer data type\n");
printf(size    :%zu bytes\n" , sizeof(int));
printf("min value   :%d\n", INT_MIN);
printf("min value   :%d\n", INT_MAX);
printf("-----------");

//UNSIGNED INTEAGER DATA TYPE
printf("unsigned integer data type\n");
printf(size    :%zu bytes\n" , sizeof(unsigned int));
//printf("min value   :%d\n", INT_MIN);
printf("min value   :%u\n", UINT_MAX);
printf("-----------");

//SHORT DATA TYPE
printf("short data type\n");
printf(size    :%zu bytes\n" , sizeof(short));
printf("min value   :%d\n", SHRT_MIN);
printf("min value   :%d\n", SHRT_MAX);
printf("-----------");

//LONG DATA TYPE
printf("long data type\n");
printf(size    :%zu bytes\n" , sizeof(long));
printf("min value   :%ld\n", LONG_MIN);
printf("min value   :%ld\n", LONG_MAX);
printf("-----------");

//LONG LONG DATA TYPE
printf("long long data type\n");
printf(size    :%zu bytes\n" , sizeof(long long));
printf("min value   :%lld\n", LLONG_MIN);
printf("min value   :%lld\n", LLONG_MAX);
printf("-----------");

//FLOAT DATA TYPE
printf("float data type\n");
printf(size    :%zu bytes\n" , sizeof(float));
printf("min value   :%.10e\n", FLT_MIN);
printf("min value   :%.10e\n", FLT_MAX);
printf("precisiom,%d desimal digit/n", FLT_DIG);
printf("-----------");

//DOUBLE DATA TYPE
printf("double data type\n");
printf(size    :%zu bytes\n" , sizeof(double));
printf("min value   :%.10e\n", DBL_MIN);
printf("min value   :%.10e\n", DBL_MAX);
printf("precisiom,%d desimal digit/n", DBL_DIG);
printf("-----------");

// LONG DOUBLE DATA TYPE
printf("long double data type\n");
printf(size    :%zu bytes\n" , sizeof(long double));
printf("min value   :%.10Ne\n", LDBL_MIN);
printf("min value   :%.10e\n", LDBL_MAX);
printf("precisiom,%d desimal digit/n", LDBL_DIG);
printf("-----------");
return 0;}




