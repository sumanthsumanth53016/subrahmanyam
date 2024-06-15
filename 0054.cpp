#include <stdio.h>
#include <string.h>
int main()
{
    int units ;
    char purp[10];
    float bill;

    bill = units = 0;

    printf("Enter The No.of Units Consumed : ");
    scanf("%d",&units);

    printf("Enter The Purpose (domestic/commercial) : ");
    scanf("%s",&purp);

    if (strcmp(purp, "domestic")== 0)
    {
        if (units < 100)
        {
            bill = units * 1.00;
            printf("\n The Final Amount You Have To Pay : %.2f \n\n",bill);
        }
        else
            if (units >= 100 && units <= 200)
                {
                    bill = units * 1.50;
                    printf("\n The Final Amount You Have To Pay : %.2f \n\n",bill);
                }
            else
                if (units >= 200 && units <= 300)
                    {
                        bill = units * 3.00;
                        printf("\n The Final Amount You Have To Pay : %.2f \n\n",bill);
                    }
                else
                    if (units >= 300)
                        {
                            bill = units * 5.00;
                            printf("\n The Final Amount You Have To Pay : %.2f \n\n",bill);
                        }
                    else
                        printf("\n Invalid!......  \n\n");
    }
    else if (strcmp(purp, "commercial")== 0)
    {
        if (units < 100)
        {
            bill = units * 1.50;
            printf("\n The Final Amount You Have To Pay : %.2f \n\n",bill);
        }
        else
            if (units >= 100 && units <= 200)
                {
                    bill = units * 2.50;
                    printf("\n The Final Amount You Have To Pay : %.2f \n\n",bill);
                }
            else
                if (units >= 200 && units <= 300)
                    {
                        bill = units * 4.50;
                        printf("\n The Final Amount You Have To Pay : %.2f \n\n",bill);
                    }
                else
        {
            bill = units * 7.50;
            printf("\n The Final Amount You Have To Pay : %.2f \n\n",bill);
                        }
    }
}

