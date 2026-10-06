# include <stdio.h>
# include <stdlib.h>

// gcc -g 29-Fibonacci.c -o 29-Fibonacci


int main() 
{
    int first,second,third,i,number;
    first=1;
    second=1;
    third=1;
    printf("Enter a number:");
    scanf("%d",&number);
    printf("%d %d ", first,second);

    for (i=1;i<= number-2;i++){
        first=second;
        second=third;
        third=first+second;

        printf("%d ", third);

    }

    return 0;
}