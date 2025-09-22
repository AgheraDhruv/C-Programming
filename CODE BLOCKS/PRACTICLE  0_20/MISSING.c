#include<stdio.h>
void main()
{
    int m[5],n,i,flag=0;
    for(i=0; i<5; i++)
    {
        printf("enter numbers : ");
        scanf("%d",&m[i]);
    }
    printf("enter the number you want to find : ");
    scanf("%d",&n);
    for(i=0; i<5; i++)
    {
        if(m[i]==n)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%d is present on %d index",n,i+1);
    }
    else
    {
        printf("Data not found.");
    }
}
