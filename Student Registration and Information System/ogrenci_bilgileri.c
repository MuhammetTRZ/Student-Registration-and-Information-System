#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
/// @kimlik, isim,soy_isim,bolum,birim,durum,sınıf,dönem,gelme_sekli,öğrencilik_durumu,okul_no
//!        OKU!
/*
?          okul numarası= ilk iki rakam kayıt günü
?          3.ve 4.rakam giriş yılı
?          5.ve 6.rakam bölüm kodu
?          7,8,9.sayılar giris sayısı
*/
struct ogrenci_bilgileri
{
    int kimlik;
    char isim[50];
    char soy_isim[50];
    char bolum[50];
    char birim[50];
    char durum[50];
    char sınıf[50];
    char donem[50];
    char gelme_sekli[50];
    char ogrencilik_durumu[50];
    int gün;
    int yıl_son2rakam;
    int bolum_kodu;
    int giris_sirasi;
};

//bilgisiyar programcılığı =84+
//süt ve Besi Hayvancılığı Programı kodu=11;+
//Organik Tarim Programı kodu =17;+
//Gıda Teknolojisi Programı kodu=23
//Sut ve UrUnleri Teknolojisi Programi kodu =26;
//Muhasebe ve Vergi Uygulamaları Programı kodu =29
//Laborant ve Veteriner Saglik Programi=30;	
//isletme Yonetimi Program=35;
//*--------------------------------------------------------
//? void=değer döndürmez,sadece içinde belirtilen işlemleri yapar

void bolum_adi_to_kodu(struct ogrenci_bilgileri *ogrenci){//*ogrenci pointer
    if(strcmp(ogrenci->bolum,"Bilgisiyar Programciligi") == 0){//ogrenci bölümünün "Bilgisiyar Programciligi"ile eşit oolup olmadığına bakar
        ogrenci->bolum_kodu = 84;
    }else if(strcmp(ogrenci->bolum,"süt ve Besi Hayvancılığı Programı")==0){
        ogrenci->bolum_kodu = 11;
    }else if(strcmp(ogrenci->bolum,"Organik Tarim Programı")==0){
        ogrenci->bolum_kodu = 17;
    }else if(strcmp(ogrenci->bolum,"Gıda Teknolojisi Programı")==0){
        ogrenci->bolum_kodu= 23;
    }else if(strcmp(ogrenci->bolum,"Sut ve UrUnleri Teknolojisi Programi")==0){
        ogrenci->bolum_kodu= 26;
    }else if(strcmp(ogrenci->bolum,"Muhasebe ve Vergi Uygulamaları Programı")==0){
        ogrenci->bolum_kodu= 29;
    }else if(strcmp(ogrenci->bolum,"Laborant ve Veteriner Saglik Programi")==0){
        ogrenci->bolum_kodu= 30;
    }else if(strcmp(ogrenci->bolum,"isletme Yonetimi Program")==0){
        ogrenci->bolum_kodu= 35;
    }else{
        ogrenci->bolum_kodu= -1;
    }
}

