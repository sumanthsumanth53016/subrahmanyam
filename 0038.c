# include <stdio.h>
main()
{
    int temp = 0;

    printf("Enter The Temperature In Centigrade : ");
    scanf("%d",&temp);

        if (temp < 0)
            printf("\n The Weather Is Freezing \n\n");
        else
            if (temp <= 10 && temp > 0)
                printf("\n Very Cold Weather \n\n");
            else
                if (temp >= 10 && temp <= 20)
                    printf("\n Cold Weather \n\n");
                else
                    if (temp >= 20 && temp <= 30)
                        printf("\n Normal Weather \n\n");
                    else
                        if (temp >= 30 && temp <= 40)
                            printf("\n It Is Hot Today... \n\n");
                        else
                            if (temp >= 40)
                                printf("\n It's Very Hot \n\n");
                            else
                                printf("\n");

}

