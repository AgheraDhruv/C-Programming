#include<stdio.h>
void main()
{
    int seconds,i;
    printf("enter the no of seconds you want to countdown;\n");
    scanf("%d",&seconds);
    i=seconds;
    while(i>=0)
    {

        printf("%d\n\a",i);
        i--;
    }
    printf("countdown completed!");
    printf("\nThe Program Is Devloped BY:DHRUV_25CE001");
}
