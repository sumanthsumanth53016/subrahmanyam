#include <stdio.h>
main()
{
    int dis , meters ;

    dis = meters = 0 ;

    printf("Enter the distance traveled by the bus : ");
    scanf("%d",&dis);

    meters = dis * 1000;

    printf("\n The distance travelled by the bus in meters is : %d \n\n",meters);
}

