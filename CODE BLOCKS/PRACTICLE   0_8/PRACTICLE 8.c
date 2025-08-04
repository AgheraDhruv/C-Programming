#include<stdio.h>
void main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>0)
    {
        if(age<18)
        {
            printf("\nyou are not eligible to open an account.");
        }
        else if(age>18 & age<59)
        {
            printf("\nyou are  eligible to open an account for regular savings.");
        }
        else if (age>60)
        {
            printf("\nyou are eligible to open a senior citizen account.");
        }
    }
    else
    {
        printf("\nthe age you have enterus ininvalid formate.");
    }
     printf("\nThe Program Is Devloped BY:DHRUV AGHERA_25TCEXT7");
}
