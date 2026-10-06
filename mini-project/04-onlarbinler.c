# include <stdio.h>
# include <stdlib.h> 

 // gcc -g 04-onlarbinler.c -o 04-onlarbinler
/*
    Girilen sayının onlar ve birler basamağını bulan program
*/

 int main()
 {
    int sayi, kalan, bölüm,onlar,binler;
    
    printf("4 basamaklı bir sayı giriniz:");
    scanf("%d",&sayi);

    binler= sayi/1000;
    kalan= sayi%1000;
    kalan= kalan % 100;
    onlar=kalan/10;

    printf("Sayınızın onlar basamağı: %d\n\n",onlar);
    printf("Sayınızın binler basamağı: %d\n",binler);


    return 0;
 }