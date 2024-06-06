//print salary of an employee
#include<stdio.h>
main()
{
	int bs,gs,ns;
	float hra,da,pf;
	bs=gs=ns=hra=da=pf=0;
	printf("basic saliry is: ");
	scanf("%d",&bs);
	hra=bs/20*(100);
	da=bs/10*(100);
	pf=bs/5*(100);
	gs=bs+hra+da;
	printf("\n gross salary is:%d",gs);
	ns=gs-pf;
	printf("\n net salary is:%d",ns);
}
