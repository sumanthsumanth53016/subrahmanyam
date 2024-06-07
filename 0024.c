#include<stdio.h>
main()
{
	float avg=0;
	printf("enter avg marks:  ");
	scanf("%f",&avg);
	if(avg>100||avg<0)
	{
		printf("invalid marks...");
		exit(0);
	}
	if (avg>=60)
	  printf("first class ");
	else
	    if (avg>=50)
	       printf("second class ");	
	else
	    if (avg>=40)
	      printf("third class ");
	else
	    printf("failed ...");
	
}
