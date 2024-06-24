#include <stdio.h>
main()
{
    int no1 , no2 , temp , rem , i;

    no1 = no2 = temp = rem = 0;
    i = no1;

    printf("Enter Any Two Numbers : ");
    scanf("%d %d", &no1 , &no2);

    if (no1 < no2)
    {
        rem = no1 % no2 ;
    }
    else if (no2 < no1)
    {
        printf("\n Invalid Range!... \n\n");
		break;
    }

    while (i <= no2)
    {
        i++;
      if (rem != 0)
      {
              no1 = no2;
              no2 = rem;
      }
      else if (rem == 0)
      {
          printf("\n %d Is The HCF... \n\n",no2);
          'exit';
      }
      rem = no1 % no2;
    }
}

