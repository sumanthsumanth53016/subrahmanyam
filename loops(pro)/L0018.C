#include <stdio.h>
main()
{
    int no , even , odd;

    no = even = odd = 0;

    do
    {
        printf("\n Enter a Number : ");
        scanf("%d",&no);

        if (no % 2==0)
        {
            even++;
        }
        else if (no % 2 != 0)
        {
            odd++;
        }
    }while (no != 0);

    printf("\n Even Count Is : %d \n",even);
    printf("\n Odd Count Is : %d \n",odd);
}

