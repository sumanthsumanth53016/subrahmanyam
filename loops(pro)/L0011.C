#include <stdio.h>
main()
{
    int no , sp , ep , i , res;

    no = sp = ep = res = 0;

    printf("Enter A Number : ");
    scanf("%d",&no);

    printf("Enter Starting Point : ");
    scanf("%d",&sp);

    printf("Enter Ending Point : ");
    scanf("%d",&ep);

    printf("\n\n");

    for (i=sp ; i<=ep ; i++)
    {
        res = no * i;
        printf("%d * %d = %d \n",no,i,res);
    }
}

