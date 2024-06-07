#include <stdio.h>
main()
{
    int lmonth , pmonth ;
    float  ltotal , ptotal;
    float const unit = 7.85 ;

    lmonth = pmonth = ltotal = ptotal = 0;

    printf("Enter the no of units electricity this month : ");
    scanf("%d",&pmonth);

    printf("Enter the no of units electricity last month : ");
    scanf("%d",&lmonth);

    ptotal = pmonth*unit;
    ltotal = lmonth*unit;

    printf("\n The bill for electricity last month is : %.2f \n",ptotal);
    printf("\n The bill for electricity this month is : %.2f \n",ltotal);
}

