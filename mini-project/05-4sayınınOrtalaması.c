# include <stdio.h>
# include <stdlib.h> 

 // gcc -g 05-4sayınınOrtalaması.c -o 05-4sayınınOrtalaması

/*
    Girilen 4 sayının ortalamasını bulan program
*/


int main()
{
    int sayı1,sayı2,sayı3,sayı4,ortalama;

    printf("4 adet sayı giriniz:");
    scanf("%d %d %d %d",&sayı1,&sayı2,&sayı3,&sayı4);

    ortalama= (sayı1+sayı2+sayı3+sayı4)/4;

    printf("Girdiğiniz sayıların ortalaması: %d",ortalama);
    
    return 0;
}