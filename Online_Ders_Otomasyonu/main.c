#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct ders_bilgileri
{
    char ders_ad[20];
    int ders_fiyat;
}ders;

typedef struct ogrenci_bilgileri
{
    char ad[20];
    char soyad[20];
    int yas;
    char dogum_yeri[25];
    char dogum_tarihi[25];
    int ders_sayi;
    int toplam_fiyat;
    ders* dersler;
}ogr;

ogr* og;
int ogr_sayi=0;

ogr *Kayit_Ekleme();
void Kayitlari_Silme(int ogrenci);
void Kayit_Guncelleme(int ogrenci);
void Kayit_Listeleme();
void Kayit_Aramasi(char ad[20]);
void Fiyat_Hesaplama();

int main()
{
    time_t tarih;
    tarih=time(NULL);

    int secim;
    int dongu=1;
    while(dongu)
    {
        printf("\t\t**************************************\n");
        printf("\t\t*    Online Ozel Egitim Platformu    *\n");
        printf("\t\t**************************************\n");
        printf("\t\t***********Ders Iceriklerimiz*********\n");
        printf("\t\t         Algoritma Dersi- 50TL        \n");
        printf("\t\t         Matematik Dersi- 40TL        \n");
        printf("\t\t          Fizik Dersi- 40TL           \n");
        printf("\t\t         Elektrik Dersi- 50TL         \n");
        printf("\t\t          Bilisim Dersi- 30TL         \n");
        printf("\t\t**************************************\n");
        printf("[1]-Kayit Ekleme\n");
        printf("[2]-Kayitlari Silme\n");
        printf("[3]-Kayit Guncelleme\n");
        printf("[4]-Kayit Listeleme\n");
        printf("[5]-Kayit Aramasi\n");
        printf("[6]-Fiyat_Hesaplama\n");
        printf("[0]-Cikis\n");
        printf("*************\n");
        printf("Yapmak Istediginiz Islemi Seciniz: ");
        scanf("%d",&secim);

        char ad[20];//,soyad[20],dogum_yeri[25],dogum_tarihi[25],ders_ad[20];
        //int yas,ders_sayi,ders_fiyat,toplam_fiyat;
        int ogrenci;

        //int ogr_sayisi;
        //ogr *ogrenciler;

        switch(secim)
        {
        case 1:
            printf("Kac Ogrenci Kaydi Yapilacagini Giriniz: ");
            scanf("%d",&ogr_sayi);
            og=Kayit_Ekleme();
            break;
        case 2:
            printf("Silmek Istediginiz Ogrenci Numarasini Giriniz: ");
            scanf("%d",&ogrenci);
            Kayit_Silme(ogrenci);
            break;
        case 3:
            printf("Guncellemek Istediginiz Ogrenci Numarasini Giriniz: ");
            scanf("%d",&ogrenci);
            Kayit_Guncelleme(ogrenci);
            break;
        case 4:
            Kayitlari_Listeleme();
            break;
        case 5:
            printf("Aranacak Ogrencinin Adini Giriniz: ");
            scanf("%s",ad);
            Kayit_Aramasi(ad);
            break;
        case 6:
            Fiyat_Hesaplama();
            break;
        case 0:
            dongu=0;
            break;
        default:
            printf("Yanlis Secim Yaptiniz!");
        }
        printf("Devam Etmek Icin Bir Tusa Basiniz: ");
        getch();
        system("cls");
    }
    return 0;
}

