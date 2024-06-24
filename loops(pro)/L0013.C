# include <stdio.h>
#define n  100
main()
{
    int no , sum , i , fib;

    sum = 0;
    no = 1;

    for (i=1 ; i<=n ; i++)
    {
        if (no<100)
        {
        fib = sum + no;
        no = sum;
        sum = fib;
        printf("%d\t",fib);

        }

    }
}

