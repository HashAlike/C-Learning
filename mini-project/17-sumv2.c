# include <stdio.h>
# include <stdlib.h>

// gcc -g 17-sumv2.c -o 17-sumv2

/*
    2 sayı ve 1 operatör alarak işlem yapan bir program.
*/

int main()
{
    float number1,number2;
    char operator;

    printf("2 sayı ve 1 operatör(+,-,/,*) giriniz:\n");
    scanf("%f %f %c", &number1,&number2,&operator);

    switch(operator) {
        case '+': printf("%f", number1+number2);
                break;
        case '-':printf("%f",number1-number2);
                break;
        case '/': printf("%f",number1/number2);
                break;
        case '*': printf("%f",number1*number2);
                break;
        default: printf("You entered the wrong operator\n\n");
                break;
    }

    return 0;
}