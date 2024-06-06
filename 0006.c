//swap of two varibles a and b
#include<stdio.h>
main()
{
	int a,b;
	a=b=0;
	printf("enter the value of A: ");
	scanf("%d",&a);
	printf("enter the value of B: ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nA value is:%d",a);
	printf("\nB value is:%d",b);
	
}
