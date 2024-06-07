#include <stdio.h>
main()
{
    int amt , disc , bill;

    amt = disc = bill = 0;

    printf("Enter The Amount Of Sales : ");
    scanf("%d",&amt);

    if (amt <= 25000)
    {
        disc = amt*0.10;
        bill = amt - disc;
        printf("The Total amount to be paid is : %d",bill);
    }
    else
    {
        disc = amt*0.05;
        bill = amt - disc;
        printf("The Total amount to be paid is : %d",bill);
    }
}

