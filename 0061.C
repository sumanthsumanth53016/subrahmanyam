#include <stdio.h>
main()
{
    int no1 , no2 ;

    no1 = no2 = 0;

    printf("Enter A Number : ");
    scanf("%d",&no1);

    printf("Enter Another Number : ");
    scanf("%d",&no2);

    if (no1 < no2)
        printf("\n UP \n\n");
    else
        if (no2 > no2)
            printf("\n DOMN \n\n");
        else
            printf("\n equal \n\n");
}

