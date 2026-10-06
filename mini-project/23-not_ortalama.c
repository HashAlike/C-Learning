# include <stdio.h>
# include <stdlib.h>

// gcc -g 23-not_ortalama.c -o 23-not_ortalama

/*
    Girilen notların ortalamasını alan bir program
*/

int main() 
{
    int i;
    float examGrade,sumGrade;
    i=1;
    examGrade=0.0;
    sumGrade= 0.0;

    do{
        printf("%dth exam grade:",i);
        scanf("%f",&examGrade);
        if(examGrade==0){
            break;
        }
        if(examGrade<0){
            printf("Please enter a positive number!");
            continue;
        }else{
            sumGrade+=examGrade;
        }
        i++;
    }while(examGrade!=0);

    printf("\nYou entered %d exam grades\n",i-1);
    printf("Avarage: %f\n",sumGrade/(i-1));
    return 0;
}