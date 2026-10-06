# include <stdio.h>
# include <stdlib.h>

// gcc -g 21-carpımTablosu.c -o 21-carpımTablosu

/*
    Basit bir çarpım tablosu
*/

int main() 
{
    int i,number;
    number=0;
    i=1;

    printf("Enter a number from 1 to 10:");
    scanf("%d",&number);

    if(number<1 || number>10){
        printf("Please don't do that.\n");
        return 0;
    }

    while(i<=10){
        printf("%d x %d = %d\n",number,i,number*i);
        i++;
    }

    return 0;
}