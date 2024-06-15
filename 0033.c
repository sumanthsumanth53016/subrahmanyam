#include <stdio.h>
main()
{
    int rey , mont , park ;

    rey = mont = park = 0;

    printf("Enter the Cost of the reynolds pen : ");
    scanf("%d",&rey);

    printf("Enter the Cost of the montex pen : ");
    scanf("%d",&mont);

    printf("Enter the Cost of the parker pen : ");
    scanf("%d",&park);

    if (rey > mont  && rey > park)
        printf("\n reynolds %d Rs/- pen Is The Costliest Pen..... \n\n",rey);
    else
        if (mont > park )
            printf("\n montex %d Rs/- pen Is The Costliest Pen..... \n\n",mont);
        else
           printf("\n parker %d Rs/- pen Is The Costliest Pen..... \n\n",park);
}
