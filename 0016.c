//calculate the area of a circle
#include <stdio.h>
main()
{
    //declaration section
    int  radius ;
    float area ;
    const float pi = 3.14159;

    //initialisation
    radius = area = 0 ;

    //input section
    printf("\n enter the radius of the circle : ");
    scanf("%d" ,&radius);

    //process
    area = pi*(radius * radius);

    //out put
    printf("\n the area of the circle is : %.2f \n\n",area);
}

