#include<stdio.h>
#include <ctype.h>
main()
{
    char ch;

    printf("Enter An input : ");
    scanf("%c",&ch);

    ch = tolower(ch);
    switch(ch)
    {
    case 'r':
        printf("\n RED light please STOP \n\n");
        break;
    case 'y':
        printf("\n YELLOW light please CHECK and go \n\n");
        break;
    case 'g':
        printf("\n GREEN light please go \n\n");
        break;
    case 'h':
        exit(0);


    }
}

