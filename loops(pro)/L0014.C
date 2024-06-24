#include <stdio.h>
main()
{
    int no1 , no2 , j , c , i;

    no1 = no2 = c = i = 0;

    printf("Enter First Number : ");
    scanf("%d",&no1);

    printf("Enter Second Number : ");
    scanf("%d",&no2);

    if (no1 > no2)
    {
        printf("\n invalid range!... \n\n");
    }
    else
        for (i=no1 ; i<=no2 ; i++)
    {
        c = 0;
         for (j = 2; j <= i / 2 ; j++)
		{
		  if (i % j == 0)
			c++;
		}
	  if (c == 0)
		{
		  printf("%d\t",i);
		}

    }

}

