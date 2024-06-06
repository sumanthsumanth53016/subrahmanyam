// price of iphone&cover case and bill
#include<stdio.h>
main()
{
	int total,iphone,cover;
	total=iphone=cover=0;
	printf("price of iphone: ");
	scanf("%d",&iphone);
	printf("price of cover case: ");
    scanf("%d",&cover);
	total=iphone+cover;
	printf("total bill is:%d",total);
}
