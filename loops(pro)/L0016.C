#include<stdio.h>
main()
{
    int no , ord , rem , temp;
    no = ord = rem = temp = 0;
    printf("Enter Vehicle Number : ");
    scanf("%d",&no);
    temp = no;
    while(temp!=0)
    {
        rem = temp % 10;
        ord = ord * 10 + rem;
        temp = temp / 10;
    }
    if(ord==no)
    {
        printf("\n %d Is An Palendrome Number... \n\n",ord);
    }
    else
        printf("\n %d Is Not An Palendrome Number... \n\n",ord);
}

