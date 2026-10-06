# include <stdio.h>
# include <stdlib.h>

// gcc -g 19-kindOfLetter.c -o 19-kindOfLetter

/*
    Girilen karakterin sesli harf mi sessiz harf mi olduğunu gösteren program
*/

int main() 
{
    char letter;

    printf("Enter a letter:");
    scanf("%c",&letter);

    switch(letter){
        case 'a': 
        
        case 'e':

        case 'o': 

        case 'u': 

        case 'i': printf("%c is a vowel\n",letter);
                break;
        default: printf("%c is consonant\n",letter);
                printf("or not a letter.\n\n");
                break;
    }

    return 0;
}