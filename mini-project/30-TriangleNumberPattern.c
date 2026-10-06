# include <stdio.h>
# include <stdlib.h>

// gcc -g 30-TriangleNumberPattern.c -o 30-TriangleNumberPattern

/*
    Üçgen Sayı Piramit Deseni Oluşturma programı
*/

int main() 
{
    int i,j,number;

    printf("Enter a number value:");
    scanf("%d",&number);

    for(i=1;i<=number;i++){

        for(j=1;j<=i;j++){

            printf("%d",i);

        }

        printf("\n");
    }

    return 0;

}