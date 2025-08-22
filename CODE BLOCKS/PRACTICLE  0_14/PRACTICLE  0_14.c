#include<stdio.h>
void main()
{
	int choice,wa,b=5000;
	printf("Hello Sir/ma'am\n You are most welcomed to our bank\n\n");
	do
	{
	printf("\nPress 1 for knowing your balance.");
	printf("\nPress 2 for withdrawing the amount.");
	printf("\nPress 3 for exiting the ATM.");
	scanf("%d",&choice);



	switch(choice)
	{
		case 1:
			printf("Your current balance is %d",b);
			break;
		case 2:
			printf("\nPlease enter the amount you want to withdraw.");
			scanf("%d",&wa);
			if(wa<=b)
			{
				b=b-wa;
				printf("\nSo the amount withdrawed is %d",wa);
				printf("\n So the remaining balance is %d",b);
			}
			else
			{
				printf("\nInsufficient Balance.");
			}
			break;
		case 3:
			printf("Thanks for visiting.");
			break;

		default:
			printf("Invalid choice");
	}
    }
    while(choice!=3);

	}

