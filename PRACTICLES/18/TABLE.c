#include<stdio.h>
int main()
{
    int row,col,res,c,r;
    printf("\nEnter The Number Of Row : ");
    scanf("%d",&row);
    printf("\nEnter The Number Of Column :");
    scanf("%d",&col);
    printf("Multiplication Table:\n");
    for(c=1 ; c<=col ; c++)
        {
            for(r=1 ; r<=row ; r++)
            {
                res=r*c;
                printf("%4d * %2d = %3d\t",r,c,res);
            }
    printf("\n");

        }
        printf("\nThe Program Is Devloped BY:DHRUV_25CE001");
        return 0;
}
