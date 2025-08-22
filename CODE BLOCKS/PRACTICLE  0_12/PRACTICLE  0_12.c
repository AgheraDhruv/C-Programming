#include<stdio.h>
void main()
{
    int i;
    for (i=1;i<=50;i++)
    {
        printf("book id:%d",i);
        if (i%5==0)
        {
            printf("(special edition)\n");
            continue;
        }
        printf("\n");
    }
}
