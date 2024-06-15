#include <stdio.h>
#include <ctype.h>
#include<string.h>
main()
{
    int age ;
    char gen , mar[9] ;

    printf("Enter Age Of The Person : ");
    scanf("%d",&age);

    printf("Enter Gender Of The Person (M/F) : ");
    fflush(stdin);
    scanf("%c",&gen);

    printf("Enter Your Status Of Living (Married/Unmarried) : ");
    scanf("%s",&mar);

    if (strcmp(mar, "married")==0)
      printf("\n Your Are Eligible For Bonus.... \n\n");
    else
        if(strcmp (gen, "m")==0 && age >= 30)
            printf("\n You Are Eligible For Bonus.... \n\n");
        else
            if (strcmp (gen ,"f")==0 && age >= 25)
                printf("\n You Are Eligible For Bonus.... \n\n");
        else
            printf("Your Not Eligible For Bonus!......");
}


