#include <stdio.h>
main()
{
    int age1 , age2;
    age1 = age2 = 0;

    char name1[10],name2[10];

    printf("Enter your first friends name and age : ");
    scanf("%d %s",&age1,&name1);

    printf("Enter your second friends name and age : ");
    scanf("%d %s",&age2,&name2);

    if (age1 > age2)
        printf("\n %s is the oldest \n\n",name1);
    else
        printf("\n %s is the oldest \n\n",name2);
}

