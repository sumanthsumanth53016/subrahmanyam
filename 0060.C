#include <stdio.h>
main()
{
    char no = 0;

    printf("Enter A Number : ");
    scanf("%c", &no);

    if (no >= 48 && no <= 57)
        printf("\n It Is An Digit \n\n");
    else
        printf("\n It Is Not An Digit \n\n");
}

