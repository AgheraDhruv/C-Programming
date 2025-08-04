#include<stdio.h>
int main()
{
    float height,weight,BMI;
    printf("Entre your weight in kg: ");
    scanf("%f",&weight);
    printf("Entre your height in meter:");
    scanf("%f",&height);
    BMI=weight/(height*height);
    printf("your BMI: %f",BMI);
    if(BMI<18.5)
    {
         printf("\nyou are under weight");
    }
    else if(BMI>18.5 & BMI<24.9)
    {
        printf("\nyou are healthy");
    }
    else if (BMI>25.0 & BMI>29.9)
    {
        printf("\nyou are overweight");
    }
    else if  (BMI>30.0 & BMI<39.9)
    {
        printf("you are obesity");
    }
    else
    {
        printf("\nyou are severe obesity");
    }
    printf("\nThe Program Is Devloped BY:DHRUV AGHERA_25TCEXT7");
    return 0;
}
