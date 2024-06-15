#include <stdio.h>
main()
{
    int tot , sub1 , sub2 , sub3 ;

    float avg ;

    avg = tot = sub1 = sub2 = sub3 = 0;

    printf("Enter The Marks Of First Subject : ");
    scanf("%d",&sub1);

    printf("Enter The Marks Of Second Subject : ");
    scanf("%d",&sub2);

    printf("Enter The Marks of Third Subject : ");
    scanf("%d",&sub3);

    tot = sub1 + sub2 + sub3;
    avg = tot/3.0;

    if (avg > 90)
        printf("\n Your Grade Is A+ \n\n");
    else
        if (avg >= 80 && avg <=90)
            printf("\n Your Grade Is A \n\n");
        else
            if (avg >= 70 && avg <=80)
                printf("\n Your Grade Is B+ \n\n");
            else
                if (avg >= 60 && avg <=70)
                    printf("\n Your Grade Is B \n\n");
                else
                    if (avg >= 50 && avg <=60)
                        printf("\n Your Grade Is C \n\n");
                    else
                        printf("\n Your Faliled \n\n");
}
