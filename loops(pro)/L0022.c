#include<stdio.h>
#include<math.h>
main()
{
	int no1,no2,no;
	int sum;
	no1=no2=sum=no=0;
	printf("enter a no:  ");
	scanf("%d%d",&no1,&no2);
	
	sum=((no1>no2)?no1:no2);
	while(no=1)
	{
		if(sum%no1==0&&sum%no2==0)
		{
			printf("lcm of two nums %d and%d is:%d",no1,no2,sum);
			break;
		}
		++sum;
	}
}
