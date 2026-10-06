# include <stdio.h>
# include <stdlib.h> 

 // gcc -g 06-NumberComparison.c -o 06-NumberComparison

/*
    Girilen sayıları kıyaslayan program
*/
int main()
{
    int number1, number2;
    number1=0;
    number2=0;

    printf("2 sayı giriniz: ");
    scanf("%d %d",&number1,&number2);

    if (number1>number2){
        printf("Number1 greater than number2 variable\n");
    }else if(number1<number2){
        printf("Number1 is less than number2 variable\n");
    }else{
        printf("Number1 equal to number2 variable\n");
    }

    return 0;
}