
#include<stdio.h>
void main()
{
    printf("Smart Water System Automatic Tank Refill\n");
    int waterlevel;
    for(waterlevel=10;waterlevel<=100;waterlevel+=10)
    {
        if(waterlevel<100)
        {
            printf("\nCurrent Water Level : %d",waterlevel);
        }
        else
        {
            printf("\nTank is Full!");
        }
    }
    printf("\nThe Program Is Devloped BY:DHRUV_25CE001");
}
