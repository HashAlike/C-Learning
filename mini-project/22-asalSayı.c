# include <stdio.h>
# include <stdlib.h>

// gcc -g 22-asalSayı.c -o 22-asalSayı

/*
    Girilen sayının asal sayı olup olmadığını kontrol eden program.
*/

int main() 
{
    int i,number;
    number=0;
    i=2;

    printf("Enter a positive number:");
    scanf("%d",&number);

    if(number<0){
        printf("Please enter a positive number!\n");
        return 0;
    }

    while(i<=number/2){
        if(number%i==0){
            printf("%d divided by %d. So it can't be a prime number\n",number,i);
            return 0;
        }
        i++;
    }
    printf("%d is a prime number.\n", number);

    return 0;
}