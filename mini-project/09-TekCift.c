# include <stdio.h>
# include <stdlib.h> 

 // gcc -g 09-TekCift.c -o 09-TekCift

/*
    Girilen sayının tek mi çift mi olduğunu gösteren program.
*/

int main()
{
    int number;
    
    printf("Bir numara giriniz: ");
    scanf("%d",&number);

    if(number%2==0){
        printf("Sayı çifttir.");
    }else{
        printf("Sayı tektir.");
    }
    
    return 0;
}