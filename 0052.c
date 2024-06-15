#include <stdio.h>
#include <string.h>
main()
{
    int bill , pena , disc , dure ;
    char method[10] ;

    bill = pena = disc = dure = 0;

    printf("Enter The Price Of The Smart Tv : ");
    scanf("%d",&bill);

    printf("Enter Payment Method (Cash/credit) : ");
    scanf("%s",&method);

    printf("Delay Of Payment : ");
    scanf("%d",&dure);

    if (strcmp(method, "cash") && dure > 7)
    {
        disc = bill * 0.25;
        bill = bill - disc;

        printf("The Total Amount Have Be Paid Is : %d",bill);
    }
    else
        if (strcmp(method, "credit") && dure <= 7)
            {
                disc = bill * 0.10;
                bill = bill - disc;

                printf("The Total amount Have To Be Paid Is : %d",bill);
            }
        else
            if (strcmp(method,"credit")&& dure >= 7)
        {
            pena = bill * 0.10;
            bill = bill + pena;

            printf("The Total Amount Along With Penalty is : %d",bill);
        }
}
