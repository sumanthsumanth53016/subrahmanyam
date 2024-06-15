#include <stdio.h>
main()
{
    int dd , mm , yy;

    dd = mm = yy = 0;

    printf("Enter The Date : ");
    scanf("%d %d %d",&dd,&mm,&yy);

    printf("\n Date Followed %d:%d:%d ",dd,mm,yy);
    printf("is %d:%d:%d \n\n",++dd,mm,yy);
}
