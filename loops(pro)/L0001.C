#include <stdio.h>
main()
{
    int n =0;

    printf("Enter a number : ");
    scanf("%d",&n);

    while (n>=1)
    {
        printf("\t %d",n);
        n--;
    }
    printf("\n\n");
}

