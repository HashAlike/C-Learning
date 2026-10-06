# include <stdio.h>
# include <stdlib.h> 

 // gcc -g 11-kenarUcgen.c -o 11-kenarUcgen

/*
    kenar uzunlukları alınan bir üçgenin açılarına göre türünü bulan bir program
*/

int main()
{
    int a,b,c;
    char longestside;

    printf("Kenarların uzunluklarını giriniz:");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c){
        longestside= a;
    }else if(b>a && b>c){
        longestside= b;
    }else{
        longestside=c;
    }

    if (longestside==a){
        if (a*a>b*b+c*c){
            printf("Geniş açılı üçgen.");
        }else if(a*a<b*b+c*c){
            printf("Geniş açılı üçgen.");
        }else if(a*a==b*b+c*c){
            printf("Dik açılı üçgen.");
        }else{
            printf("Girilen kenarlar ile bir üçgen oluşmaz.");
        }
    }else if(longestside==b){
        if (b*b>a*a+c*c){
            printf("Geniş açılı üçgen.");
        }else if(b*b<a*a+c*c){
            printf("Geniş açılı üçgen.");
        }else if(b*b==a*a+c*c){
            printf("Dik açılı üçgen.");
        }else{
            printf("Girilen kenarlar ile bir üçgen oluşmaz.");
        }
    }else{
        if (c*c>b*b+a*a){
            printf("Geniş açılı üçgen.");
        }else if(c*c<b*b+a*a){
            printf("Geniş açılı üçgen.");
        }else if(c*c==b*b+a*a){
            printf("Dik açılı üçgen.");
        }else{
            printf("Girilen kenarlar ile bir üçgen oluşmaz.");
        }
    }

    return 0;

}