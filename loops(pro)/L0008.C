#include <stdio.h>
main()
{
    int no , i , sum , num , n ;

    no = i = sum = num = 0;

    printf("Enter A Number : ");
    scanf("%d",&no);

    num = no;


    for (n=1;n<num;n++)
    {
    if (num % n == 0)
        {
            sum = sum + n;
        }
    }
    if (sum == no)
        printf("\n %d Is An Perfect Number.. \n\n",no);
    else
        printf("\n %d Is Not An Perfect Number.. \n\n",no);
}
