#include <stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5-i;j>=1;j--)
        {
       printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c",j+64);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(j=5-i;j>=1;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c",j+64);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
     printf("This Program Is Developed By : DHRUV_25CE001 ");
}

