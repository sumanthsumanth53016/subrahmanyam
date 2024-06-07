#include <stdio.h>
main()
{
    float base , gs , ns , allowence , ded ;
    base = gs = ns = allowence = ded = 0;

    printf("Enter the base salary of the empployee : ");
    scanf("%f",&base);
    
    printf("Enter the allowence for the employee : ");
    scanf("%f",&allowence);

    printf("Enter the current deductions : ");
    scanf("%f",&ded);

    gs = base + allowence ;
    ns = gs - ded ;

    printf("\n gross salary is : %f \n",gs);
    printf("\n net salary is : %f \n",ns);
}

