#include<stdio.h>
main()
{
	char name[20],gender,place[20] ;
	
	printf("enter your full name:  ");
	scanf("%[^\n]",&name);
		
	printf("\n enter your gender(M/F):  ");
	fflush(stdin);
	scanf("%c",&gender);
	
	printf("\n enter your native place:   ");
	scanf("%s",&place);
	 
	printf("%s-%c-%s",name,gender,place);
}


