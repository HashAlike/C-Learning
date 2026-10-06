# include <stdio.h>
# include <stdlib.h>

// gcc -g 18-tekciftv2.c -o 18-tekciftv2

/*
    Girilen sayının tek mi çift mi olduğunu bulan program
*/

int main() 
{
    int number;

    printf("Bir sayı giriniz:");
    scanf("%d",&number);

    switch(number%2){
        case 0: printf("%d bir çift sayıdır.\n", number);
                break;
        case 1: printf("%d bir tek sayıdır.\n", number);
                break;
        default: printf("Bir tam sayı giriniz...\n");
                break;
    }

    return 0;
}