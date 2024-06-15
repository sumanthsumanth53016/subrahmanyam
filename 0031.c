#include <stdio.h>
main()
{
    int n1 , n2 , n3 , n4 ;

    printf("Enter Any Four No Of Your Wish : ");
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);

    if (n1 > n2 && n1 > n3 && n1 > n4)
        printf("\n %d is the biggest \n\n",n1);
    else
        if (n2 > n3 && n2 > n4)
        printf("\n %d is the biggest \n\n",n2);
        else
            if (n3 > n4)
            printf("\n %d is the biggest \n\n",n3);
            else
                printf("\n %d is the biggest \n\n",n4);
}

