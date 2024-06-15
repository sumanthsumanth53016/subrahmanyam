# include <stdio.h>
main()
{
	int c,cpp,java;
	float total,avg;
	
	c=cpp=java=total=avg=0;
	
	printf("enter marks of c : ");
	scanf("%d",&c);
	printf("enter marks of cpp : ");
	scanf("%d",&cpp);
	printf("enter marks of java : ");
	scanf("%d",&java);
	
	total=c+cpp+java;
	avg=total/3;
	
	if(c>=90 && cpp>=90 && java>=90)
	printf("%f ur passed in A class",avg);
	 else
	    if(c>=80 && cpp>=80 && java>=80)
	    printf("%f ur passed in B class\n",avg);
	  else
	  if(c>=70 && cpp>=70 && java>=70)
	    printf("%f ur passed in c class\n",avg);
	  else
	 if (avg<=50)
	    printf ("%f u r failled",avg);
}
