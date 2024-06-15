#include <stdio.h>
main()
{
  int n1 , n2 , n3 ;

  n1 = n2 = n3 = 0;

  printf("Enter Any Three Numbers : ");
  scanf("%d %d %d",&n1,&n2,&n3);

  if ((n2 > n1)&&(n3 > n2)&&(n3 > n1))
  {
      printf("The Ascending Order Is : %d %d %d",n1,n2,n3);
  }
  else
    if ((n1 > n2)&&(n3 > n2)&&(n1 > n3))
         printf("The Ascending Order Is : %d %d %d",n1,n3,n2);
    else
        if((n2 > n1)&&(n3 > n1)&&(n2 > n3))
           printf("The Ascending Order Is : %d %d %d",n2,n3,n1);
        else
            if((n2 > n1)&&(n1 > n3)&&(n3 < n2))
                printf("The Ascending Order Is : %d %d %d",n2,n1,n3);
            else
                if  ((n3 > n1)&&(n1 > n2)&&(n3>n2))
                      printf("The Ascending Order Is : %d %d %d",n3,n1,n2);
                else
                    if ((n3 > n2)&&(n2 > n1)&&(n3 > n1))
                         printf("The Ascending Order Is : %d %d %d",n3,n2,n1);
                    else
                        printf("all numbers are equal");
}

