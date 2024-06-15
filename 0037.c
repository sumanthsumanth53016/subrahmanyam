#include <stdio.h>
main()
{
    int mv1 , mv2 , mv3 ;

    mv1 = mv2 = mv3 = 0;

    printf("Enter the rating for movie 1 : ");
    scanf("%d",&mv1);

    printf("Enter the rating for movie 2 : ");
    scanf("%d",&mv2);

    printf("Enter the rating for movie 3 : ");
    scanf("%d",&mv3);

    if ((mv1<=10)&&(mv2<=10)&&(mv3<=10))

        if ((mv1 > mv2)&&(mv1 > mv3))
            printf("\n The First Movie Got The Highest Rating \n\n");
        else
            if ((mv2 > mv1)&&(mv2 > mv3))
                printf("\n The Second Movie Got The Highest Rating \n\n");
            else
               if ((mv3 > mv1)&&(mv3 > mv2))
                   printf("\n The Third Movie Got The Highest Rating \n\n");
               else
                  printf("\n All Movies Got The Same Rating \n\n");
    else
        printf("\n Rating Must Be Under 10 Points \n\n");

    printf("\n");
}
