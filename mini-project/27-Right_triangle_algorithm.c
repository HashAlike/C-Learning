# include <stdio.h>
# include <stdlib.h>

// gcc -g 27-Right_triangle_algorithm.c -o 27-Right_triangle_algorithm

/*
    Dik üçgen şekil algoritması
*/

int main() 
{
    int i,j, sharp=0,sort=0;

    printf("Enter the number of sharps:");
    scanf("%d",&sharp);

    printf("Enter sort type:");
    scanf("%d",&sort);

    if (sort==1){
        for(i=1;i<=sharp;i++){
            for(j=1;j<=i;j++){
                printf("*");
            }   
            printf("\n");
        }

    }else if(sort==2){
        for(i=1;i<=sharp;i++){
            for(j=sharp;j>=i;j--){
                printf("*");
            }
            printf("\n");
        }

    }else{
        printf("Wrong Choice!");
    }


    return 0;

}