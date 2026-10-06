
# include <stdio.h>
# include <stdlib.h>

// gcc -g 24-The_Legend_of_Wheat.c -o 24-The_Legend_of_Wheat

/*
    Buğday efsanesi programı.
*/

int main() 
{
    int i;
    double wheat=1;
    double sumWheat=0;

    for(i=1;i<=64;i++){
        printf("%d. kare için bilgine verilecek buğday sayısı: %20.0f\n",i,wheat);
        sumWheat+=wheat;
        wheat*= 2;

    }

    printf("Bilgine verilecek toplam buğday sayısı: %20.0f\n",sumWheat);

    return 0;
}