#include<stdio.h>
main ()
{
    int cm =0;
    float feet = 30.48,hei=0;

    printf("Enter Your Height In CM : ");
    scanf("%f",&cm);

    hei = cm/feet;

    if (hei > 5.5)
        printf("\n Your So Taller.. \n\n");
    else
        if (hei < 4.5)
            printf("\n Your Low High . \n\n");
        else
            printf("\n Your In Average Man Height \n\n");
}

