#include <stdio.h>
main()
{
    int num , no , rem , i , res ,m;

    num = no = rem = res = 0;

    printf("Enter A Number..: ");
    scanf("%d",&no);

    num = no;

    while (num != 0)
        {
            rem = num % 10;
            m = rem;
            for (i=rem-1;i!=0;i--)
            {
                m = m * i;

            }
            res = res + m;
            num = num / 10;
        }


    if (res == no)
        printf("\n %d Is An Strong Number \n\n",no);
    else
        printf("\n %d Is Not An Strong Number \n\n",no);
}


