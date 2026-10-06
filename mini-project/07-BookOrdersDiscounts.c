
# include <stdio.h>
# include <stdlib.h> 

 // gcc -g 07-BookOrdersDiscounts.c -o 07-BookOrdersDiscounts

/*
    Kitap siparişi ve indirimi ile ilgili bir program
*/


int main()
{
    float indirim, fiyat, tutar;
    int  adet;
    indirim=0;
    fiyat=0;
    adet=0;

    printf("Kitap fiyatını giriniz:");
    scanf("%f",&fiyat);

    printf("Kitaptan kaç adet alındığını giriniz:");
    scanf("%d",&adet);

    printf("İndirim tutarını giriniz:"),
    scanf("%f",&indirim);

    tutar= (fiyat * adet)*(1- (indirim/100));
    printf("Tutar : %f", tutar);

    return 0;
}