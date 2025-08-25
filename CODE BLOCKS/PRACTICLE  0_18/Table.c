#include<stdio.h>
void main()
{
    int row,col,res;
    printf("\nEnter The Number Of Row : ");
    scanf("%d",&row);
    printf("\nEnter The Number Of Column :");
    scanf("%d",&col);
    printf("Multiplication Table:\n");
    for(int r=1;r<=row;r++)
        {
    for(int c=1;c<=col;c++)
            {
     res=c*r;
     printf("%d\t",res);
            }
 printf("\n");
        }
}
