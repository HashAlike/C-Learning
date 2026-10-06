# include <stdio.h>
# include <stdlib.h>

// gcc -g 25-factorial.c -o 25-factorial

/*
    Faktöriyel hesaplama
*/

int main() 
{
    int i,factorial,number;
    factorial=1;

    printf("Enter a number:");
    scanf("%d",&number);

    for(i=1;i<=number;i++){
        factorial*=i;
    }

    printf("%d!=%d\n",number,factorial);

    return 0;
}