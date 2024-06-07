#include<stdio.h>
main()
{
	char ch , a;
	 
	printf("enter any upper case alphabet from A to Z:   ");
	scanf("%c",&ch);
	
	a=ch+32;
	printf("lower case form of %c is %c ",ch,a);
} 
