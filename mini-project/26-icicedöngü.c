# include <stdio.h>
# include <stdlib.h>

// gcc -g 26-icicedöngü.c -o 26-icicedöngü

int main()
{
    int i, j;

    for(i=1;i<=4;i++){

        for(j=1;j<=3;j++){
            printf("Hello C\n");
        }//iç for bitti
        printf("_________\n");
    }//dış for bitti

    
    return 0;
}