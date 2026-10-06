
# include <stdio.h>
# include <stdlib.h>

// gcc -g 31-SquaredPattern.c -o 31-SquaredPattern

/*
    Kare Deseni Oluşturma programı
*/

int main() 
{
    
    int i,j,number;

    printf("Enter a number value:");
    scanf("%d",&number);

    for(i=1;i<=number;i++){

        for(j=1;j<=number;j++){

            if(i==1 || i==number|| j==1||j==number){

                printf("* ");

            }else{

                printf("  ");

            }

        }

        printf("\n");
    }

    return 0;

}