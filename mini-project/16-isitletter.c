# include <stdio.h>
# include <stdlib.h>

// gcc -g 16-isitletter.c -o 16-isitletter

/*
    girdi olarak alınan bir karakterin harf olup olmadığını ve
    eğer harf ise büyük harf mi küçük harf mi olduğunu bulan program.
*/

int main()
{
    char myChar;

    printf("Enter a character:");
    scanf("%c",&myChar);

    if ((myChar>='A')&& (myChar<='Z')){
        printf("%c is upparcase letter\n",myChar);
    }else if((myChar>='a')&&(myChar<='z')){
        printf("%c is lowercase letter\n",myChar);
    }else{
        printf("%c is not even a letter.\n",myChar);
    }

    return 0;
}