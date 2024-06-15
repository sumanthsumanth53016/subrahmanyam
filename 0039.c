#include<stdio.h>
main()
{
    int floor = 0;

    printf("Enter Your Floor : ");
    scanf("%d",&floor);

           if (floor >= 12 || floor <=12)
               printf("\n Heyy You Have \"Beach view\" For Your Flat \n\n");
           else
              if (floor <= 50)
                  printf("\n Heyy You Have \"Forest View\" For Your Flat \n\n");
              else
                 printf("\n We Only Have 50 Floors \n\n");
}

