#include <stdio.h>
#include <math.h>
int
main ()
 {
     int no = 100, power, base, res, sum, temp;

     res = power = base = sum = 0;

     for (no = 100; no <= 1000; no++)
        {
            sum = 0;
	        power = 0;
	        temp = no;
     while (temp != 0)
        {
            temp /= 10;
            power++;
		}
	  temp = no;
	  while (temp != 0)
		{
		  base = temp % 10;
		  temp = temp / 10;
		  res = pow (base, power);
		  sum = sum + res;
		}
	  if (sum == no)
		{
		    printf ("%d ", no);
		}
     }
}

