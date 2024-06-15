#include <stdio.h>
main()
{
    int no1 , no2 , res;
    char exp;

    no1 = no2 = res = 0;

    printf("enter a number : ");
    scanf("%d", &no1);

    printf("enter another number : ");
    scanf("%d", &no2);

    printf("choose your expression (+,-,/,*,%) : ");
    fflush(stdin);
    scanf("%c", &exp);

    switch (exp)
    {
    case '+':
        {
            res = no1 + no2;
            printf("\n OutPut : %d + %d = %d \n\n",no1,no2,res);
            break;
        }
    case '-':
        {
            res = no1 - no2;
            printf("\n OutPut : %d - %d = %d \n\n",no1,no2,res);
            break;
        }
    case '/':
        {
            res = no1 / no2;
            printf("\n OutPut : %d / %d = %d \n\n",no1,no2,res);
            break;
        }
    case '*':
        {
            res = no1 * no2;
            printf("\n OutPut : %d * %d = %d \n\n",no1,no2,res);
            break;
        }
    case '%':
        {
            res = no1 % no2;
            printf("\n OutPut : %d % %d = %d \n\n",no1,no2,res);
            break;
        }
    }
}
