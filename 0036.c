#include <stdio.h>
main()
{
    int cost , selling , res ;
    cost = selling = res = 0;

    printf("Enter The Cost Price : ");
    scanf("%d",&cost);

    printf("Enter The Selling Price : ");
    scanf("%d",&selling);

    if (cost > selling)
    {
        res = cost - selling;
     printf("Oops!, You incurred a loss of Rs.%d/- ",res);
    }
    else
        if (selling > cost)
    {
        res = selling - cost;
        printf("Heyy ,You have made a profit of Rs.%d/-",res);
    }
        else
            printf("Hmmm!,No Loss...No Profit...");
}

