//to read days in years,months,weeks,days
#include<stdio.h>
main()
{
	int years=365,months=30,weeks=4,days=7;
	years=months=weeks=days=0;
	printf("enter no of total days you want:  ");
	scanf("%d",&days);
	printf("\nyears:%d",days);
	printf("\nmonths:%d",days);
	printf("\nweeks:%d",days);
	printf("\ndays:%d",days);
	years=years-days*100;
	months=months-days*100;
	weeks=weeks-days*100;
	days=days*100;	
}
