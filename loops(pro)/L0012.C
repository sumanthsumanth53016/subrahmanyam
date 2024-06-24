#include <stdio.h>
main()
{
    int j , n , c , i;

    printf("enter a number : ");
    scanf("%d",&n);

    for (j = 2; j <= n / 2; j++)
		{
		    i++;
		  if (n % j == 0)
			c++;
		}
	  if (c == 0)
		{
		  printf("\n\n %d is an prime \n",n);
		  printf("the no of iterations are : %d",i);
		}
}

