#include <stdio.h>
main()
{
    int sal , alo , ded , exp , net , gross , bonus ;

    sal = alo = ded = exp = net = gross = bonus = 0;

    printf("Enter The Base salary Of An Employee : ");
    scanf("%d",&sal);

    printf("Enter The Allowence Of the Employee : ");
    scanf("%d",&alo);

    printf("Enter The Deductions Of the Month : ");
    scanf("%d",&ded);

    printf("Enter the Experience Of the Employee in years : ");
    scanf("%d",&exp);

    gross = sal + alo ;
    net = sal - ded ;

    printf("\n Gross Salary : %d \n",gross);
    printf("\n net salary : %d \n",net);

    if (exp > 5)
    {
        bonus = net * 3;
        printf("\n Bonus for the employee is : %d \n\n",bonus);
    }
    else
        if (exp > 3)
            {
                bonus = net * 2;
                printf("\n Bonus For the employee is : %d \n\n",bonus);
            }
        else
            printf("\n Bonus FOr the Employee is : %d",net);

}