ogr *Kayit_Ekleme()
{
    int i,j,ders_sayi;
    ogr *ogrenciler=(ogr*)malloc(sizeof(ogr)*ogr_sayi);
    for(i=0; i<ogr_sayi; i++)
    {
        printf("%d.Ogrencinin  Adini Giriniz: ",i+1);
        scanf("%s",&(ogrenciler+i)->ad);
        printf("%d.Ogrencinin  Soyadini Giriniz: ",i+1);
        scanf("%s",&(ogrenciler+i)->soyad);
        printf("%d.Ogrencinin  Yasini Giriniz: ",i+1);
        scanf("%d",&(ogrenciler+i)->yas);
        printf("%d.Ogrencinin  Dogum Yerini Giriniz: ",i+1);
        scanf("%s",&(ogrenciler+i)->dogum_yeri);
        printf("%d.Ogrencinin  Dogum Tarihini Giriniz: ",i+1);
        scanf("%s",&(ogrenciler+i)->dogum_tarihi);
        printf("%d.Ogrencinin Aldigi Ders Sayisini Giriniz: ",i+1);
        scanf("%d",&ders_sayi);

        (ogrenciler+i)->ders_sayi=ders_sayi;
        (ogrenciler+i)->dersler=(ders*)malloc(sizeof(ders)*ders_sayi);

        for(j=0; j<ders_sayi; j++)
        {
            printf("%d.Ogrenci Icin %d.Ders Adi: ",i+1,j+1);
            scanf("%s",&((ogrenciler+i)->dersler+j)->ders_ad);
            printf("%d.Ogrenci Icin %d.Ders Fiyati: ",i+1,j+1);
            scanf("%d",&((ogrenciler+i)->dersler+j)->ders_fiyat);
        }
    }
    return ogrenciler;
}
void Kayit_Silme(int ogrenci)
{
    if(ogrenci<=0 || ogrenci>ogr_sayi)
    {
        printf("Boyle Bir Ogrenci Bulunmamaktadir! ");
    }
    else
    {
        for(int i=ogrenci; i<ogr_sayi; i++)
        {
            *(og+(i-1))=*(og+i);
        }
        ogr_sayi--;
        og=(ogr*)realloc(og,sizeof(ogr)*ogr_sayi);
    }
}
void Kayit_Guncelleme(int ogrenci){
     if(ogrenci<=0||ogrenci>ogr_sayi){
        printf("Boyle Bir Ogrenci Bulunmamaktadir: ");
    }else{
        printf("Guncellenecek Ogrencinin Dersleri:\n");
        for(int i=0;i<(og+(ogrenci-1))->ders_sayi;i++){
            printf("%d.Dersin Adi: %s\n",i+1,(((og+(ogrenci-1))->dersler)+i)->ders_ad);
            printf("%d.Dersin Fiyati: %d\n",i+1,(((og+(ogrenci-1))->dersler)+i)->ders_fiyat);
            printf("\n");
        }
        printf("Güncellemek Istediginiz Dersin Numarasini Giriniz: ");
        int ders;
        scanf("%d",&ders);

        if(ders<=0||ders>(og+(ogrenci-1))->ders_sayi){
            printf("Böyle Bir Ders Bulunmamaktadir!");
        }else{
            printf("%d.Dersin Yeni Fiyati: ",ders);
            scanf("%d",&(((og+(ogrenci-1))->dersler)+(ders-1))->ders_fiyat);
        }
    }
}
void Kayitlari_Listeleme()
{
    for(int i=0; i<ogr_sayi; i++)
    {
        printf("%d.Ögrencinin Adi:%s \n",i+1,(og+i)->ad);
        printf("%d.Ögrencinin Soyadi:%s \n",i+1,(og+i)->soyad);
        printf("%d.Ögrencinin Yasi:%d \n",i+1,(og+i)->yas);
        printf("%d.Ögrencinin Dogum Yeri:%s \n",i+1,(og+i)->dogum_yeri);
        printf("%d.Ögrencinin Dogum Tarihi:%s \n",i+1,(og+i)->dogum_tarihi);
        printf("%d.Ögrencinin Ders Sayisi:%d \n",i+1,(og+i)->ders_sayi);
        printf("\n");
        for(int j=0; j<(og+i)->ders_sayi; j++)
        {
            printf("%d.Dersin Adi: %s \n",j+1,((og+i)->dersler+j)->ders_ad);
            printf("%d.Dersin Fiyati: %d \n",j+1,((og+i)->dersler+j)->ders_fiyat);
            printf("\n");
        }
    }
}
void Kayit_Aramasi(char ad[20])
{
    int konum=-1;
    for(int i=0; i<ogr_sayi; i++)
    {
        if(!strcmp((og+i)->ad,ad))
        {
            printf("Bulunan Ogrencinin:\n");
            printf("Adi: %s",(og+i)->ad);
            printf("\nDers Bilgileri:\n");
            for(int j=0; j<(og+i)->ders_sayi; j++)
            {
                printf("%d.Dersin Adi: %s\n",i+1,((og+i)->dersler+j)->ders_ad);
                printf("%d.Dersin Fiyati: %d\n",i+1,((og+i)->dersler+j)->ders_fiyat);
                printf("\n");
            }
        }
    }
}
void Fiyat_Hesaplama()
{
    int i,j,d_sayi,top_fiyat;
    for(i=0;i<ogr_sayi;i++)
    {
        d_sayi=(og+i)->ders_sayi;
        top_fiyat=0;
        for(j=0;j<d_sayi;j++)
        {
            top_fiyat+=((og+i)->dersler+j)->ders_fiyat;
        }
        (og+i)->toplam_fiyat=top_fiyat;
        printf("%d.Ögrencinin Adi:%s \n",i+1,(og+i)->ad);
        printf("%d.Ögrencinin Derslerinin Toplam Fiyati:%d \n",i+1,(og+i)->toplam_fiyat);
    }
}
