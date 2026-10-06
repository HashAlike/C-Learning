# include <stdio.h>
# include <stdlib.h>

// gcc -g 14-GSM.c -o 14-GSM

/*
    0-4dk-> 0.30TL
    4dk+ -> dakika başı: 0.07 TL
    Konuşma süresini dk cinsinden alan ve ücretini hesaplayan bir program.
*/

int main()
{
    int dk,fazla;
    float ücret;

    printf("Kaç dakika konuştunuz:");
    scanf("%d", &dk);

    if(dk<=4){
        ücret= 0.30;
        printf("Ücret= %f\n",ücret);
    }
    else{
        fazla= dk%4;
        ücret= 0.30+(fazla*0.07);
        printf("Ücret= %f\n",ücret);

    }

    return 0;
}