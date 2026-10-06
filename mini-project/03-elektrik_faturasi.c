# include <stdio.h>
# include <stdlib.h> 

 // gcc -g 03-elektrik_faturasi.c -o 03-elektrik_faturasi

/*
    Bir elektrik dağıtım şirketi verdikleri hizmet karşılığında 
    müşterilerinden aylık olarak harcanan toplam kilowatt saat 
    miktarı ve belirli bir abonelik ücreti talep etmektedir.
    Birim kilowatt saat ücreti ve abonelik ücreti aylık enflasyon oranında artmaktadır.
    Buna göre müşterinin bir aya ait ödeyeceği elektrik faturasının 
    miktarını hesaplayan bir program yazınız.
*/
 int main()
 {
    // fatura= harcanan elektrik*birim fiyat + abone ücreti
    float odenecekFatura,eskiBirimFiyat,yeniBirimFiyat;
    float enflasyon,eskiAbonelik,yeniAbonelik;
    int yeniOkuma, eskiOkuma,toplamHarcananElektrik;



    printf("Enflasyon oranını giriniz:");
    scanf("%f", &enflasyon);

    printf("Eski abonelik ücretini giriniz:");
    scanf("%f",&eskiAbonelik);

    printf("Eski okumayı giriniz:");
    scanf("%d",&eskiOkuma);

    printf("Yeni okumayı giriniz:");
    scanf("%d",&yeniOkuma);

    printf("Eski birim fiyatı giriniz:");
    scanf("%f",&eskiBirimFiyat);



    toplamHarcananElektrik= yeniOkuma-eskiOkuma;
    yeniBirimFiyat= eskiBirimFiyat*(1+enflasyon/100);
    yeniAbonelik= eskiAbonelik*(1+enflasyon/100);

    odenecekFatura= toplamHarcananElektrik*yeniBirimFiyat+yeniAbonelik;
    printf("\nödeyeceğiniz fatura tutarı:%f\n\n",odenecekFatura);

    return 0;
 }