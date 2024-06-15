#include <stdio.h>
main()
{
    char grade;

    printf("Enter Your Grade : ");
    scanf("%c",&grade);

    switch (grade)
    {
    case 'S':
        printf("\n Super \n\n");
        break;
    case 'A':
        printf("\n Very Good \n\n");
        break;
    case 'B':
        printf("\n GOOD \n\n");
        break;
    case 'Y':
        printf("\n ABSCENT \n\n");
        break;
    case 'F':
        printf("\n FAILED \n\n");
        break;
    }
}

