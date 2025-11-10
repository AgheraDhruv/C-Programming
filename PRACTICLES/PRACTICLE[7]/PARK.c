    #include<stdio.h>
    void main()
    {
        int age;
        const int price=500;
        printf("Enter your age:",age);
        scanf("%d",&age);

        if(age<10)
        {
           printf("you are eligible for free entry:");
        }
        else
        {
            printf("you are adult so you are requested to purchase ticket's.");
            int npeople,totalprice;
            printf("\nenter the number of adult people:",npeople);
            scanf("%d",&npeople);
            totalprice=price*npeople;
            printf("you need to pay:%d",totalprice);
            printf("\nThe Program Is Devloped BY:DHRUV_25CE001");

        }

    }
