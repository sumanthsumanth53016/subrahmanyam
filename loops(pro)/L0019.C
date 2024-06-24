#include <stdio.h>
main()
{
    int no , temp , sum , res , rem = 1 , resl;

    no = temp = sum = res = resl = 0;

    printf("\a Enter a Number : ");
    scanf("%d",&no);

    temp = no;
    rem = no;

    while (temp != 0)
    {
        res = temp % 10;
        temp = temp / 10;
        res -= 1;
        rem = rem *  res;
        if (res != 0)
        {
        sum = rem;
        resl = sum;
        temp = --no;
        }
    }
    printf("\n %d \n",resl);
}

