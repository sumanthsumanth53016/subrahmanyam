#include <stdio.h>
main()
{
    int amt , si , qty ;

    amt = si = qty = 0;

    printf("Which Item to Order : ");
    scanf("%d",&si);

    printf("How Many Plates : ");
    scanf("%d",&qty);

    switch (si)
    {
    case 1:
    {
        amt = qty * 25 ;
        printf("\n %d Plates Idly Ordered \n",qty);
        printf("\n Total bill is : %d",amt);
    }
    case 2:
    {
        amt = qty * 50 ;
        printf("\n %d Plates Dosa Ordered \n",qty);
        printf("\n Total bill is : %d",amt);
    }
    case 3:
    {
        amt = qty * 20 ;
        printf("\n %d Plates Vada Ordered \n",qty);
        printf("\n Total bill is : %d",amt);
    }
    case 4:
    {
        amt = qty * 25 ;
        printf("\n %d Plates upma Ordered \n",qty);
        printf("\n Total bill is : %d",amt);
    }
    case 5:
    {
        exit(0);
    }

    }
    printf("/n Thank YOU ViSit Again... /n");

}
