#include <stdio.h>
main()
{
    int no = 0;

    printf("Enter A Number : ");
    scanf("%d",&no);

    if (no % 2 == 0 )
        printf("\n %d Is An even Number \n\n",no);
    else
        printf("\n %d Is An Odd Number \n\n",no);
}

