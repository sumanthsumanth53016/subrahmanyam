#include <stdio.h>
main()
{
    char ch;

    printf("Enter A Character (A-Z)(a-z): ");
    scanf("%c",&ch);

    if (((ch >= 65&&ch <= 90)) || ((ch >= 97 && ch <= 122)))
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            printf("\n %c Is An Captal Vowel \n\n",ch);
        else
            if ( ch == 'a' || ch == 'e' || ch == 'i' || ch== 'o' || ch== 'u')
                printf("\n %c Is An lower case Vowel \n\n",ch);
            else
                printf("\n %c Is An Constant \n\n",ch);
    else
        printf("\n Invalid Input \n\n");
}
