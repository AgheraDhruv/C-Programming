#include<stdio.h>
void main()
{
    int a[10],i,j,c1=0,c2=0,c3=0,c4=0;
    printf("Enter elements in the array:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if (a[i]>=0)
            c1=c1+1;
        else
            c2=c2+1;
        if(a[i]%2==0)
            c3=c3+1;
        else
            c4=c4+1;
    }
    printf("Positive integers=%d and Negative integers=%d\n",c1,c2);
    printf("Even numbers=%d and Odd numbers=%d",c3,c4);
    printf("\nThis Program Is Developed By : DHRUV_25CE001 ");
}

