#include <stdio.h>
void main()
{
    int n[9]={1,2,3,4,6,7,8,9,10},i;
    for(i=0;i<10;i++)
    {
        if((i+1)!=n[i])
        {
            printf("%d id is not in the list",i+1);
            break;
        }
        else
            continue;
    }
    printf("\nThis Program Is Developed By : DHRUV_25CE001 ");
}

