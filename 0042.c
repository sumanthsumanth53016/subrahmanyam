#include <stdio.h>
main()
{
    int year , res;

    year = res = 0;

    printf("enter Your Year Of Birth : ");
    scanf("%d",&year);

    res = year % 4;

    if (res == 0)
        printf("\n %d is a leap year \n\n",year);
    else
        printf("\n %d is not a leap year \n\n",year);

}

