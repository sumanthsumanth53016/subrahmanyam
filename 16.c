# include <stdio.h>
main()
{
	char x;	
	printf("enter a alphabet: ");
	scanf("%c",&x);
	
	if ((x>=65&&x<=90) || (x>=97&&x<=122))
	{
	
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
	printf("%c It is a lower case vowel  ",x);
	else
	   	if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
	printf("%c It is a upper case vowel  ",x);
	else
		printf("%c It is a constant  ",x);
	}	
	else
	    if(x>=48&&x<=57)
	    printf("%c is a digit input other alphabet....",x);
	    else
	        printf(" enter a invalied input ....  ");
}
