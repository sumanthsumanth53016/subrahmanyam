#include <stdio.h>
main()
{
    int base , power , i , b;

    base = power = b = 0;

    printf("Enter Base Value : ");
    scanf("%d",&base);

    printf("Enter Power Value : ");
    scanf("%d",&power);

    b = base;
    for (i=1;i<power;i++)
    {
        b =b * base;
    }
    if (power == 0)
        {
            b = 1;
            printf("\n The Result Of %d Power %d Is : %d \n\n",base,power,b);
        }
    if (power < 0)
        {
            for (i=-1;i>power;i--)
            {
                b = b*base;
            }
            printf("\n The Result Is : 1/%d \n\n",b);
        }
    if (power > 0)
    printf("\n The Result Is : %d \n\n",b);
}

