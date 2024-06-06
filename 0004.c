//to print marks,total,avg of 5 subjects
#include<stdio.h>
main()
{
	int e,s,m,p,c;
	float tot,avg;
	e=s=m=p=c=0;
	printf("enter the English marks: ");
	scanf("%d",&e);	
	printf("enter the sanskrit marks: ");
	scanf("%d",&s);
	printf("enter the maths marks: ");
	scanf("%d",&m);
	printf("enter the physics marks: ");
	scanf("%d",&p);
	printf("enter the chemistry marks: ");
	scanf("%d",&c);
	tot=e+s+m+p+c;
	avg=tot/5;
	printf("\n total marks:%f",tot);
	printf("\n average marks :%f",avg);

}
