//to print bill amount and balanced amount to return
#include<stdio.h>
main()
{
	int tot,paidamt,returnamt;
	printf("Enter the total bill amount: ");
	scanf("%d",&tot);
	printf("Enter the amount paid by the customer: ");
	scanf("%d",&paidamt);
	returnamt=paidamt-tot;
	printf("balance amount to be retuned is:RS %d/-",returnamt);
	
}
