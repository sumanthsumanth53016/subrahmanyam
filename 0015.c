#include<stdio.h>
main()
{
	int a,b,result;
	a=b=result=0;
	
	printf("enter value of a: ");
	scanf("%d",&a);
	printf("enter value of b : ");
	scanf("%d",&b);
	
	result=(a+b)*(a+b);
	printf("the result  is : %d",result);
}
