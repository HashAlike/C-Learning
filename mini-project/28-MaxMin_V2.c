# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

// gcc -g 28-MaxMin_V2.c -o 28-MaxMin_V2

/*
    Verilen sayılardan en büyüğünü ve en küçüğünü veren program
*/

int main() 
{
    int number,i=1,smallestNumber=INT_MAX,largestNumber=INT_MIN;

    do{
        printf("%dth number:",i);
        scanf("%d",&number);

        if (number==0) break;
        if (number<smallestNumber) smallestNumber=number;
        if (number>largestNumber) largestNumber= number;

        i++;

    }while(number!=0);

    printf("\nThe largest number is: %d\nThe smallest number is: %d", largestNumber,smallestNumber);

    return 0;
}