# include <stdio.h>
# include <stdlib.h> 
# include <math.h>

 // gcc -g 13-karekokMu.c -o 13-karekokMu -lm

/*
    Girilen sayının karekökü bir tam sayı mı? Bunu belirleyen program.
*/

int main()
{
    int sayı;
    float karekok;

    printf("Bir sayı giriniz:");
    scanf("%d", &sayı);

    karekok= sqrt(sayı);
    
    if (karekok == (int)karekok){
        printf("%d'nın karekökü tam sayıdır.\n",sayı);
    }else if(sayı<0){
        printf("Bunu bir daha yapma -_-\n");
    }else{
        printf("%d'nin karekökü tam sayı değildir.\n",sayı);
    }

    return 0;
}