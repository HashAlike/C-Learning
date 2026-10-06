# include <stdio.h>
# include <stdlib.h> 

 // gcc -g 08-ToplantıYeter.c -o 08-ToplantıYeter

/*
    Toplantı yeter sayısı yeterli mi değil mi(TBMM) belirleyen program.
*/

// Toplantı yeter sayısı 200

int main() 
{
    int partyA,partyB,partyC,partyD,partyE,currentCouncilor;;
    int const sumCouncilor=600;

    printf("Meslisteki partilerin milletvekili sayılarını giriniz:");
    scanf("%d %d %d %d %d", &partyA, &partyB,&partyC,&partyD,&partyE);

    currentCouncilor= partyA+partyB+partyC+partyD+partyE;

    if(currentCouncilor<200){
        printf("Gerekli Toplantı Yeter sayısına ulaşılamadığından ");
        printf("toplantı gerçekleştirilememektedir.\n");
        printf("Toplantı yeter sayısı iki yüzdür.\n");
    }else{
        printf("Meclis Toplantıya Hazır!\n");
    }


    return 0;
}