#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Girilen Boyut 5'ten Buyuk Olmalidir!\n");
    int i,j;
    int boyut,sayac=1;
    printf("Boyutu Giriniz: ");
    scanf("%d",&boyut);

    //S HARFI:
    for(i=1; i<=boyut/2; i++)
    {
        if(i==1)
        {
            for(j=1; j<=boyut; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for(j=1; j<=boyut; j++)
            {
                if(j==1)
                {
                    printf("*");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }

    for(i=1; i<=boyut/2; i++)
    {
        if(i==1)
        {
            for(j=1; j<=boyut; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for(j=1; j<=boyut; j++)
            {
                if(j==boyut)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    for(i=1; i<=boyut/2; i++)
    {
        if(i==1)
        {
            for(j=1; j<=boyut; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    printf("\n");

    //E HARFI:
    for(i=1; i<=boyut/2; i++)
    {
        if(i==1)
        {
            for(j=1; j<=boyut; j++)
            {
                printf("*");
            }
            printf("\n");

        }
        else
        {
            for(j=1; j<=boyut; j++)
            {
                if(j==1)
                {
                    printf("*");
                }

                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }

    }
    for(i=1; i<=boyut/2; i++)
    {
        if(i==1)
        {
            for(j=1; j<=boyut; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for(j=1; j<=boyut; j++)
            {
                if(j==1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    for(i=1; i<=boyut/2; i++)
    {
        if(i==1)
        {
            for(j=1; j<=boyut; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    printf("\n");

    //V HARFI:

    for(i=1; i<=boyut; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if(j==sayac || j==boyut)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        sayac++;
    }
    printf("\n");



    //D HARFI:
    for(i=1; i<=boyut; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if(i==1 && j==boyut || i==boyut && j==boyut)
            {
                printf(" ");
            }
            else if(i==1 && j!=boyut || i==boyut && j!=boyut)
            {
                printf("*");
            }


            else if(j!=1 && j!=boyut)
            {
                printf(" ");
            }

            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n");

    //E HARFI:

    for(i=1; i<=boyut/2; i++)
    {
        if(i==1)
        {
            for(j=1; j<=boyut; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for(j=1; j<=boyut; j++)
            {
                if(j==1)
                {
                    printf("*");
                }

                else
                {
                    printf(" ");

                }
            }
            printf("\n");
        }

    }
    for(i=1; i<=boyut/2; i++)
    {
        if(i==1)
        {
            for(j=1; j<=boyut; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for(j=1; j<=boyut; j++)
            {
                if(j==1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    for(i=1; i<=boyut/2; i++)
    {
        if(i==1)
        {
            for(j=1; j<=boyut; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    printf("\n");

    //N HARFI:
    for(i=1; i<=boyut; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if(j==1 || j==i || j==sayac || j==boyut)
            {
                printf("*");
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");
        sayac++;
    }
    printf("\n");


    //U HARFI:
    for(i=1; i<=boyut; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if(i!=2*boyut && j==1 || i!=2*boyut && j==boyut)
            {
                printf("*");
            }
            else if(i==boyut)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    //R HARFI:
    for(i=1; i<=boyut/2; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if(j==1 || i==1 || j==boyut || i==boyut || i==boyut/2)
            {
                if((i==1 && j==boyut) || (i==boyut/2 && j==boyut))
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    for(i=1; i<=boyut/2; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if(j==1 || j==boyut)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");



    //T HARFI:
    for(i=1; i<=boyut; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if(i==1)
            {
                printf("*");
            }
            else if(j==boyut/2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    //O HARFI:
    for(i=1; i<=boyut; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if(i==1 && j==1 || i==1 && j==boyut)
            {
                printf(" ");
            }

            else if(i==boyut && j==1 || i==boyut && j==boyut)
            {
                printf(" ");
            }

            else if (i!=1 && i!=boyut && j!=1 && j!=boyut)
            {
                printf(" ");
            }

            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n");

    //S HARFI:
    for(i=1; i<=boyut/2; i++)
    {
        if(i==1)
        {
            for(j=1; j<=boyut; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for(j=1; j<=boyut; j++)
            {
                if(j==1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    for(i=1; i<=boyut/2; i++)
    {
        if(i==1)
        {
            for(j=1; j<=boyut; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for(j=1; j<=boyut; j++)
            {
                if(j==boyut)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    for(i=1; i<=boyut/2; i++)
    {
        if(i==1)
        {
            for(j=1; j<=boyut; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    printf("\n");


    //U HARFI:
    for(i=1; i<=boyut; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if(i!=boyut && j==1 || i!=boyut && j==boyut)
            {
                printf("*");
            }
            else if(i==boyut)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    //N HARFI:
    for(i=1; i<=boyut; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if(j==1 || j==i || j==sayac || j==boyut)
            {
                printf("*");
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");
        sayac++;
    }
    printf("\n");



    //E HARFI:
    for(i=1; i<=boyut/2; i++)
    {
        if(i==1)
        {
            for(j=1; j<=boyut; j++)
            {
                printf("*");
            }
            printf("\n");

        }
        else
        {
            for(j=1; j<=boyut; j++)
            {
                if(j==1)
                {
                    printf("*");
                }

                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }

    }
    for(i=1; i<=boyut/2; i++)
    {
        if(i==1)
        {
            for(j=1; j<=boyut; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for(j=1; j<=boyut; j++)
            {
                if(j==1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    for(i=1; i<=boyut/2; i++)
    {
        if(i==1)
        {
            for(j=1; j<=boyut; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    printf("\n");

    //R HARFI:
    for(i=1; i<=boyut/2; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if(j==1 || i==1 || j==boyut || i==boyut || i==boyut/2)
            {
                if((i==1 && j==boyut) || (i==boyut/2 && j==boyut))
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    for(i=1; i<=boyut/2; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if(j==1 || j==boyut)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");


    return 0;
}