int main(){ 
    char evet[6]="YES";
    char hayir[6]="NO";
    char cevap[6];  
    
    printf("Ogrenci kayit islemi baslasin mi\n-YES- yada -NO-?\n");
    scanf("%s",cevap);

    if (strcmp(cevap,evet)==0)
    {
        printf("islem basliyor...\n");

    struct ogrenci_bilgileri ogrenci1={1,"Muhammetali","Terzi","Bilgisiyar Programciligi","Karacabey Meslek Yuksekokulu","Devamli ogrenci","1","1","OSS","Aktif ogrenci",9,41,0,30};  
    struct ogrenci_bilgileri ogrenci2={2,"Erdem","Temel","Laborant ve Veteriner Saglik Programi","Karacabey Meslek Yuksekokulu","Devamli ogrenci","1","1","OSS","Aktif ogrenci",8,41,0,22};
    struct ogrenci_bilgileri ogrenci3={3,"irfan","bilmiom","Bilgisiyar Programciligi","Karacabey Meslek Yuksekokulu","Devamli ogrenci","1","1","OSS","Aktif ogrenci",7,41,0,333};
    struct ogrenci_bilgileri ogrenci4={4,"gaye","bilmiom","Sut ve UrUnleri Teknolojisi Programi","Karacabey Meslek Yuksekokulu","Devamli ogrenci","2","1","OSS","Aktif ogrenci",6,41,0,4};
    struct ogrenci_bilgileri ogrenci5={5,"ibrahim","bilmiom","isletme Yonetimi Program","Karacabey Meslek Yuksekokulu","Devamli ogrenci","1","1","OSS","Aktif ogrenci",5,41,0,5};


    bolum_adi_to_kodu(&ogrenci1);
    bolum_adi_to_kodu(&ogrenci2);
    bolum_adi_to_kodu(&ogrenci3);
    bolum_adi_to_kodu(&ogrenci4);
    bolum_adi_to_kodu(&ogrenci5);

    time_t t =time(NULL);//mevcut zamanı alır NULL
    struct tm tm =*localtime(&t);
    ogrenci1.gün = tm.tm_mday;
    ogrenci1.yıl_son2rakam = tm.tm_year % 100;
    ogrenci2.gün = tm.tm_mday;
    ogrenci2.yıl_son2rakam = tm.tm_year % 100;
    ogrenci3.gün = tm.tm_mday;
    ogrenci3.yıl_son2rakam = tm.tm_year % 100;
    ogrenci4.gün =tm.tm_mday;
    ogrenci4.yıl_son2rakam = tm.tm_year %100;
    ogrenci5.gün =tm.tm_mday;
    ogrenci5.yıl_son2rakam = tm.tm_year %100;

    printf("---------------------------------------------------\n");
    printf(" kimlik= %d\n isim= %s\n soy_isim= %s\n bolum= %s\n birim= %s\n durum= %s\n sinif= %s\n donem= %s\n gelme_sekli= %s\n ogrencilik_durumu= %s\n Okul_no= %d%d%d%03d\n",ogrenci1.kimlik,ogrenci1.isim,ogrenci1.soy_isim,ogrenci1.bolum,ogrenci1.birim,ogrenci1.durum,ogrenci1.sınıf,ogrenci1.donem,ogrenci1.gelme_sekli,ogrenci1.ogrencilik_durumu,ogrenci1.gün,ogrenci1.yıl_son2rakam,ogrenci1.bolum_kodu,ogrenci1.giris_sirasi);
    printf("---------------------------------------------------\n");


    printf(" kimlik= %d\n isim= %s\n soy_isim= %s\n bolum= %s\n birim= %s\n durum= %s\n sinif= %s\n donem= %s\n gelme_sekli= %s\n ogrencilik_durumu= %s\n Okul_no= %d%d%d%03d\n",ogrenci2.kimlik,ogrenci2.isim,ogrenci2.soy_isim,ogrenci2.bolum,ogrenci2.birim,ogrenci2.durum,ogrenci2.sınıf,ogrenci2.donem,ogrenci2.gelme_sekli,ogrenci2.ogrencilik_durumu,ogrenci2.gün,ogrenci2.yıl_son2rakam,ogrenci1.bolum_kodu,ogrenci2.giris_sirasi);
    printf("---------------------------------------------------\n");
    printf(" kimlik= %d\n isim= %s\n soy_isim= %s\n bolum= %s\n birim= %s\n durum= %s\n sinif= %s\n donem= %s\n gelme_sekli= %s\n ogrencilik_durumu= %s\n Okul_no= %d%d%d%03d\n",ogrenci3.kimlik,ogrenci3.isim,ogrenci3.soy_isim,ogrenci3.bolum,ogrenci3.birim,ogrenci3.durum,ogrenci3.sınıf,ogrenci3.donem,ogrenci3.gelme_sekli,ogrenci3.ogrencilik_durumu,ogrenci3.gün,ogrenci3.yıl_son2rakam,ogrenci3.bolum_kodu,ogrenci3.giris_sirasi);
    printf("---------------------------------------------------\n");
    printf(" kimlik= %d\n isim= %s\n soy_isim= %s\n bolum= %s\n birim= %s\n durum= %s\n sinif= %s\n donem= %s\n gelme_sekli= %s\n ogrencilik_durumu= %s\n Okul_no= %d%d%d%03d\n",ogrenci4.kimlik,ogrenci4.isim,ogrenci4.soy_isim,ogrenci4.bolum,ogrenci4.birim,ogrenci4.durum,ogrenci4.sınıf,ogrenci4.donem,ogrenci4.gelme_sekli,ogrenci4.ogrencilik_durumu,ogrenci4.gün,ogrenci4.yıl_son2rakam,ogrenci4.bolum_kodu,ogrenci4.giris_sirasi);
    printf("---------------------------------------------------\n");
    printf(" kimlik= %d\n isim= %s\n soy_isim= %s\n bolum= %s\n birim= %s\n durum= %s\n sinif= %s\n donem= %s\n gelme_sekli= %s\n ogrencilik_durumu= %s\n Okul_no= %d%d%d%03d\n",ogrenci5.kimlik,ogrenci5.isim,ogrenci5.soy_isim,ogrenci5.bolum,ogrenci5.birim,ogrenci5.durum,ogrenci5.sınıf,ogrenci5.donem,ogrenci5.gelme_sekli,ogrenci5.ogrencilik_durumu,ogrenci5.gün,ogrenci5.yıl_son2rakam,ogrenci5.bolum_kodu,ogrenci5.giris_sirasi);
    printf("---------------------------------------------------\n");

    /*
    ?girdiğin gün/ilk 2 rakam //!TAMAM
    ?girdiğin yıl/3. ve 4. sayı//!TAMAM
    ?bölümünün kodu/5.ve 6. sayı//!TAMAM
    TODO giriş sayısı/son 3 sayı    //!TAMAM
    *ilk yazdırılan kişinin 1. olmasını sağlayabilirsin
    *okula giriş(kayıt) olan öğrencilere numarasını veren bir sistem düşün
    */

    return 0;

    }
    else if(strcmp(cevap,hayir)==0)
    {
        printf("islem iptal edildi");
    }else{
        printf("gecersiz giris,lutfen YES yada NO yaziniz");
        
    }

}