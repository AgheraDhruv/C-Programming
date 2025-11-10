#include<stdio.h>
void main()
{
    int u,m=21,c;
    printf("total number of matchsticks:%d",m);
    while(m>1)
    {
        printf("\nyour turn!1,2,3 or 4 matchstick(s)!");
        scanf("%d",&u);
        if(u < 1 || u > 4)
        {
            printf("invalid choice! please try again");
        }
        else
        {
            m=m-u;
            c=5-u;
            m=m-c;
            printf("computer picked %d\n",c);
            printf("%d matchsticks remaining",m);
         if(m==1)
            {
                printf("\nonly one matchsticks left!you looses,computer wins!");
                break;
            }
        }
    }
    printf("\nThe Program Is Devloped BY:DHRUV_25CE001");
}

