#include<stdio.h>
void main()
{
    float dis=0.5;
    int t=1;
    while(dis<=10)
    {
     printf("\nMinute %d sec : Distance Coverd = %.2f km ",t,dis);
     if(dis==10)
     {
         printf("\nMerathon Is Complete.");
     }
     dis+=0.5;
     t++;
    }
}
