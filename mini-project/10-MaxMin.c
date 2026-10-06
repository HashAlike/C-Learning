# include <stdio.h>
# include <stdlib.h> 

 // gcc -g 10-MaxMin.c -o 10-MaxMin

/*
    Kullanıcıdan alınan 3 sayıdaan en büyük ve en küçüğü söyleyen program
*/

int main()
{
    int number1,number2,number3,max,min;

    printf("3 adet sayı giriniz: ");
    scanf("%d %d %d", &number1,&number2,&number3);

    //Max
    if(number1>number2){
        if (number1> number3){
            max= number1 ;
        }
    }else if(number2>number1 && number2> number3){
        max= number2;

    }else{
        max=number3;
    }

    //Min
    if(number1<number2){
        if (number1<number3){
            min= number1 ;
        }
    }else if(number2<number1 && number2< number3){
        min= number2;

    }else{
        min=number3;
    }

    printf("En büyük sayı: %d\n", max);
    printf("En küçük sayı: %d\n",min);

    return 0;
}