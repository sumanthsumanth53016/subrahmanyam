#include <stdio.h>
main()
{
    char gen ;
    int age , bill;

    age = bill = 0;

    printf("Enter Persons Gender (M/f): ");
    scanf("%c",&gen);

    printf("Enter The Persons Age : ");
    scanf("%d",&age);

    printf("Enter The Train Ticket Price : ");
    scanf("%d",&bill);

    if (gen == 'M' || gen == 'm' && age >= 60)
    {
        bill = bill/2;
        printf("\n You Have To Pay %d Rs/- for The Ticket... \n\n",bill);
    }
    else
        if (gen == 'f'||gen == 'F' && age >= 50)
            {
                bill = bill/2;
                printf("\n You Have To Pay %d Rs/- for The Ticket... \n\n",bill);
            }
        else
            if (age <= 5)
                {
                    bill = 0;
                    printf("\n Traveling Charges Are Free For Babies... \n\n");
                }
}
