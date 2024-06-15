#include <stdio.h>
main()
{
    int id , units ;
    float charge , tot , netamt, superc ;

    id = units = superc = tot = charge = 0;

    char custname[10];

    printf("Enter Your Customer Id : ");
    scanf("%d",&id);

    printf("Enter Customer name : ");
    fflush(stdin);
    scanf("%[^\n]",&custname);

    printf("Input Units Consumed : ");
    scanf("%d",&units);

    printf("Customer IDNO : %d \n",id);
    printf("Customer Name : %s\n",custname);
    printf("Unit Consumed : %d \n",units);

    if (units <= 199)
    {
        charge = 1.20;
        tot = charge * units;
        printf("\n Amount Charged @Rs.%.2f Per Unit : %.2f \n",charge,tot);
        printf("Net Amount Paid By The Customer : %.2f",tot);
    }
    else
         if (units >= 200 && units <= 400)
    {
        charge = 1.50;
        tot = charge * units;
        printf("\n Amount Charged @Rs.%.2f Per Unit : %.2f \n",charge,tot);
        printf("Net Amount Paid By The Customer : %.2f",tot);
    }
         else
              if (units >= 400 && units <= 600)
    {
        charge = 1.80;
        tot = charge * units;
        superc = tot * 0.15;

        printf("\n Amount Charged @Rs.%.2f Per Unit : %.2f \n",charge,tot);
        printf("\n Supercharge Amount : %.2f \n",superc);

        tot = tot + superc ;

        printf("\n Net Amount Paid By The Customer : %.2f \n\n",tot);
    }
              else
                  if (units >= 600 && units <= 800)
    {
        charge = 2.00;
        tot = charge * units;
        superc = tot * 0.15;

        printf("\n Amount Charged @Rs.%.2f Per Unit : %.2f \n",charge,tot);
        printf("\n Supercharge Amount : %.2f \n",superc);

        tot = tot + superc ;

        printf("\n Net Amount Paid By The Customer : %.2f \n\n",tot);
    }
}
