# include <stdio.h>
# include <stdlib.h>

// gcc -g 15-acıUcgen.c -o 15-acıUcgen

/*
    üçgenin açılarını girdi olarak alan ve buna göre türlerini bulan bir program.
    tüm açılar 60 ise eşkenar, iki açı eşitse ikizkenar, diğer durumlarda çeşitkenar üçgendir.
*/

int main()
{
    int alpha,beta,omega,species;

    printf("Üçgenin açılarını giriniz:");
    scanf("%d %d %d",&alpha,&beta,&omega);

    if(alpha==beta && alpha==omega){
        printf("Eşkenar üçgen");
    }else if(beta==alpha && beta==omega){
        printf("Eşkenar üçgen");
    }else if(omega==alpha && omega==beta){
        printf("Eşkenar üçgen");
    }else if(alpha==beta && alpha!=omega){
        printf("İkizkenar Üçgen");
    }else if(beta==omega && beta!=alpha){
        printf("İkizkenar üçgen");
    }else if(omega==alpha && omega!=beta){
        printf("İkizkenar üçgen");
    }else if(alpha+beta+omega!=180){
        printf("Bir üçgen elde edemeyiz");
    }else{
        printf("Çeşitkenar üçgen");
    }

    return 0;
}