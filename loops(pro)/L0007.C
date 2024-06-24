#include <stdio.h>
main()
{
    char name[10];
    int adhaar = 0;

    printf("Enter Your Name : ");
    scanf("%[^\n]",&name);

    printf("Enter Your Adhaar No.: ");
    scanf("%d",&adhaar);

    if (adhaar <= 12)
    {
        printf("\n name : %s \n",name);
        printf("\n Your Adhaar Number Is Valid \n\n");
    }
    else
        if (adhaar > 12)
            {
                printf("\n %s Your Adhaar Is Not Valid \n\n",name);
            }
}

