# include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	int r=0,c;
	
	
	printf("enter your name: ");
	scanf("%s",&name);
		
	r = strlen(name);
	
	while (c<r)
	{
     	printf("\t %s",name);
	    c++;
    }
}
