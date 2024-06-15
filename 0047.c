#include <stdio.h>
main()
{
    char ch ;

    printf("Enter A Character : ");
    scanf("%c",&ch);

    if ((ch >= 65)&&(ch<=90))
        printf("\n %c Is UPPER CASE Letter.. \n\n");
    else
        if ((ch >= 97)&&(ch <= 122))
            printf("\n %c Is A lower case Letter... \n\n");
        else
            if ((ch >= 48)&&(ch <= 57))
                printf("\n %c Is An Digit... \n\n");
            else
                printf("\n It Is A Special Character... \n\n");

}
