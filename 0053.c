#include <stdio.h>
main()
{
    int c , cpp , java , avg , tot ;

    c = cpp = java = avg = tot = 0;

    printf("Enter Your C Language Marks : ");
    scanf("%d",&c);

    printf("Enter Your Cpp Marks : ");
    scanf("%d",&cpp);

    printf("Enter Your Java Marks : ");
    scanf("%d",&java);

    tot = c + cpp + java ;
    avg = tot/3;

    if (c >= 40 && cpp >= 40 && java >= 40)
        {
            printf("\n You Are Passed All The Subjects \n\n");
            printf("Total Marks : %d",tot);
            if (avg >= 90)
                printf("\n You Are Passed in 1st Grade \n\n");
            else
                if (avg >= 80 && avg <= 90)
                   printf("\n You Are Passed In Second Grade \n\n");
                else
                    if (avg >= 70 && avg <= 80 )
                       printf("\n You Are Passed In 3rd Grade \n\n");
                    else
                        printf("\n You Are Passed In 4th Grade \n\n");
        }
    else
    {
        if(c < 40 )
       printf("\n Your Failed In C \n\n");
        else
           if (cpp < 40)
            printf("\n your failed in cpp \n\n");
           else
            printf("\n Your failed In Java \n\n");

        printf("\n No Grades \n\n");

    }
}

