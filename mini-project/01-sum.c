# include <stdio.h>
# include <stdlib.h> 

 // gcc -g 01-sum.c -o 01-sum
int main()
{
    /*
    kullanıcıdan 4 basamaklı sayı alıp basamaklarını toplayan bir program yazacağız.
    1-Değişkenleri belirle ve ata
    2-Sayı girdisi al 
    3-Basamaklarını ayır
    4-ayrılan değerleri topla
    5-sonucu döndür
    */


    int number,bolum,kalan,sum;
    sum=0;
    printf("Bir sayı giriniz:");
    scanf("%d",&number);

    bolum= (number/1000);
    sum += bolum ;
    kalan= number%1000;

    bolum= kalan / 100;
    sum += bolum;
    kalan = kalan%100 ;

    bolum= kalan / 10;
    sum+=bolum;
    kalan= kalan%10 ;

    sum+=kalan;


    printf("Basamaklar toplamı %d",sum );
    return 0;



}