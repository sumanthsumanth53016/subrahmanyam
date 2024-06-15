#include <stdio.h>
main()
{
    int bill;
    float tot , disc ;

    tot = disc = bill = 0;

    printf("Enter The Actual Amount : ");
    scanf("%d",&bill);

    if (bill >= 25000)
    {
        disc = bill * 0.25;
        tot = bill - disc;

        printf("\n The Purchased Amount %d And Discount For The Bill : %.2f \n\n",bill,disc);
        printf("Final amount : %.2f \n\n",tot);
    }
    else
        if (bill >= 20000 && bill <= 25000)
        {
            disc = bill * 0.20;
            tot = bill - disc;

            printf("\n The Purchased Amount %d And Discount For The Bill : %.2f \n\n",bill,disc);
            printf("Final amount : %.2f \n\n",tot);
       }

        else
           if (bill >= 10000 && bill <= 20000)
           {
               disc = bill * 0.10;
               tot = bill - disc;

               printf("\n The Purchased Amount %d And Discount For The Bill : %.2f \n\n",bill,disc);
               printf("Final amount : %.2f \n\n",tot);
           }
           else
               if (bill >= 5000 && bill <= 10000)
              {
                   disc = bill * 0.25;
                   tot = bill - disc;

                   printf("\n The Purchased Amount %d And Discount For The Bill : %.2f \n\n",bill,disc);
                   printf("Final amount : %.2f \n\n",tot);
               }
              else
                  if (bill < 5000)
                  {
                      tot = bill;
                      printf("\n No Discounts Are Available For The Bill Sorry... \n\n");
                      printf("Final Amount Is : %.2f \n\n",tot);
                  }
}
