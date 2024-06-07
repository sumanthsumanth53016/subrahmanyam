#include<stdio.h>
main()
{
	float feh,cent;
	feh=cent=0;
	
	printf("enter the temperature:   ");
	scanf("%f",&feh);

	cent=(feh-32)*5/9;
	printf("the centigrade of temperature is %.2f",cent);

}
