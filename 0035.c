#include <stdio.h>
main()
{
    int n1 , n2 , res ;

    n1 = n2 = res = 0;

    printf("enter any two numbers : ");
    scanf("%d %d",&n1,&n2);

    if (n1 > n2)
    {
      res = n1 - n2;
    printf("\n The Difference Is : %d \n\n",res);
    }
    else
        if (n2 > n1)
    {
        res = n2 - n1 ;
        printf("\n The Difference Is : %d \n\n",res);
    }
        else
            printf("\n Both Are Equal Numbers \n\n");
}

