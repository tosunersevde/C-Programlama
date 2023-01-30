#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,dongu=1,secim,secim2,secim3,adet,sayi3,sayi4,us=1;
    double sayi1,sayi2,toplam=0,cikarma,carpim=1,bolum,mod,karekok,logaritma;
    while(dongu)
    {
        printf("\n\n*********Hesap Makinesi**********\n");
        printf("*                               *\n");
        printf("*  Mod[1]: Basit Islem Modu     *\n");
        printf("*  Mod[2]: Gelismis Islem Modu  *\n");
        printf("*  Mod[0]: Cikis                *\n");
        printf("*                               *\n");
        printf("*********************************\n");
        printf("Lutfen Bir Secim Yapiniz: ");
        scanf("%d",&secim);

        switch(secim)
        {
        case 1:
            printf("***Basit Islem Modu***\n");
            printf("*                    *\n");
            printf("*   [1]: Toplama     *\n");
            printf("*   [2]: Cikarma     *\n");
            printf("*   [3]: Carpma      *\n");
            printf("*   [4]: Bolme       *\n");
            printf("*                    *\n");
            printf("**********************\n");
            printf("Hangi Islemi Yapmak Istediginiz Seciniz: ");
            scanf("%d",&secim2);
            if(secim2==1)
            {
                printf("Kac Adet Sayi Girisi Yapacaksiniz? : ");
                scanf("%d",&adet);
                for(i=0;i<adet;i++)
                {
                    printf("%d.Sayiyi Giriniz: ",i+1);
                    scanf("%lf",&sayi1);
                    toplam+=sayi1;
                }
                printf("Toplam = %lf",toplam);
            }
            else if(secim2==2)
            {
                printf("Birinci Sayiyi Giriniz: ");
                scanf("%lf",&sayi1);
                printf("Ikinci Sayiyi Giriniz: ");
                scanf("%lf",&sayi2);

                cikarma=sayi1-sayi2;

                printf("Cikarma = %lf",cikarma);
            }
            else if(secim2==3)
            {

                printf("Kac Adet Sayi Girisi Yapacaksiniz? : ");
                scanf("%d",&adet);
                for(i=0;i<adet;i++)
                {
                    printf("%d.Sayiyi Giriniz: ",i+1);
                    scanf("%lf",&sayi1);
                    carpim*=sayi1;
                }
                printf("Carpim = %lf",carpim);
            }
            else if(secim2==4)
            {
                printf("Birinci Sayiyi Giriniz: ");
                scanf("%lf",&sayi1);
                printf("Ikinci Sayiyi Giriniz: ");
                scanf("%lf",&sayi2);

                bolum=sayi1/sayi2;

                printf("Bolum = %lf",bolum);
            }
            break;
        case 2:
            printf("**Gelismis Islem Modu**\n");
            printf("*                     *\n");
            printf("*   [1]: Toplama      *\n");
            printf("*   [2]: Cikarma      *\n");
            printf("*   [3]: Carpma       *\n");
            printf("*   [4]: Bolme        *\n");
            printf("*   [5]: Mod Alma     *\n");
            printf("*   [6]: Karekok      *\n");
            printf("*   [7]: Us Alma      *\n");
            printf("*   [8]: Logaritma    *\n");
            printf("*                     *\n");
            printf("***********************\n");
            printf("Hangi Islemi Yapmak Istediginiz Seciniz: ");
            scanf("%d",&secim3);
            if(secim3==1)
            {
                printf("Kac Adet Sayi Girisi Yapacaksiniz? : ");
                scanf("%d",&adet);
                for(i=0;i<adet;i++)
                {
                    printf("%d.Sayiyi Giriniz: ",i+1);
                    scanf("%lf",&sayi1);
                    toplam+=sayi1;
                }
                printf("Toplam = %lf",toplam);
            }
            else if(secim3==2)
            {
                printf("Birinci Sayiyi Giriniz: ");
                scanf("%lf",&sayi1);
                printf("Ikinci Sayiyi Giriniz: ");
                scanf("%lf",&sayi2);

                cikarma=sayi1-sayi2;

                printf("Cikarma = %lf",cikarma);
            }
            else if(secim3==3)
            {

                printf("Kac Adet Sayi Girisi Yapacaksiniz? : ");
                scanf("%d",&adet);
                for(i=0;i<adet;i++)
                {
                    printf("%d.Sayiyi Giriniz: ",i+1);
                    scanf("%lf",&sayi1);
                    carpim*=sayi1;
                }
                printf("Carpim = %lf",carpim);
            }
            else if(secim3==4)
            {
                printf("Birinci Sayiyi Giriniz: ");
                scanf("%lf",&sayi1);
                printf("Ikinci Sayiyi Giriniz: ");
                scanf("%lf",&sayi2);

                bolum=sayi1/sayi2;

                printf("Bolum = %lf",bolum);
            }
            else if(secim3==5)
            {
                printf("Birinci Sayiyi Giriniz: ");
                scanf("%d",&sayi3);
                printf("Ikinci Sayiyi Giriniz: ");
                scanf("%d",&sayi4);

                mod=sayi3%sayi4;

                printf("Mod  = %lf",mod);
            }
            else if(secim3==6)
            {
                printf("Karekoku Alinacak Sayiyi Giriniz: ");
                scanf("%lf",&sayi1);

                karekok=sqrt(sayi1);

                printf("Karekok = %lf",karekok);
            }
            else if(secim3==7)
            {
                printf("Ussu Alinacak Sayiyi Giriniz: ");
                scanf("%d",&sayi3);
                printf("Sayinin Kacinci Dereceden Ussunu Alacaksiniz: ");
                scanf("%d",&sayi4);
                for(i=0;i<sayi4;i++)
                {
                    us=us*sayi3;
                }
                printf("Us = %d",us);
            }
            else if(secim3==8)
            {
                printf("Logaritmasi Alinacak Sayiyi Giriniz: ");
                scanf("%d",&sayi3);

                logaritma=log10(sayi3);

                printf("Logaritma = %lf",logaritma);
            }
            break;
        case 0:
            dongu=0;
            break;
        default:
            printf("Yanlis Secim yaptiniz!");
        }
    }
    return 0;
}
