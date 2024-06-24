#include <stdio.h>
main()
{
    int i , ch;

    ch = 0;

    for (ch=0 ; ch<=255 ; ch++)
    {
        printf("%d-%c \t",ch,ch);
    }
}

