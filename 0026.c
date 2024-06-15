//to check the age of a candidate to eligible vote or not

#include<stdio.h>
main()
{
	int age;
	
	printf("enter your age: ");
	scanf("%d",&age);
	if (age>=18)
	  printf("your are eligible to vote");
	else
	    printf("your are not eligible to vote");	
}
