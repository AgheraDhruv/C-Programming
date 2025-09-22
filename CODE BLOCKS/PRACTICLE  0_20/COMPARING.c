#include <stdio.h>

int main()
{
    int i, j, count = 0;
    int a[5],b[5];
    for(i=0;i<5;i++)
    {
        scanf("%s",a);
    }


    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(a[i] == b[j])
            {
                count++;
                break;  // optional: to avoid counting duplicates multiple times
            }
        }
    }

    printf("Number of common elements: %d\n", count);

    return 0;
}
