//time total mins into hrs and mins
#include<stdio.h>
main()
{
    int mins,hrs,totaltime;
    mins=hrs=totaltime=0; 
	printf("enter flying total time hyderbad to singapore in minutes: ");
	scanf("%d",&totaltime);
	hrs=totaltime/60;
	mins=totaltime-hrs*60;
	printf("flying time from hyderbad to singapore is %d hrs and %d mins",hrs,mins);
}
