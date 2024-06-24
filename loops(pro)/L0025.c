#include <stdio.h>
#include <string.h>
main()
{
    int len=0;
    char name[20],opt;

    tolower(opt);

    while(opt != 'n' || opt != 'N')
    {
        printf("Enter Your Name : ");
        scanf("%s",&name);

        len=strlen(name);

        printf("Your Name Length : %d \n");

        printf("You Choose To Countinue (Y/N):");
        fflush(stdin);
        scanf("%c",&opt);
    }
}

