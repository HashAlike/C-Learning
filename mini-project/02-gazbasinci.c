# include <stdio.h>
# include <stdlib.h> 

 // gcc -g 02-gazbasinci.c -o 02-gazbasinci

 int main()
{
    // P= nRT/V
/*
    1-Değişkenleri belirle ve ata
    2-Sabitleri ver
    3-Hacmi, Mol sayısını ve Sıcaklığı kullanıcıdan al
    4-K ve T dönüşümü yap
    4-P yi hesapla
    5-P yi yazdır
*/

    float P,n,R,T,V,K;
    P=0;
    K=0;
    R= 8.314;

    printf("Gaz miktarını giriniz:");
    scanf("%f",&n);


    printf("Kap hacmini giriniz:");
    scanf("%f",&V);


    printf("Sıcaklığı giriniz(Celcius):");
    scanf("%f",&T);


    K= T+273.15;

    P= (n*R*K)/V;

    
    printf("Kaptaki gaz basıncı: %f\n",P);
    return 0;


}