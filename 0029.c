#include <stdio.h>
main()
{
	int num=0;
	
	printf("enter a no : ");
	scanf("%d",&num);
	if(num>0)
	  printf("%d is +ve number",num);
	else
	    printf("%d is -ve number",num);
}
