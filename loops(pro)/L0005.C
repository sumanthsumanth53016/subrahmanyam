#include<stdio.h>
main()
{
    int no,res,last,first,num;

    no = res = last = first = 0;

    printf("Enter A Number : ");
    scanf("%d",&no);

    last = no%10;
    num = no;

    while (num >= 10)
    {
        num = num/10;
    }

    first= num;
    res = first + last;

    printf("\n The Sum Of First And Last Digits Are : %d \n",res);
}
