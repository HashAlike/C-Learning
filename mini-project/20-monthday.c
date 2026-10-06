# include <stdio.h>
# include <stdlib.h>

// gcc -g 20-monthday.c -o 20-monthday

/*
    Girilen ayın kaç gün olduğunu bulan program
*/

int main() 
{
    int monthNumber;
    
    printf("Which Month:");
    scanf("%d",&monthNumber);

    switch(monthNumber){
        
        case 4:
        case 6:
        case 9:
        case 11: printf("There are 30 days in the %dth month\n",monthNumber);
                break;

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("There are 31 days in the %dth month\n",monthNumber);
                break;

        case 2: printf("There are 28 or 29 days in the %dth month\n",monthNumber);
                break;
        
        default: printf("There is no %th month\n",monthNumber);
                break;
    }

    return 0;
}