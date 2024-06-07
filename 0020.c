#include <stdio.h>
main()
{
    int tot , tip , frds , total ;
    float perhed;

    tot = tip = frds = perhed = total = 0 ;

    printf("Enter the total bill amount : ");
    scanf("%d",&tot);

    printf("Enter the tip (5%% or 10%%) : ");
    scanf("%d",&tip);

    printf("Enter total number of friends : ");
    scanf("%d",&frds);

    total = tot + (tot *tip/100);
    perhed = total / frds;

    printf("Each one have to pay Rs. %.2f /-",perhed);
}

