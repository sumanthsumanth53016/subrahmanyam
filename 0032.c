#include <stdio.h>
main()
{
    int no1 , res3 , res5;

    no1 = res3 = res5 = 0;

    printf("Enter Any Number : ");
    scanf("%d",&no1);

            if (res3 == 0)
        {

            res5 = no1 % 5;
            if (res5 == 0)
            {
                printf("\n The Entered Number Is Divisible By Both 3 & 5 ... \n");
            }
            else{
               printf("\n it is not divisible by 5.. \n\n");
            }
        }
		else{
            printf("\n The Entered Number Is Not Divisible By Both 3&5...\n\n");
        }

}

