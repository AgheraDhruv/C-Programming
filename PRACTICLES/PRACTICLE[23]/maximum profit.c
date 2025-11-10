#include<stdio.h>
void main()
{
    int price[10];
    int days;
    int min=0,max=0,profit;
    printf("enter number of days you want the price to be entered : ");
    scanf("%d",&days);

    for(int i=0;i<days;i++)
    {
        printf("enter the price of product at day: %d - ", i+1);
        scanf("%d",&price[i]);
    }
    min=price[0];
     for(int i=0;i<days;i++)
     {
        if(price[i]<min)
        {
            min=price[i];
        }
        profit=price[i]-min;
        if(profit>max)
        {
            max=profit;
        }
     }
     if(profit>0)
     {
         printf("your profit is : %d",max);
     }
     else
     {
         printf("profit is 0");
     }
     printf("\nThe Program Is Devloped BY:DHRUV_25CE001");
}
