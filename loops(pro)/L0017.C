#include <stdio.h>
main()
{
    int md , year , sum , res , rem;

    md = year = sum = res = rem = 0;

    printf("Enter Your Date Of Birth (mmdd yy)..:");
    scanf("%d%d", &md ,&year);

    res = md;
    rem = year;

    while(res!=0 && rem != 0)
    {
        sum = sum + (res % 10);
        res = res / 10;
        sum = sum + (rem % 10);
        rem = rem / 10;
    }

    printf("\n Your Lucky Number Is : %d \n\n",sum);
    if (md >= 321 && md <= 419)
    {
        printf("\n Your Gemstone Is : Diamond \n\n");
    }
    else
        if (md >= 420 && md <= 520)
            {
                printf("\n Your Gemstone Is : Emerald \n\n");
            }
        else
            if (md >= 521 && md <= 620)
                {
                    printf("\n Your Gemstone Is : Pearl \n\n");
                }
           else
              if (md >= 621 && md <= 722)
                  {
                      printf("\n Your Gemstone Is : Ruby \n\n");
                  }
           else
              if (md >= 723 && md <= 822)
                  {
                      printf("\n Your Gemstone Is : Peridot \n\n");
                  }
            else
                if (md >= 823 && md <= 922)
                  {
                      printf("\n Your Gemstone Is : Sapphire \n\n");
                  }
           else
              if (md >= 923 && md <= 1022)
                  {
                      printf("\n Your Gemstone Is : Opal \n\n");
                  }
            else
              if (md >= 1023 && md <= 1121)
                  {
                      printf("\n Your Gemstone Is : Topaz \n\n");
                  }
           else
              if (md >= 1122 && md <=1221)
                  {
                      printf("\n Your Gemstone Is : Tourquoize \n\n");
                  }
           else
              if (md >= 1222 && md <= 119)
                  {
                      printf("\n Your Gemstone Is : Granet \n\n");
                  }
           else
              if (md >= 120 && md <= 218)
                  {
                      printf("\n Your Gemstone Is : Amethyst \n\n");
                  }
           else
              if (md >= 219 && md <= 320 )
                  {
                      printf("\n Your Gemstone Is : Aquamarine \n\n");
                  }
}

