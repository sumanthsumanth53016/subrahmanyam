#include <stdio.h>
main()
{
    int no , i =2;

    printf("Enter a Number : ");
    scanf("%d",&no);

    i = no-1;

    while (i != 0)
    {
        if (no % i == 0)
        {
            printf("%d ",i);
        }

        i--;

        if (i == 1)
        {
            'exit';
        }
    }
}

