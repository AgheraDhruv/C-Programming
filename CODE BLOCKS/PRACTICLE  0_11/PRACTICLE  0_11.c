#include<stdio.h>
int main()
{
    int marks;
    printf("enter your marks");
    scanf("%d",&marks);
    if (marks<0 || marks>100)
    {
        printf("enter the valid marks");
    }
    else
        (marks>=90)?printf("grade A"):
        (marks>=80 && marks<=90)?printf("grade B"):
        (marks>=70 && marks<=80)?printf("grade C"):
        (marks>=60 && marks<=80)?printf("grade D"):
        printf("grade F");
    return 0;

}

