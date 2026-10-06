# include <stdio.h>
# include <stdlib.h> 

 // gcc -g 12-ozelSayı.c -o 12-ozelSayı

/*
    Girilen 4 basamaklı sayının özel sayı olup olmadığını belirleyen program.
    abcd= (ab+cd)**2
*/


int main()
{
    int number,newNumber,part1,part2;

    printf("4 basamaklı bir sayı giriniz:");
    scanf("%d",&number);

    part1= number/100; //ab
    part2= number%100; //cd
    newNumber= (part1+part2)*(part1+part2);

    if (number== newNumber){
        printf("%d özel sayıdır.", number);
    }else{
        printf("%d özel sayı değildir",number);
    }

    return 0;
}