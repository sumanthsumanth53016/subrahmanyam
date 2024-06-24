#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
    int x , i;

    x = 0;

    srand(time(0));

    for (i=1 ; i<=10 ; i++)
    {
        x = rand() % 1000;
        printf("\n \t %d-%d \n",i,x);
    }
}

