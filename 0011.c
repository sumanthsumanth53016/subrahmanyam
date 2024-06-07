//to print roll no, name, gender, height of a person
#include<stdio.h>
main()
{
	float roll_no[10];
	double height;
	char name[10],gender;
	
	printf("enter roll no:  ");
	scanf("%f",&roll_no);
	printf("name is : ");
	scanf("%s",&name);
	printf("enter gender(M/F):  ");
	scanf("%s",&gender);
	printf("enter your height :  ");
	scanf("%lf",&height);
	
	printf("\n roll no occupies %d bites of space",sizeof(roll_no));
	printf("\n name occupies %d bites of space",sizeof(name));
	printf("\n gender occupies %d bites of space",sizeof(gender));
	printf("\n height occupies %d bites of space",sizeof(height));
}
