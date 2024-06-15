    #include <stdio.h>
main()
{
    int sams , vivo ;
    sams = vivo = 0;

    printf("Enter The Cost Of Samsung Mobile : ");
    scanf("%d",&sams);

    printf("Enter The Cost Of Vivo Mobile : ");
    scanf("%d",&vivo);

    if(vivo > sams)
        printf("\n Vivo Mobile Is The Costliest....\n\n");
    else
        if(vivo < sams)
        printf("\n Samsung Mobile Is The Costliest.....\n\n");
        else
            printf("\n Both Are At Same Cost.....\n\n");
}

